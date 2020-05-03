/* SPDX-License-Identifier: GPL-2.0-only */
/* This file is part of the coreboot project. */

#include <soc/iomap.h>

#define MAILBOX_DATA 0x7080
#define MAILBOX_INTF 0x7084
#define PMIO_LENGTH 0x80
#define PMIO_LIMIT 0x480

scope (\_SB) {
	Device (IPC1)
	{
		Name (_HID, "INT34D2")
		Name (_CID, "INT34D2")
		Name (_DDN, "Intel(R) IPCI Controller")
		Name (_UID, 1)

		Name (RBUF, ResourceTemplate ()
		{
			Memory32Fixed (ReadWrite, 0x0, 0x2000, IBAR)
			Memory32Fixed (ReadWrite, 0x0, 0x4, MDAT)
			Memory32Fixed (ReadWrite, 0x0, 0x4, MINF)
			IO (Decode16, ACPI_BASE_ADDRESS, PMIO_LIMIT,
			      0x04, PMIO_LENGTH)
			Memory32Fixed (ReadWrite, 0x0, 0x2000, SBAR)
			Interrupt (ResourceConsumer, Level, ActiveLow, Exclusive, , , )
			{
			      PMC_INT
			}
		})

		Method (_CRS, 0x0, NotSerialized)
		{
			CreateDwordField (^RBUF, ^IBAR._BAS, IBAS)
			CreateDwordField (^RBUF, ^IBAR._LEN, ILEN)
			Store (PMC_BAR0, IBAS)
			Store (PMC_BAR0_SIZE, ILEN)

			CreateDwordField (^RBUF, ^MDAT._BAS, MDBA)
			CreateDwordField (^RBUF, ^MDAT._LEN, MDBL)
			CreateDwordField (^RBUF, ^MINF._BAS, MIBA)
			CreateDwordField (^RBUF, ^MINF._LEN, MIBL)
			Store (MCH_BASE_ADDRESS + MAILBOX_DATA, MDBA)
			Store (MCH_BASE_ADDRESS + MAILBOX_INTF, MIBA)
			Store(4, MDBL)                           // Length for MDBL is 4 bytes
			Store(4, MIBL)                           // Length for MIBL is 4 bytes

			CreateDwordField (^RBUF, ^SBAR._BAS, SBAS)
			CreateDwordField (^RBUF, ^SBAR._BAS, SLEN)
			Store (SRAM_BASE_0, SBAS)
			Store (SRAM_SIZE_0, SLEN)

			Return (^RBUF)
		}

		Method (_STA, 0x0, NotSerialized)
		{
			Return (0x00)
		}
	}
}
