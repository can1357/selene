#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_manager
{
    // [??1CInputManager@@IEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0xd8190, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc53fc, 0x243e0 bytes
    // win32kbase.sys .text:0xd61f0, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe3ec, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) initialize;
    
    // [CleanupDwmInputThread@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f428, 0x1eb80 bytes
    // win32kbase.sys .text:0x2028b8, 0x243e0 bytes
    // win32kbase.sys .text:0x253450, 0x27ef0 bytes
    // win32kbase.sys .text:0x200688, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) cleanup_dwm_input_thread;
    
    // [CreateSessionGlobal@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x82ff0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc5360, 0x243e0 bytes
    // win32kbase.sys .text:0xd6150, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe350, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) create_session_global;
    
    // [DestroySessionGlobal@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x83880, 0x1eb80 bytes
    // win32kbase.sys .text:0xc5450, 0x243e0 bytes
    // win32kbase.sys .text:0xd8130, 0x27ef0 bytes
    // win32kbase.sys .text:0xbe440, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_session_global;
    
    // [DwmInputThread@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f4b4, 0x1eb80 bytes
    // win32kbase.sys .text:0x202954, 0x243e0 bytes
    // win32kbase.sys .text:0x2534f8, 0x27ef0 bytes
    // win32kbase.sys .text:0x200724, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) dwm_input_thread;
    
    // [IsDwmInputThread@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x3943c, 0x1eb80 bytes
    // win32kbase.sys .text:0x6fc10, 0x243e0 bytes
    // win32kbase.sys .text:0xbf6c0, 0x27ef0 bytes
    // win32kbase.sys .text:0x12140, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) is_dwm_input_thread;
    
    // [NotifyDwmInputThreadShutdown@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6280, 0x1eb80 bytes
    // win32kbase.sys .text:0xd5b50, 0x243e0 bytes
    // win32kbase.sys .text:0x253b50, 0x27ef0 bytes
    // win32kbase.sys .text:0xd54e0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) notify_dwm_input_thread_shutdown;
    
    // [OwnsPointerId@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf62a0, 0x1eb80 bytes
    // win32kbase.sys .text:0x202fdc, 0x243e0 bytes
    // win32kbase.sys .text:0x253b78, 0x27ef0 bytes
    // win32kbase.sys .text:0x200dac, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) owns_pointer_id;
    
    // [UpdatePointerCapture@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf6370, 0x1eb80 bytes
    // win32kbase.sys .text:0x2030c4, 0x243e0 bytes
    // win32kbase.sys .text:0x253c70, 0x27ef0 bytes
    // win32kbase.sys .text:0x200e94, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) update_pointer_capture;
    
    // [ValidateUserEvent@CInputManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2f6c0, 0x1eb80 bytes
    // win32kbase.sys .text:0x2031bc, 0x243e0 bytes
    // win32kbase.sys .text:0x253d5c, 0x27ef0 bytes
    // win32kbase.sys .text:0x200f8c, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) validate_user_event;
};
#include "magic/api.end.hpp"
