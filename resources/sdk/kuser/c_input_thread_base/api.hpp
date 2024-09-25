#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_thread_base
{
    // [ActivateInputProcessing@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86fb4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) activate_input_processing;
    
    // [_CalledOnInputThread@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87134, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) called_on_input_thread;
    
    // [DeactivateInputProcessing@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86da0, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) deactivate_input_processing;
    
    // [DeclareThreadAsInput@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86e3c, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) declare_thread_as_input;
    
    // [IsInputThread@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x204f8, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) is_input_thread;
    
    // [RevokeThreadAsInput@CInputThreadBase]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86d1c, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) revoke_thread_as_input;
};
#include "magic/api.end.hpp"
