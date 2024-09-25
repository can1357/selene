#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace hsa
{
    // [HsaFlConfigureIntermediatePhysicalPte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f260, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) fl_configure_intermediate_physical_pte;
    
    // [HsaFlConfigureLeafPhysicalPfn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f2b0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) fl_configure_leaf_physical_pfn;
    
    // [HsaFlConfigureLeafPhysicalPte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f330, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) fl_configure_leaf_physical_pte;
    
    // [HsaFlGetPermissions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f3b0, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) fl_get_permissions;
    
    // [HsaFlGetPhyAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391280, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) fl_get_phy_address;
    
    // [HsaFlPhyPteInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x9a10, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) fl_phy_pte_interface;
    
    // [HsaSlGetPermissions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x51f610, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) sl_get_permissions;
    
    // [HsaSlGetPhyAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x391280, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) sl_get_phy_address;
    
    // [HsaAllocateRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dc4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51c870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dc3d0, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) allocate_remapping_table_entry;
    
    // [HsaAllocatedDeviceApertures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc487b4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48794, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) allocated_device_apertures;
    
    // [HsaAttachDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dc880, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51cc40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dc770, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) attach_device_domain;
    
    // [HsaAttachDeviceDomainInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dc898, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51cc58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dc788, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) attach_device_domain_internal;
    
    // [HsaBlockedPageTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xcf4ff8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17af8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4ff8, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) blocked_page_table;
    
    // [HsaBlockedPageTablePhysical]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc487d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc487b8, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) blocked_page_table_physical;
    
    // [HsaBuildDeviceTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcaa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51ce58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dc994, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) build_device_table_entry;
    
    // [HsaBuildInterruptRemappingEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcbd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51cfb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcac8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) build_interrupt_remapping_entry;
    
    // [HsaCompleteFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) complete_flush;
    
    // [HsaConfigureSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a77b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6720, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) configure_settings;
    
    // [HsaCreateDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d030, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcb40, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) create_device;
    
    // [HsaDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcd60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d150, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcc50, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) delete_device;
    
    // [HsaDetachDeviceDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcd90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcc80, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) detach_device_domain;
    
    // [HsaDeviceApertureLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48760, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48740, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) device_aperture_lock;
    
    // [HsaDeviceApertureRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc487e0, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) device_aperture_ranges;
    
    // [HsaEnumerateIvmdDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dcf50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dce40, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) enumerate_ivmd_devices;
    
    // [HsaFlushDomainTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dd0c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcfb0, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) flush_domain_tb;
    
    // [HsaFlushTbInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dd16c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d538, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dd05c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) flush_tb_internal;
    
    // [HsaFreeRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dd900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dd7f0, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) free_remapping_table_entry;
    
    // [HsaGetBlockedDomain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ddaa4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51db4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dd994, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) get_blocked_domain;
    
    // [HsaGetDeviceAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4ddaf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51dba0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dd9e8, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) get_device_aperture;
    
    // [HsaGetRidAcpiMapCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3eabc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51df30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ebc90, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) get_rid_acpi_map_count;
    
    // [HsaInitializeInterruptRemapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a7838, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84f38, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a67a8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) initialize_interrupt_remapping;
    
    // [HsaInvalidateDTE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hal.dll .text:0x34028, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ddfec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4ddedc, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) invalidate_dte;
    
    // [HsaInvalidateRemappingTableEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de058, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e0c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ddf48, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) invalidate_remapping_table_entries;
    
    // [HsaInvalidateRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ddfc0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) invalidate_remapping_table_entry;
    
    // [HsaIvhdList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc487c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc487a0, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) ivhd_list;
    
    // [HsaProcessDeviceExceptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de358, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e3c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de248, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) process_device_exceptions;
    
    // [HsaProcessIvmd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de450, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e4ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de340, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) process_ivmd;
    
    // [HsaProcessReservedDomains]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de4a0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) process_reserved_domains;
    
    // [HsaQueryAcpiDeviceMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de600, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de4f0, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) query_acpi_device_mapping;
    
    // [HsaSharedRemappingTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc48780, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48760, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) shared_remapping_table;
    
    // [HsaSlConfigureIntermediatePhysicalPte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4df260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51f460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df150, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) sl_configure_intermediate_physical_pte;
    
    // [HsaSlConfigureLeafPhysicalPfn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4df2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51f4c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df1a0, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) sl_configure_leaf_physical_pfn;
    
    // [HsaSlConfigureLeafPhysicalPte]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4df340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51f550, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4df230, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) sl_configure_leaf_physical_pte;
    
    // [HsaSlPhyPteInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x8b90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x9a38, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x8bc0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) sl_phy_pte_interface;
    
    // [HsaSyncFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) sync_flush;
    
    // [HsaTotalDeviceApertures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc487a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7cc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc48788, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) total_device_apertures;
    
    // [HsaUpdateDeviceTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de778, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de668, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) update_device_table_entry;
    
    // [HsaUpdateExtendedDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4db47c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51b72c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4db36c, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) update_extended_destination;
    
    // [HsaUpdateInterruptDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4de97c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51eab4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de86c, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) update_interrupt_destination;
    
    // [HsaUpdateRemappingDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dea40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51eb70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de930, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) update_remapping_destination;
    
    // [HsaUpdateRemappingTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4debf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51ed30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4deae0, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) update_remapping_table_entry;
    
    // [HsaUpdateRemappingTableInDeviceTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4dedc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51ef0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4decb4, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) update_remapping_table_in_device_table_entry;
    
    // [HsaUpdateSingleTargetExtendedDestination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4db900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51bc38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4db7f0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) update_single_target_extended_destination;
    
    // [HsaDisableInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGE:0x5ac80, 0x11e8 bytes
    // ntoskrnl.exe PAGE:0x864270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x931800, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8626a0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) disable_interrupt;
    
    // [HsaDismissPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x33350, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dcdb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcca0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) dismiss_page_fault;
    
    // [HsaEnableInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62630, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a7810, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa84f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6780, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) enable_interrupt;
    
    // [HsaEnsureNoPendingFaults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x3341c, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dce78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcd68, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) ensure_no_pending_faults;
    
    // [HsaFindDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x334e0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dd000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcef0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) find_device;
    
    // [HsaFlushDeviceTbOnly]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x33520, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dd030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dcf20, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) flush_device_tb_only;
    
    // [HsaFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x335f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dd120, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51d500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dd010, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) flush_tb;
    
    // [HsaGetPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x33bb0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ddb50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51dc00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dda40, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) get_page_fault;
    
    // [HsaGrowPasidTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x33ec0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4dde80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51df90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ddd70, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) grow_pasid_table;
    
    // [HsaHandleInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x33fd0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4ddf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4dde70, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) handle_interrupt;
    
    // [HsaInitializeIommu]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64920, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a79e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa850d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6950, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) initialize_iommu;
    
    // [HsaIommuSendCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x34104, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4de0e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e158, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4ddfd8, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) iommu_send_command;
    
    // [HsaMarkHiberRegions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x64d00, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a7f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85630, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6e70, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) mark_hiber_regions;
    
    // [HsaPhysicalMemoryApi]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .data:0x4b7c8, 0x11e8 bytes
    // ntoskrnl.exe .data:0xc487d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5f7d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc487b0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) physical_memory_api;
    
    // [HsaSetDevicePasidTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x342d0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4de690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de580, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) set_device_pasid_table;
    
    // [HsaSetDeviceSvmCapabilities]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x343c0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4de6c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de5b0, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) set_device_svm_capabilities;
    
    // [HsaSetMessageInterruptRouting]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll PAGELK:0x62650, 0x11e8 bytes
    // ntoskrnl.exe PAGELK:0x9a7fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa856d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a6f20, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) set_message_interrupt_routing;
    
    // [HsaSetPasidAddressSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x343f0, 0x11e8 bytes
    // ntoskrnl.exe .text:0x4de6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x51e790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4de5e0, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) set_pasid_address_space;
};
#include "magic/api.end.hpp"
