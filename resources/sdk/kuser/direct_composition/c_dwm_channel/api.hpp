#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_dwm_channel
{
    // [Create@CDwmChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x80a60, 0x1eb80 bytes
    // win32kbase.sys .text:0xc015c, 0x243e0 bytes
    // win32kbase.sys .text:0xa09bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x7e59c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [GetBatchMinimumPayloadSize@CDwmChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f7a0, 0x1eb80 bytes
    // win32kbase.sys .text:0xc9e80, 0x243e0 bytes
    // win32kbase.sys .text:0xaaf80, 0x27ef0 bytes
    // win32kbase.sys .text:0xc8820, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) get_batch_minimum_payload_size;
    
    // [GetType@CDwmChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x8f980, 0x1eb80 bytes
    // win32kbase.sys .text:0xabbf0, 0x243e0 bytes
    // win32kbase.sys .text:0xc9c80, 0x27ef0 bytes
    // win32kbase.sys .text:0xa18c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) get_type;
    
    // [ReferenceHandleAndLock@CDwmChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69408, 0x1eb80 bytes
    // win32kbase.sys .text:0x74bec, 0x243e0 bytes
    // win32kbase.sys .text:0x27b7c, 0x27ef0 bytes
    // win32kbase.sys .text:0xccfc, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) reference_handle_and_lock;
    
    // [SubmitDwmBatch@CDwmChannel@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x69370, 0x1eb80 bytes
    // win32kbase.sys .text:0x744bc, 0x243e0 bytes
    // win32kbase.sys .text:0x2a3bc, 0x27ef0 bytes
    // win32kbase.sys .text:0xc5cc, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) submit_dwm_batch;
};
#include "magic/api.end.hpp"
