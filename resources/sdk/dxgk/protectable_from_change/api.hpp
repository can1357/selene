#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::protectable_from_change
{
    // [ImposeModifyingActionConstraints@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a954, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5aae4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) impose_modifying_action_constraints;
    
    // [??0ProtectableFromChange@@QEAA@EE@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6fa0, 0x60098 bytes
    // dxgkrnl.sys .text:0x8e84, 0x762b0 bytes
    // dxgkrnl.sys .text:0x9d94, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1ProtectableFromChange@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8d44, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6498, 0x84380 bytes
    // dxgkrnl.sys .text:0x9c54, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [AllowModifyingAction@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x8233c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e3a84, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a8404, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e37f4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) allow_modifying_action;
    
    // [DisallowModifyingAction@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x823e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10e348, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x19be50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x11a378, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) disallow_modifying_action;
    
    // [IsConstructed@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3840, 0x60098 bytes
    // dxgkrnl.sys .text:0x19070, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1db50, 0x84380 bytes
    // dxgkrnl.sys .text:0x194e0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) is_constructed;
    
    // [IsModifyingActionAllowed@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x7098, 0x60098 bytes
    // dxgkrnl.sys .text:0x90b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6a64, 0x84380 bytes
    // dxgkrnl.sys .text:0x9fc8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) is_modifying_action_allowed;
    
    // [OnModifyingActionCompletion@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x70c8, 0x60098 bytes
    // dxgkrnl.sys .text:0x60a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x68a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x7450, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) on_modifying_action_completion;
    
    // [SetConstructionStatus@ProtectableFromChange]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x12b40, 0x60098 bytes
    // dxgkrnl.sys .text:0x1a880, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20330, 0x84380 bytes
    // dxgkrnl.sys .text:0x1af00, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_construction_status;
};
#include "magic/api.end.hpp"
