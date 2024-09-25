#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::input_trace_logging::rim
{
    // [CompleteDeviceResetRequest@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1cf848, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) complete_device_reset_request;
    
    // [RawInputManagerObjectUsed@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x784c0, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) raw_input_manager_object_used;
    
    // [RimAsyncPnpWorkPickedup@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x196a38, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) rim_async_pnp_work_pickedup;
    
    // [RimAsyncPnpWorkQueued@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1c11d4, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) rim_async_pnp_work_queued;
    
    // [RimDeviceClassNotification@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7cc10, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) rim_device_class_notification;
    
    // [SetDevicePDOSuppression@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x1b14bc, 0x27ef0 bytes
    //
    _m5(sdk::unknown_ptr) set_device_pdo_suppression;
    
    // [RawInputManagerObject@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xc5d78, 0x243e0 bytes
    // win32kbase.sys .text:0xbecc8, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) raw_input_manager_object;
    
    // [ReadComplete@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1821d8, 0x243e0 bytes
    // win32kbase.sys .text:0x1805c8, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) read_complete;
    
    // [CompleteFrame@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e420, 0x243e0 bytes
    // win32kbase.sys .text:0xf4c16, 0x27ef0 bytes
    // win32kbase.sys .text:0x17c810, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) complete_frame;
    
    // [CompleteFrameFromContainer@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e530, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb0e4, 0x27ef0 bytes
    // win32kbase.sys .text:0x17c920, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) complete_frame_from_container;
    
    // [ContactAssessmentTimer@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x184dc0, 0x243e0 bytes
    // win32kbase.sys .text:0x1c3878, 0x27ef0 bytes
    // win32kbase.sys .text:0x1831b0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) contact_assessment_timer;
    
    // [CopyPointerFromContainer@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17e6e0, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb28c, 0x27ef0 bytes
    // win32kbase.sys .text:0x17cad0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) copy_pointer_from_container;
    
    // [DeliverConfigRequest@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x170208, 0x243e0 bytes
    // win32kbase.sys .text:0x1a0c14, 0x27ef0 bytes
    // win32kbase.sys .text:0x16e5f8, 0x243e0 bytes
    //
    _n2(sdk::unknown_ptr) deliver_config_request;
    
    // [DeliverRawInput@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1d5468, 0x1596d bytes
    // win32kfull.sys .text:0x1d3010, 0x1659e bytes
    // win32kfull.sys .text:0x1d5308, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) deliver_raw_input;
    
    // [DispatchFrame@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x181ea8, 0x243e0 bytes
    // win32kbase.sys .text:0xf51d8, 0x27ef0 bytes
    // win32kbase.sys .text:0x180298, 0x243e0 bytes
    //
    _n4(sdk::unknown_ptr) dispatch_frame;
    
    // [DropCompleteFrame@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17f324, 0x243e0 bytes
    // win32kbase.sys .text:0x1bbed0, 0x27ef0 bytes
    // win32kbase.sys .text:0x17d714, 0x243e0 bytes
    //
    _n5(sdk::unknown_ptr) drop_complete_frame;
    
    // [DropInput@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17582c, 0x243e0 bytes
    // win32kbase.sys .text:0x1b1970, 0x27ef0 bytes
    // win32kbase.sys .text:0x173c1c, 0x243e0 bytes
    //
    _n6(sdk::unknown_ptr) drop_input;
    
    // [GetMaxCount@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x16a9c8, 0x243e0 bytes
    // win32kbase.sys .text:0x1a5dec, 0x27ef0 bytes
    // win32kbase.sys .text:0x168db8, 0x243e0 bytes
    //
    _n7(sdk::unknown_ptr) get_max_count;
    
    // [InjectInput@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1dbf40, 0x1596d bytes
    // win32kfull.sys .text:0x1d8384, 0x1659e bytes
    // win32kfull.sys .text:0x1dbde0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) inject_input;
    
    // [PauseDevice@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x182064, 0x243e0 bytes
    // win32kbase.sys .text:0x1bfc7c, 0x27ef0 bytes
    // win32kbase.sys .text:0x180454, 0x243e0 bytes
    //
    _n9(sdk::unknown_ptr) pause_device;
    
    // [PopulateContact@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x184e8c, 0x243e0 bytes
    // win32kbase.sys .text:0x1c3944, 0x27ef0 bytes
    // win32kbase.sys .text:0x18327c, 0x243e0 bytes
    //
    _o0(sdk::unknown_ptr) populate_contact;
    
    // [QueueFrame@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1820f8, 0x243e0 bytes
    // win32kbase.sys .text:0x1bfd10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1804e8, 0x243e0 bytes
    //
    _o1(sdk::unknown_ptr) queue_frame;
    
    // [ResumeDevice@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x161534, 0x243e0 bytes
    // win32kbase.sys .text:0x1955a4, 0x27ef0 bytes
    // win32kbase.sys .text:0x15f924, 0x243e0 bytes
    //
    _o2(sdk::unknown_ptr) resume_device;
    
    // [RimDevice@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x14a40, 0x243e0 bytes
    // win32kbase.sys .text:0xc5b00, 0x27ef0 bytes
    // win32kbase.sys .text:0x73edc, 0x243e0 bytes
    //
    _o3(sdk::unknown_ptr) rim_device;
    
    // [RimDeviceFlags@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x161610, 0x243e0 bytes
    // win32kbase.sys .text:0x195680, 0x27ef0 bytes
    // win32kbase.sys .text:0x15fa00, 0x243e0 bytes
    //
    _o4(sdk::unknown_ptr) rim_device_flags;
    
    // [RimDeviceHidData@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1619d0, 0x243e0 bytes
    // win32kbase.sys .text:0x195a34, 0x27ef0 bytes
    // win32kbase.sys .text:0x15fdc0, 0x243e0 bytes
    //
    _o5(sdk::unknown_ptr) rim_device_hid_data;
    
    // [RimDeviceMonitorMapping@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x161a50, 0x243e0 bytes
    // win32kbase.sys .text:0x195b04, 0x27ef0 bytes
    // win32kbase.sys .text:0x15fe40, 0x243e0 bytes
    //
    _o6(sdk::unknown_ptr) rim_device_monitor_mapping;
    
    // [RimDevicePointerData@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x161b94, 0x243e0 bytes
    // win32kbase.sys .text:0x195c48, 0x27ef0 bytes
    // win32kbase.sys .text:0x15ff84, 0x243e0 bytes
    //
    _o7(sdk::unknown_ptr) rim_device_pointer_data;
    
    // [SkipReadComplete@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x182400, 0x243e0 bytes
    // win32kbase.sys .text:0x474c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1807f0, 0x243e0 bytes
    //
    _o8(sdk::unknown_ptr) skip_read_complete;
    
    // [StartFrameFromContainer@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x17f828, 0x243e0 bytes
    // win32kbase.sys .text:0x1bc7bc, 0x27ef0 bytes
    // win32kbase.sys .text:0x17dc18, 0x243e0 bytes
    //
    _o9(sdk::unknown_ptr) start_frame_from_container;
    
    // [SuppressContact@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x18cbf8, 0x243e0 bytes
    // win32kbase.sys .text:0x1ccd34, 0x27ef0 bytes
    // win32kbase.sys .text:0x18afe8, 0x243e0 bytes
    //
    _p0(sdk::unknown_ptr) suppress_contact;
    
    // [UpdateScantime@RIM@InputTraceLogging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1859e4, 0x243e0 bytes
    // win32kbase.sys .text:0xf5538, 0x27ef0 bytes
    // win32kbase.sys .text:0x183dd4, 0x243e0 bytes
    //
    _p1(sdk::unknown_ptr) update_scantime;
};
#include "magic/api.end.hpp"
