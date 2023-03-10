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
#ifndef _BCM_MEM_RESERVE_H
#define _BCM_MEM_RESERVE_H


/* Push DTB higher as it will be removed by Linux alter on */
/* Address range         Size(KB)
   0x00000000:0x00004000   16  to boot secondary ARM CPU
   0x00004000:0x000C0000  752  to keep ATF firmware
   0x000C0000:0x000F0000  192  to keep PMC firmware
   0x000F0000:0x00100000   64  to keep PMC firmware log

   Any change in the following defines must be reflected in Linux device tree (/memreserve)
*/
#if defined(CONFIG_ARM64)
#define CFG_BOOT_AREA_ADDR      0
#else
#define CFG_BOOT_AREA_ADDR      0x1000
#define ARM_ATAG_LOC            CFG_DTB_ADDRESS
#endif
#define CFG_BOOT_AREA_SIZE      (0x4000 - CFG_BOOT_AREA_ADDR)

/* ATF reserved memory */
#define CFG_ATF_AREA_ADDR       (CFG_BOOT_AREA_ADDR + CFG_BOOT_AREA_SIZE)
#define CFG_ATF_AREA_SIZE       0xBC000                           // Total ATF reserved memory size 752KB

/* PMC reserved memory */
#define PMC_RESERVED_MEM_START  (CFG_ATF_AREA_ADDR + CFG_ATF_AREA_SIZE)
#define PMC_RESERVED_MEM_SIZE   0x40000                           // Total PMC reserved memory size 256KB

#ifdef CONFIG_BCM963148
/* Reuse unused PMC reserved memory for DSL */
#define DSL_RESERVED_MEM_START  PMC_RESERVED_MEM_START
#define DSL_RESERVED_MEM_SIZE   PMC_RESERVED_MEM_SIZE
#endif

#define CFG_BOOT_PMC_LOG_SIZE   0x10000                           // Leave 64K reserved memory for PMC log
#define CFG_BOOT_PMC_ADDR       (PMC_RESERVED_MEM_START)
#define CFG_BOOT_PMC_SIZE       (PMC_RESERVED_MEM_SIZE  - CFG_BOOT_PMC_LOG_SIZE) // Memory reserved for PMC firmware
#define CFG_BOOT_PMC_LOG_ADDR   (PMC_RESERVED_MEM_START + CFG_BOOT_PMC_SIZE)


/* **NOTE** any change in CFG_BOOT_PMC_ADDR must be reflected in PMC makefiles */

/* OPTEE reserved memory */
#define CFG_OPTEE_AREA_ADDR     (PMC_RESERVED_MEM_START + PMC_RESERVED_MEM_SIZE)
#define CFG_OPTEE_CORE_SIZE     0x400000                          // Total OPTEE reserved memory size 4096KB
#define CFG_OPTEE_SHRM_SIZE     0x100000                          // Shared memory 1024KB between OPTEE and Linux
#define CFG_OPTEE_SHRM_ADDR     (CFG_OPTEE_AREA_ADDR + CFG_OPTEE_CORE_SIZE)
#define CFG_OPTEE_AREA_SIZE     (CFG_OPTEE_CORE_SIZE + CFG_OPTEE_SHRM_SIZE)

#ifdef CONFIG_OPTEE
#define CFG_MAX_RESV_AREA       (CFG_OPTEE_AREA_ADDR + CFG_OPTEE_AREA_SIZE)
#else
#define CFG_MAX_RESV_AREA       (PMC_RESERVED_MEM_START + PMC_RESERVED_MEM_SIZE)
#endif

#if ( CFG_MAX_RESV_AREA > 0x600000 )
#error "Reserved memory exceeded the allowed (6MB) limit"
#endif


#if ( CFG_MAX_RESV_AREA != 0x100000 ) && ( CFG_MAX_RESV_AREA != 0x600000 )
#error "Time to update kernel/linux-4.x/arch/armxx/Makefile"
#endif

#if defined(CONFIG_ARM64)
#define LINUX_START_ADDR        CFG_MAX_RESV_AREA
#else
/* For 32 bit ARM, Linux needs extra 32K head room for MMU table */
#define LINUX_START_ADDR        (CFG_MAX_RESV_AREA + 0x8000)
#endif

#endif /* _BCM_MEM_RESERVE_H */
