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

#ifndef PMC_ADDR_6846_H__
#define PMC_ADDR_6846_H__

#define PMB_BUS_MAX              2
#define PMB_BUS_ID_SHIFT         12

#define PMB_BUS_PERIPH           0
#define PMB_ADDR_PERIPH          (0 | PMB_BUS_PERIPH << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PERIPH         4

#define PMB_BUS_CHIP_CLKRST      1
#define PMB_ADDR_CHIP_CLKRST     (1 | PMB_BUS_CHIP_CLKRST << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_CHIP_CLKRST    0

#define PMB_BUS_RDPPLL           1
#define PMB_ADDR_RDPPLL          (3 | PMB_BUS_RDPPLL << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_RDPPLL         0

#define PMB_BUS_PVTMON           1
#define PMB_ADDR_PVTMON          (6 | PMB_BUS_PVTMON << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PVTMON         0

#define PMB_BUS_MEMC             1
#define PMB_ADDR_MEMC            (8 | PMB_BUS_MEMC << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_MEMC           1

#define PMB_BUS_USB20_2X         1
#define PMB_ADDR_USB20_2X        (10 | PMB_BUS_USB20_2X << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_USB20_2X       4

#define PMB_BUS_WAN              1
#define PMB_ADDR_WAN             (11 | PMB_BUS_WAN << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_WAN            3

#define PMB_BUS_XRDP              1
#define PMB_ADDR_XRDP             (12 | PMB_BUS_XRDP << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_XRDP            3

#define PMB_BUS_XRDP_RC0          1
#define PMB_ADDR_XRDP_RC0         (14 | PMB_BUS_XRDP_RC0 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_XRDP_RC0        1

#define PMB_BUS_XRDP_RC1          1
#define PMB_ADDR_XRDP_RC1         (15 | PMB_BUS_XRDP_RC1 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_XRDP_RC1        1

#define PMB_BUS_XRDP_RC2          1
#define PMB_ADDR_XRDP_RC2         (16 | PMB_BUS_XRDP_RC2 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_XRDP_RC2        1

#define PMB_BUS_PCIE0             0
#define PMB_ADDR_PCIE0            (18 | PMB_BUS_PCIE0 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PCIE0           1

#define PMB_BUS_PCIE1             0
#define PMB_ADDR_PCIE1            (19 | PMB_BUS_PCIE1 << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_PCIE1           1

#define PMB_BUS_BIU_PLL           1
#define PMB_ADDR_BIU_PLL          (38 | PMB_BUS_BIU_PLL << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_BIU_PLL         1

#define PMB_BUS_BIU_BPCM          1
#define PMB_ADDR_BIU_BPCM         (39 | PMB_BUS_BIU_BPCM << PMB_BUS_ID_SHIFT)
#define PMB_ZONES_BIU_BPCM        1

#endif
