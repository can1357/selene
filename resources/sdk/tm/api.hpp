#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../nt/object_attributes_t.hpp"

namespace nt { struct kenlistment_t;      }
namespace nt { struct kresourcemanager_t; }
namespace nt { struct ktm_t;              }
namespace nt { struct ktransaction_t;     }

#include "magic/api.start.hpp"
namespace tm
{
    // [TmShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1260, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) shutdown_system;
    
    // [TmCancelPropagationRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1130, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ead20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc560, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) cancel_propagation_request;
    
    // [TmCommitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1138, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb4b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ead40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc580, 0x1fe000 bytes
    //
    _m2(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) commit_complete;
    
    // [TmCommitEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1140, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb4d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ead60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc5a0, 0x1fe000 bytes
    //
    _m3(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) commit_enlistment;
    
    // [TmCommitTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1148, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb4f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ead80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc5c0, 0x1fe000 bytes
    //
    _m4(sdk::function<int32_t(struct nt::ktransaction_t*, uint8_t)>*) commit_transaction;
    
    // [TmContainerExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4da0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc046d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06b60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04710, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) container_ext;
    
    // [TmCreateEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1150, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eada0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc5e0, 0x1fe000 bytes
    //
    _m6(sdk::function<int32_t(void**, char, uint32_t, struct nt::object_attributes_t*, struct nt::kresourcemanager_t*, struct nt::ktransaction_t*, uint32_t, uint32_t, void*)>*) create_enlistment;
    
    // [TmCurrentTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1158, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb530, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eadc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc600, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) current_transaction;
    
    // [TmDereferenceEnlistmentKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1160, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eade0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc620, 0x1fe000 bytes
    //
    _m8(sdk::function<int32_t(struct nt::kenlistment_t*, uint8_t*)>*) dereference_enlistment_key;
    
    // [TmEnableCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1168, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eae00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc640, 0x1fe000 bytes
    //
    _m9(sdk::function<int32_t(struct nt::kresourcemanager_t*, sdk::function<int32_t(struct nt::kenlistment_t*, void*, void*, uint32_t, int64_t*, uint32_t, void*)>*, void*)>*) enable_callbacks;
    
    // [TmEndPropagationRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1170, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb590, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eae20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc660, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) end_propagation_request;
    
    // [TmEnlistmentObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab810, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc18, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e428, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbc18, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) enlistment_object_type;
    
    // [TmFreezeTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1178, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eae40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc680, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) freeze_transactions;
    
    // [TmGetTransactionId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1180, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb5d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eae60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc6a0, 0x1fe000 bytes
    //
    _n3(sdk::function<void(struct nt::ktransaction_t*, struct nt::guid_t*)>*) get_transaction_id;
    
    // [TmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1010, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea8a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc0e0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) init_system;
    
    // [TmInitSystemPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1008, 0x32828 bytes
    // ntoskrnl.exe .text:0x3caff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc0c0, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) init_system_phase2;
    
    // [TmInitializeTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1188, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eae80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc6c0, 0x1fe000 bytes
    //
    _n6(sdk::function<int32_t(struct nt::ktm_t*, const nt::unicode_view*, struct nt::guid_t*, uint32_t)>*) initialize_transaction_manager;
    
    // [TmIsKTMCommitCoordinator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1190, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb610, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc6e0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) is_ktm_commit_coordinator;
    
    // [TmIsTransactionActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1198, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb630, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc700, 0x1fe000 bytes
    //
    _n8(sdk::function<uint8_t(struct nt::ktransaction_t*)>*) is_transaction_active;
    
    // [TmLogExt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f3e40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc01950, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc03688, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc01988, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) log_ext;
    
    // [TmPrePrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaee0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc720, 0x1fe000 bytes
    //
    _o0(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) pre_prepare_complete;
    
    // [TmPrePrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaf00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc740, 0x1fe000 bytes
    //
    _o1(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) pre_prepare_enlistment;
    
    // [TmPrepareComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaf20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc760, 0x1fe000 bytes
    //
    _o2(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) prepare_complete;
    
    // [TmPrepareEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaf40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc780, 0x1fe000 bytes
    //
    _o3(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) prepare_enlistment;
    
    // [TmPropagationComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb6d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaf60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc7a0, 0x1fe000 bytes
    //
    _o4(sdk::function<int32_t(struct nt::kresourcemanager_t*, uint32_t, uint32_t, void*)>*) propagation_complete;
    
    // [TmPropagationFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eaf80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc7c0, 0x1fe000 bytes
    //
    _o5(sdk::function<int32_t(struct nt::kresourcemanager_t*, uint32_t, int32_t)>*) propagation_failed;
    
    // [TmReadOnlyEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb710, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eafa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc7e0, 0x1fe000 bytes
    //
    _o6(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) read_only_enlistment;
    
    // [TmRecoverEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eafc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc800, 0x1fe000 bytes
    //
    _o7(sdk::function<int32_t(struct nt::kenlistment_t*, void*)>*) recover_enlistment;
    
    // [TmRecoverResourceManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eafe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc820, 0x1fe000 bytes
    //
    _o8(sdk::function<int32_t(struct nt::kresourcemanager_t*)>*) recover_resource_manager;
    
    // [TmRecoverTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc840, 0x1fe000 bytes
    //
    _o9(sdk::function<int32_t(struct nt::ktm_t*, int64_t*)>*) recover_transaction_manager;
    
    // [TmReferenceEnlistmentKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc860, 0x1fe000 bytes
    //
    _p0(sdk::function<int32_t(struct nt::kenlistment_t*, void**)>*) reference_enlistment_key;
    
    // [TmRenameTransactionManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb7b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc880, 0x1fe000 bytes
    //
    _p1(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*)>*) rename_transaction_manager;
    
    // [TmRequestOutcomeEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1200, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb7d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc8a0, 0x1fe000 bytes
    //
    _p2(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) request_outcome_enlistment;
    
    // [TmResourceManagerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaf0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1e8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbaf0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) resource_manager_object_type;
    
    // [TmRollbackComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1208, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb7f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb080, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc8c0, 0x1fe000 bytes
    //
    _p4(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) rollback_complete;
    
    // [TmRollbackEnlistment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1210, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb0a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc8e0, 0x1fe000 bytes
    //
    _p5(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) rollback_enlistment;
    
    // [TmRollbackTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1218, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb0c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc900, 0x1fe000 bytes
    //
    _p6(sdk::function<int32_t(struct nt::ktransaction_t*, uint8_t)>*) rollback_transaction;
    
    // [TmSetCurrentTransaction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1220, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc920, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) set_current_transaction;
    
    // [TmSinglePhaseReject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1228, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc940, 0x1fe000 bytes
    //
    _p8(sdk::function<int32_t(struct nt::kenlistment_t*, int64_t*)>*) single_phase_reject;
    
    // [TmThawTransactions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1230, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cb890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3eb120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cc960, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) thaw_transactions;
    
    // [TmTransactionManagerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab6d0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbae8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e1e0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbae8, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) transaction_manager_object_type;
    
    // [TmTransactionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab4e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb780, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddf0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb780, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) transaction_object_type;
};
#include "magic/api.end.hpp"
