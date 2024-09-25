#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::interactive_control_input
{
    // [??1InteractiveControlInput@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x25830c, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0InteractiveControlInput@@QEAA@PEAVInteractiveControlDevice@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x149eb0, 0x13864 bytes
    // win32kfull.sys .text:0x25909c, 0x1596d bytes
    // win32kfull.sys .text:0x258284, 0x1659e bytes
    // win32kfull.sys .text:0x258fac, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [GenerateCtrlInputMessages@InteractiveControlInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240b3c, 0x13864 bytes
    // win32kfull.sys .text:0x259124, 0x1596d bytes
    // win32kfull.sys .text:0x258340, 0x1659e bytes
    // win32kfull.sys .text:0x259034, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) generate_ctrl_input_messages;
    
    // [GenerateMessages@InteractiveControlInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240c4c, 0x13864 bytes
    // win32kfull.sys .text:0x259240, 0x1596d bytes
    // win32kfull.sys .text:0x25845c, 0x1659e bytes
    // win32kfull.sys .text:0x259150, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) generate_messages;
    
    // [ParseInputReport@InteractiveControlInput]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x240f84, 0x13864 bytes
    // win32kfull.sys .text:0x259554, 0x1596d bytes
    // win32kfull.sys .text:0x258770, 0x1659e bytes
    // win32kfull.sys .text:0x259464, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) parse_input_report;
};
#include "magic/api.end.hpp"
