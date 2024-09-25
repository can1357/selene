#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_capture_render_target_marshaler
{
    // [EmitAdapterLUID@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd618, 0x243e0 bytes
    // win32kbase.sys .text:0x24cc68, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb3e8, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) emit_adapter_luid;
    
    // [EmitBuffers@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd688, 0x243e0 bytes
    // win32kbase.sys .text:0x24ccd8, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb458, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_buffers;
    
    // [EmitFlipManager@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd7f0, 0x243e0 bytes
    // win32kbase.sys .text:0x24ce40, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb5c0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_flip_manager;
    
    // [EmitUpdateCommands@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd890, 0x243e0 bytes
    // win32kbase.sys .text:0x24cee0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb660, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fd9d0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d020, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb7a0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) release_all_references;
    
    // [ReleaseBuffers@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fda24, 0x243e0 bytes
    // win32kbase.sys .text:0x24d074, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb7f4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) release_buffers;
    
    // [SetBufferProperty@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fda90, 0x243e0 bytes
    // win32kbase.sys .text:0x24d0e0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb860, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) set_buffer_property;
    
    // [SetHandleArrayProperty@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdaf0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d140, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb8c0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) set_handle_array_property;
    
    // [SetHandleProperty@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdc10, 0x243e0 bytes
    // win32kbase.sys .text:0x24d250, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fb9e0, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_handle_property;
    
    // [SetIntegerProperty@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdcd0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d310, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbaa0, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fdd50, 0x243e0 bytes
    // win32kbase.sys .text:0x24d390, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbb20, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CCaptureRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1fddf0, 0x243e0 bytes
    // win32kbase.sys .text:0x24d430, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fbbc0, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
