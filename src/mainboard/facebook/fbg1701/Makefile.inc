##
##
##
## SPDX-License-Identifier: GPL-2.0-only

ifneq ($(filter y,$(CONFIG_VENDORCODE_ELTAN_VBOOT) $(CONFIG_VENDORCODE_ELTAN_MBOOT)),)
bootblock-y += board_verified_boot.c
postcar-y += board_verified_boot.c
ramstage-y += board_verified_boot.c
romstage-y += board_verified_boot.c
endif

bootblock-y += com_init.c

ramstage-y += cpld.c
ramstage-y += gpio.c
ramstage-y += hda_verb.c
ramstage-y += irqroute.c
ramstage-y += ramstage.c
ramstage-y += w25q64.c

romstage-y += cpld.c

# Order of names in SPD_SOURCES is important!
SPD_SOURCES  = SAMSUNG_K4B8G1646D-MYKO
SPD_SOURCES += MICRON_MT41K512M16HA-125A
SPD_SOURCES += KINGSTON_B5116ECMDXGGB
