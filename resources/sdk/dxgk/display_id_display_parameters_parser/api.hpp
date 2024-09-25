#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_id_display_parameters_parser
{
    // [IsValidBlock@DisplayID_DisplayParameters_Parser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5e2b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x72588, 0x84380 bytes
    // dxgkrnl.sys .text:0x5e448, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_valid_block;
};
#include "magic/api.end.hpp"
