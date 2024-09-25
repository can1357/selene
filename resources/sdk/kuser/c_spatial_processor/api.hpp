#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_spatial_processor
{
    // [SatisfyNonPointerInputSinkInfoRequest@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x61e8, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) satisfy_non_pointer_input_sink_info_request;
    
    // [SpeedHitTest@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x22cdc, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) speed_hit_test;
    
    // [??0CSpatialProcessor@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x24d5c, 0x243e0 bytes
    // win32kbase.sys .text:0x76b9c, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [HitTest@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x71488, 0x243e0 bytes
    // win32kbase.sys .text:0x5ff98, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) hit_test;
    
    // [CheckAndSendPointerPositionEffectsUpdate@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbaed8, 0x243e0 bytes
    // win32kbase.sys .text:0xdd4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xb4838, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) check_and_send_pointer_position_effects_update;
    
    // [CheckAndUpdateLastPointerPositionEffectsTimestamp@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xbafec, 0x243e0 bytes
    // win32kbase.sys .text:0xdd5f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xb494c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) check_and_update_last_pointer_position_effects_timestamp;
    
    // [ResolveDcompHitTestResultToInputDest@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x71a90, 0x243e0 bytes
    // win32kbase.sys .text:0x22f40, 0x27ef0 bytes
    // win32kbase.sys .text:0x5f9fc, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) resolve_dcomp_hit_test_result_to_input_dest;
    
    // [ResolveInputSinkToINPUTDEST@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c48, 0x243e0 bytes
    // win32kbase.sys .text:0x1b88, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c48, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) resolve_input_sink_to_inputdest;
    
    // [_spfnInputHitTestCallback@CSpatialProcessor]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .data:0x25ad20, 0x243e0 bytes
    // win32kbase.sys .data:0x2afb38, 0x27ef0 bytes
    // win32kbase.sys .data:0x257d50, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) spfn_input_hit_test_callback;
};
#include "magic/api.end.hpp"
