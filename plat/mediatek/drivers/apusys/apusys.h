/*
 * Copyright (c) 2023, MediaTek Inc. All rights reserved.
 *
 * SPDX-License-Identifier: BSD-3-Clause
 */

#ifndef APUSYS_H
#define APUSYS_H

#define MODULE_TAG "[APUSYS]"

enum MTK_APUSYS_KERNEL_OP {
	MTK_APUSYS_KERNEL_OP_APUSYS_PWR_TOP_ON,		/*  0 */
	MTK_APUSYS_KERNEL_OP_APUSYS_PWR_TOP_OFF,	/*  1 */
	MTK_APUSYS_KERNEL_OP_APUSYS_RV_SETUP_REVISER,	/*  2 */
	MTK_APUSYS_KERNEL_OP_APUSYS_RV_RESET_MP,	/*  3 */
	MTK_APUSYS_KERNEL_OP_APUSYS_RV_SETUP_BOOT,	/*  4 */
	MTK_APUSYS_KERNEL_OP_APUSYS_RV_START_MP,	/*  5 */
	MTK_APUSYS_KERNEL_OP_APUSYS_RV_STOP_MP,		/*  6 */
	MTK_APUSYS_KERNEL_OP_DEVAPC_INIT_RCX,		/*  7 */
	MTK_APUSYS_KERNEL_OP_NUM,
};

#endif
