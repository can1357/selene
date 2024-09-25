#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::ndis::bind_engine
{
    // [LockBindings@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xa56dc, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) lock_bindings;
    
    // [UnlockBindings@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xa56b8, 0x1c8a8 bytes
    //
    _m1(sdk::unknown_ptr) unlock_bindings;
    
    // [BeginBindOperation@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x1224c8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12d4b4, 0x1e858 bytes
    // ndis.sys PAGE:0x1229c8, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) begin_bind_operation;
    
    // [ApplyBindChanges@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xe40c8, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfd918, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10514c, 0x1e858 bytes
    // ndis.sys PAGE:0xfde40, 0x1d2c0 bytes
    //
    _m3(sdk::unknown_ptr) apply_bind_changes;
    
    // [ApplyRules@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa6120, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1049bc, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10843c, 0x1e858 bytes
    // ndis.sys PAGE:0x104edc, 0x1d2c0 bytes
    //
    _m4(sdk::unknown_ptr) apply_rules;
    
    // [BeginPolicyUpdates@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa574c, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfd6b8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x1065d0, 0x1e858 bytes
    // ndis.sys PAGE:0xfdbe0, 0x1d2c0 bytes
    //
    _m5(sdk::unknown_ptr) begin_policy_updates;
    
    // [DispatchPendingWork@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x9d1d4, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfd890, 0x1d2c0 bytes
    // ndis.sys PAGE:0x105230, 0x1e858 bytes
    // ndis.sys PAGE:0xfddb8, 0x1d2c0 bytes
    //
    _m6(sdk::unknown_ptr) dispatch_pending_work;
    
    // [EndBindOperation@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa51c4, 0x1c8a8 bytes
    // ndis.sys PAGE:0x104fb4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x104648, 0x1e858 bytes
    // ndis.sys PAGE:0x1054d4, 0x1d2c0 bytes
    //
    _m7(sdk::unknown_ptr) end_bind_operation;
    
    // [EndPolicyUpdates@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa5700, 0x1c8a8 bytes
    // ndis.sys PAGE:0xfb3a4, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10847c, 0x1e858 bytes
    // ndis.sys PAGE:0xfb8cc, 0x1d2c0 bytes
    //
    _m8(sdk::unknown_ptr) end_policy_updates;
    
    // [GetCurrentLink@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x9d1c0, 0x1c8a8 bytes
    // ndis.sys PAGE:0xf8468, 0x1d2c0 bytes
    // ndis.sys PAGE:0x100058, 0x1e858 bytes
    // ndis.sys PAGE:0xf8968, 0x1d2c0 bytes
    //
    _m9(sdk::unknown_ptr) get_current_link;
    
    // [Initialize@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x9d1c8, 0x1c8a8 bytes
    // ndis.sys PAGE:0xf8474, 0x1d2c0 bytes
    // ndis.sys PAGE:0x100070, 0x1e858 bytes
    // ndis.sys PAGE:0xf8974, 0x1d2c0 bytes
    //
    _n0(sdk::unknown_ptr) initialize;
    
    // [Iterate@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa58e0, 0x1c8a8 bytes
    // ndis.sys PAGE:0x104384, 0x1d2c0 bytes
    // ndis.sys PAGE:0x107d04, 0x1e858 bytes
    // ndis.sys PAGE:0x1048a4, 0x1d2c0 bytes
    //
    _n1(sdk::unknown_ptr) iterate;
    
    // [s_NumBindOperationsInProgress@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .data:0x8ae54, 0x1c8a8 bytes
    // ndis.sys .data:0xe5f74, 0x1d2c0 bytes
    // ndis.sys .data:0xebcfc, 0x1e858 bytes
    // ndis.sys .data:0xe5fb4, 0x1d2c0 bytes
    //
    _n2(sdk::unknown_ptr) s_num_bind_operations_in_progress;
    
    // [SetDirty@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xb4544, 0x1c8a8 bytes
    // ndis.sys PAGE:0x1224d8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12d4c4, 0x1e858 bytes
    // ndis.sys PAGE:0x1229d8, 0x1d2c0 bytes
    //
    _n3(sdk::unknown_ptr) set_dirty;
    
    // [UpdateBindings@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa5848, 0x1c8a8 bytes
    // ndis.sys PAGE:0x104240, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10799c, 0x1e858 bytes
    // ndis.sys PAGE:0x104760, 0x1d2c0 bytes
    //
    _n4(sdk::unknown_ptr) update_bindings;
    
    // [UpdateBindingsWorkItem@BindEngine@Ndis]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa5640, 0x1c8a8 bytes
    // ndis.sys PAGE:0x10aa70, 0x1d2c0 bytes
    // ndis.sys PAGE:0x105910, 0x1e858 bytes
    // ndis.sys PAGE:0x10af90, 0x1d2c0 bytes
    //
    _n5(sdk::unknown_ptr) update_bindings_work_item;
};
#include "magic/api.end.hpp"
