#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_thread
{
    // [ActivateInputProcessing@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2e1c, 0x243e0 bytes
    // win32kbase.sys .text:0xa948c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) activate_input_processing;
    
    // [_CalledOnInputThread@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb30b8, 0x243e0 bytes
    // win32kbase.sys .text:0xa9728, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) called_on_input_thread;
    
    // [DeactivateInputProcessing@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2ecc, 0x243e0 bytes
    // win32kbase.sys .text:0xa953c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) deactivate_input_processing;
    
    // [DeclareThreadAsInput@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2d10, 0x243e0 bytes
    // win32kbase.sys .text:0xa9380, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) declare_thread_as_input;
    
    // [Initialize@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x277bc, 0x243e0 bytes
    // win32kbase.sys .text:0x7a31c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [IsInputThread@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x6f1f0, 0x243e0 bytes
    // win32kbase.sys .text:0x159c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) is_input_thread;
    
    // [IsInputThreadDesktopActive@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2f68, 0x243e0 bytes
    // win32kbase.sys .text:0xa95d8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_input_thread_desktop_active;
    
    // [RevokeThreadAsInput@CInputThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xb2dac, 0x243e0 bytes
    // win32kbase.sys .text:0xa941c, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) revoke_thread_as_input;
};
#include "magic/api.end.hpp"
