#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::window_arrangement_sequence
{
    // [TestHotKey@WindowArrangementSequence]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1216b8, 0x13864 bytes
    //
    _m0(sdk::unknown_ptr) test_hot_key;
    
    // [fWindowArrangementSequenceInProgress@WindowArrangementSequence]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x329010, 0x13864 bytes
    // win32kfull.sys .data:0x33aeb0, 0x1596d bytes
    // win32kfull.sys .data:0x3391d0, 0x1659e bytes
    // win32kfull.sys .data:0x33aee0, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) f_window_arrangement_sequence_in_progress;
    
    // [TestSequence@WindowArrangementSequence]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x4f970, 0x13864 bytes
    // win32kfull.sys .text:0xda904, 0x1596d bytes
    // win32kfull.sys .text:0xef5c8, 0x1659e bytes
    // win32kfull.sys .text:0xdb5c4, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) test_sequence;
};
#include "magic/api.end.hpp"
