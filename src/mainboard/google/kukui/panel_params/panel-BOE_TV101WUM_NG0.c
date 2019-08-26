/*
 * This file is part of the coreboot project.
 *
 * Copyright 2019 Huaqin Telecom Inc.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#include "../panel.h"

struct panel_serializable_data BOE_TV101WUM_NG0 = {
	.edid = {
		.ascii_string = "TV101WUM-NG0",
		.manufacturer_name = "BOE",
		.panel_bits_per_color = 8,
		.panel_bits_per_pixel = 24,
		.mode = {
			.pixel_clock = 159420,
			.lvds_dual_channel = 0,
			.refresh = 60,
			.ha = 1200, .hbl = 164, .hso = 80, .hspw = 24,
			.va = 1920, .vbl = 28, .vso = 10, .vspw = 4,
			.phsync = '-', .pvsync = '-',
			.x_mm = 135, .y_mm = 216,
		},
	},
	.init = {
		INIT_DCS_CMD(0x10),
		INIT_DELAY_CMD(0x22),
		INIT_DCS_CMD(0xB0, 0x05),
		INIT_DCS_CMD(0xB1, 0xE5),
		INIT_DCS_CMD(0xB3, 0x52),
		INIT_DCS_CMD(0xB0, 0x00),
		INIT_DCS_CMD(0xB3, 0x88),
		INIT_DCS_CMD(0xB0, 0x04),
		INIT_DCS_CMD(0xB8, 0x00),
		INIT_DCS_CMD(0xB0, 0x00),
		INIT_DCS_CMD(0xB2, 0x50),
		INIT_DCS_CMD(0xB6, 0x03),
		INIT_DCS_CMD(0xBA, 0x8B),
		INIT_DCS_CMD(0xBF, 0x15),
		INIT_DCS_CMD(0xC0, 0x0F),
		INIT_DCS_CMD(0xC2, 0x0C),
		INIT_DCS_CMD(0xC3, 0x02),
		INIT_DCS_CMD(0xC4, 0x0C),
		INIT_DCS_CMD(0xC5, 0x02),
		INIT_DCS_CMD(0xB0, 0x01),
		INIT_DCS_CMD(0xE0, 0x26),
		INIT_DCS_CMD(0xE1, 0x26),
		INIT_DCS_CMD(0xDC, 0x00),
		INIT_DCS_CMD(0xDD, 0x00),
		INIT_DCS_CMD(0xCC, 0x26),
		INIT_DCS_CMD(0xCD, 0x26),
		INIT_DCS_CMD(0xC8, 0x00),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xD2, 0x04),
		INIT_DCS_CMD(0xD3, 0x04),
		INIT_DCS_CMD(0xE6, 0x03),
		INIT_DCS_CMD(0xE7, 0x03),
		INIT_DCS_CMD(0xC4, 0x08),
		INIT_DCS_CMD(0xC5, 0x08),
		INIT_DCS_CMD(0xD8, 0x07),
		INIT_DCS_CMD(0xD9, 0x07),
		INIT_DCS_CMD(0xC2, 0x06),
		INIT_DCS_CMD(0xC3, 0x06),
		INIT_DCS_CMD(0xD6, 0x05),
		INIT_DCS_CMD(0xD7, 0x05),
		INIT_DCS_CMD(0xC0, 0x0C),
		INIT_DCS_CMD(0xC1, 0x0C),
		INIT_DCS_CMD(0xD4, 0x0B),
		INIT_DCS_CMD(0xD5, 0x0B),
		INIT_DCS_CMD(0xCA, 0x0A),
		INIT_DCS_CMD(0xCB, 0x0A),
		INIT_DCS_CMD(0xDE, 0x09),
		INIT_DCS_CMD(0xDF, 0x09),
		INIT_DCS_CMD(0xC6, 0x26),
		INIT_DCS_CMD(0xC7, 0x26),
		INIT_DCS_CMD(0xCE, 0x00),
		INIT_DCS_CMD(0xCF, 0x00),
		INIT_DCS_CMD(0xDA, 0x26),
		INIT_DCS_CMD(0xDB, 0x26),
		INIT_DCS_CMD(0xE2, 0x00),
		INIT_DCS_CMD(0xE3, 0x00),
		INIT_DCS_CMD(0xB0, 0x02),
		INIT_DCS_CMD(0xC0, 0x00),
		INIT_DCS_CMD(0xC1, 0x07),
		INIT_DCS_CMD(0xC2, 0x0D),
		INIT_DCS_CMD(0xC3, 0x18),
		INIT_DCS_CMD(0xC4, 0x27),
		INIT_DCS_CMD(0xC5, 0x28),
		INIT_DCS_CMD(0xC6, 0x30),
		INIT_DCS_CMD(0xC7, 0x2E),
		INIT_DCS_CMD(0xC8, 0x2F),
		INIT_DCS_CMD(0xC9, 0x1A),
		INIT_DCS_CMD(0xCA, 0x20),
		INIT_DCS_CMD(0xCB, 0x29),
		INIT_DCS_CMD(0xCC, 0x26),
		INIT_DCS_CMD(0xCD, 0x32),
		INIT_DCS_CMD(0xCE, 0x33),
		INIT_DCS_CMD(0xCF, 0x31),
		INIT_DCS_CMD(0xD0, 0x06),
		INIT_DCS_CMD(0xD2, 0x00),
		INIT_DCS_CMD(0xD3, 0x07),
		INIT_DCS_CMD(0xD4, 0x12),
		INIT_DCS_CMD(0xD5, 0x26),
		INIT_DCS_CMD(0xD6, 0x3D),
		INIT_DCS_CMD(0xD7, 0x3F),
		INIT_DCS_CMD(0xD8, 0x3F),
		INIT_DCS_CMD(0xD9, 0x3F),
		INIT_DCS_CMD(0xDA, 0x3F),
		INIT_DCS_CMD(0xDB, 0x3F),
		INIT_DCS_CMD(0xDC, 0x3F),
		INIT_DCS_CMD(0xDD, 0x3F),
		INIT_DCS_CMD(0xDE, 0x3F),
		INIT_DCS_CMD(0xDF, 0x3A),
		INIT_DCS_CMD(0xE0, 0x37),
		INIT_DCS_CMD(0xE1, 0x35),
		INIT_DCS_CMD(0xE2, 0x07),
		INIT_DCS_CMD(0xB0, 0x03),
		INIT_DCS_CMD(0xC8, 0x0B),
		INIT_DCS_CMD(0xC9, 0x07),
		INIT_DCS_CMD(0xC3, 0x00),
		INIT_DCS_CMD(0xE7, 0x00),
		INIT_DCS_CMD(0xC5, 0x2A),
		INIT_DCS_CMD(0xDE, 0x2A),
		INIT_DCS_CMD(0xCA, 0x43),
		INIT_DCS_CMD(0xC9, 0x07),
		INIT_DCS_CMD(0xE4, 0xC0),
		INIT_DCS_CMD(0xE5, 0x0D),
		INIT_DCS_CMD(0xCB, 0x00),
		INIT_DCS_CMD(0xB0, 0x06),
		INIT_DCS_CMD(0xB8, 0xA5),
		INIT_DCS_CMD(0xC0, 0xA5),
		INIT_DCS_CMD(0xC7, 0x0F),
		INIT_DCS_CMD(0xD5, 0x32),
		INIT_DCS_CMD(0xB8, 0x00),
		INIT_DCS_CMD(0xC0, 0x00),
		INIT_DCS_CMD(0xBC, 0x00),
		INIT_DCS_CMD(0xB0, 0x07),
		INIT_DCS_CMD(0xB1, 0x00),
		INIT_DCS_CMD(0xB2, 0x09),
		INIT_DCS_CMD(0xB3, 0x19),
		INIT_DCS_CMD(0xB4, 0x2F),
		INIT_DCS_CMD(0xB5, 0x44),
		INIT_DCS_CMD(0xB6, 0x52),
		INIT_DCS_CMD(0xB7, 0x6A),
		INIT_DCS_CMD(0xB8, 0x8A),
		INIT_DCS_CMD(0xB9, 0xCA),
		INIT_DCS_CMD(0xBA, 0x0C),
		INIT_DCS_CMD(0xBB, 0x87),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x06),
		INIT_DCS_CMD(0xBD, 0x0A),
		INIT_DCS_CMD(0xBE, 0x9B),
		INIT_DCS_CMD(0xBF, 0x0C),
		INIT_DCS_CMD(0xC0, 0x3D),
		INIT_DCS_CMD(0xC1, 0x71),
		INIT_DCS_CMD(0xC2, 0x90),
		INIT_DCS_CMD(0xC3, 0xA0),
		INIT_DCS_CMD(0xC4, 0xA8),
		INIT_DCS_CMD(0xC5, 0xB1),
		INIT_DCS_CMD(0xC6, 0xBB),
		INIT_DCS_CMD(0xC7, 0xC0),
		INIT_DCS_CMD(0xC8, 0xC4),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DCS_CMD(0xB0, 0x08),
		INIT_DCS_CMD(0xB1, 0x04),
		INIT_DCS_CMD(0xB2, 0x08),
		INIT_DCS_CMD(0xB3, 0x19),
		INIT_DCS_CMD(0xB4, 0x31),
		INIT_DCS_CMD(0xB5, 0x46),
		INIT_DCS_CMD(0xB6, 0x55),
		INIT_DCS_CMD(0xB7, 0x6E),
		INIT_DCS_CMD(0xB8, 0x92),
		INIT_DCS_CMD(0xB9, 0xD4),
		INIT_DCS_CMD(0xBA, 0x1B),
		INIT_DCS_CMD(0xBB, 0x9B),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x28),
		INIT_DCS_CMD(0xBD, 0x2D),
		INIT_DCS_CMD(0xBE, 0xC3),
		INIT_DCS_CMD(0xBF, 0x2F),
		INIT_DCS_CMD(0xC0, 0x62),
		INIT_DCS_CMD(0xC1, 0x99),
		INIT_DCS_CMD(0xC2, 0xAB),
		INIT_DCS_CMD(0xC3, 0xBF),
		INIT_DCS_CMD(0xC4, 0xCF),
		INIT_DCS_CMD(0xC5, 0xDF),
		INIT_DCS_CMD(0xC6, 0xF0),
		INIT_DCS_CMD(0xC7, 0xF9),
		INIT_DCS_CMD(0xC8, 0xFC),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DCS_CMD(0xB0, 0x09),
		INIT_DCS_CMD(0xB1, 0x04),
		INIT_DCS_CMD(0xB2, 0x05),
		INIT_DCS_CMD(0xB3, 0x17),
		INIT_DCS_CMD(0xB4, 0x2E),
		INIT_DCS_CMD(0xB5, 0x42),
		INIT_DCS_CMD(0xB6, 0x51),
		INIT_DCS_CMD(0xB7, 0x69),
		INIT_DCS_CMD(0xB8, 0x88),
		INIT_DCS_CMD(0xB9, 0xC9),
		INIT_DCS_CMD(0xBA, 0x0C),
		INIT_DCS_CMD(0xBB, 0x86),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x03),
		INIT_DCS_CMD(0xBD, 0x08),
		INIT_DCS_CMD(0xBE, 0x95),
		INIT_DCS_CMD(0xBF, 0x05),
		INIT_DCS_CMD(0xC0, 0x35),
		INIT_DCS_CMD(0xC1, 0x62),
		INIT_DCS_CMD(0xC2, 0x81),
		INIT_DCS_CMD(0xC3, 0x96),
		INIT_DCS_CMD(0xC4, 0x9E),
		INIT_DCS_CMD(0xC5, 0xA5),
		INIT_DCS_CMD(0xC6, 0xAD),
		INIT_DCS_CMD(0xC7, 0xB1),
		INIT_DCS_CMD(0xC8, 0xB4),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DCS_CMD(0xB0, 0x0A),
		INIT_DCS_CMD(0xB1, 0x00),
		INIT_DCS_CMD(0xB2, 0x09),
		INIT_DCS_CMD(0xB3, 0x19),
		INIT_DCS_CMD(0xB4, 0x2F),
		INIT_DCS_CMD(0xB5, 0x44),
		INIT_DCS_CMD(0xB6, 0x52),
		INIT_DCS_CMD(0xB7, 0x6A),
		INIT_DCS_CMD(0xB8, 0x8A),
		INIT_DCS_CMD(0xB9, 0xCA),
		INIT_DCS_CMD(0xBA, 0x0C),
		INIT_DCS_CMD(0xBB, 0x87),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x06),
		INIT_DCS_CMD(0xBD, 0x0A),
		INIT_DCS_CMD(0xBE, 0x9B),
		INIT_DCS_CMD(0xBF, 0x0C),
		INIT_DCS_CMD(0xC0, 0x3D),
		INIT_DCS_CMD(0xC1, 0x71),
		INIT_DCS_CMD(0xC2, 0x90),
		INIT_DCS_CMD(0xC3, 0xA0),
		INIT_DCS_CMD(0xC4, 0xA8),
		INIT_DCS_CMD(0xC5, 0xB1),
		INIT_DCS_CMD(0xC6, 0xBB),
		INIT_DCS_CMD(0xC7, 0xC0),
		INIT_DCS_CMD(0xC8, 0xC4),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DCS_CMD(0xB0, 0x0B),
		INIT_DCS_CMD(0xB1, 0x04),
		INIT_DCS_CMD(0xB2, 0x08),
		INIT_DCS_CMD(0xB3, 0x19),
		INIT_DCS_CMD(0xB4, 0x31),
		INIT_DCS_CMD(0xB5, 0x46),
		INIT_DCS_CMD(0xB6, 0x55),
		INIT_DCS_CMD(0xB7, 0x6E),
		INIT_DCS_CMD(0xB8, 0x92),
		INIT_DCS_CMD(0xB9, 0xD4),
		INIT_DCS_CMD(0xBA, 0x1B),
		INIT_DCS_CMD(0xBB, 0x9B),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x28),
		INIT_DCS_CMD(0xBD, 0x2D),
		INIT_DCS_CMD(0xBE, 0xC3),
		INIT_DCS_CMD(0xBF, 0x2F),
		INIT_DCS_CMD(0xC0, 0x62),
		INIT_DCS_CMD(0xC1, 0x99),
		INIT_DCS_CMD(0xC2, 0xAB),
		INIT_DCS_CMD(0xC3, 0xBF),
		INIT_DCS_CMD(0xC4, 0xCF),
		INIT_DCS_CMD(0xC5, 0xDF),
		INIT_DCS_CMD(0xC6, 0xF0),
		INIT_DCS_CMD(0xC7, 0xF9),
		INIT_DCS_CMD(0xC8, 0xFC),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DCS_CMD(0xB0, 0x0C),
		INIT_DCS_CMD(0xB1, 0x04),
		INIT_DCS_CMD(0xB2, 0x05),
		INIT_DCS_CMD(0xB3, 0x17),
		INIT_DCS_CMD(0xB4, 0x2E),
		INIT_DCS_CMD(0xB5, 0x42),
		INIT_DCS_CMD(0xB6, 0x51),
		INIT_DCS_CMD(0xB7, 0x69),
		INIT_DCS_CMD(0xB8, 0x88),
		INIT_DCS_CMD(0xB9, 0xC9),
		INIT_DCS_CMD(0xBA, 0x0C),
		INIT_DCS_CMD(0xBB, 0x86),
		INIT_DELAY_CMD(0x05),
		INIT_DCS_CMD(0xBC, 0x03),
		INIT_DCS_CMD(0xBD, 0x08),
		INIT_DCS_CMD(0xBE, 0x95),
		INIT_DCS_CMD(0xBF, 0x05),
		INIT_DCS_CMD(0xC0, 0x35),
		INIT_DCS_CMD(0xC1, 0x62),
		INIT_DCS_CMD(0xC2, 0x81),
		INIT_DCS_CMD(0xC3, 0x96),
		INIT_DCS_CMD(0xC4, 0x9E),
		INIT_DCS_CMD(0xC5, 0xA5),
		INIT_DCS_CMD(0xC6, 0xAD),
		INIT_DCS_CMD(0xC7, 0xB1),
		INIT_DCS_CMD(0xC8, 0xB4),
		INIT_DCS_CMD(0xC9, 0x00),
		INIT_DCS_CMD(0xCA, 0x00),
		INIT_DCS_CMD(0xCB, 0x16),
		INIT_DCS_CMD(0xCC, 0xAF),
		INIT_DCS_CMD(0xCD, 0xFF),
		INIT_DCS_CMD(0xCE, 0xFF),
		INIT_DELAY_CMD(0x64),
		INIT_DCS_CMD(0xB0, 0x00),
		INIT_DCS_CMD(0xB3, 0x08),
		INIT_DCS_CMD(0xB0, 0x04),
		INIT_DCS_CMD(0xB8, 0x68),
		INIT_DELAY_CMD(0x0A),
		INIT_DCS_CMD(0x11),
		INIT_DELAY_CMD(0x78),
		INIT_DCS_CMD(0x29),
		INIT_DELAY_CMD(0x14),
		INIT_END_CMD,
	},
};