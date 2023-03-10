/*
<:copyright-BRCM:2019:DUAL/GPL:standard 

   Copyright (c) 2019 Broadcom 
   All Rights Reserved

This program is free software; you can redistribute it and/or modify
it under the terms of the GNU General Public License, version 2, as published by
the Free Software Foundation (the "GPL").

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.


A copy of the GPL is available at http://www.broadcom.com/licenses/GPLv2.php, or by
writing to the Free Software Foundation, Inc., 59 Temple Place - Suite 330,
Boston, MA 02111-1307, USA.

:> 
*/

#ifndef PMC_ADDR_63146_H__
#define PMC_ADDR_63146_H__

/* FIXME! only fill those that I found from RTL */
#define PMB_BUS_MAX		2
#define PMB_BUS_ID_SHIFT	12

#define PMB_BUS_PCIE0		0
#define PMB_ADDR_PCIE0		(0 | PMB_BUS_PCIE0 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PCIE0		1

#define PMB_BUS_VDSL3_CORE	0
#define PMB_ADDR_VDSL3_CORE	(1 | PMB_BUS_VDSL3_CORE << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_VDSL3_CORE	1

#define PMB_BUS_EGPHY		0
#define PMB_ADDR_EGPHY		(2 | PMB_BUS_EGPHY << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_EGPHY		1	// not shown in spreadsheet

#define PMB_BUS_XRDP		0
#define PMB_ADDR_XRDP		(3 | PMB_BUS_XRDP << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_XRDP		3

#define PMB_BUS_USB30_2X	0
#define PMB_ADDR_USB30_2X	(4 | PMB_BUS_USB30_2X << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_USB30_2X	4

#define PMB_BUS_MEMC		0
#define PMB_ADDR_MEMC		(5 | PMB_BUS_MEMC << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_MEMC		1

#define PMB_BUS_PVTMON		0
#define PMB_ADDR_PVTMON		(6 | PMB_BUS_PVTMON << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PVTMON	0

#define PMB_BUS_PCIE1		0
#define PMB_ADDR_PCIE1		(7 | PMB_BUS_PCIE1 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PCIE1		1

#define PMB_BUS_PCIE2		0
#define PMB_ADDR_PCIE2		(8 | PMB_BUS_PCIE2 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PCIE2		1

#define PMB_BUS_PERIPH		1
#define PMB_ADDR_PERIPH		(9 | PMB_BUS_PERIPH << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PERIPH	4

#define PMB_BUS_VDSL3_PMD	1
#define PMB_ADDR_VDSL3_PMD	(10 | PMB_BUS_VDSL3_PMD << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_VDSL3_PMD	1

//--------- DGASP related bits/Offsets ------------------------
#define BPCM_PHY_CNTL_OVERRIDE		0x00000002	
#define BPCM_PHY_CNTL_AFE_PWRDWN	0x00000001
#define PMB_ADDR_VDSL_DGASP_PMD		PMB_ADDR_VDSL3_PMD
#define BPCM_VDSL_PHY_CTL_REG		vdsl_afe_config1	// Alias for register containing DGASP override inside the VDSL PMD
#define BPCM_VDSL_AFE_CTL_REG		vdsl_afe_config0	// Alias for register containing DGASP configuration inside the VDSL PMD

#define PMB_BUS_AFEPLL		1
#define PMB_ADDR_AFEPLL		(11 | PMB_BUS_AFEPLL << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_AFEPLL	1

#define AFEPLL_PMB_BUS_VDSL3_CORE	PMB_BUS_AFEPLL
#define AFEPLL_PMB_ADDR_VDSL3_CORE	PMB_ADDR_AFEPLL
#define AFEPLL_PMB_ZONES_VDSL3_CORE	PMB_ZONES_AFEPLL

#define PMB_BUS_CHIP_CLKRST	1
#define PMB_ADDR_CHIP_CLKRST	(12 | PMB_BUS_CHIP_CLKRST << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_CHIP_CLKRST	0

#define PMB_BUS_RDPPLL		1
#define PMB_ADDR_RDPPLL		(13 | PMB_BUS_RDPPLL << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_RDPPLL	0

#define PMB_BUS_BIU_PLL		1
#define PMB_ADDR_BIU_PLL	(32 | PMB_BUS_BIU_PLL << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_BIU_PLL	0

#define PMB_BUS_BIU_BPCM	1
#define PMB_ADDR_BIU_BPCM	(33 | PMB_BUS_BIU_BPCM << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_BIU_BPCM	1

#define PMB_BUS_ORION_CPU0	1
#define PMB_ADDR_ORION_CPU0	(34 | PMB_BUS_ORION_CPU0 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_ORION_CPU0	1

#define PMB_BUS_ORION_CPU1	1
#define PMB_ADDR_ORION_CPU1	(35 | PMB_BUS_ORION_CPU1 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_ORION_CPU1	1

#define PMB_BUS_ORION_NONCPU	1
#define PMB_ADDR_ORION_NONCPU	(38 | PMB_BUS_ORION_NONCPU << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_ORION_NONCPU	1

#define PMB_BUS_ORION_ARS	1
#define PMB_ADDR_ORION_ARS	(39 | PMB_BUS_ORION_ARS << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_ORION_ARS	0

#endif
