#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_virtual_monitor_capture_render_target_marshaler
{
    // [EmitBindData@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fde70, 0x243e0 bytes
    // win32kbase.sys .text:0x24d4b0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbc40, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_bind_data;
    
    // [EmitBoundsInMonitor@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdf30, 0x243e0 bytes
    // win32kbase.sys .text:0x24d570, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbd00, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_bounds_in_monitor;
    
    // [EmitDesktopTree@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdfb0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d5f0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbd80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_desktop_tree;
    
    // [EmitUpdateCommands@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe040, 0x243e0 bytes
    // win32kbase.sys .text:0x24d680, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbe10, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe0d0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d710, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbea0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe120, 0x243e0 bytes
    // win32kbase.sys .text:0x24d760, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbef0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe1c0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d800, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbf90, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe250, 0x243e0 bytes
    // win32kbase.sys .text:0x24d890, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc020, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CVirtualMonitorCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fe300, 0x243e0 bytes
    // win32kbase.sys .text:0x24d940, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fc0d0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
