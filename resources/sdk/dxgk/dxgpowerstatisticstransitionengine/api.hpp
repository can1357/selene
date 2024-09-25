#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpowerstatisticstransitionengine
{
    // [RecordEnteringIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x56c74, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) record_entering_idle_f_state;
    
    // [CalculateIdealPState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24ec0, 0x60098 bytes
    // dxgkrnl.sys .text:0x44ac8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5686c, 0x84380 bytes
    // dxgkrnl.sys .text:0x44cb8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) calculate_ideal_p_state;
    
    // [CalculatePState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24f44, 0x60098 bytes
    // dxgkrnl.sys .text:0x44b54, 0x762b0 bytes
    // dxgkrnl.sys .text:0x568f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x44d44, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) calculate_p_state;
    
    // [DisableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25000, 0x60098 bytes
    // dxgkrnl.sys .text:0x44c0c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x569b0, 0x84380 bytes
    // dxgkrnl.sys .text:0x44dfc, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) disable_stable_p_state;
    
    // [EnableStablePState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25030, 0x60098 bytes
    // dxgkrnl.sys .text:0x44c4c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56a00, 0x84380 bytes
    // dxgkrnl.sys .text:0x44e3c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) enable_stable_p_state;
    
    // [ForcePState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25068, 0x60098 bytes
    // dxgkrnl.sys .text:0x44c98, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56a5c, 0x84380 bytes
    // dxgkrnl.sys .text:0x44e88, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) force_p_state;
    
    // [ForcePStateCeiling@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x250d0, 0x60098 bytes
    // dxgkrnl.sys .text:0x44d14, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56ae4, 0x84380 bytes
    // dxgkrnl.sys .text:0x44f04, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) force_p_state_ceiling;
    
    // [ForcePStateFloor@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2513c, 0x60098 bytes
    // dxgkrnl.sys .text:0x44d94, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56b74, 0x84380 bytes
    // dxgkrnl.sys .text:0x44f84, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) force_p_state_floor;
    
    // [RecordActivity@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x251a8, 0x60098 bytes
    // dxgkrnl.sys .text:0x44e14, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56c04, 0x84380 bytes
    // dxgkrnl.sys .text:0x45004, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) record_activity;
    
    // [RecordIdle@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1cc40, 0x60098 bytes
    // dxgkrnl.sys .text:0x44e74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56cc8, 0x84380 bytes
    // dxgkrnl.sys .text:0x45064, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) record_idle;
    
    // [RecordLeavingIdleFState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x251f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x44ef4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56d54, 0x84380 bytes
    // dxgkrnl.sys .text:0x450e4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) record_leaving_idle_f_state;
    
    // [RecordPStateChange@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x25250, 0x60098 bytes
    // dxgkrnl.sys .text:0x44f6c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56ddc, 0x84380 bytes
    // dxgkrnl.sys .text:0x4515c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) record_p_state_change;
    
    // [RecordVSync@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1cca4, 0x60098 bytes
    // dxgkrnl.sys .text:0x45004, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56e84, 0x84380 bytes
    // dxgkrnl.sys .text:0x451f4, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) record_v_sync;
    
    // [RequestPState@DXGPOWERSTATISTICSTRANSITIONENGINE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x252cc, 0x60098 bytes
    // dxgkrnl.sys .text:0x450c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x56f54, 0x84380 bytes
    // dxgkrnl.sys .text:0x452b8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) request_p_state;
};
#include "magic/api.end.hpp"
