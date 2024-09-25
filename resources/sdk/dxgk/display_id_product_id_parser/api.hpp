#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::display_id_product_id_parser
{
    // [IsValidBlock@DisplayID_ProductId_Parser]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5d604, 0x762b0 bytes
    // dxgkrnl.sys .text:0x72198, 0x84380 bytes
    // dxgkrnl.sys .text:0x5d794, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_valid_block;
};
#include "magic/api.end.hpp"
