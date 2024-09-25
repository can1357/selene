#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvail
{
    // [IsValid@DXGVAIL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ae30, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) is_valid;
    
    // [Delete@DXGVAIL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2afd10, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x351790, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2afdb0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) _delete;
    
    // [GetType@DXGVAIL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a7a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ae20, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
};
#include "magic/api.end.hpp"
