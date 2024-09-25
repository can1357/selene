#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pointer
{
    // [GetPointerInfoByPointerId@Pointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2442c4, 0x1596d bytes
    // win32kfull.sys .text:0x241cf4, 0x1659e bytes
    // win32kfull.sys .text:0x244194, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_pointer_info_by_pointer_id;
    
    // [GetPointerInfoByPointerMsgId@Pointer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x244328, 0x1596d bytes
    // win32kfull.sys .text:0x15d74c, 0x1659e bytes
    // win32kfull.sys .text:0x2441f8, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) get_pointer_info_by_pointer_msg_id;
};
#include "magic/api.end.hpp"
