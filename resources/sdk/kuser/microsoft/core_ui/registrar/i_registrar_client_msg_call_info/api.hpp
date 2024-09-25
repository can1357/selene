#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::microsoft::core_ui::registrar::i_registrar_client_msg_call_info
{
    // [MethodInstructions@IRegistrarClient_MsgCallInfo@Registrar@CoreUI@Microsoft]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x2535a0, 0x243e0 bytes
    // win32kbase.sys .data:0x2a69f0, 0x27ef0 bytes
    // win32kbase.sys .data:0x250490, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) method_instructions;
};
#include "magic/api.end.hpp"
