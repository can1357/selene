#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_content_token
{
    // [IsIndependentFlip@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x20690, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) is_independent_flip;
    
    // [NotifyDwm@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x82d20, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) notify_dwm;
    
    // [Confirm@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a8f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82b70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af70, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) confirm;
    
    // [??0CFlipContentToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6cfb0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82a64, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d140, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [CreateCompleted@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d0c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82bd4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d254, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) create_completed;
    
    // [??1CFlipContentToken@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d040, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82ae0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d1d0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Discard@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d170, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82c80, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d300, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) discard;
    
    // [GetModel@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aba0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20650, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b220, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_model;
    
    // [InFrame@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d1a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82ca4, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d330, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) in_frame;
    
    // [NeedsSurfaceUpdate@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1abf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x206a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b270, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) needs_surface_update;
    
    // [Retire@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d200, 0x762b0 bytes
    // dxgkrnl.sys .text:0x203b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d390, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) retire;
    
    // [SetFlipManagerObjectPreReferenced@CFlipContentToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6d2a4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x82d94, 0x84380 bytes
    // dxgkrnl.sys .text:0x6d434, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) set_flip_manager_object_pre_referenced;
};
#include "magic/api.end.hpp"
