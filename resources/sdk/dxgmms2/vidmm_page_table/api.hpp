#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_page_table
{
    // [UncommitVirtualAddressRange@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6fae0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x700d0, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) uncommit_virtual_address_range;
    
    // [CommitPageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e318, 0x158b bytes
    // dxgmms2.sys PAGE:0x8242c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98be8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82a1c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) commit_page_table;
    
    // [CommitVirtualAddressRange@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d840, 0x158b bytes
    // dxgmms2.sys PAGE:0x709d8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8a250, 0x20ba bytes
    // dxgmms2.sys PAGE:0x70fc8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) commit_virtual_address_range;
    
    // [DestroyPageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4dcf4, 0x158b bytes
    // dxgmms2.sys PAGE:0x82184, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98054, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82774, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) destroy_page_table;
    
    // [EvictPageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e234, 0x158b bytes
    // dxgmms2.sys PAGE:0x82278, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98148, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82868, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) evict_page_table;
    
    // [InitializePageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4ddc0, 0x158b bytes
    // dxgmms2.sys PAGE:0x825c4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98d78, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82bb4, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) initialize_page_table;
    
    // [InvalidatePageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4dff0, 0x158b bytes
    // dxgmms2.sys PAGE:0x82fe4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9e510, 0x20ba bytes
    // dxgmms2.sys PAGE:0x835d4, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) invalidate_page_table;
    
    // [ModifyPageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e110, 0x158b bytes
    // dxgmms2.sys PAGE:0x70d10, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8a760, 0x20ba bytes
    // dxgmms2.sys PAGE:0x71300, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) modify_page_table;
    
    // [UpdatePageTable@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x885c8, 0x158b bytes
    // dxgmms2.sys PAGE:0x6ea78, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe4b88, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6f068, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) update_page_table;
    
    // [UpdatePageTableInvalidate@VIDMM_PAGE_TABLE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4decc, 0x158b bytes
    // dxgmms2.sys PAGE:0x826d8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x990a8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82cc8, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) update_page_table_invalidate;
};
#include "magic/api.end.hpp"
