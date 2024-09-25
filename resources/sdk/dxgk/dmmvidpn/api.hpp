#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvidpn
{
    // [RequestIdlePowerStateForTargetsNotInTopology@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x77a4c, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) request_idle_power_state_for_targets_not_in_topology;
    
    // [RequestPowerStateForTargets@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x77adc, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) request_power_state_for_targets;
    
    // [??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x77110, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x101438, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19b984, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x10d408, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??0DMMVIDPN@@QEAA@AEBV0@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x774c0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11df50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a8e00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125690, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance_;
    
    // [??1DMMVIDPN@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x76f58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11e4d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1797a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x125c14, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [IsConstructed@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3840, 0x60098 bytes
    // dxgkrnl.sys .text:0x19070, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1db50, 0x84380 bytes
    // dxgkrnl.sys .text:0x194e0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) is_constructed;
    
    // [IsFunctional@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x778f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x152a30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1bde34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x155c80, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_functional;
    
    // [IsPathFromSourceConnectedToIndirectDisplay@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aab30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3b80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a84e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e38f0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) is_path_from_source_connected_to_indirect_display;
    
    // [IsPathFromSourcePoweredOff@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x779fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x15effc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2220d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x161e4c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) is_path_from_source_powered_off;
    
    // [Serialize@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aab84, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3be8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8548, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3958, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) serialize;
    
    // [SerializeFunctionalPathDrivingTarget@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x7796c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x13a3fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a88a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x13b8fc, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) serialize_functional_path_driving_target;
    
    // [SerializeVidPns@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1aaeec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a89d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e3d00, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) serialize_vid_pns;
    
    // [SetConstructionStatus@DMMVIDPN]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b40, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a880, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20330, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af00, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) set_construction_status;
};
#include "magic/api.end.hpp"
