/* Copyright (c) 2012, The Linux Foundation. All rights reserved.
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

#ifndef __IPA_REG_H__
#define __IPA_REG_H__

/*
 * IPA's BAM specific registers
 */

#define IPA_BAM_REG_BASE_OFST 0x00004000

#define IPA_BAM_CNFG_BITS_OFST 0x7c
#define IPA_BAM_REMAP_SIZE (0x1000)

/*
 * IPA's core specific regtisters
 */

#define IPA_REG_BASE_OFST 0x00020000

#define IPA_COMP_HW_VERSION_OFST 0x00000030
#define IPA_COMP_HW_VERSION_RMSK 0xffffffff
#define IPA_COMP_HW_VERSION_MAJOR_BMSK 0xff000000
#define IPA_COMP_HW_VERSION_MAJOR_SHFT 0x18
#define IPA_COMP_HW_VERSION_MINOR_BMSK 0xff0000
#define IPA_COMP_HW_VERSION_MINOR_SHFT 0x10
#define IPA_COMP_HW_VERSION_STEP_BMSK 0xffff
#define IPA_COMP_HW_VERSION_STEP_SHFT 0x0

#define IPA_VERSION_OFST 0x00000034
#define IPA_VERSION_RMSK 0xffffffff
#define IPA_VERSION_IPA_R_REV_BMSK 0xff000000
#define IPA_VERSION_IPA_R_REV_SHFT 0x18
#define IPA_VERSION_IPA_Q_REV_BMSK 0xff0000
#define IPA_VERSION_IPA_Q_REV_SHFT 0x10
#define IPA_VERSION_IPA_P_REV_BMSK 0xff00
#define IPA_VERSION_IPA_P_REV_SHFT 0x8
#define IPA_VERSION_IPA_ECO_REV_BMSK 0xff
#define IPA_VERSION_IPA_ECO_REV_SHFT 0x0

#define IPA_COMP_CFG_OFST 0x00000038
#define IPA_COMP_CFG_RMSK 0x1
#define IPA_COMP_CFG_ENABLE_BMSK 0x1
#define IPA_COMP_CFG_ENABLE_SHFT 0x0

#define IPA_COMP_SW_RESET_OFST 0x0000003c
#define IPA_COMP_SW_RESET_RMSK 0x1
#define IPA_COMP_SW_RESET_SW_RESET_BMSK 0x1
#define IPA_COMP_SW_RESET_SW_RESET_SHFT 0x0

#define IPA_CLKON_CFG_OFST 0x00000040
#define IPA_CLKON_CFG_RMSK 0xf
#define IPA_CLKON_CFG_CGC_OPEN_MISC_BMSK 0x8
#define IPA_CLKON_CFG_CGC_OPEN_MISC_SHFT 0x3
#define IPA_CLKON_CFG_CGC_OPEN_TX_BMSK 0x4
#define IPA_CLKON_CFG_CGC_OPEN_TX_SHFT 0x2
#define IPA_CLKON_CFG_CGC_OPEN_PROC_BMSK 0x2
#define IPA_CLKON_CFG_CGC_OPEN_PROC_SHFT 0x1
#define IPA_CLKON_CFG_CGC_OPEN_RX_BMSK 0x1
#define IPA_CLKON_CFG_CGC_OPEN_RX_SHFT 0x0

#define IPA_HEAD_OF_LINE_BLOCK_EN_OFST 0x00000044
#define IPA_HEAD_OF_LINE_BLOCK_EN_RMSK 0x1
#define IPA_HEAD_OF_LINE_BLOCK_EN_EN_BMSK 0x1
#define IPA_HEAD_OF_LINE_BLOCK_EN_EN_SHFT 0x0

#define IPA_HEAD_OF_LINE_BLOCK_TIMER_OFST 0x00000048
#define IPA_HEAD_OF_LINE_BLOCK_TIMER_RMSK 0x1ff
#define IPA_HEAD_OF_LINE_BLOCK_TIMER_TIMER_BMSK 0x1ff
#define IPA_HEAD_OF_LINE_BLOCK_TIMER_TIMER_SHFT 0x0

#define IPA_ROUTE_OFST 0x0000004c
#define IPA_ROUTE_RMSK 0x1ffff
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_BMSK 0x1ff80
#define IPA_ROUTE_ROUTE_DEF_HDR_OFST_SHFT 0x7
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_BMSK 0x40
#define IPA_ROUTE_ROUTE_DEF_HDR_TABLE_SHFT 0x6
#define IPA_ROUTE_ROUTE_DEF_PIPE_BMSK 0x3e
#define IPA_ROUTE_ROUTE_DEF_PIPE_SHFT 0x1
#define IPA_ROUTE_ROUTE_DIS_BMSK 0x1
#define IPA_ROUTE_ROUTE_DIS_SHFT 0x0

#define IPA_FILTER_OFST 0x00000050
#define IPA_FILTER_RMSK 0x1
#define IPA_FILTER_FILTER_EN_BMSK 0x1
#define IPA_FILTER_FILTER_EN_SHFT 0x0

#define IPA_MASTER_PRIORITY_OFST 0x00000054
#define IPA_MASTER_PRIORITY_RMSK 0xffffffff
#define IPA_MASTER_PRIORITY_MASTER_7_WR_BMSK 0xc0000000
#define IPA_MASTER_PRIORITY_MASTER_7_WR_SHFT 0x1e
#define IPA_MASTER_PRIORITY_MASTER_7_RD_BMSK 0x30000000
#define IPA_MASTER_PRIORITY_MASTER_7_RD_SHFT 0x1c
#define IPA_MASTER_PRIORITY_MASTER_6_WR_BMSK 0xc000000
#define IPA_MASTER_PRIORITY_MASTER_6_WR_SHFT 0x1a
#define IPA_MASTER_PRIORITY_MASTER_6_RD_BMSK 0x3000000
#define IPA_MASTER_PRIORITY_MASTER_6_RD_SHFT 0x18
#define IPA_MASTER_PRIORITY_MASTER_5_WR_BMSK 0xc00000
#define IPA_MASTER_PRIORITY_MASTER_5_WR_SHFT 0x16
#define IPA_MASTER_PRIORITY_MASTER_5_RD_BMSK 0x300000
#define IPA_MASTER_PRIORITY_MASTER_5_RD_SHFT 0x14
#define IPA_MASTER_PRIORITY_MASTER_4_WR_BMSK 0xc0000
#define IPA_MASTER_PRIORITY_MASTER_4_WR_SHFT 0x12
#define IPA_MASTER_PRIORITY_MASTER_4_RD_BMSK 0x30000
#define IPA_MASTER_PRIORITY_MASTER_4_RD_SHFT 0x10
#define IPA_MASTER_PRIORITY_MASTER_3_WR_BMSK 0xc000
#define IPA_MASTER_PRIORITY_MASTER_3_WR_SHFT 0xe
#define IPA_MASTER_PRIORITY_MASTER_3_RD_BMSK 0x3000
#define IPA_MASTER_PRIORITY_MASTER_3_RD_SHFT 0xc
#define IPA_MASTER_PRIORITY_MASTER_2_WR_BMSK 0xc00
#define IPA_MASTER_PRIORITY_MASTER_2_WR_SHFT 0xa
#define IPA_MASTER_PRIORITY_MASTER_2_RD_BMSK 0x300
#define IPA_MASTER_PRIORITY_MASTER_2_RD_SHFT 0x8
#define IPA_MASTER_PRIORITY_MASTER_1_WR_BMSK 0xc0
#define IPA_MASTER_PRIORITY_MASTER_1_WR_SHFT 0x6
#define IPA_MASTER_PRIORITY_MASTER_1_RD_BMSK 0x30
#define IPA_MASTER_PRIORITY_MASTER_1_RD_SHFT 0x4
#define IPA_MASTER_PRIORITY_MASTER_0_WR_BMSK 0xc
#define IPA_MASTER_PRIORITY_MASTER_0_WR_SHFT 0x2
#define IPA_MASTER_PRIORITY_MASTER_0_RD_BMSK 0x3
#define IPA_MASTER_PRIORITY_MASTER_0_RD_SHFT 0x0

#define IPA_SHARED_MEM_SIZE_OFST 0x00000058
#define IPA_SHARED_MEM_SIZE_RMSK 0x1fff
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_BMSK 0x1fff
#define IPA_SHARED_MEM_SIZE_SHARED_MEM_SIZE_SHFT 0x0

#define IPA_NAT_TIMER_OFST 0x0000005c
#define IPA_NAT_TIMER_RMSK 0xffffff
#define IPA_NAT_TIMER_NAT_TIMER_BMSK 0xffffff
#define IPA_NAT_TIMER_NAT_TIMER_SHFT 0x0

#define IPA_NAT_TIMER_RESET_OFST 0x00000060
#define IPA_NAT_TIMER_RESET_RMSK 0x1
#define IPA_NAT_TIMER_RESET_NAT_TIMER_RESET_BMSK 0x1
#define IPA_NAT_TIMER_RESET_NAT_TIMER_RESET_SHFT 0x0

#define IPA_ENDP_INIT_NAT_n_OFST(n) (0x00000080 + 0x4 * (n))
#define IPA_ENDP_INIT_NAT_n_RMSK 0x3
#define IPA_ENDP_INIT_NAT_n_MAXn 19
#define IPA_ENDP_INIT_NAT_n_NAT_EN_BMSK 0x3
#define IPA_ENDP_INIT_NAT_n_NAT_EN_SHFT 0x0

#define IPA_ENDP_INIT_HDR_n_OFST(n) (0x000000e0 + 0x4 * (n))
#define IPA_ENDP_INIT_HDR_n_RMSK 0x7ffffff
#define IPA_ENDP_INIT_HDR_n_MAXn 19
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_BMSK 0x4000000
#define IPA_ENDP_INIT_HDR_n_HDR_A5_MUX_SHFT 0x1a
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_BMSK 0x3f00000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_SHFT 0x14
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_BMSK 0x80000
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_PKT_SIZE_VALID_SHFT 0x13
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_BMSK 0x7e000
#define IPA_ENDP_INIT_HDR_n_HDR_ADDITIONAL_CONST_LEN_SHFT 0xd
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_BMSK 0x1f80
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_SHFT 0x7
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_BMSK 0x40
#define IPA_ENDP_INIT_HDR_n_HDR_OFST_METADATA_VALID_SHFT 0x6
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_BMSK 0x3f
#define IPA_ENDP_INIT_HDR_n_HDR_LEN_SHFT 0x0

#define IPA_ENDP_INIT_MODE_n_OFST(n) (0x00000140 + 0x4 * (n))
#define IPA_ENDP_INIT_MODE_n_RMSK 0x7f
#define IPA_ENDP_INIT_MODE_n_MAXn 19
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_BMSK 0x7c
#define IPA_ENDP_INIT_MODE_n_DEST_PIPE_INDEX_SHFT 0x2
#define IPA_ENDP_INIT_MODE_n_MODE_BMSK 0x3
#define IPA_ENDP_INIT_MODE_n_MODE_SHFT 0x0

#define IPA_ENDP_INIT_AGGR_n_OFST(n) (0x000001a0 + 0x4 * (n))
#define IPA_ENDP_INIT_AGGR_n_RMSK 0x7fff
#define IPA_ENDP_INIT_AGGR_n_MAXn 19
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_BMSK 0x7c00
#define IPA_ENDP_INIT_AGGR_n_AGGR_TIME_LIMIT_SHFT 0xa
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_BMSK 0x3e0
#define IPA_ENDP_INIT_AGGR_n_AGGR_BYTE_LIMIT_SHFT 0x5
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_BMSK 0x1c
#define IPA_ENDP_INIT_AGGR_n_AGGR_TYPE_SHFT 0x2
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_BMSK 0x3
#define IPA_ENDP_INIT_AGGR_n_AGGR_EN_SHFT 0x0

#define IPA_ENDP_INIT_ROUTE_n_OFST(n) (0x00000200 + 0x4 * (n))
#define IPA_ENDP_INIT_ROUTE_n_RMSK 0x1f
#define IPA_ENDP_INIT_ROUTE_n_MAXn 19
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_BMSK 0x1f
#define IPA_ENDP_INIT_ROUTE_n_ROUTE_TABLE_INDEX_SHFT 0x0

#define IPA_AGGREGATION_SPARE_REG_1_OFST 0x00002090
#define IPA_AGGREGATION_SPARE_REG_1_RMSK 0xffffffff
#define IPA_AGGREGATION_SPARE_REG_1_GENERAL_CONFIG_BMSK 0xffffffff
#define IPA_AGGREGATION_SPARE_REG_1_GENERAL_CONFIG_SHFT 0x0

#define IPA_AGGREGATION_SPARE_REG_2_OFST 0x00002094
#define IPA_AGGREGATION_SPARE_REG_2_RMSK 0xffffffff
#define IPA_AGGREGATION_SPARE_REG_2_GENERAL_CONFIG_BMSK 0xffffffff
#define IPA_AGGREGATION_SPARE_REG_2_GENERAL_CONFIG_SHFT 0x0

#define IPA_AGGREGATION_MODE_MSK 0x1
#define IPA_AGGREGATION_MODE_SHFT 31
#define IPA_AGGREGATION_MODE_BMSK 0x7fffffff
#define IPA_AGGREGATION_QCNCM_SIG0_SHFT 16
#define IPA_AGGREGATION_QCNCM_SIG1_SHFT 8
#define IPA_AGGREGATION_QCNCM_SIG_BMSK 0xff000000
#define IPA_AGGREGATION_SINGLE_NDP_MSK 0x1
#define IPA_AGGREGATION_SINGLE_NDP_BMSK 0xfffffffe

#define IPA_SRAM_DIRECT_ACCESS_n_OFST(n) (0x00004000 + 0x4 * (n))
#define IPA_SRAM_DIRECT_ACCESS_n_RMSK 0xffffffff
#define IPA_SRAM_DIRECT_ACCESS_n_MAXn 2047
#define IPA_SRAM_DIRECT_ACCESS_n_DATA_WORD_BMSK 0xffffffff
#define IPA_SRAM_DIRECT_ACCESS_n_DATA_WORD_SHFT 0x0

#endif /* __IPA_REG_H__ */