#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_remote_app_render_target_marshaler
{
    // [EmitVailDpi@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x243f90, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) emit_vail_dpi;
    
    // [EmitAlphaMode@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f4fc0, 0x243e0 bytes
    // win32kbase.sys .text:0x243cf0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2d80, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_alpha_mode;
    
    // [EmitCreate@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5000, 0x243e0 bytes
    // win32kbase.sys .text:0x243d30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2dc0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) emit_create;
    
    // [EmitDeletionCommand@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5040, 0x243e0 bytes
    // win32kbase.sys .text:0x243d70, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2e00, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) emit_deletion_command;
    
    // [EmitDisplayRect@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f50e0, 0x243e0 bytes
    // win32kbase.sys .text:0x243e10, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2ea0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) emit_display_rect;
    
    // [EmitRoot@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5120, 0x243e0 bytes
    // win32kbase.sys .text:0x243e50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2ee0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) emit_root;
    
    // [EmitUpdateCommands@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5160, 0x243e0 bytes
    // win32kbase.sys .text:0x243e90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f2f20, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) emit_update_commands;
    
    // [ReleaseAllReferences@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5240, 0x243e0 bytes
    // win32kbase.sys .text:0x243fd0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3000, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) release_all_references;
    
    // [SetBufferProperty@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5270, 0x243e0 bytes
    // win32kbase.sys .text:0x244000, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3030, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) set_buffer_property;
    
    // [SetIntegerProperty@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f52b0, 0x243e0 bytes
    // win32kbase.sys .text:0x244040, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3070, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) set_integer_property;
    
    // [SetReferenceProperty@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f5320, 0x243e0 bytes
    // win32kbase.sys .text:0x2440d0, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f30e0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) set_reference_property;
    
    // [SetRemarshalingFlags@CRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1f53c0, 0x243e0 bytes
    // win32kbase.sys .text:0x244170, 0x27ef0 bytes
    // win32kbase.sys .text:0x1f3180, 0x243e0 bytes
    //
    _n1(sdk::unknown_ptr) set_remarshaling_flags;
};
#include "magic/api.end.hpp"
