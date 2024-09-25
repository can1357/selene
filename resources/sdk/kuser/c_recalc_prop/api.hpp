#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_recalc_prop
{
    // [Delete@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x116db0, 0x1659e bytes
    //
    _m0(sdk::unknown_ptr) _delete;
    
    // [AddPendingRecalcWork@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10a0ac, 0x1659e bytes
    //
    _m1(sdk::unknown_ptr) add_pending_recalc_work;
    
    // [CreateForTopologyChange@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x14ce8c, 0x1659e bytes
    //
    _m2(sdk::unknown_ptr) create_for_topology_change;
    
    // [CreateFromRDPSnapshot@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23d808, 0x1659e bytes
    //
    _m3(sdk::unknown_ptr) create_from_rdp_snapshot;
    
    // [??1CRecalcProp@@AEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4224, 0x1659e bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [EnsureRecalcProperty@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4270, 0x1659e bytes
    //
    _m5(sdk::unknown_ptr) ensure_recalc_property;
    
    // [FindRestorableRecalcState@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc5084, 0x1659e bytes
    //
    _m6(sdk::unknown_ptr) find_restorable_recalc_state;
    
    // [GetAtom@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x119960, 0x1659e bytes
    //
    _m7(sdk::unknown_ptr) get_atom;
    
    // [GetRecalcProperty@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4548, 0x1659e bytes
    //
    _m8(sdk::unknown_ptr) get_recalc_property;
    
    // [HasPendingWork@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc451c, 0x1659e bytes
    //
    _m9(sdk::unknown_ptr) has_pending_work;
    
    // [IsWindowEligibleForRecalc@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc45e8, 0x1659e bytes
    //
    _n0(sdk::unknown_ptr) is_window_eligible_for_recalc;
    
    // [PruneRecalcStateList@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc5330, 0x1659e bytes
    //
    _n1(sdk::unknown_ptr) prune_recalc_state_list;
    
    // [ReattachRecalcState@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23dc68, 0x1659e bytes
    //
    _n2(sdk::unknown_ptr) reattach_recalc_state;
    
    // [RemoveRecalcProperty@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc413c, 0x1659e bytes
    //
    _n3(sdk::unknown_ptr) remove_recalc_property;
    
    // [s_atom@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .data:0x33abc8, 0x1659e bytes
    //
    _n4(sdk::unknown_ptr) s_atom;
    
    // [s_PostRecalcForThread@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x10a4b0, 0x1659e bytes
    //
    _n5(sdk::unknown_ptr) s_post_recalc_for_thread;
    
    // [s_PostRecalcForWindow@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23de94, 0x1659e bytes
    //
    _n6(sdk::unknown_ptr) s_post_recalc_for_window;
    
    // [s_RemovePendingWorkForExplicitRestore@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0x23dfe0, 0x1659e bytes
    //
    _n7(sdk::unknown_ptr) s_remove_pending_work_for_explicit_restore;
    
    // [s_xxxProcessTopologyChange@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc43d4, 0x1659e bytes
    //
    _n8(sdk::unknown_ptr) s_xxx_process_topology_change;
    
    // [ShouldDeferRecalc@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc5018, 0x1659e bytes
    //
    _n9(sdk::unknown_ptr) should_defer_recalc;
    
    // [xxxProcessTopologyChange@CRecalcProp]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kfull.sys .text:0xc4a0c, 0x1659e bytes
    //
    _o0(sdk::unknown_ptr) xxx_process_topology_change;
};
#include "magic/api.end.hpp"
