#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::pointer
{
    // [NoTargetFound@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1e5cc4, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) no_target_found;
    
    // [AssignPointerId@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194dec, 0x243e0 bytes
    // win32kbase.sys .text:0x1d5574, 0x27ef0 bytes
    // win32kbase.sys .text:0x1931b8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) assign_pointer_id;
    
    // [BindToInputSpace@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x172cc8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ae600, 0x27ef0 bytes
    // win32kbase.sys .text:0x1710b8, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) bind_to_input_space;
    
    // [BufferInDelayZone@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x194f14, 0x243e0 bytes
    // win32kbase.sys .text:0x1d56a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1932e4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) buffer_in_delay_zone;
    
    // [CommitFrame@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x196aa8, 0x243e0 bytes
    // win32kbase.sys .text:0x1d7e58, 0x27ef0 bytes
    // win32kbase.sys .text:0x194eb0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) commit_frame;
    
    // [CommitFramePointer@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x196c40, 0x243e0 bytes
    // win32kbase.sys .text:0x1d7ff4, 0x27ef0 bytes
    // win32kbase.sys .text:0x195048, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) commit_frame_pointer;
    
    // [DropInput@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x199f54, 0x243e0 bytes
    // win32kbase.sys .text:0x1dc554, 0x27ef0 bytes
    // win32kbase.sys .text:0x198410, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) drop_input;
    
    // [GenerateMessage@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19b838, 0x243e0 bytes
    // win32kbase.sys .text:0x1de55c, 0x27ef0 bytes
    // win32kbase.sys .text:0x199d00, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) generate_message;
    
    // [GetPointerInfo@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19ec54, 0x243e0 bytes
    // win32kbase.sys .text:0x1e2684, 0x27ef0 bytes
    // win32kbase.sys .text:0x19d19c, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) get_pointer_info;
    
    // [GetPointerPenInfo@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19f484, 0x243e0 bytes
    // win32kbase.sys .text:0x1e312c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19da08, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) get_pointer_pen_info;
    
    // [GetPointerTouchInfo@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x19fe64, 0x243e0 bytes
    // win32kbase.sys .text:0x1e3ebc, 0x27ef0 bytes
    // win32kbase.sys .text:0x19e3fc, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) get_pointer_touch_info;
    
    // [HandleDesktopEdgy@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0b70, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4a8c, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f110, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) handle_desktop_edgy;
    
    // [HandleResultFromUserMode@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a0ff8, 0x243e0 bytes
    // win32kbase.sys .text:0x1e4f38, 0x27ef0 bytes
    // win32kbase.sys .text:0x19f5b8, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) handle_result_from_user_mode;
    
    // [PromoteToMouse@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x219a98, 0x1596d bytes
    // win32kfull.sys .text:0x15ccea, 0x1659e bytes
    // win32kfull.sys .text:0x219908, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) promote_to_mouse;
    
    // [RetrieveMessage@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e1874, 0x1596d bytes
    // win32kfull.sys .text:0x1dea1c, 0x1659e bytes
    // win32kfull.sys .text:0x1e16d4, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) retrieve_message;
    
    // [SecondaryHitTest@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a56b0, 0x243e0 bytes
    // win32kbase.sys .text:0x1eaf84, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3d68, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) secondary_hit_test;
    
    // [SendFrameToContainer@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c4ba8, 0x243e0 bytes
    // win32kbase.sys .text:0x20c558, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c2988, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) send_frame_to_container;
    
    // [SendFrameToUserMode@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a5834, 0x243e0 bytes
    // win32kbase.sys .text:0x1eb14c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3eec, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) send_frame_to_user_mode;
    
    // [SpeedHitTest@Pointer@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a8634, 0x243e0 bytes
    // win32kbase.sys .text:0x1eec24, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a6d10, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) speed_hit_test;
};
#include "magic/api.end.hpp"
