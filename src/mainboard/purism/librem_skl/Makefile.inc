##
##
##
## SPDX-License-Identifier: GPL-2.0-only

ramstage-y += ramstage.c
ramstage-y += hda_verb.c

ramstage-$(CONFIG_MAINBOARD_USE_LIBGFXINIT) += gma-mainboard.ads
