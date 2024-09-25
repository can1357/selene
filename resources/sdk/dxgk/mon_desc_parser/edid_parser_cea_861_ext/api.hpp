#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mon_desc_parser::edid_parser_cea_861_ext
{
    // [ChangeCEABlock@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e6e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x73278, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e878, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) change_cea_block;
    
    // [GetColorimetryData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e72c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x732c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e8bc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_colorimetry_data;
    
    // [GetDataBlock@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e7b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x73350, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e948, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_data_block;
    
    // [GetDetTimParser@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e818, 0x762b0 bytes
    // dxgkrnl.sys .text:0x733b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e9a8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_det_tim_parser;
    
    // [GetDolbyVisionVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e858, 0x762b0 bytes
    // dxgkrnl.sys .text:0x733f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e9e8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_dolby_vision_vendor_data;
    
    // [GetHdmiForumVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5ea14, 0x762b0 bytes
    // dxgkrnl.sys .text:0x735ac, 0x84380 bytes
    // dxgkrnl.sys .text:0x5eba4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_hdmi_forum_vendor_data;
    
    // [GetHdmiLLCVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5eaa8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x73640, 0x84380 bytes
    // dxgkrnl.sys .text:0x5ec38, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_hdmi_llc_vendor_data;
    
    // [GetHDRData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e95c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x734f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x5eaec, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_hdr_data;
    
    // [GetMsftDisplayVendorData@EDID_PARSER_CEA_861_EXT@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5eb44, 0x762b0 bytes
    // dxgkrnl.sys .text:0x736dc, 0x84380 bytes
    // dxgkrnl.sys .text:0x5ecd4, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_msft_display_vendor_data;
};
#include "magic/api.end.hpp"
