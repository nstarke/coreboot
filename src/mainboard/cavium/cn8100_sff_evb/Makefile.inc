##
##
##
## SPDX-License-Identifier: GPL-2.0-only

bootblock-y += bootblock.c
bootblock-y += memlayout.ld

romstage-y += memlayout.ld
romstage-y += romstage.c
romstage-y += bdk_devicetree.c

ramstage-y += mainboard.c
ramstage-y += memlayout.ld
ramstage-y += bdk_devicetree.c

verstage-y += memlayout.ld

MB_DIR = src/mainboard/$(MAINBOARDDIR)

LINUX_DTB = sff8104-linux.dtb
$(obj)/$(LINUX_DTB):
	# FIXME: why isn't this producing the correct size DTB?
	dtc -p 4096 -I dts -O dtb -o $(obj)/$(LINUX_DTB) -i $(MB_DIR) $(MB_DIR)/$(patsubst %.dtb,%.dts,$(LINUX_DTB))

cbfs-files-y += $(LINUX_DTB)
$(LINUX_DTB)-file := $(obj)/$(LINUX_DTB)
$(LINUX_DTB)-type := raw
