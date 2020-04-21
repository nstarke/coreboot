/* This file is part of the coreboot project. */
/* SPDX-License-Identifier: GPL-2.0-or-later */

#include <stdint.h>
#include <acpi/acpi.h>
#include <bootmode.h>
#include <cbmem.h>
#include <console/console.h>
#include <drivers/intel/gma/gma.h>
#include <fsp/util.h>
#include <device/device.h>
#include <device/pci.h>
#include <device/pci_ops.h>
#include <intelblocks/graphics.h>
#include <drivers/intel/gma/opregion.h>
#include <drivers/intel/gma/libgfxinit.h>
#include <types.h>
#include <soc/nvs.h>
#include "chip.h"


uintptr_t gma_get_gnvs_aslb(const void *gnvs)
{
	const global_nvs_t *gnvs_ptr = gnvs;
	return (uintptr_t)(gnvs_ptr ? gnvs_ptr->aslb : 0);
}

void gma_set_gnvs_aslb(void *gnvs, uintptr_t aslb)
{
	global_nvs_t *gnvs_ptr = gnvs;
	if (gnvs_ptr)
		gnvs_ptr->aslb = aslb;
}

uintptr_t fsp_soc_get_igd_bar(void)
{
	return graphics_get_memory_base();
}

void graphics_soc_init(struct device *const dev)
{
	uint32_t reg32 = pci_read_config32(dev, PCI_COMMAND);
	reg32 |= PCI_COMMAND_MASTER;
	pci_write_config32(dev, PCI_COMMAND, reg32);

	if (CONFIG(RUN_FSP_GOP)) {
		/* nothing to do */
	} else if (CONFIG(MAINBOARD_USE_LIBGFXINIT)) {
		if (!acpi_is_wakeup_s3() && display_init_required()) {
			int lightup_ok;
			gma_gfxinit(&lightup_ok);
			gfx_set_init_done(lightup_ok);
		}
	} else {
		/* Initialize PCI device, load/execute BIOS Option ROM */
		pci_dev_init(dev);
	}
	intel_gma_restore_opregion();
}

uintptr_t graphics_soc_write_acpi_opregion(const struct device *device,
		uintptr_t current, struct acpi_rsdp *rsdp)
{
	igd_opregion_t *opregion;
	global_nvs_t *gnvs = cbmem_find(CBMEM_ID_ACPI_GNVS);

	printk(BIOS_DEBUG, "ACPI:    * IGD OpRegion\n");
	opregion = (igd_opregion_t *)current;

	if (intel_gma_init_igd_opregion(opregion) != CB_SUCCESS)
		return current;

	if (gnvs)
		gnvs->aslb = (u32)(uintptr_t)opregion;

	/* FIXME: Add platform specific mailbox initialization */

	current += sizeof(igd_opregion_t);
	return acpi_align_current(current);
}

const struct i915_gpu_controller_info *
intel_igd_get_controller_info(const struct device *device)
{
	struct soc_intel_apollolake_config *chip = device->chip_info;
	return &chip->gfx;
}
