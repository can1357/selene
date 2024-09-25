#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_disable_scanout_token
{
    // [Create@CDisableScanoutToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x828f4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [GetModel@CDisableScanoutToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x20380, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) get_model;
    
    // [InFrame@CDisableScanoutToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x829a0, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) in_frame;
    
    // [SendToTokenManager@CDisableScanoutToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x829c4, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) send_to_token_manager;
};
#include "magic/api.end.hpp"
