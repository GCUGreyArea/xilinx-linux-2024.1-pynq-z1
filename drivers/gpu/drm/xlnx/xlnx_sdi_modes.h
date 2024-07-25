/* SPDX-License-Identifier: GPL-2.0 */
/*
 * Xilinx FPGA SDI modes timing values for various
 * resolutions
 *
 * Copyright (c) 2017 Xilinx Pvt., Ltd
 *
 * Contacts: Saurabh Sengar <saurabhs@xilinx.com>
 */

#ifndef _XLNX_SDI_MODES_H_
#define _XLNX_SDI_MODES_H_

/**
 * struct xlnx_sdi_display_config - SDI supported modes structure
 * @mode: drm display mode
 * @st352_byt2: st352 byte 2 value
 *		index 0 : value for integral fps
 *		index 1 : value for fractional fps
 * @st352_byt1: st352 byte 1 value
 *		index 0 : value for HD mode
 *		index 1 : value for SD mode
 *		index 2 : value for 3GA
 *		index 3 : value for 3GB
 *		index 4 : value for 6G
 *		index 5 : value for 12G
 */
struct xlnx_sdi_display_config {
	struct drm_display_mode mode;
	u8 st352_byt2[2];
	u8 st352_byt1[6];
};

/*
 * xlnx_sdi_modes - SDI DRM modes
 */
static const struct xlnx_sdi_display_config xlnx_sdi_modes[] = {
	/* 0 - dummy, VICs start at 1 */
	{ },
	/* SD: 720x486i@59.94Hz */
	{{ DRM_MODE("720x486i", DRM_MODE_TYPE_DRIVER, 13500, 720, 739,
		   801, 858, 0, 486, 494, 500, 525, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLCLK),
		   }, {0x7, 0x6},
		   {0x81, 0x81, 0x81, 0x81, 0x81, 0x81} },
	/* SD: 720x576i@50Hz */
	{{ DRM_MODE("720x576i", DRM_MODE_TYPE_DRIVER, 13500, 720, 732,
		   795, 864, 0, 576, 580, 586, 625, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLCLK),
		   }, {0x9, 0x9},
		   {0x81, 0x81, 0x81, 0x81, 0x81, 0x81} },
	/* HD: 1280x720@25Hz */
	{{ DRM_MODE("1280x720", DRM_MODE_TYPE_DRIVER, 74250, 1280, 2250,
		   2990, 3960, 0, 720, 725, 730, 750, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x5, 0x5},
		   {0x84, 0x84, 0x88, 0x84, 0x84, 0x84} },
	/* HD: 1280x720@24Hz */
	{{ DRM_MODE("1280x720", DRM_MODE_TYPE_DRIVER, 74250, 1280, 2250,
		   3155, 4125, 0, 720, 725, 730, 750, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x84, 0x84, 0x88, 0x84, 0x84, 0x84} },
	/* HD: 1280x720@30Hz */
	 {{ DRM_MODE("1280x720", DRM_MODE_TYPE_DRIVER, 74250, 1280, 2250,
		   2330, 3300, 0, 720, 725, 730, 750, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x84, 0x84, 0x88, 0x84, 0x84, 0x84} },
	/* HD: 1280x720@50Hz */
	{{ DRM_MODE("1280x720", DRM_MODE_TYPE_DRIVER, 74250, 1280, 1720,
		   1760, 1980, 0, 720, 725, 730, 750, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x9, 0x9},
		   {0x84, 0x84, 0x88, 0x84, 0x84, 0x84} },
	/* HD: 1280x720@60Hz */
	{{ DRM_MODE("1280x720", DRM_MODE_TYPE_DRIVER, 74250, 1280, 1390,
		   1430, 1650, 0, 720, 725, 730, 750, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x84, 0x84, 0x88, 0x84, 0x84, 0x84} },
	/* HD: 1920x1080@24Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2558,
		   2602, 2750, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080@25Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080@30Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080i@48Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2291,
		   2379, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080i@50Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080i@60Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080i@59.94Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 74175, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080sf@24Hz */
	{{ DRM_MODE("1920x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2291,
		   2379, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080sf@25Hz */
	{{ DRM_MODE("1920x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 1920x1080sf@30Hz */
	{{ DRM_MODE("1920x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080i@48Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2377,
		   2421, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080i@50Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2322,
		   2366, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080i@60Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2114,
		   2134, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080sf@24Hz */
	{{ DRM_MODE("2048x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2377,
		   2421, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080sf@25Hz */
	{{ DRM_MODE("2048x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2322,
		   2366, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080sf@30Hz */
	{{ DRM_MODE("2048x1080sf", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2114,
		   2134, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE | DRM_MODE_FLAG_DBLSCAN),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080@30Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2114,
		   2134, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080@25Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x5, 0x5},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* HD: 2048x1080@24Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 74250, 2048, 2558,
		   2602, 2750, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 1920x1080@48Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2558,
		   2602, 2750, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x8, 0x4},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 1920x1080@50Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x9, 0x9},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 1920x1080@60Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 1920x1080@59.94Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 148350, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 2048x1080@60Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2136,
		   2180, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 2048x1080@50Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x9, 0x9},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G: 2048x1080@48Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2558,
		   2602, 2750, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x8, 0x4},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 1920x1080i@96Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2291,
		   2379, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x8, 0x4},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 1920x1080i@100Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x9, 0x9},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 1920x1080i@120Hz */
	{{ DRM_MODE("1920x1080i", DRM_MODE_TYPE_DRIVER, 148500, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0xB, 0xA},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 2048x1080i@96Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2377,
		   2421, 2750, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x8, 0x4},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 2048x1080i@100Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2322,
		   2366, 2640, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0x9, 0x9},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 3G-B: 2048x1080i@120Hz */
	{{ DRM_MODE("2048x1080i", DRM_MODE_TYPE_DRIVER, 148500, 2048, 2114,
		   2134, 2200, 0, 1080, 1084, 1094, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC |
		   DRM_MODE_FLAG_INTERLACE),
		   }, {0xB, 0xA},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xC1} },
	/* 6G: 3840x2160@29.97Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 296704, 3840, 4016,
		   4104, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 3840x2160@30Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 297000, 3840, 4016,
		   4104, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 3840x2160@25Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 297000, 3840, 4896,
		   4984, 5280, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x5, 0x5},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 3840x2160@23.98Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 296704, 3840, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 3840x2160@24Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 297000, 3840, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 4096x2160@23.98 */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 296704, 4096, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 4096x2160@24Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 297000, 4096, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x3, 0x2},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 4096x2160@25Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 297000, 4096, 5064,
		   5152, 5280, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x5, 0x5},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 4096x2160@29.97Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 296704, 4096, 4184,
		   4272, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 6G: 4096x2160@30Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 297000, 4096, 4184,
		   4272, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x7, 0x6},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 3840x2160@48Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 594000, 3840, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x8, 0x4},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 3840x2160@50Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 594000, 3840, 4896,
		   4984, 5280, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x9, 0x9},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 3840x2160@59.94Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 593406, 3840, 4016,
		   4104, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 3840x2160@60Hz */
	{{ DRM_MODE("3840x2160", DRM_MODE_TYPE_DRIVER, 594000, 3840, 4016,
		   4104, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 4096x2160@47.95Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 593406, 4096, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x8, 0x4},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 4096x2160@48Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 594000, 4096, 5116,
		   5204, 5500, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x8, 0x4},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 4096x2160@50Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 594000, 4096, 5064,
		   5152, 5280, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0x9, 0x9},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 4096x2160@59.94Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 593408, 4096, 4184,
		   4272, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* 12G: 4096x2160@60Hz */
	{{ DRM_MODE("4096x2160", DRM_MODE_TYPE_DRIVER, 594000, 4096, 4184,
		   4272, 4400, 0, 2160, 2168, 2178, 2250, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xB, 0xA},
		   {0x98, 0x98, 0x97, 0x98, 0xC0, 0xCE} },
	/* HFR: 1920x1080@100Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 297000, 1920, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xD, 0xD},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
	/* HFR: 1920x1080@119.88Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 296703, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xF, 0xE},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
	/* HFR: 1920x1080@120Hz */
	{{ DRM_MODE("1920x1080", DRM_MODE_TYPE_DRIVER, 297000, 1920, 2008,
		   2052, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xF, 0xE},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
	/* HFR: 2048x1080@100Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 297000, 2048, 2448,
		   2492, 2640, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xD, 0xD},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
	/* HFR: 2048x1080@119.88Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 296703, 2048, 2136,
		   2180, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xF, 0xE},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
	/* HFR: 2048x1080@120Hz */
	{{ DRM_MODE("2048x1080", DRM_MODE_TYPE_DRIVER, 297000, 2048, 2136,
		   2180, 2200, 0, 1080, 1084, 1089, 1125, 0,
		   DRM_MODE_FLAG_PHSYNC | DRM_MODE_FLAG_PVSYNC),
		   }, {0xF, 0xE},
		   {0x85, 0x85, 0x89, 0x8A, 0xC1, 0xCF} },
};

#endif /* _XLNX_SDI_MODES_H_ */
