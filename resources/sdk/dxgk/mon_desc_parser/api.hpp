#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mon_desc_parser
{
    // [CeaVideoFormatEntries@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .data:0xaf1d0, 0x762b0 bytes
    // dxgkrnl.sys .data:0xaf1d0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) cea_video_format_entries;
    
    // [CalculateVerticalActivePixelsFrom@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1eaa0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22bac, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ef24, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) calculate_vertical_active_pixels_from;
    
    // [DenseOnesBitCount@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ed20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22e2c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f1a4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) dense_ones_bit_count;
    
    // [GTF_InitWorkset@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e9dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22ae8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ee60, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) gtf_init_workset;
    
    // [GTF_UsingVerticalRefreshFrequency_Stage1@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1e75c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22868, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ebe0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) gtf_using_vertical_refresh_frequency_stage1;
};
#include "magic/api.end.hpp"
