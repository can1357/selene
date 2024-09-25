#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ci::flip_present_history_token
{
    // [??1CIFlipPresentHistoryToken@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x316438, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [IsFlipManagerIFlipFeatureEnabled@CIFlipPresentHistoryToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d56dc, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) is_flip_manager_i_flip_feature_enabled;
    
    // [IsIFlipSupported@CIFlipPresentHistoryToken]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x316460, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) is_i_flip_supported;
};
#include "magic/api.end.hpp"
