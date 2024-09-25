#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdisplaymanagerobject
{
    // [AccessCheckTargetPolicy@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2abac4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f40e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2abb64, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) access_check_target_policy;
    
    // [AcquireTargetOwnership@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2abc00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4244, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2abca0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_target_ownership;
    
    // [CheckOwnership@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd97e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x15ff6c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1501f0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) check_ownership;
    
    // [??0DXGDISPLAYMANAGEROBJECT@@QEAA@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155ce4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c711c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127cb4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [ContainsTarget@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2abd98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4450, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2abe38, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) contains_target;
    
    // [CreateSourceObject@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2abe28, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f44e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2abec8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) create_source_object;
    
    // [??1DXGDISPLAYMANAGEROBJECT@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155a6c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c6ec8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x127a40, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [ExchangeTargetOwnershipDmm@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2abfc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f46f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac060, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) exchange_target_ownership_dmm;
    
    // [GetOwnedSourceFromTarget@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac264, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4954, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac304, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_owned_source_from_target;
    
    // [Invalidate@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14c22c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d900c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14ee7c, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) invalidate;
    
    // [OnSourceObjectDeleted@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac3b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4a64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac450, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) on_source_object_deleted;
    
    // [ReleaseTargetOwnership@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4b1c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac508, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) release_target_ownership;
    
    // [ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac5dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4cf0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac67c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) release_target_ownership_no_dmm;
    
    // [TransferTargetOwnership@DXGDISPLAYMANAGEROBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2ac78c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2f4f28, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2ac82c, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) transfer_target_ownership;
};
#include "magic/api.end.hpp"
