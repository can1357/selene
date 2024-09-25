#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::pointer_promotion
{
    // [OnPointerInputRetrieval@PointerPromotion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x234050, 0x13864 bytes
    // win32kfull.sys .text:0x21957c, 0x1596d bytes
    // win32kfull.sys .text:0x216258, 0x1659e bytes
    // win32kfull.sys .text:0x2193ec, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) on_pointer_input_retrieval;
    
    // [xxxProcessPointerInputAsMouse@PointerPromotion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x234a10, 0x13864 bytes
    // win32kfull.sys .text:0x21a0f4, 0x1596d bytes
    // win32kfull.sys .text:0x216bfc, 0x1659e bytes
    // win32kfull.sys .text:0x219f64, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) xxx_process_pointer_input_as_mouse;
    
    // [xxxPromotePointer@PointerPromotion]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x234be0, 0x13864 bytes
    // win32kfull.sys .text:0x21a300, 0x1596d bytes
    // win32kfull.sys .text:0x216e08, 0x1659e bytes
    // win32kfull.sys .text:0x21a170, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) xxx_promote_pointer;
};
#include "magic/api.end.hpp"
