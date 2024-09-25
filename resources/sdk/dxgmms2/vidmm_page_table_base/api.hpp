#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_page_table_base
{
    // [GetSegmentOffsetInPages@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x12f24, 0x158b bytes
    // dxgmms2.sys .text:0x2607c, 0x1c52 bytes
    // dxgmms2.sys .text:0x25ffc, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) get_segment_offset_in_pages;
    
    // [ReportState@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc02b4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe46ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0884, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) report_state;
    
    // [CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52138, 0x158b bytes
    // dxgmms2.sys PAGE:0x82808, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98e84, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82df8, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) create_vid_mm_objects;
    
    // [FreeCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6afdc, 0x158b bytes
    // dxgmms2.sys PAGE:0x70940, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99230, 0x20ba bytes
    // dxgmms2.sys PAGE:0x70f30, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) free_cpu_visible_address;
    
    // [FreeDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x5233c, 0x158b bytes
    // dxgmms2.sys PAGE:0x6ec08, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x991e0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x6f1f8, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) free_driver_update_address;
    
    // [GetCpuVisibleAddress@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x6b080, 0x158b bytes
    // dxgmms2.sys PAGE:0x70894, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2074, 0x20ba bytes
    // dxgmms2.sys PAGE:0x70e84, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) get_cpu_visible_address;
    
    // [GetDriverUpdateAddress@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x52380, 0x158b bytes
    // dxgmms2.sys PAGE:0x707bc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x8a180, 0x20ba bytes
    // dxgmms2.sys PAGE:0x70dac, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) get_driver_update_address;
    
    // [GetSegmentAddressMdl@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12ef8, 0x158b bytes
    // dxgmms2.sys .text:0x26044, 0x1c52 bytes
    // dxgmms2.sys .text:0x1c524, 0x20ba bytes
    // dxgmms2.sys .text:0x25fc4, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) get_segment_address_mdl;
    
    // [IsResident@VIDMM_PAGE_TABLE_BASE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2050, 0x158b bytes
    // dxgmms2.sys .text:0x12944, 0x1c52 bytes
    // dxgmms2.sys .text:0x15508, 0x20ba bytes
    // dxgmms2.sys .text:0x12944, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) is_resident;
};
#include "magic/api.end.hpp"
