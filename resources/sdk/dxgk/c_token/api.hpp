#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_token
{
    // [CompleteIndependentFlipNotifyToken@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) complete_independent_flip_notify_token;
    
    // [??0CToken@@IEAA@_KPEAVCompositionSurfaceObject@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1aec0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2096c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b540, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [CreateClonedFlipToken@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x617e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x764c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x61978, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) create_cloned_flip_token;
    
    // [IsAnalogExclusive@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b070, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) is_analog_exclusive;
    
    // [IsRequirePairedToken@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b070, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) is_require_paired_token;
    
    // [PresentAllowedTearing@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b070, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) present_allowed_tearing;
    
    // [RequestIndependentFlipExit@CToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fd70, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b070, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) request_independent_flip_exit;
};
#include "magic/api.end.hpp"
