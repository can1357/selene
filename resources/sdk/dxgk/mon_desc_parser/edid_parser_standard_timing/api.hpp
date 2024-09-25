#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::mon_desc_parser::edid_parser_standard_timing
{
    // [IsUnused@EDID_PARSER_STANDARD_TIMING@MonDescParser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1ecfc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x22e08, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f180, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_unused;
};
#include "magic/api.end.hpp"
