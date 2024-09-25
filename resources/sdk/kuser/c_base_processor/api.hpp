#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_base_processor
{
    // [_exEnvironment@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2afbac, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) ex_environment;
    
    // [GetExecutionEnvironment@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x21034, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) get_execution_environment;
    
    // [SetUMInputObservationState@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4994, 0x243e0 bytes
    // win32kbase.sys .text:0x1c2774, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) set_um_input_observation_state;
    
    // [IsUMSuppressed@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4968, 0x243e0 bytes
    // win32kbase.sys .text:0x20c3b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2748, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) is_um_suppressed;
    
    // [MasterInputThreadActivated@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0xad750, 0x27ef0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) master_input_thread_activated;
    
    // [MasterInputThreadDeactivated@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xc9bd0, 0x243e0 bytes
    // win32kbase.sys .text:0xdabd0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8570, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) master_input_thread_deactivated;
    
    // [PostQEventWork@CBaseProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x87eec, 0x243e0 bytes
    // win32kbase.sys .text:0xd0208, 0x27ef0 bytes
    // win32kbase.sys .text:0xb49b0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) post_q_event_work;
};
#include "magic/api.end.hpp"
