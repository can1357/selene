#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_token
{
    // [CompleteIndependentFlipNotifyToken@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1ee50, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) complete_independent_flip_notify_token;
    
    // [??0CFlipToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x61fb8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76a88, 0x84380 bytes
    // dxgkrnl.sys .text:0x62148, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [CreateCloned@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x62118, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76be8, 0x84380 bytes
    // dxgkrnl.sys .text:0x622a8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_cloned;
    
    // [InitializeCloned@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x622a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x76df8, 0x84380 bytes
    // dxgkrnl.sys .text:0x62438, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize_cloned;
    
    // [InitializeCompleted@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xe70c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x16980, 0x84380 bytes
    // dxgkrnl.sys .text:0xeb9c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_completed;
    
    // [IsAnalogExclusive@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x16f20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a8b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x176b0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) is_analog_exclusive;
    
    // [IsRequirePairedToken@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aa70, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20500, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b0f0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_require_paired_token;
    
    // [PresentAllowedTearing@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aab0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20540, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b130, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) present_allowed_tearing;
    
    // [RequestIndependentFlipExit@CFlipToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aac0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20550, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b140, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) request_independent_flip_exit;
};
#include "magic/api.end.hpp"
