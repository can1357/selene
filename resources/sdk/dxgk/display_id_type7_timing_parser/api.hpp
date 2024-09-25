#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_id_type7_timing_parser
{
    // [IsValidBlock@DisplayID_Type7Timing_Parser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e2d4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x73238, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e464, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_valid_block;
};
#include "magic/api.end.hpp"
