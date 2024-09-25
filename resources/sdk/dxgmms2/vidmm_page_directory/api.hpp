#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_page_directory
{
    // [DestroyDisconnectedPageTables@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xa38a0, 0x20ba bytes
    //
    _m0(sdk::unknown_ptr) destroy_disconnected_page_tables;
    
    // [CheckPageTableInvalid@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x84a90, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x85080, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) check_page_table_invalid;
    
    // [ReportState@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc01f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe462c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc07c4, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) report_state;
    
    // [CommitPageDirectory@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50a2c, 0x158b bytes
    // dxgmms2.sys PAGE:0x81d1c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97730, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8230c, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) commit_page_directory;
    
    // [CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50ae0, 0x158b bytes
    // dxgmms2.sys PAGE:0x6edc0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x88af0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6f3b0, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) commit_virtual_address_range;
    
    // [??0VIDMM_PAGE_DIRECTORY@@QEAA@III@Z]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5209c, 0x158b bytes
    // dxgmms2.sys PAGE:0x82a18, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x994d0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x83008, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [DestroyPageDirectory@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50810, 0x158b bytes
    // dxgmms2.sys PAGE:0x817e4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99700, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81dd4, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) destroy_page_directory;
    
    // [DestroyPageDirectoryObjects@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50840, 0x158b bytes
    // dxgmms2.sys PAGE:0x8180c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97830, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81dfc, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) destroy_page_directory_objects;
    
    // [DestroyPdePageTableData@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92d60, 0x158b bytes
    // dxgmms2.sys PAGE:0x82100, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa37c4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x826f0, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) destroy_pde_page_table_data;
    
    // [EvictPageDirectory@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x504e0, 0x158b bytes
    // dxgmms2.sys PAGE:0x819cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97a40, 0x20ba bytes
    // dxgmms2.sys PAGE:0x81fbc, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) evict_page_directory;
    
    // [ExpandLargePagePte@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92df4, 0x158b bytes
    // dxgmms2.sys PAGE:0xbdcf8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2738, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe2c8, 0x1c52 bytes
    //
    _n0(sdk::unknown_ptr) expand_large_page_pte;
    
    // [ExpandZeroPte@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x92fd8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbdf2c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe2988, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbe4fc, 0x1c52 bytes
    //
    _n1(sdk::unknown_ptr) expand_zero_pte;
    
    // [HandleFullPageTableCoverage@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x936f0, 0x158b bytes
    // dxgmms2.sys PAGE:0x82014, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa36dc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82604, 0x1c52 bytes
    //
    _n2(sdk::unknown_ptr) handle_full_page_table_coverage;
    
    // [InitializePageDirectory@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x51f14, 0x158b bytes
    // dxgmms2.sys PAGE:0x81e88, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99298, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82478, 0x1c52 bytes
    //
    _n3(sdk::unknown_ptr) initialize_page_directory;
    
    // [MapPageTablesToVaSpace@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6ae18, 0x158b bytes
    // dxgmms2.sys PAGE:0xbe850, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xacee8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbee20, 0x1c52 bytes
    //
    _n4(sdk::unknown_ptr) map_page_tables_to_va_space;
    
    // [SetPageTableInPde@VIDMM_PAGE_DIRECTORY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x51e7c, 0x158b bytes
    // dxgmms2.sys PAGE:0x8529c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa287c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8588c, 0x1c52 bytes
    //
    _n5(sdk::unknown_ptr) set_page_table_in_pde;
};
#include "magic/api.end.hpp"
