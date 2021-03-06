/* Copyright Statement:
 *
 * This software/firmware and related documentation ("MediaTek Software") are
 * protected under relevant copyright laws. The information contained herein is
 * confidential and proprietary to MediaTek Inc. and/or its licensors. Without
 * the prior written permission of MediaTek inc. and/or its licensors, any
 * reproduction, modification, use or disclosure of MediaTek Software, and
 * information contained herein, in whole or in part, shall be strictly
 * prohibited.
 * 
 * MediaTek Inc. (C) 2010. All rights reserved.
 * 
 * BY OPENING THIS FILE, RECEIVER HEREBY UNEQUIVOCALLY ACKNOWLEDGES AND AGREES
 * THAT THE SOFTWARE/FIRMWARE AND ITS DOCUMENTATIONS ("MEDIATEK SOFTWARE")
 * RECEIVED FROM MEDIATEK AND/OR ITS REPRESENTATIVES ARE PROVIDED TO RECEIVER
 * ON AN "AS-IS" BASIS ONLY. MEDIATEK EXPRESSLY DISCLAIMS ANY AND ALL
 * WARRANTIES, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE IMPLIED
 * WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE OR
 * NONINFRINGEMENT. NEITHER DOES MEDIATEK PROVIDE ANY WARRANTY WHATSOEVER WITH
 * RESPECT TO THE SOFTWARE OF ANY THIRD PARTY WHICH MAY BE USED BY,
 * INCORPORATED IN, OR SUPPLIED WITH THE MEDIATEK SOFTWARE, AND RECEIVER AGREES
 * TO LOOK ONLY TO SUCH THIRD PARTY FOR ANY WARRANTY CLAIM RELATING THERETO.
 * RECEIVER EXPRESSLY ACKNOWLEDGES THAT IT IS RECEIVER'S SOLE RESPONSIBILITY TO
 * OBTAIN FROM ANY THIRD PARTY ALL PROPER LICENSES CONTAINED IN MEDIATEK
 * SOFTWARE. MEDIATEK SHALL ALSO NOT BE RESPONSIBLE FOR ANY MEDIATEK SOFTWARE
 * RELEASES MADE TO RECEIVER'S SPECIFICATION OR TO CONFORM TO A PARTICULAR
 * STANDARD OR OPEN FORUM. RECEIVER'S SOLE AND EXCLUSIVE REMEDY AND MEDIATEK'S
 * ENTIRE AND CUMULATIVE LIABILITY WITH RESPECT TO THE MEDIATEK SOFTWARE
 * RELEASED HEREUNDER WILL BE, AT MEDIATEK'S OPTION, TO REVISE OR REPLACE THE
 * MEDIATEK SOFTWARE AT ISSUE, OR REFUND ANY SOFTWARE LICENSE FEES OR SERVICE
 * CHARGE PAID BY RECEIVER TO MEDIATEK FOR SUCH MEDIATEK SOFTWARE AT ISSUE.
 *
 * The following software/firmware and/or related documentation ("MediaTek
 * Software") have been modified by MediaTek Inc. All revisions are subject to
 * any receiver's applicable license agreements with MediaTek Inc.
 */

/********************************************************************************
 *	SRS Labs CONFIDENTIAL
 *	@Copyright 2010 by SRS Labs.
 *	All rights reserved.
 *
 *  Description:
 *  SRS Definition types, constants...
 *
 *	Author: Oscar Huang
 *	
 *	(RCS keywords below, do not edit)
 *  $Id: //srstech/srs_common/std_fxp/include/srs_definition_def.h#2 $
 *  $Author: oscarh $
 *  $Date: 2011/02/14 $
********************************************************************************/
#ifndef __SRS_DEFINITION_DEF_H__
#define __SRS_DEFINITION_DEF_H__

#include "srs_typedefs.h"

typedef struct _SRSDefinitionObj{int _;} *SRSDefinitionObj;

#define SRS_DEFINITION_OBJ_SIZE		(sizeof(_SRSDefinitionObj_t)+8)
#define SRS_DEFINITION_WORKSPACE_SIZE(blockSize)	(sizeof(srs_int32)*(blockSize)+8)

#define SRS_DEFINITION_IWL	1

///////////////////////////////////////////////////////////////////////////////////////////////////////
//SRS Internal use:
typedef struct
{
	int							Enable;				//Master enable, 0: disabled, non-zero: enabled
	srs_int16					InputGain;			//I16.SRS_DEFINITION_IWL
	srs_int16					OutputGain;			//I16.SRS_DEFINITION_IWL
	srs_int16					BypassGain;			//I16.SRS_DEFINITION_IWL	
	srs_int16					Factor;				//I16.SRS_DEFINITION_IWL
	const srs_int16				*DefFilter;
} _SRSDefinitionSettings_t;

typedef struct
{
	srs_int32					FilterState[2];
} _SRSDefinitionState_t;

typedef struct
{
	_SRSDefinitionSettings_t		Settings;
	_SRSDefinitionState_t			State;
} _SRSDefinitionObj_t;

#endif //__SRS_DEFINITION_DEF_H__
