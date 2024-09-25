#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::direct_composition::c_shared_write_remote_app_render_target_marshaler
{
    // [Create@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201ab4, 0x243e0 bytes
    // win32kbase.sys .text:0x251a6c, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff884, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) create;
    
    // [EmitCreationCommand@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201090, 0x243e0 bytes
    // win32kbase.sys .text:0x251c30, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fee60, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) emit_creation_command;
    
    // [OpenSharedHandle@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2011b0, 0x243e0 bytes
    // win32kbase.sys .text:0x251c50, 0x27ef0 bytes
    // win32kbase.sys .text:0x1fef80, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) open_shared_handle;
    
    // [ReleaseAllReferences@CSharedWriteRemoteAppRenderTargetMarshaler@DirectComposition]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x201b90, 0x243e0 bytes
    // win32kbase.sys .text:0x251c90, 0x27ef0 bytes
    // win32kbase.sys .text:0x1ff960, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) release_all_references;
};
#include "magic/api.end.hpp"
