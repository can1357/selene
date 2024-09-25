#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::i_registrar_client_msg_call_info
{
    // [MethodInstructions@IRegistrarClient_MsgCallInfo]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .data:0x11cb70, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) method_instructions;
};
#include "magic/api.end.hpp"
