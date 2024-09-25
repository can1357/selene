#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_pool_buffer_resource
{
    // [AddUsageReference@CPoolBufferResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6af54, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ef2c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b0e4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_usage_reference;
    
    // [Create@CPoolBufferResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6af8c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7efc4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b11c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create;
    
    // [CreateDxSharedSurfaceHandle@CPoolBufferResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b1ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f214, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b37c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_dx_shared_surface_handle;
    
    // [??1CPoolBufferResource@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ae74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ed7c, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b004, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [RemoveUsageReference@CPoolBufferResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6b240, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f2d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b3d0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) remove_usage_reference;
};
#include "magic/api.end.hpp"
