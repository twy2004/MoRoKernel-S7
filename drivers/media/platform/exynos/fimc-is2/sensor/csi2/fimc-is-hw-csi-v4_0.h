/*
 * Samsung Exynos SoC series FIMC-IS2 driver
 *
 * Copyright (c) 2015 Samsung Electronics Co., Ltd
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#ifndef FIMC_IS_HW_CSIS_V4_0_H
#define FIMC_IS_HW_CSIS_V4_0_H

#if defined(CONFIG_CSIS_V4_0) || defined(CONFIG_CSIS_V4_1)
#include "fimc-is-hw-api-common.h"

#define CSIS_REG_DMA_1D_DMA			(1)
#define CSIS_REG_DMA_2D_DMA			(0)
#define CSIS_REG_DMA_PACK12			(1)
#define CSIS_REG_DMA_NORMAL			(0)
#define CSIS_REG_DMA_DUMP			(1)

#if defined(CONFIG_SOC_EXYNOS7870)
#define CSIS_REG_DOUBLE_CLK_EN			(0)
#else
#define CSIS_REG_DOUBLE_CLK_EN			(1)
#endif

#ifdef DBG_CSIISR
#define CSIS_IRQ_MASK0 0x0FFFFFFF
#define CSIS_IRQ_MASK1 0x00003FFF
#define CSIS_ERR_MASK0 0x000FFFFF
#define CSIS_ERR_MASK1 0x00003000
#else
/* Default Interrupt Masking */
#define CSIS_IRQ_MASK0 0x011FFFFF
#define CSIS_IRQ_MASK1 0x00003FF0
#define CSIS_ERR_MASK0 0x000FFFFF
#define CSIS_ERR_MASK1 0x00003000
#endif /* DBG_CSIISR */

/* the total count of csis v4.0's regs */
#define CSIS_REG_CNT 121
enum fimc_is_hw_csi_reg_name {
	CSIS_R_CSIS_VERSION,
	CSIS_R_CSIS_CMN_CTRL,
	CSIS_R_CSIS_CLK_CTRL,
	CSIS_R_CSIS_INT_MSK0,
	CSIS_R_CSIS_INT_SRC0,
	CSIS_R_CSIS_INT_MSK1,
	CSIS_R_CSIS_INT_SRC1,
	CSIS_R_DPHY_STATUS,
	CSIS_R_DPHY_CMN_CTRL,
	CSIS_R_DPHY_BCTRL_L,
	CSIS_R_DPHY_BCTRL_H,
	CSIS_R_DPHY_SCTRL_L,
	CSIS_R_DPHY_SCTRL_H,
	CSIS_R_ISP_CONFIG_CH0,
	CSIS_R_ISP_RESOL_CH0,
	CSIS_R_ISP_SYNC_CH0,
	CSIS_R_ISP_CONFIG_CH1,
	CSIS_R_ISP_RESOL_CH1,
	CSIS_R_ISP_SYNC_CH1,
	CSIS_R_ISP_CONFIG_CH2,
	CSIS_R_ISP_RESOL_CH2,
	CSIS_R_ISP_SYNC_CH2,
	CSIS_R_ISP_CONFIG_CH3,
	CSIS_R_ISP_RESOL_CH3,
	CSIS_R_ISP_SYNC_CH3,
	CSIS_R_SDW_CONFIG_CH0,
	CSIS_R_SDW_RESOL_CH0,
	CSIS_R_SDW_SYNC_CH0,
	CSIS_R_SDW_CONFIG_CH1,
	CSIS_R_SDW_RESOL_CH1,
	CSIS_R_SDW_SYNC_CH1,
	CSIS_R_SDW_CONFIG_CH2,
	CSIS_R_SDW_RESOL_CH2,
	CSIS_R_SDW_SYNC_CH2,
	CSIS_R_SDW_CONFIG_CH3,
	CSIS_R_SDW_RESOL_CH3,
	CSIS_R_SDW_SYNC_CH3,
	CSIS_R_DBG_CTRL,
	CSIS_R_DBG_INTR_MSK,
	CSIS_R_DBG_INTR_SRC,
	CSIS_R_FRM_CNT_CH0,
	CSIS_R_FRM_CNT_CH1,
	CSIS_R_FRM_CNT_CH2,
	CSIS_R_FRM_CNT_CH3,
	CSIS_R_LINE_INTR_CH0,
	CSIS_R_LINE_INTR_CH1,
	CSIS_R_LINE_INTR_CH2,
	CSIS_R_LINE_INTR_CH3,
	CSIS_R_CSIS_INT_MSK0_CLONE,
	CSIS_R_CSIS_INT_SRC0_CLONE,
	CSIS_R_CSIS_INT_MSK1_CLONE,
	CSIS_R_CSIS_INT_SRC1_CLONE,
	CSIS_R_DBG_INTR_MSK_CLONE,
	CSIS_R_DBG_INTR_SRC_CLONE,
	CSIS_R_DMA0_CTRL,
	CSIS_R_DMA0_FMT,
	CSIS_R_DMA0_SKIP,
	CSIS_R_DMA0_ADDR1,
	CSIS_R_DMA0_ADDR2,
	CSIS_R_DMA0_ADDR3,
	CSIS_R_DMA0_ADDR4,
	CSIS_R_DMA0_ADDR5,
	CSIS_R_DMA0_ADDR6,
	CSIS_R_DMA0_ADDR7,
	CSIS_R_DMA0_ADDR8,
	CSIS_R_DMA0_ACT_CTRL,
	CSIS_R_DMA0_ACT_FMT,
	CSIS_R_DMA0_ACT_SKIP,
	CSIS_R_DMA0_BYTE_CNT,
	CSIS_R_DMA1_CTRL,
	CSIS_R_DMA1_FMT,
	CSIS_R_DMA1_SKIP,
	CSIS_R_DMA1_ADDR1,
	CSIS_R_DMA1_ADDR2,
	CSIS_R_DMA1_ADDR3,
	CSIS_R_DMA1_ADDR4,
	CSIS_R_DMA1_ADDR5,
	CSIS_R_DMA1_ADDR6,
	CSIS_R_DMA1_ADDR7,
	CSIS_R_DMA1_ADDR8,
	CSIS_R_DMA1_ACT_CTRL,
	CSIS_R_DMA1_ACT_FMT,
	CSIS_R_DMA1_ACT_SKIP,
	CSIS_R_DMA1_BYTE_CNT,
	CSIS_R_DMA2_CTRL,
	CSIS_R_DMA2_FMT,
	CSIS_R_DMA2_SKIP,
	CSIS_R_DMA2_ADDR1,
	CSIS_R_DMA2_ADDR2,
	CSIS_R_DMA2_ADDR3,
	CSIS_R_DMA2_ADDR4,
	CSIS_R_DMA2_ADDR5,
	CSIS_R_DMA2_ADDR6,
	CSIS_R_DMA2_ADDR7,
	CSIS_R_DMA2_ADDR8,
	CSIS_R_DMA2_ACT_CTRL,
	CSIS_R_DMA2_ACT_FMT,
	CSIS_R_DMA2_ACT_SKIP,
	CSIS_R_DMA2_BYTE_CNT,
	CSIS_R_DMA3_CTRL,
	CSIS_R_DMA3_FMT,
	CSIS_R_DMA3_SKIP,
	CSIS_R_DMA3_ADDR1,
	CSIS_R_DMA3_ADDR2,
	CSIS_R_DMA3_ADDR3,
	CSIS_R_DMA3_ADDR4,
	CSIS_R_DMA3_ADDR5,
	CSIS_R_DMA3_ADDR6,
	CSIS_R_DMA3_ADDR7,
	CSIS_R_DMA3_ADDR8,
	CSIS_R_DMA3_ACT_CTRL,
	CSIS_R_DMA3_ACT_FMT,
	CSIS_R_DMA3_ACT_SKIP,
	CSIS_R_DMA3_BYTE_CNT,
	CSIS_R_DMA_CMN_CTRL,
	CSIS_R_DMA_ERR_CODE,
	CSIS_R_DMA_CLK_CTRL,
	CSIS_R_DMA_AWUSER,
	CSIS_R_DBG_AXIM_INFO,
	CSIS_R_DBG_TRXFIFO_INFO,
	CSIS_R_DBG_DMAFIFO_INFO
};

static struct fimc_is_reg csi_regs[CSIS_REG_CNT] = {
	{0x0000, "CSIS_VERSION"},
	{0x0004, "CSIS_CMN_CTRL"},
	{0x0008, "CSIS_CLK_CTRL"},
	{0x0010, "CSIS_INT_MSK0"},
	{0x0014, "CSIS_INT_SRC0"},
	{0x0018, "CSIS_INT_MSK1"},
	{0x001C, "CSIS_INT_SRC1"},
	{0x0020, "DPHY_STATUS"},
	{0x0024, "DPHY_CMN_CTRL"},
	{0x0030, "DPHY_BCTRL_L"},
	{0x0034, "DPHY_BCTRL_H"},
	{0x0038, "DPHY_SCTRL_L"},
	{0x003C, "DPHY_SCTRL_H"},
	{0x0040, "ISP_CONFIG_CH0"},
	{0x0044, "ISP_RESOL_CH0"},
	{0x0048, "ISP_SYNC_CH0"},
	{0x0050, "ISP_CONFIG_CH1"},
	{0x0054, "ISP_RESOL_CH1"},
	{0x0058, "ISP_SYNC_CH1"},
	{0x0060, "ISP_CONFIG_CH2"},
	{0x0064, "ISP_RESOL_CH2"},
	{0x0068, "ISP_SYNC_CH2"},
	{0x0070, "ISP_CONFIG_CH3"},
	{0x0074, "ISP_RESOL_CH3"},
	{0x0078, "ISP_SYNC_CH3"},
	{0x0080, "SDW_CONFIG_CH0"},
	{0x0084, "SDW_RESOL_CH0"},
	{0x0088, "SDW_SYNC_CH0"},
	{0x0090, "SDW_CONFIG_CH1"},
	{0x0094, "SDW_RESOL_CH1"},
	{0x0098, "SDW_SYNC_CH1"},
	{0x00A0, "SDW_CONFIG_CH2"},
	{0x00A4, "SDW_RESOL_CH2"},
	{0x00A8, "SDW_SYNC_CH2"},
	{0x00B0, "SDW_CONFIG_CH3"},
	{0x00b4, "SDW_RESOL_CH3"},
	{0x00B8, "SDW_SYNC_CH3"},
	{0x00C0, "DBG_CTRL"},
	{0x00C4, "DBG_INTR_MSK"},
	{0x00C8, "DBG_INTR_SRC"},
	{0x0100, "FRM_CNT_CH0"},
	{0x0104, "FRM_CNT_CH1"},
	{0x0108, "FRM_CNT_CH2"},
	{0x010C, "FRM_CNT_CH3"},
	{0x0110, "LINE_INTR_CH0"},
	{0x0114, "LINE_INTR_CH1"},
	{0x0118, "LINE_INTR_CH2"},
	{0x011C, "LINE_INTR_CH3"},
	{0x0910, "CSIS_INT_MSK0_CLONE"},
	{0x0914, "CSIS_INT_SRC0_CLONE"},
	{0x0918, "CSIS_INT_MSK1_CLONE"},
	{0x091C, "CSIS_INT_SRC1_CLONE"},
	{0x09C4, "DBG_INTR_MSK_CLONE"},
	{0x09C8, "DBG_INTR_SRC_CLONE"},
	{0x1000, "DMA0_CTRL"},
	{0x1004, "DMA0_FMT"},
	{0x1008, "DMA0_SKIP"},
	{0x1010, "DMA0_ADDR1"},
	{0x1014, "DMA0_ADDR2"},
	{0x1018, "DMA0_ADDR3"},
	{0x101C, "DMA0_ADDR4"},
	{0x1020, "DMA0_ADDR5"},
	{0x1024, "DMA0_ADDR6"},
	{0x1028, "DMA0_ADDR7"},
	{0x102C, "DMA0_ADDR8"},
	{0x1030, "DMA0_ACT_CTRL"},
	{0x1034, "DMA0_ACT_FMT"},
	{0x1038, "DMA0_ACT_SKIP"},
	{0x1040, "DMA0_BYTE_CNT"},
	{0x1100, "DMA1_CTRL"},
	{0x1104, "DMA1_FMT"},
	{0x1108, "DMA1_SKIP"},
	{0x1110, "DMA1_ADDR1"},
	{0x1114, "DMA1_ADDR2"},
	{0x1118, "DMA1_ADDR3"},
	{0x111C, "DMA1_ADDR4"},
	{0x1120, "DMA1_ADDR5"},
	{0x1124, "DMA1_ADDR6"},
	{0x1128, "DMA1_ADDR7"},
	{0x112C, "DMA1_ADDR8"},
	{0x1130, "DMA1_ACT_CTRL"},
	{0x1134, "DMA1_ACT_FMT"},
	{0x1138, "DMA1_ACT_SKIP"},
	{0x1140, "DMA1_BYTE_CNT"},
	{0x1200, "DMA2_CTRL"},
	{0x1204, "DMA2_FMT"},
	{0x1208, "DMA2_SKIP"},
	{0x1210, "DMA2_ADDR1"},
	{0x1214, "DMA2_ADDR2"},
	{0x1218, "DMA2_ADDR3"},
	{0x121C, "DMA2_ADDR4"},
	{0x1220, "DMA2_ADDR5"},
	{0x1224, "DMA2_ADDR6"},
	{0x1228, "DMA2_ADDR7"},
	{0x122C, "DMA2_ADDR8"},
	{0x1230, "DMA2_ACT_CTRL"},
	{0x1234, "DMA2_ACT_FMT"},
	{0x1238, "DMA2_ACT_SKIP"},
	{0x1240, "DMA2_BYTE_CNT"},
	{0x1300, "DMA3_CTRL"},
	{0x1304, "DMA3_FMT"},
	{0x1308, "DMA3_SKIP"},
	{0x1310, "DMA3_ADDR1"},
	{0x1314, "DMA3_ADDR2"},
	{0x1318, "DMA3_ADDR3"},
	{0x131C, "DMA3_ADDR4"},
	{0x1320, "DMA3_ADDR5"},
	{0x1324, "DMA3_ADDR6"},
	{0x1328, "DMA3_ADDR7"},
	{0x132C, "DMA3_ADDR8"},
	{0x1330, "DMA3_ACT_CTRL"},
	{0x1334, "DMA3_ACT_FMT"},
	{0x1338, "DMA3_ACT_SKIP"},
	{0x1340, "DMA3_BYTE_CNT"},
	{0x1400, "DMA_CMN_CTRL"},
	{0x1404, "DMA_ERR_CODE"},
	{0x1408, "DMA_CLK_CTRL"},
	{0x140C, "DMA_AWUSER"},
	{0x1440, "DBG_AXIM_INFO"},
	{0x1444, "DBG_TRXFIFO_INFO"},
	{0x1448, "DBG_DMAFIFO_INFO"}
};

/* the total count of the fields of csis v4.0's reg */
#define CSIS_REG_FIELD_CNT 148
enum fimc_is_hw_csi_reg_field {
	CSIS_F_UPDATE_SHADOW,
	CSIS_F_DESKEW_LEVEL,
	CSIS_F_DESKEW_ENABLE,
	CSIS_F_INTERLEAVE_MODE,
	CSIS_F_LANE_NUMBER,
	CSIS_F_UPDATE_SHADOW_CTRL,
	CSIS_F_SW_RESET,
	CSIS_F_CSI_EN,
	CSIS_F_CLKGATE_TRAIL,
	CSIS_F_CLKGATE_EN,
	CSIS_F_MSK_EVENBEFORE,
	CSIS_F_MSK_EVENAFTER,
	CSIS_F_MSK_ODDBEFORE,
	CSIS_F_MSK_ODDAFTER,
	CSIS_F_MSK_FRAMESTART,
	CSIS_F_MSK_FRAMEEND,
	CSIS_F_MSK_ERR_SOT_HS,
	CSIS_F_MSK_ERR_LOST_FS,
	CSIS_F_MSK_ERR_LOST_FE,
	CSIS_F_MSK_ERR_OVER,
	CSIS_F_MSK_ERR_WRONG_CFG,
	CSIS_F_MSK_ERR_ECC,
	CSIS_F_MSK_ERR_CRC,
	CSIS_F_MSK_ERR_ID,
	CSIS_F_EVENBEFORE,
	CSIS_F_EVENAFTER,
	CSIS_F_ODDBEFORE,
	CSIS_F_ODDAFTER,
	CSIS_F_FRAMESTART,
	CSIS_F_FRAMEEND,
	CSIS_F_ERR_SOT_HS,
	CSIS_F_ERR_LOST_FS,
	CSIS_F_ERR_LOST_FE,
	CSIS_F_ERR_OVER,
	CSIS_F_ERR_WRONG_CFG,
	CSIS_F_ERR_ECC,
	CSIS_F_ERR_CRC,
	CSIS_F_ERR_ID,
	CSIS_F_MSK_DMA_OTF_OVERLAP,
	CSIS_F_MSK_DMA_ABORT_DONE,
	CSIS_F_MSK_DMA_ERROR,
	CSIS_F_MSK_DMA_FRM_END,
	CSIS_F_MSK_DMA_FRM_START,
	CSIS_F_MSK_LINE_END,
	CSIS_F_DMA_OTF_OVERLAP,
	CSIS_F_DMA_ABORT_DONE,
	CSIS_F_DMA_ERROR,
	CSIS_F_DMA_FRM_END,
	CSIS_F_DMA_FRM_START,
	CSIS_F_LINE_END,
	CSIS_F_ULPSDAT,
	CSIS_F_STOPSTATEDAT,
	CSIS_F_ULPSCLK,
	CSIS_F_STOPSTATECLK,
	CSIS_F_HSSETTLE,
	CSIS_F_S_CLKSETTLECTL,
	CSIS_F_S_BYTE_CLK_ENABLE,
	CSIS_F_S_DPDN_SWAP_CLK,
	CSIS_F_S_DPDN_SWAP_DAT,
	CSIS_F_ENABLE_DAT,
	CSIS_F_ENABLE_CLK,
	CSIS_F_B_DPHYCTRL_L,
	CSIS_F_B_DPHYCTRL_H,
	CSIS_F_S_DPHYCTRL_L,
	CSIS_F_S_DPHYCTRL_H,
	CSIS_F_MEM_FULL_GAP,
	CSIS_F_DOUBLE_CMPNT,
	CSIS_F_PARALLEL,
	CSIS_F_RGB_SWAP,
	CSIS_F_DECOMP_PREDICT,
	CSIS_F_DECOMP_EN,
	CSIS_F_DATAFORMAT,
	CSIS_F_VIRTUAL_CHANNEL,
	CSIS_F_VRESOL,
	CSIS_F_HRESOL,
	CSIS_F_HSYNC_LINTV,
	CSIS_F_VSYNC_SINTV,
	CSIS_F_VSYNC_EINTV,
	CSIS_F_SDW_MEM_FULL_GAP,
	CSIS_F_SDW_DOUBLE_CMPNT,
	CSIS_F_SDW_PARALLEL,
	CSIS_F_SDW_RGB_SWAP,
	CSIS_F_SDW_DECOMP_PREDICT,
	CSIS_F_SDW_DECOMP_EN,
	CSIS_F_SDW_DATAFORMAT,
	CSIS_F_SDW_VIRTUAL_CHANNEL,
	CSIS_F_SDW_VRESOL,
	CSIS_F_SDW_HRESOL,
	CSIS_F_SDW_HSYNC_LINTV,
	CSIS_F_SDW_VSYNC_SINTV,
	CSIS_F_SDW_VSYNC_EINTV,
	CSIS_F_DBG_FORCE_UPDATE,
	CSIS_F_DBG_DONT_STOP_LAST_LINE,
	CSIS_F_DBG_BLK_EXC_FRAME,
	CSIS_F_DBG_CH_OUTPUT,
	CSIS_F_MSK_DT_NOT_SUPPORT,
	CSIS_F_MSK_DT_IGNORE,
	CSIS_F_MSK_ERR_FRAME_SIZE,
	CSIS_F_MSK_TRUNCATED_FRAME,
	CSIS_F_MSK_EARLY_FE,
	CSIS_F_MSK_EARLY_FS,
	CSIS_F_MSK_CAM_VSYNC_FALL,
	CSIS_F_MSK_CAM_VSYNC_RISE,
	CSIS_F_DT_NOT_SUPPURT,
	CSIS_F_DT_IGNORE,
	CSIS_F_ERR_FRAME_SIZE,
	CSIS_F_TRUNCATED_FRAME,
	CSIS_F_EARLY_FE,
	CSIS_F_EARLY_FS,
	CSIS_F_CAM_VSYNC_FALL,
	CSIS_F_CAM_VSYNC_RISE,
	CSIS_F_FRM_CNT_CH_N,
	CSIS_F_LINE_INTR_CH_N,
	CSIS_F_DMA_N_UPDT_SKIPPTR,
	CSIS_F_DMA_N_UPDT_FRAMEPTR,
	CSIS_F_DMA_N_UPDT_PTR_EN,
	CSIS_F_DMA_N_DISABLE,
	CSIS_F_DMA_N_DIM,
	CSIS_F_DMA_N_PACK12,
	CSIS_F_DMA_N_DUMP,
	CSIS_F_DMA_N_BYTESWAP,
	CSIS_F_DMA_N_SKIP_EN,
	CSIS_F_DMA_N_SKIP_TURNPTR,
	CSIS_F_DMA_N_SKIP_SEQ,
	CSIS_F_DMA_N_ADDR_N,
	CSIS_F_ACTIVE_DMA_N_ABORTED,
	CSIS_F_ACTIVE_DMA_N_SKIPPTR,
	CSIS_F_ACTIVE_DMA_N_FRAMEPTR,
	CSIS_F_ACTIVE_DMA_N_DISABLE,
	CSIS_F_ACTIVE_DMA_N_DIM,
	CSIS_F_ACTIVE_DMA_N_PACK12,
	CSIS_F_ACTIVE_DMA_N_DUMP,
	CSIS_F_ACTIVE_DMA_N_BYTESWAP,
	CSIS_F_DMA_N_BYTE_CNT,
	CSIS_F_DMA_ABORT_REQ,
	CSIS_F_DMAFIFO_FULL,
	CSIS_F_TRXFIFO_FULL,
	CSIS_F_BRESP_ERROR,
	CSIS_F_DMA_CLK_GATE_TRAIL,
	CSIS_F_DMA_CLK_GATE_EN,
	CSIS_F_DMA_AWUSER,
	CSIS_F_DBG_AXIM_WCNT,
	CSIS_F_DBG_AXIM_AWCNT,
	CSIS_F_DBG_AXIM_STATE,
	CSIS_F_TRXFIFO_MAX_WCNT,
	CSIS_F_TRXFIFO_CUR_WCNT,
	CSIS_F_DMAFIFO_MAX_WCNT,
	CSIS_F_DMAFIFO_CUR_WCNT
};

static struct fimc_is_field csi_fields[CSIS_REG_FIELD_CNT] = {
	{"UPDATE_SHADOW"		, 16, 4 , RW  , 0},	 /* CSIS_CMN_CTRL      */
	{"DESKEW_LEVEL"		, 13, 3 , RW  , 2},      /* CSIS_CMN_CTRL      */
	{"DESKEW_ENABLE"		, 12, 1 , RW  , 0},      /* CSIS_CMN_CTRL      */
	{"INTERLEAVE_MODE"		, 10, 2 , RW  , 0},      /* CSIS_CMN_CTRL      */
	{"LANE_NUMBER"		, 8 , 2 , RW  , 0},      /* CSIS_CMN_CTRL      */
	{"UPDATE_SHADOW_CTRL"	, 2 , 1 , RW  , 0},      /* CSIS_CMN_CTRL      */
	{"SW_RESET"			, 1 , 1 , WO  , 0},      /* CSIS_CMN_CTRL      */
	{"CSI_EN"			, 0 , 1 , RW  , 0},      /* CSIS_CMN_CTRL      */
	{"CLKGATE_TRAIL"		, 16, 16, RW  , 0},      /* CSIS_CLK_CTRL      */
	{"CLKGATE_EN"		, 4 , 4 , RW  , 0xF},    /* CSIS_CLK_CTRL      */
	{"MSK_EVENBEFORE"		, 31, 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_EVENAFTER"		, 30, 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ODDBEFORE"		, 29, 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ODDAFTER"		, 28, 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_FRAMESTART"		, 24, 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_FRAMEEND"		, 20, 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_SOT_HS"		, 16, 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_LOST_FS"		, 12, 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_LOST_FE"		, 8 , 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_OVER"		, 4 , 4 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_WRONG_CFG"		, 3 , 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_ECC"		, 2 , 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_CRC"		, 1 , 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"MSK_ERR_ID"		, 0 , 1 , RW  , 0},      /* CSIS_INT_MSK0      */
	{"EVENBEFORE"		, 31, 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"EVENAFTER"			, 30, 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ODDBEFORE"			, 29, 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ODDAFTER"			, 28, 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"FRAMESTART"		, 24, 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"FRAMEEND"			, 20, 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_SOT_HS"		, 16, 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_LOST_FS"		, 12, 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_LOST_FE"		, 8 , 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_OVER"			, 4 , 4 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_WRONG_CFG"		, 3 , 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_ECC"			, 2 , 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_CRC"			, 1 , 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"ERR_ID"			, 0 , 1 , RW  , 0},      /* CSIS_INT_SRC0      */
	{"MSK_DMA_OTF_OVERLAP"	, 14, 4 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"MSK_DMA_ABORT_DONE"	, 13, 1 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"MSK_DMA_ERROR"		, 12, 1 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"MSK_DMA_FRM_END"		, 8 , 4 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"MSK_DMA_FRM_START"		, 4 , 4 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"MSK_LINE_END"		, 0 , 4 , RW  , 0},      /* CSIS_INT_MSK1      */
	{"DMA_OTF_OVERLAP"		, 14, 4 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"DMA_ABORT_DONE"		, 13, 1 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"DMA_ERROR"			, 12, 1 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"DMA_FRM_END"		, 8 , 4 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"DMA_FRM_START"		, 4 , 4 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"LINE_END"			, 0 , 4 , RW  , 0},      /* CSIS_INT_SRC1      */
	{"ULPSDAT"			, 8 , 4 , RO  , 0},      /* DPHY_STATUS        */
	{"STOPSTATEDAT"		, 4 , 4 , RO  , 0xF},    /* DPHY_STATUS        */
	{"ULPSCLK"			, 1 , 1 , RO  , 0},      /* DPHY_STATUS        */
	{"STOPSTATECLK"		, 0 , 1 , RO  , 1},      /* DPHY_STATUS        */
	{"HSSETTLE"			, 24, 8 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"S_CLKSETTLECTL["		, 22, 2 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"S_BYTE_CLK_ENABLE"		, 21, 1 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"S_DPDN_SWAP_CLK"		, 6 , 1 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"S_DPDN_SWAP_DAT"		, 5 , 1 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"ENABLE_DAT"		, 1 , 4 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"ENABLE_CLK"		, 0 , 1 , RW  , 0},      /* DPHY_CMN_CTRL      */
	{"B_DPHYCTRL_L"		, 0 , 32, RW  , 0},      /* DPHY_BCTRL_L       */
	{"B_DPHYCTRL_H"		, 0 , 32, RW  , 0},      /* DPHY_BCTRL_H       */
	{"S_DPHYCTRL_L"		, 0 , 32, RW  , 0},      /* DPHY_SCTRL_L       */
	{"S_DPHYCTRL_H"		, 0 , 32, RW  , 0},      /* DPHY_SCTRL_H       */
	{"MEM_FULL_GAP"		, 24, 8 , RW  , 0x08},   /* ISP_CONFIG_CH0     */
	{"DOUBLE_CMPNT"		, 12, 1 , RW  , 0},      /* ISP_CONFIG_CH0     */
	{"PARALLEL"			, 11, 1 , RW  , 1},      /* ISP_CONFIG_CH0     */
	{"RGB_SWAP"			, 10, 1 , RW  , 0},      /* ISP_CONFIG_CH0     */
	{"DECOMP_PREDICT"		, 9 , 1 , RW  , 0},      /* ISP_CONFIG_CH0     */
	{"DECOMP_EN"			, 8 , 1 , RW  , 0},      /* ISP_CONFIG_CH0     */
	{"DATAFORMAT"		, 2 , 6 , RW  , 0x3F},   /* ISP_CONFIG_CH0     */
	{"VIRTUAL_CHANNEL"		, 0 , 2 , RW  , 0},      /* ISP_CONFIG_CH0     */
	{"VRESOL"			, 16, 16, RW  , 0x8000}, /* ISP_RESOL_CH0      */
	{"HRESOL"			, 0 , 16, RW  , 0x8000}, /* ISP_RESOL_CH0      */
	{"HSYNC_LINTV"		, 18, 6 , RW  , 0},      /* ISP_SYNC_CH0       */
	{"VSYNC_SINTV"		, 12, 6 , RW  , 0},      /* ISP_SYNC_CH0       */
	{"VSYNC_EINTV"		, 0 , 12, RW  , 0},      /* ISP_SYNC_CH0       */
	{"SDW_MEM_FULL_GAP"		, 24, 8 , RW  , 0x08},   /* SDW_CONFIG_CH0     */
	{"SDW_DOUBLE_CMPNT"		, 12, 1 , RW  , 0},      /* SDW_CONFIG_CH0     */
	{"SDW_PARALLEL"		, 11, 1 , RW  , 1},      /* SDW_CONFIG_CH0     */
	{"SDW_RGB_SWAP"		, 10, 1 , RW  , 0},      /* SDW_CONFIG_CH0     */
	{"SDW_DECOMP_PREDICT"	, 9 , 1 , RW  , 0},      /* SDW_CONFIG_CH0     */
	{"SDW_DECOMP_EN"		, 8 , 1 , RW  , 0},      /* SDW_CONFIG_CH0     */
	{"SDW_DATAFORMAT"		, 2 , 6 , RW  , 0x3F},   /* SDW_CONFIG_CH0     */
	{"SDW_VIRTUAL_CHANNEL"	, 0 , 2 , RW  , 0},      /* SDW_CONFIG_CH0     */
	{"SDW_VRESOL"		, 16, 16, RW  , 0x8000}, /* SDW_RESOL_CH0      */
	{"SDW_HRESOL"		, 0 , 16, RW  , 0x8000}, /* SDW_RESOL_CH0      */
	{"SDW_HSYNC_LINTV"		, 18, 6 , RW  , 0},      /* SDW_SYNC_CH0       */
	{"SDW_VSYNC_SINTV"		, 12, 6 , RW  , 0},      /* SDW_SYNC_CH0       */
	{"SDW_VSYNC_EINTV"		, 0 , 12, RW  , 0},      /* SDW_SYNC_CH0       */
	{"DBG_FORCE_UPDATE"		, 12, 4 , RW  , 0},      /* DBG_ CTRL          */
	{"DBG_DONT_STOP_LAST_LINE"	, 8 , 4 , RW  , 0xF},    /* DBG_ CTRL          */
	{"DBG_BLK_EXC_FRAME"		, 4 , 4 , RW  , 0},      /* DBG_ CTRL          */
	{"DBG_CH_OUTPUT"		, 0 , 4 , RW  , 0},      /* DBG_ CTRL          */
	{"MSK_DT_NOT_SUPPORT"	, 25, 1 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_DT_IGNORE"		, 24, 1 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_ERR_FRAME_SIZE"	, 20, 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_TRUNCATED_FRAME"	, 16, 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_EARLY_FE"		, 12, 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_EARLY_FS"		, 8 , 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_CAM_VSYNC_FALL"	, 4 , 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"MSK_CAM_VSYNC_RISE"	, 0 , 4 , RW  , 0},      /* DBG_INTR_MSK       */
	{"DT_NOT_SUPPURT"		, 25, 1 , RW  , 0},      /* DBG_INTR_SRC       */
	{"DT_IGNORE"			, 24, 1 , RW  , 0},      /* DBG_INTR_SRC       */
	{"ERR_FRAME_SIZE"		, 20, 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"TRUNCATED_FRAME"		, 16, 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"EARLY_FE"			, 12, 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"EARLY_FS"			, 8 , 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"CAM_VSYNC_FALL"		, 4 , 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"CAM_VSYNC_RISE"		, 0 , 4 , RW  , 0},      /* DBG_INTR_SRC       */
	{"FRM_CNT_CH_N"		, 0 , 32, RW  , 0},      /* FRM_CNT_CH         */
	{"LINE_INTR_CH_N"		, 0 , 5 , RW  , 0},      /* LINE_INTR_CH       */
	{"DMA_N_UPDT_SKIPPTR"	, 5 , 3 , WO  , 0},      /* DMA_CTRL           */
	{"DMA_N_UPDT_FRAMEPTR"	, 2 , 3 , WO  , 0},      /* DMA_CTRL           */
	{"DMA_N_UPDT_PTR_EN"		, 1 , 1 , WO  , 0},      /* DMA_CTRL           */
	{"DMA_N_DISABLE"		, 0 , 1 , RW  , 0},      /* DMA_CTRL           */
	{"DMA_N_DIM"			, 15, 1 , RW  , 0},      /* DMA_FMT            */
	{"DMA_N_PACK12"		, 14, 1 , RW  , 0},      /* DMA_FMT            */
	{"DMA_N_DUMP"		, 13, 1 , RW  , 0},      /* DMA_FMT            */
	{"DMA_N_BYTESWAP"		, 12, 1 , RW  , 0},      /* DMA_FMT            */
	{"DMA_N_SKIP_EN"		, 31, 1 , RW  , 0},      /* DMA_SKIP           */
	{"DMA_N_SKIP_TURNPTR"	, 16, 3 , RW  , 0},      /* DMA_SKIP           */
	{"DMA_N_SKIP_SEQ"		, 0 , 8 , RW  , 0},      /* DMA_SKIP           */
	{"DMA_N_ADDR_N"		, 0 , 32, RW  , 0},      /* DMA_ADDR           */
	{"ACTIVE_DMA_N_ABORTED"	, 8 , 1 , RO  , 0},      /* DMA_ACT_CTRL       */
	{"ACTIVE_DMA_N_SKIPPTR"	, 5 , 3 , RO  , 0},      /* DMA_ACT_CTRL       */
	{"ACTIVE_DMA_N_FRAMEPTR"	, 2 , 3 , RO  , 0x7},    /* DMA_ACT_CTRL       */
	{"ACTIVE_DMA_N_DISABLE"	, 0 , 1 , RO  , 0},      /* DMA_ACT_CTRL       */
	{"ACTIVE_DMA_N_DIM"		, 15, 1 , RO  , 0},      /* DMA_ACT_FMT        */
	{"ACTIVE_DMA_N_PACK12"	, 14, 1 , RO  , 0},      /* DMA_ACT_FMT        */
	{"ACTIVE_DMA_N_DUMP"		, 13, 1 , RO  , 0},      /* DMA_ACT_FMT        */
	{"ACTIVE_DMA_N_BYTESWAP"	, 12, 1 , RO  , 0},      /* DMA_ACT_FMT        */
	{"DMA_N_BYTE_CNT"		, 0 , 32, RO  , 0},      /* DMA_BYTE_CNT       */
	{"DMA_ABORT_REQ"		, 0 , 1 , W1C , 0},      /* DMA_CMN_CTRL       */
	{"DMAFIFO_FULL"		, 5 , 1 , RAC , 0},      /* DMA_ERR_CODE       */
	{"TRXFIFO_FULL"		, 4 , 1 , RAC , 0},      /* DMA_ERR_CODE       */
	{"BRESP_ERROR"		, 0 , 4 , RAC , 0},      /* DMA_ERR_CODE       */
	{"DMA_CLK_GATE_TRAIL"	, 1 , 4 , RW  , 0},      /* DMA_CLK_CTRL       */
	{"DMA_CLK_GATE_EN"		, 0 , 1 , RW  , 1},      /* DMA_CLK_CTRL       */
	{"DMA_AWUSER"		, 0 , 4 , RW  , 0x4},    /* DMA_AWUSER         */
	{"DBG_AXIM_WCNT"		, 7 , 5 , RAC , 0},      /* DBG_AXIM_INFO      */
	{"DBG_AXIM_AWCNT"		, 2 , 5 , RAC , 0},      /* DBG_AXIM_INFO      */
	{"DBG_AXIM_STATE"		, 0 , 2 , RAC , 0},      /* DBG_AXIM_INFO      */
	{"TRXFIFO_MAX_WCNT"		, 16, 16, RAC , 0},      /* DBG_TRXFIFO_INFO   */
	{"TRXFIFO_CUR_WCNT"		, 0 , 16, RAC , 0},      /* DBG_TRXFIFO_INFO   */
	{"DMAFIFO_MAX_WCNT"		, 16, 16, RAC , 0},      /* DBG_DMAFIFO_INFO   */
	{"DMAFIFO_CUR_WCNT"		, 0 , 16, RAC , 0},      /* DBG_DMAFIFO_INFO   */
};
#endif
#endif
