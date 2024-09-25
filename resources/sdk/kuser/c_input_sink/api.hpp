#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_input_sink
{
    // [GetBaseWindowForInputType@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x203844, 0x243e0 bytes
    // win32kbase.sys .text:0x201614, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) get_base_window_for_input_type;
    
    // [IsLockValid@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x335d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xac0c0, 0x243e0 bytes
    // win32kbase.sys .text:0xa1fe0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) is_lock_valid;
    
    // [Delete@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33620, 0x1eb80 bytes
    // win32kbase.sys .text:0xb8070, 0x243e0 bytes
    // win32kbase.sys .text:0xd0680, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2200, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) _delete;
    
    // [??0CInputSink@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33538, 0x1eb80 bytes
    // win32kbase.sys .text:0xa702c, 0x243e0 bytes
    // win32kbase.sys .text:0xb0494, 0x27ef0 bytes
    // win32kbase.sys .text:0x960ec, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [CreateInputQueue@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x338c4, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6dc0, 0x243e0 bytes
    // win32kbase.sys .text:0xb0288, 0x27ef0 bytes
    // win32kbase.sys .text:0x95e80, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) create_input_queue;
    
    // [GetType@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f7b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xabbf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9c80, 0x27ef0 bytes
    // win32kbase.sys .text:0xa18c0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) get_type;
    
    // [Initialize@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x336a8, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6ce0, 0x243e0 bytes
    // win32kbase.sys .text:0xb01a8, 0x27ef0 bytes
    // win32kbase.sys .text:0x95da0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [InvalidateAndReleaseQueues@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x337d8, 0x1eb80 bytes
    // win32kbase.sys .text:0xa71fc, 0x243e0 bytes
    // win32kbase.sys .text:0xaff98, 0x27ef0 bytes
    // win32kbase.sys .text:0x962bc, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) invalidate_and_release_queues;
    
    // [IsValid@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f8d0, 0x1eb80 bytes
    // win32kbase.sys .text:0xca130, 0x243e0 bytes
    // win32kbase.sys .text:0xdb1e0, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8ad0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) is_valid;
    
    // [MarkInvalid@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33660, 0x1eb80 bytes
    // win32kbase.sys .text:0xa70c0, 0x243e0 bytes
    // win32kbase.sys .text:0xaf5e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x96180, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) mark_invalid;
    
    // [Open@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x335f0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb1200, 0x243e0 bytes
    // win32kbase.sys .text:0xc8980, 0x27ef0 bytes
    // win32kbase.sys .text:0xa7690, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) open;
    
    // [QueryInputQueueForInputType@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xf64a8, 0x1eb80 bytes
    // win32kbase.sys .text:0x734cc, 0x243e0 bytes
    // win32kbase.sys .text:0xafe04, 0x27ef0 bytes
    // win32kbase.sys .text:0xb5dc, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) query_input_queue_for_input_type;
    
    // [QueryInputQueueTypes@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x334b0, 0x1eb80 bytes
    // win32kbase.sys .text:0xaca5c, 0x243e0 bytes
    // win32kbase.sys .text:0xaff08, 0x27ef0 bytes
    // win32kbase.sys .text:0xa31cc, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) query_input_queue_types;
    
    // [SetDropTarget@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x33758, 0x1eb80 bytes
    // win32kbase.sys .text:0xa6bc8, 0x243e0 bytes
    // win32kbase.sys .text:0xb008c, 0x27ef0 bytes
    // win32kbase.sys .text:0x95c88, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) set_drop_target;
    
    // [UnlockAndRelease@CInputSink]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x337b0, 0x1eb80 bytes
    // win32kbase.sys .text:0x73440, 0x243e0 bytes
    // win32kbase.sys .text:0xafcc0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb550, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) unlock_and_release;
};
#include "magic/api.end.hpp"
