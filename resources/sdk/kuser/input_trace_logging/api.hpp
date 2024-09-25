#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging
{
    // [MitEndpointToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1f3210, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) mit_endpoint_to_string;
    
    // [RapidHpdToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x220e0c, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) rapid_hpd_to_string;
    
    // [WindowStateToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x239ec4, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) window_state_to_string;
    
    // [ButtonChangeTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e374, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb038, 0x27ef0 bytes
    // win32kbase.sys .text:0x17c764, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) button_change_type_to_string;
    
    // [CommitMousePosAndMoveResultToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8720, 0x243e0 bytes
    // win32kbase.sys .text:0x211840, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6500, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) commit_mouse_pos_and_move_result_to_string;
    
    // [CompletionReasonToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e67c, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb228, 0x27ef0 bytes
    // win32kbase.sys .text:0x17ca6c, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) completion_reason_to_string;
    
    // [CompositionInputQueueTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x203778, 0x243e0 bytes
    // win32kbase.sys .text:0x2543ac, 0x27ef0 bytes
    // win32kbase.sys .text:0x201548, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) composition_input_queue_type_to_string;
    
    // [ContactPopulationSourceToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x184e54, 0x243e0 bytes
    // win32kbase.sys .text:0x1c390c, 0x27ef0 bytes
    // win32kbase.sys .text:0x183244, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) contact_population_source_to_string;
    
    // [CurIndexName@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4658, 0x1596d bytes
    // win32kfull.sys .text:0x1d1e54, 0x1659e bytes
    // win32kfull.sys .text:0x1d44f8, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) cur_index_name;
    
    // [CursorSuppressionToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d8d74, 0x1596d bytes
    // win32kfull.sys .text:0x1d6438, 0x1659e bytes
    // win32kfull.sys .text:0x1d8c14, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) cursor_suppression_to_string;
    
    // [CursorToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d4688, 0x1596d bytes
    // win32kfull.sys .text:0x1d1e84, 0x1659e bytes
    // win32kfull.sys .text:0x1d4528, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) cursor_to_string;
    
    // [DelegationResponseToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0b1c, 0x1596d bytes
    // win32kfull.sys .text:0x1de270, 0x1659e bytes
    // win32kfull.sys .text:0x1e0988, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) delegation_response_to_string;
    
    // [DeviceTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b9a0c, 0x243e0 bytes
    // win32kbase.sys .text:0x201724, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b77ec, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) device_type_to_string;
    
    // [DispatcherHandleNameToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1acebc, 0x243e0 bytes
    // win32kbase.sys .text:0x1f36e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ab5dc, 0x243e0 bytes
    //
    _n3(sdk::unknown_ptr) dispatcher_handle_name_to_string;
    
    // [DropReasonToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c8e28, 0x243e0 bytes
    // win32kbase.sys .text:0x1f61b4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1c6c08, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) drop_reason_to_string;
    
    // [Enabled@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb11e8, 0x1596d bytes
    // win32kfull.sys .text:0xa8564, 0x1659e bytes
    // win32kfull.sys .text:0xb1d58, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) enabled;
    
    // [GetCursorOrFrame@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d483c, 0x1596d bytes
    // win32kfull.sys .text:0x1d2034, 0x1659e bytes
    // win32kfull.sys .text:0x1d46dc, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) get_cursor_or_frame;
    
    // [GetWindowDetails@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e0f34, 0x1596d bytes
    // win32kfull.sys .text:0x15a27e, 0x1659e bytes
    // win32kfull.sys .text:0x1e0da0, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) get_window_details;
    
    // [InertiaSourceToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b2bac, 0x243e0 bytes
    // win32kbase.sys .text:0x1f951c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b095c, 0x243e0 bytes
    //
    _n8(sdk::unknown_ptr) inertia_source_to_string;
    
    // [InjectionSourceToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x175c24, 0x243e0 bytes
    // win32kbase.sys .text:0x1b1b50, 0x27ef0 bytes
    // win32kbase.sys .text:0x174014, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) injection_source_to_string;
    
    // [InputModeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x175470, 0x243e0 bytes
    // win32kbase.sys .text:0x1954ec, 0x27ef0 bytes
    // win32kbase.sys .text:0x173860, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) input_mode_to_string;
    
    // [IsMouseInputMessage@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xb15f8, 0x1596d bytes
    // win32kfull.sys .text:0x3b6c0, 0x1659e bytes
    // win32kfull.sys .text:0xb2168, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) is_mouse_input_message;
    
    // [OrientationToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcf6c, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc154, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bad4c, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) orientation_to_string;
    
    // [OriginIdToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b9f5c, 0x243e0 bytes
    // win32kbase.sys .text:0x201c84, 0x27ef0 bytes
    // win32kbase.sys .text:0x1b7d3c, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) origin_id_to_string;
    
    // [PointerDeviceTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dc1ac, 0x1596d bytes
    // win32kfull.sys .text:0x1d85b0, 0x1659e bytes
    // win32kfull.sys .text:0x1dc04c, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) pointer_device_type_to_string;
    
    // [PointerTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17f7b8, 0x243e0 bytes
    // win32kbase.sys .text:0x1bc6b8, 0x27ef0 bytes
    // win32kbase.sys .text:0x17dba8, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) pointer_type_to_string;
    
    // [PTPDownlevelActionToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1b0ccc, 0x243e0 bytes
    // win32kbase.sys .text:0x1f74a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x1aea7c, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) ptp_downlevel_action_to_string;
    
    // [RimDevTypeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1615c8, 0x243e0 bytes
    // win32kbase.sys .text:0x195638, 0x27ef0 bytes
    // win32kbase.sys .text:0x15f9b8, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) rim_dev_type_to_string;
    
    // [RoutingModeToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1a55cc, 0x243e0 bytes
    // win32kbase.sys .text:0x1eaf3c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1a3c84, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) routing_mode_to_string;
    
    // [ScalingToString@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1bcfb4, 0x243e0 bytes
    // win32kbase.sys .text:0x1fc19c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bad94, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) scaling_to_string;
};
#include "magic/api.end.hpp"
