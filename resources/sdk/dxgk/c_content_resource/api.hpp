#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_content_resource
{
    // [ClearCompositionSurfaceBinding@CContentResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x81004, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) clear_composition_surface_binding;
    
    // [Create@CContentResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b394, 0x762b0 bytes
    // dxgkrnl.sys .text:0x810a4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b524, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [??1CContentResource@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b2dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x80f6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b46c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CContentResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b4d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x811cc, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b660, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [RebindCompositionSurfaceBuffer@CContentResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b5a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x8129c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b738, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) rebind_composition_surface_buffer;
};
#include "magic/api.end.hpp"
