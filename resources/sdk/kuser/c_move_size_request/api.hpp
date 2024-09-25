#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_move_size_request
{
    // [cNextMoveSizeOpRequestId@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .data:0x34182c, 0x1596d bytes
    // win32kfull.sys .data:0x3417ec, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) c_next_move_size_op_request_id;
    
    // [CreateAndPostRequest@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x24245c, 0x1596d bytes
    // win32kfull.sys .text:0x24230c, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) create_and_post_request;
    
    // [xxxRequestMoveSizeOperation@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x242544, 0x1596d bytes
    // win32kfull.sys .text:0x2423f4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) xxx_request_move_size_operation;
    
    // [xxxRevalidateAndTransferCapture@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x2425a8, 0x1596d bytes
    // win32kfull.sys .text:0x242458, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) xxx_revalidate_and_transfer_capture;
    
    // [xxxSendSysCommandToWindow@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x242778, 0x1596d bytes
    // win32kfull.sys .text:0x242628, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) xxx_send_sys_command_to_window;
    
    // [xxxValidateCapture@CMoveSizeRequest]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .text:0x242850, 0x1596d bytes
    // win32kfull.sys .text:0x242700, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) xxx_validate_capture;
};
#include "magic/api.end.hpp"
