#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_id_section_parser
{
    // [ComputeChecksum@DisplayID_Section_Parser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x714dc, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) compute_checksum;
};
#include "magic/api.end.hpp"
