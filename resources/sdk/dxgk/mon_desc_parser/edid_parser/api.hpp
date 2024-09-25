#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mon_desc_parser::edid_parser
{
    // [GetBlockTypeCount@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x2769c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) get_block_type_count;
    
    // [GetWmiColorCharacteristics@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5ecf8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5ee88, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_wmi_color_characteristics;
    
    // [GetBlockType@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ed38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22e44, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f1bc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_block_type;
    
    // [GetColorimetryDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21308, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2acfc, 0x84380 bytes
    // dxgkrnl.sys .text:0x21350, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_colorimetry_data_block;
    
    // [GetDetTimParser@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb274, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19b20, 0x84380 bytes
    // dxgkrnl.sys .text:0xbabc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_det_tim_parser;
    
    // [GetDispDescAsASCIIString@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb01c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19b94, 0x84380 bytes
    // dxgkrnl.sys .text:0xb864, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_disp_desc_as_ascii_string;
    
    // [GetDispDescAsASCIIStringLength@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb4f8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19d5c, 0x84380 bytes
    // dxgkrnl.sys .text:0xbc64, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_disp_desc_as_ascii_string_length;
    
    // [GetDolbyVisionVendorDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21018, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2ac14, 0x84380 bytes
    // dxgkrnl.sys .text:0x21060, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_dolby_vision_vendor_data_block;
    
    // [GetHdmiForumVendorDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5ebe4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7377c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5ed74, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_hdmi_forum_vendor_data_block;
    
    // [GetHdmiLLCVendorDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x213ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x737f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x21434, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_hdmi_llc_vendor_data_block;
    
    // [GetHDRDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x210fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2a6c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x21144, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_hdr_data_block;
    
    // [GetIterAtElement@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb6a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19f08, 0x84380 bytes
    // dxgkrnl.sys .text:0xbe10, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) get_iter_at_element;
    
    // [GetMSFTDisplayVendorDataBlock@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x21588, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2a270, 0x84380 bytes
    // dxgkrnl.sys .text:0x215d0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) get_msft_display_vendor_data_block;
    
    // [GetWmiAnalogVideoInputParams@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23310, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2ada0, 0x84380 bytes
    // dxgkrnl.sys .text:0x23e0c, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_wmi_analog_video_input_params;
    
    // [GetWmiBasicDisplayParams@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5ec5c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7386c, 0x84380 bytes
    // dxgkrnl.sys .text:0x5edec, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) get_wmi_basic_display_params;
    
    // [Is18ByteDetTim@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb2b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19b60, 0x84380 bytes
    // dxgkrnl.sys .text:0xbafc, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) is18_byte_det_tim;
    
    // [Is18ByteDispDesc@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb4bc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19d20, 0x84380 bytes
    // dxgkrnl.sys .text:0xbc28, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) is18_byte_disp_desc;
    
    // [Initialize@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1688, 0x60098 bytes
    // dxgkrnl.sys .text:0xb5b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19e1c, 0x84380 bytes
    // dxgkrnl.sys .text:0xbd24, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) initialize;
    
    // [IsValidCheckSum@EDID_PARSER@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x15f4, 0x60098 bytes
    // dxgkrnl.sys .text:0xb644, 0x762b0 bytes
    // dxgkrnl.sys .text:0x19ea8, 0x84380 bytes
    // dxgkrnl.sys .text:0xbdb0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) is_valid_check_sum;
};
#include "magic/api.end.hpp"
