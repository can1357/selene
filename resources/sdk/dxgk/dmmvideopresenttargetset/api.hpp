#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dmmvideopresenttargetset
{
    // [BuildDynamicVideoPresentTargetChildRelations@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e0668, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0590, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e03d8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) build_dynamic_video_present_target_child_relations;
    
    // [CreateDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e098c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0860, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e06fc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) create_dynamic_video_present_target;
    
    // [DestroyDynamicVideoPresentTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e0e0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a0c1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e0b7c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_dynamic_video_present_target;
    
    // [RemoveTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5a510, 0x762b0 bytes
    // dxgkrnl.sys .text:0x699c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5a6a0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) remove_target;
    
    // [AcquireRawDdiEnumeratorCachedTargetInfo@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec54c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c61c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d93c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17fb5c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) acquire_raw_ddi_enumerator_cached_target_info;
    
    // [AddTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec5cc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c3d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d740, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17f918, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) add_target;
    
    // [??0DMMVIDEOPRESENTTARGETSET@@QEAA@QEAVVIDPN_MGR@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xf8a0, 0x60098 bytes
    // dxgkrnl.sys .text:0x21860, 0x762b0 bytes
    // dxgkrnl.sys .text:0x28244, 0x84380 bytes
    // dxgkrnl.sys .text:0x22204, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) construct_instance;
    
    // [??1DMMVIDEOPRESENTTARGETSET@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x31dfc, 0x60098 bytes
    // dxgkrnl.sys .text:0x58414, 0x762b0 bytes
    // dxgkrnl.sys .text:0x67c10, 0x84380 bytes
    // dxgkrnl.sys .text:0x585a4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_instance;
    
    // [GetFirstTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x332f0, 0x60098 bytes
    // dxgkrnl.sys .text:0x59550, 0x762b0 bytes
    // dxgkrnl.sys .text:0x69050, 0x84380 bytes
    // dxgkrnl.sys .text:0x596e0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_first_target;
    
    // [GetNextTarget@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1d260, 0x60098 bytes
    // dxgkrnl.sys .text:0x77a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5170, 0x84380 bytes
    // dxgkrnl.sys .text:0x8b00, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_next_target;
    
    // [GetTargetById@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb214, 0x60098 bytes
    // dxgkrnl.sys .text:0x780c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6cd0, 0x84380 bytes
    // dxgkrnl.sys .text:0x8b6c, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_target_by_id;
    
    // [ReleaseDdiEnumerator@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xec640, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17c398, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20d700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17f8d8, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release_ddi_enumerator;
    
    // [Serialize@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1abcb8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e12bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a10bc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e102c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) serialize;
    
    // [SerializeConnectedMonitors@DMMVIDEOPRESENTTARGETSET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1abdfc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2e1438, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a1204, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e11a8, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) serialize_connected_monitors;
};
#include "magic/api.end.hpp"
