/* Copyright (c) 2017, The Linux Foundation. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 and
 * only version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 */

#ifndef _CAM_SENSOR_ADAPTIVE_MIPI_HI1336_H_
#define _CAM_SENSOR_ADAPTIVE_MIPI_HI1336_H_

#include "cam_sensor_dev.h"

int num_uw_dual_mipi_setting = 1;

/*************************************/
/* ========== Mode A =============== */
/*************************************/

/*
SET A : Full
SET B : BIN2
*/

enum {
	CAM_Hi_1336C_SET_A_all_720_MHZ = 0,
	CAM_Hi_1336C_SET_A_all_739p2_MHZ = 1,
	CAM_Hi_1336C_SET_A_all_734p4_MHZ = 2,
};

struct cam_sensor_i2c_reg_array MIPI_FULL_720_MHZ_REG_ARRAY[] = {
    {0x0440, 0x0031, 0x00, 0x00},
    {0x0746, 0x00DC, 0x00, 0x00},
    {0x0748, 0x0002, 0x00, 0x00},
    {0x1012, 0x019C, 0x00, 0x00},
    {0x1014, 0x0076, 0x00, 0x00},
    {0x1016, 0x0076, 0x00, 0x00},
    {0x101A, 0x0076, 0x00, 0x00},
    {0x1020, 0xC10B, 0x00, 0x00},
    {0x1022, 0x0B34, 0x00, 0x00},
    {0x1024, 0x050D, 0x00, 0x00},
    {0x1026, 0x1311, 0x00, 0x00},
    {0x1028, 0x1B0E, 0x00, 0x00},
    {0x102A, 0x130A, 0x00, 0x00},
    {0x102C, 0x2200, 0x00, 0x00},
};

struct cam_sensor_i2c_reg_array MIPI_FULL_739p2_MHZ_REG_ARRAY[] = {
    {0x0440, 0x002D, 0x00, 0x00},
    {0x0746, 0x00CA, 0x00, 0x00},
    {0x0748, 0x0002, 0x00, 0x00},
    {0x1012, 0x0112, 0x00, 0x00},
    {0x1014, 0x0034, 0x00, 0x00},
    {0x1016, 0x0034, 0x00, 0x00},
    {0x101A, 0x0034, 0x00, 0x00},
    {0x1020, 0xC10B, 0x00, 0x00},
    {0x1022, 0x0B30, 0x00, 0x00},
    {0x1024, 0x050C, 0x00, 0x00},
    {0x1026, 0x1110, 0x00, 0x00},
    {0x1028, 0x1A0D, 0x00, 0x00},
    {0x102A, 0x120A, 0x00, 0x00},
    {0x102C, 0x1F00, 0x00, 0x00},
};

struct cam_sensor_i2c_reg_array MIPI_FULL_734p4_MHZ_REG_ARRAY[] = {
    {0x0440, 0x0032, 0x00, 0x00},
    {0x0746, 0x0096, 0x00, 0x00},
    {0x0748, 0x0001, 0x00, 0x00},
    {0x1012, 0x01C2, 0x00, 0x00},
    {0x1014, 0x0088, 0x00, 0x00},
    {0x1016, 0x0088, 0x00, 0x00},
    {0x101A, 0x0088, 0x00, 0x00},
    {0x1020, 0xC10C, 0x00, 0x00},
    {0x1022, 0x0B36, 0x00, 0x00},
    {0x1024, 0x050D, 0x00, 0x00},
    {0x1026, 0x1311, 0x00, 0x00},
    {0x1028, 0x1B0E, 0x00, 0x00},
    {0x102A, 0x140A, 0x00, 0x00},
    {0x102C, 0x2200, 0x00, 0x00},
};

static const struct cam_sensor_i2c_reg_setting sensor_hi1336_setfile_A_mipi_FULL_720_mhz[] = {
    { MIPI_FULL_720_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_720_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_sensor_i2c_reg_setting sensor_hi1336_setfile_A_mipi_FULL_739p2_mhz[] = {
    { MIPI_FULL_739p2_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_739p2_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_sensor_i2c_reg_setting sensor_hi1336_setfile_A_mipi_FULL_734p4_mhz[] = {
    { MIPI_FULL_734p4_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_FULL_734p4_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_mipi_setting sensor_hi1336_setfile_A_mipi_setting_FULL[] = {
	{ "720 Mhz",
	  sensor_hi1336_setfile_A_mipi_FULL_720_mhz, ARRAY_SIZE(sensor_hi1336_setfile_A_mipi_FULL_720_mhz) },
	{ "739p2 Mhz",
	  sensor_hi1336_setfile_A_mipi_FULL_739p2_mhz, ARRAY_SIZE(sensor_hi1336_setfile_A_mipi_FULL_739p2_mhz) },
	{ "739p4 Mhz",
	  sensor_hi1336_setfile_A_mipi_FULL_734p4_mhz, ARRAY_SIZE(sensor_hi1336_setfile_A_mipi_FULL_734p4_mhz) },
};

static const struct cam_mipi_channel sensor_hi1336_setfile_A_channel[] = {
    { CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_002_GSM_EGSM900), 0, 0, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_003_GSM_DCS1800), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_004_GSM_PCS1900), 0, 0, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10562, 10582, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10583, 10611, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10612, 10657, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10658, 10762, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10763, 10794, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_011_WCDMA_WB01), 10795, 10838, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9662, 9682, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9683, 9693, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9694, 9757, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9758, 9862, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9863, 9876, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_012_WCDMA_WB02), 9877, 9938, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1162, 1267, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1268, 1335, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1336, 1447, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1448, 1451, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_013_WCDMA_WB03), 1452, 1513, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1537, 1557, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1558, 1586, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1587, 1632, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_014_WCDMA_WB04), 1633, 1738, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_015_WCDMA_WB05), 4357, 4458, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_016_WCDMA_WB06), 4387, 4413, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2237, 2302, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2303, 2407, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2408, 2482, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_017_WCDMA_WB07), 2483, 2563, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2937, 2942, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 2943, 3017, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_018_WCDMA_WB08), 3018, 3088, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_2_WCDMA, CAM_BAND_029_WCDMA_WB19), 712, 763, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 0, 64, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 65, 122, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 123, 214, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 215, 424, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 425, 489, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 490, 574, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_091_LTE_LB01), 575, 599, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 600, 664, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 665, 686, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 687, 814, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 815, 1024, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1025, 1053, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1054, 1174, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_092_LTE_LB02), 1175, 1199, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1200, 1224, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1225, 1434, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1435, 1569, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1570, 1794, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1795, 1802, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1803, 1934, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_093_LTE_LB03), 1935, 1949, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 1950, 2014, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2015, 2072, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2073, 2164, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2165, 2374, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_094_LTE_LB04), 2375, 2399, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2400, 2424, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2425, 2634, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_095_LTE_LB05), 2635, 2649, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2750, 2754, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2755, 2904, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 2905, 3114, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3115, 3264, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_097_LTE_LB07), 3265, 3449, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3450, 3484, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3485, 3634, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_098_LTE_LB08), 3635, 3799, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_102_LTE_LB12), 5010, 5179, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_103_LTE_LB13), 5180, 5204, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_103_LTE_LB13), 5205, 5279, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5280, 5334, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_104_LTE_LB14), 5335, 5379, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_107_LTE_LB17), 5730, 5849, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5850, 5964, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_108_LTE_LB18), 5965, 5999, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_109_LTE_LB19), 6000, 6149, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6150, 6234, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6235, 6444, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_110_LTE_LB20), 6445, 6449, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6450, 6535, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_111_LTE_LB21), 6536, 6599, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8040, 8104, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8105, 8126, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8127, 8254, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8255, 8464, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8465, 8493, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8494, 8614, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_115_LTE_LB25), 8615, 8689, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8690, 8814, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 8815, 9024, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_116_LTE_LB26), 9025, 9039, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9210, 9264, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9265, 9474, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9475, 9624, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_118_LTE_LB28), 9625, 9659, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9660, 9758, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9759, 9764, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_119_LTE_LB29), 9765, 9769, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_120_LTE_LB30), 9770, 9869, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 9920, 10084, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10085, 10135, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10136, 10234, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_122_LTE_LB32), 10235, 10359, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36200, 36221, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36222, 36335, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_124_LTE_LB34), 36336, 36349, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37750, 37894, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 37895, 38044, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_128_LTE_LB38), 38045, 38249, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38250, 38454, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38455, 38469, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38470, 38599, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_129_LTE_LB39), 38600, 38649, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38650, 38708, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38709, 38764, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38765, 38974, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 38975, 39075, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39076, 39124, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39125, 39334, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39335, 39442, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39443, 39484, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_130_LTE_LB40), 39485, 39649, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39650, 39814, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39815, 39951, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39952, 39964, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 39965, 40174, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40175, 40318, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40319, 40324, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40325, 40534, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40535, 40684, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40685, 40894, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 40895, 41044, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41045, 41254, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41255, 41404, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_131_LTE_LB41), 41405, 41589, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41590, 41715, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41716, 41814, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41815, 41865, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 41866, 42075, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42076, 42181, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42182, 42225, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42226, 42435, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42436, 42549, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42550, 42585, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42586, 42795, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42796, 42916, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42917, 42945, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 42946, 43155, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43156, 43283, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43284, 43305, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43306, 43516, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_132_LTE_LB42), 43517, 43589, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55240, 55305, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55306, 55433, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55434, 55455, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55456, 55666, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55667, 55800, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55801, 55815, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 55816, 56030, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56031, 56167, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56168, 56175, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56176, 56395, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56396, 56535, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_138_LTE_LB48), 56536, 56739, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66436, 66500, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66501, 66558, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66559, 66650, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66651, 66860, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66861, 66925, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 66926, 67010, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67011, 67220, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67221, 67292, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_156_LTE_LB66), 67293, 67335, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68586, 68610, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68611, 68820, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_3_LTE, CAM_BAND_161_LTE_LB71), 68821, 68935, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_051_TDSCDMA_TD1), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_052_TDSCDMA_TD2), 0, 0, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_053_TDSCDMA_TD3), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_054_TDSCDMA_TD4), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_055_TDSCDMA_TD5), 0, 0, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_4_TDSCDMA, CAM_BAND_056_TDSCDMA_TD6), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_061_CDMA_BC0), 0, 0, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_062_CDMA_BC1), 0, 0, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_5_CDMA, CAM_BAND_071_CDMA_BC10), 0, 0, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_260_NR5G_N005), 173800, 175080, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_260_NR5G_N005), 175081, 178000, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_260_NR5G_N005), 178001, 178780, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_263_NR5G_N008), 185000, 188540, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_263_NR5G_N008), 188541, 189580, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_263_NR5G_N008), 189581, 191980, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_267_NR5G_N012), 145800, 149200, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_283_NR5G_N028), 151600, 151820, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_283_NR5G_N028), 151821, 153200, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_283_NR5G_N028), 153201, 156300, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_283_NR5G_N028), 156301, 159160, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_283_NR5G_N028), 159161, 160580, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_326_NR5G_N071), 123400, 127200, CAM_Hi_1336C_SET_A_all_720_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_326_NR5G_N071), 127201, 129780, CAM_Hi_1336C_SET_A_all_734p4_MHZ },
    { CAM_RAT_BAND(CAM_RAT_7_NR5G, CAM_BAND_326_NR5G_N071), 129781, 130380, CAM_Hi_1336C_SET_A_all_739p2_MHZ },
};

static const struct cam_mipi_sensor_mode sensor_uw_dual_mipi_A_mode[] = {
	{
		sensor_hi1336_setfile_A_channel,	ARRAY_SIZE(sensor_hi1336_setfile_A_channel),
		sensor_hi1336_setfile_A_mipi_setting_FULL,	ARRAY_SIZE(sensor_hi1336_setfile_A_mipi_setting_FULL)
	},
};


/*************************************/
/* ========== DUMMY ================ */
/*************************************/
enum {
	CAM_UW_DUAL_SET_DUMMY_MHZ = 0,
};

struct cam_sensor_i2c_reg_array MIPI_UW_DUAL_DUMMY_MHZ_REG_ARRAY[] = {
};

static const struct cam_sensor_i2c_reg_setting sensor_uw_dual_setfile_dummy_mhz[] = {
    { MIPI_UW_DUAL_DUMMY_MHZ_REG_ARRAY, ARRAY_SIZE(MIPI_UW_DUAL_DUMMY_MHZ_REG_ARRAY),
	  CAMERA_SENSOR_I2C_TYPE_WORD, CAMERA_SENSOR_I2C_TYPE_WORD, 0 }
};

static const struct cam_mipi_setting sensor_uw_dual_setfile_dummy_mipi_setting[] = {
	{ "DUMMY Mhz",
	  sensor_uw_dual_setfile_dummy_mhz, ARRAY_SIZE(sensor_uw_dual_setfile_dummy_mhz) },
};

static const struct cam_mipi_channel sensor_uw_dual_setfile_dummy_channel[] = {
	{ CAM_RAT_BAND(CAM_RAT_1_GSM, CAM_BAND_001_GSM_GSM850), 0, 0, CAM_UW_DUAL_SET_DUMMY_MHZ },
};

static const struct cam_mipi_sensor_mode sensor_uw_dual_mipi_B_mode[] = {
	{
		sensor_uw_dual_setfile_dummy_channel,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_channel),
		sensor_uw_dual_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_mipi_setting)
	},
};
static const struct cam_mipi_sensor_mode sensor_uw_dual_mipi_C_mode[] = {
	{
		sensor_uw_dual_setfile_dummy_channel,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_channel),
		sensor_uw_dual_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_mipi_setting)
	},
};

static const struct cam_mipi_sensor_mode sensor_uw_dual_mipi_D_mode[] = {
	{
		sensor_uw_dual_setfile_dummy_channel,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_channel),
		sensor_uw_dual_setfile_dummy_mipi_setting,	ARRAY_SIZE(sensor_uw_dual_setfile_dummy_mipi_setting)
	},
};


#endif /* _CAM_SENSOR_ADAPTIVE_MIPI_HI1336_H_ */