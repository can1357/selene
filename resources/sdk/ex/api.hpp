#pragma once
#include <sdkgen/support_library.hpp>
#include "push_lock_t.hpp"
#include "../nt/guid_t.hpp"
#include "rundown_ref_t.hpp"
#include "pool_priority_t.hpp"
#include "../nt/eresource_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../nt/fast_mutex_t.hpp"
#include "../nt/suite_type_t.hpp"
#include "../nt/zone_header_t.hpp"
#include "gen_random_domain_t.hpp"
#include "../nt/slist_header_t.hpp"
#include "boot_device_handle_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../nt/firmware_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../nt/work_queue_type_t.hpp"
#include "push_lock_auto_expand_t.hpp"
#include "../nt/lookaside_list_ex_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "rundown_ref_cache_aware_t.hpp"
#include "boot_device_registration_t.hpp"
#include "../nt/paged_lookaside_list_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "../nt/licensing_tamper_state_t.hpp"
#include "push_lock_cache_aware_legacy_t.hpp"
#include "../ndis/pool_extended_parameter_t.hpp"

namespace ext { struct delete_parameters_t; }
namespace ext { struct set_parameters_v0_t; }
namespace nt  { struct callback_object_t;   }
namespace nt  { struct object_attributes_t; }

#include "magic/api.start.hpp"
namespace ex
{
    struct timer_t;
    struct extension_t;

    // [ExAllocateFromLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2dfc40, 0x1fd000 bytes
    //
    _m00(sdk::function<void*(struct nt::lookaside_list_ex_t*)>*) allocate_from_lookaside_list_ex;
    
    // [ExAllocatePoolZero]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x344ab0, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) allocate_pool_zero;
    
    // [ExAtsSvmDevicePowerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8220, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) ats_svm_device_power_callback;
    
    // [ExBootAppErrorDiagCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc70c64, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) boot_app_error_diag_code;
    
    // [ExBootLoaderMetadataLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc31568, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) boot_loader_metadata_lock;
    
    // [ExCancelDpcEventWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f7110, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) cancel_dpc_event_wait;
    
    // [ExCreateDpcEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f7130, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) create_dpc_event;
    
    // [ExCreatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f2090, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) create_pool;
    
    // [ExDeferredFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe POOLCODE:0x254000, 0x32828 bytes
    //
    _m08(sdk::unknown_ptr) deferred_free_pool;
    
    // [ExDeleteDpcEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f7240, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) delete_dpc_event;
    
    // [ExDestroyHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x485d28, 0x32828 bytes
    //
    _m10(sdk::unknown_ptr) destroy_handle_table;
    
    // [ExDestroyPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f2280, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) destroy_pool;
    
    // [ExDrainPoolLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x521ac8, 0x32828 bytes
    //
    _m12(sdk::unknown_ptr) drain_pool_lookaside_list;
    
    // [ExFastReferenceHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f1f08, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) fast_reference_handle_table_entry;
    
    // [ExFreeLargePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xf0380, 0x32828 bytes
    //
    _m14(sdk::unknown_ptr) free_large_pool;
    
    // [ExFreePool2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f22a0, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) free_pool2;
    
    // [ExFreeToLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x347ab0, 0x1fd000 bytes
    //
    _m16(sdk::function<void(struct nt::lookaside_list_ex_t*, void*)>*) free_to_lookaside_list_ex;
    
    // [ExGetCallBackBlockContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xca75c, 0x32828 bytes
    //
    _m17(sdk::unknown_ptr) get_call_back_block_context;
    
    // [ExGetHandlePointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2cb210, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) get_handle_pointer;
    
    // [ExInitializeDeviceAts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f74c0, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) initialize_device_ats;
    
    // [ExInitializePoolDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x526aa0, 0x32828 bytes
    //
    _m20(sdk::unknown_ptr) initialize_pool_descriptor;
    
    // [ExIsAppLicensed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b0944, 0x32828 bytes
    //
    _m21(sdk::unknown_ptr) is_app_licensed;
    
    // [ExIsAppLicensedProduct]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b0990, 0x32828 bytes
    //
    _m22(sdk::unknown_ptr) is_app_licensed_product;
    
    // [ExIsStateSeparationEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9ec4b8, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) is_state_separation_enabled;
    
    // [ExIsWindowsToGo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x4a01e0, 0x32828 bytes
    //
    _m24(sdk::unknown_ptr) is_windows_to_go;
    
    // [ExLogTimeZoneInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3e4a30, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) log_time_zone_information;
    
    // [ExPoolLimitState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xcf7a00, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) pool_limit_state;
    
    // [ExPoolQueryLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f27e0, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) pool_query_limits;
    
    // [ExPoolSetLimit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f2b24, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) pool_set_limit;
    
    // [ExPreInitializeNls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x82d680, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) pre_initialize_nls;
    
    // [ExProcessCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9e9c00, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) process_counter_set_callback;
    
    // [ExQueryHandleExceptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x947ee4, 0x1fe000 bytes
    //
    _m31(sdk::unknown_ptr) query_handle_exceptions;
    
    // [ExQueryRaiseUMExceptionOnInvalidHandleClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x76c740, 0x1fe000 bytes
    //
    _m32(sdk::unknown_ptr) query_raise_um_exception_on_invalid_handle_close;
    
    // [ExQueueDpcEventWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f7270, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) queue_dpc_event_wait;
    
    // [ExReArmFastCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x6b0bac, 0x32828 bytes
    //
    _m34(sdk::unknown_ptr) re_arm_fast_cache;
    
    // [ExSecurePoolUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8110, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) secure_pool_update;
    
    // [ExSecurePoolValidate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f8160, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) secure_pool_validate;
    
    // [ExShareUltraSpaceWithDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9f4900, 0x1fd000 bytes
    //
    _m37(sdk::unknown_ptr) share_ultra_space_with_device;
    
    // [ExTryQueueWorkItemFromIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x10c5d0, 0x32828 bytes
    //
    _m38(sdk::unknown_ptr) try_queue_work_item_from_io;
    
    // [ExUninitializeDeviceAts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5f7760, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) uninitialize_device_ats;
    
    // [ExUpdateLicenseRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x49b340, 0x32828 bytes
    //
    _m40(sdk::unknown_ptr) update_license_registry;
    
    // [ExWnfHiveUnloaded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x79aec8, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) wnf_hive_unloaded;
    
    // [ExCleanupSessionHeapManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3850a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385e68, 0x1fe000 bytes
    //
    _m42(sdk::unknown_ptr) cleanup_session_heap_manager;
    
    // [ExInitializeNls]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe INIT:0x7a9740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x82d80c, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) initialize_nls;
    
    // [ExInitializeSessionHeapManager]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398ac4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399f84, 0x1fe000 bytes
    //
    _m44(sdk::unknown_ptr) initialize_session_heap_manager;
    
    // [ExAcquireFastResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b610, 0x1fe000 bytes
    //
    _m45(sdk::unknown_ptr) acquire_fast_resource_exclusive;
    
    // [ExAcquireFastResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38ac50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38bcf0, 0x1fe000 bytes
    //
    _m46(sdk::unknown_ptr) acquire_fast_resource_shared;
    
    // [ExAcquireFastResourceSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x393320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b9f0, 0x1fe000 bytes
    //
    _m47(sdk::unknown_ptr) acquire_fast_resource_shared_starve_exclusive;
    
    // [ExActivationObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb7b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de28, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7b0, 0x1fe000 bytes
    //
    _m48(sdk::unknown_ptr) activation_object_type;
    
    // [ExAllocateContiguousHeapPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35e3c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30a538, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f93b0, 0x1fe000 bytes
    //
    _m49(sdk::unknown_ptr) allocate_contiguous_heap_pool;
    
    // [ExAllocateHeapPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x370b48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b5c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x371ec8, 0x1fe000 bytes
    //
    _m50(sdk::unknown_ptr) allocate_heap_pages;
    
    // [ExAllocateHeapPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ceef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d1950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24ff10, 0x1fe000 bytes
    //
    _m51(sdk::unknown_ptr) allocate_heap_pool;
    
    // [ExAllocateHeapSpecialPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b3cbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f9ef0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3b3c, 0x1fe000 bytes
    //
    _m52(sdk::unknown_ptr) allocate_heap_special_pool;
    
    // [ExAllocatePool2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x9b2280, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9a5b0, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b1280, 0x1fe000 bytes
    //
    _m53(sdk::function<void*(uint64_t, uint64_t, uint32_t)>*) allocate_pool2;
    
    // [ExAllocatePool3]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x9b2340, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9a330, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b1340, 0x1fe000 bytes
    //
    _m54(sdk::function<void*(uint64_t, uint64_t, uint32_t, const struct ndis::pool_extended_parameter_t*, uint32_t)>*) allocate_pool3;
    
    // [ExAllocatePoolMm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x344950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a0990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a1070, 0x1fe000 bytes
    //
    _m55(sdk::function<void*(uint64_t, uint64_t, uint32_t, uint32_t)>*) allocate_pool_mm;
    
    // [ExAllocatePrivateWorkerPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565f20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a408c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ac1a4, 0x1fe000 bytes
    //
    _m56(sdk::unknown_ptr) allocate_private_worker_pool;
    
    // [ExAllocateTimerInternal2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x210d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35bc40, 0x1fe000 bytes
    //
    _m57(sdk::unknown_ptr) allocate_timer_internal2;
    
    // [ExCheckFullProcessInformationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5fb698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d921c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70daa4, 0x1fe000 bytes
    //
    _m58(sdk::unknown_ptr) check_full_process_information_access;
    
    // [ExCheckValidIRTimerId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x37d314, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385d58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37e694, 0x1fe000 bytes
    //
    _m59(sdk::unknown_ptr) check_valid_ir_timer_id;
    
    // [ExConvertFastResourceExclusiveToShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5adfc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4f80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ade40, 0x1fe000 bytes
    //
    _m60(sdk::unknown_ptr) convert_fast_resource_exclusive_to_shared;
    
    // [ExCreateHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x9493b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6897ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947c80, 0x1fe000 bytes
    //
    _m61(sdk::unknown_ptr) create_handle;
    
    // [ExCreateHeap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x398c48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b54b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39a108, 0x1fe000 bytes
    //
    _m62(sdk::unknown_ptr) create_heap;
    
    // [ExCrossVmEventObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15e98, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c780, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ed8, 0x1fe000 bytes
    //
    _m63(sdk::unknown_ptr) cross_vm_event_object_type;
    
    // [ExCrossVmMutantObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc15ea0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c768, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ee0, 0x1fe000 bytes
    //
    _m64(sdk::unknown_ptr) cross_vm_mutant_object_type;
    
    // [ExDeleteFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38f510, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390560, 0x1fe000 bytes
    //
    _m65(sdk::unknown_ptr) delete_fast_resource;
    
    // [ExDisownFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38b030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3936a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38c0d0, 0x1fe000 bytes
    //
    _m66(sdk::unknown_ptr) disown_fast_resource;
    
    // [ExFreeHeapPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2cb770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x321580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24c790, 0x1fe000 bytes
    //
    _m67(sdk::unknown_ptr) free_heap_pool;
    
    // [ExGetAttachedSessionPoolTagInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51617c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc988, 0x1fe000 bytes
    //
    _m68(sdk::unknown_ptr) get_attached_session_pool_tag_info;
    
    // [ExGetFirmwareType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3cacf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea010, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbdc0, 0x1fe000 bytes
    //
    _m69(sdk::function<enum nt::firmware_type_t()>*) get_firmware_type;
    
    // [ExGetHeapFromType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35e5ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30a7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f95dc, 0x1fe000 bytes
    //
    _m70(sdk::unknown_ptr) get_heap_from_type;
    
    // [ExGetHeapFromVA]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220444, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d0a10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ac2ac, 0x1fe000 bytes
    //
    _m71(sdk::unknown_ptr) get_heap_from_va;
    
    // [ExGetSessionBigPoolInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6adb84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x946de0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9456b0, 0x1fe000 bytes
    //
    _m72(sdk::unknown_ptr) get_session_big_pool_information;
    
    // [ExGetSessionPoolTagInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b3d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35fbb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f82e8, 0x1fe000 bytes
    //
    _m73(sdk::unknown_ptr) get_session_pool_tag_info;
    
    // [ExGetSessionPoolTagInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x515fa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709394, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc79c, 0x1fe000 bytes
    //
    _m74(sdk::unknown_ptr) get_session_pool_tag_information;
    
    // [ExHeapQueryPoolUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29cf74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6cb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2040c8, 0x1fe000 bytes
    //
    _m75(sdk::unknown_ptr) heap_query_pool_usage;
    
    // [ExInitLicenseCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7b6588, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be158, 0x1fe000 bytes
    //
    _m76(sdk::unknown_ptr) init_license_callback;
    
    // [ExInitializeFastOwnerEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3586d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d600, 0x1fe000 bytes
    //
    _m77(sdk::unknown_ptr) initialize_fast_owner_entry;
    
    // [ExInitializeFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x395520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a6b30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396580, 0x1fe000 bytes
    //
    _m78(sdk::unknown_ptr) initialize_fast_resource;
    
    // [ExInitializeLeapSecondData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa53698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85eb7c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53534, 0x1fe000 bytes
    //
    _m79(sdk::unknown_ptr) initialize_leap_second_data;
    
    // [ExInitializePagedHeaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bee30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b52fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bfc40, 0x1fe000 bytes
    //
    _m80(sdk::unknown_ptr) initialize_paged_heaps;
    
    // [ExInitializePoolHeapManagement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3bec24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b5074, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bfa34, 0x1fe000 bytes
    //
    _m81(sdk::unknown_ptr) initialize_pool_heap_management;
    
    // [ExInitializePoolTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa6528c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb36c70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6496c, 0x1fe000 bytes
    //
    _m82(sdk::unknown_ptr) initialize_pool_tracker;
    
    // [ExIsFastResourceContended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f50d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5adf90, 0x1fe000 bytes
    //
    _m83(sdk::unknown_ptr) is_fast_resource_contended;
    
    // [ExIsFastResourceHeld]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3944d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b940, 0x1fe000 bytes
    //
    _m84(sdk::unknown_ptr) is_fast_resource_held;
    
    // [ExIsFastResourceHeldExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38c6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3943e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d740, 0x1fe000 bytes
    //
    _m85(sdk::unknown_ptr) is_fast_resource_held_exclusive;
    
    // [ExIsSpecialPoolAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b4000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5fa248, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b3e80, 0x1fe000 bytes
    //
    _m86(sdk::unknown_ptr) is_special_pool_address;
    
    // [ExKsrInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19660, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31540, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc196c0, 0x1fe000 bytes
    //
    _m87(sdk::unknown_ptr) ksr_interface;
    
    // [ExLeapSecondData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc19280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31338, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc192e8, 0x1fe000 bytes
    //
    _m88(sdk::unknown_ptr) leap_second_data;
    
    // [ExLeapSecondDataLastParseResult]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2c7cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53564, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c7cc, 0x1fe000 bytes
    //
    _m89(sdk::unknown_ptr) leap_second_data_last_parse_result;
    
    // [ExLeapSecondDataSectionPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0xd2cbc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd53928, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cbc8, 0x1fe000 bytes
    //
    _m90(sdk::unknown_ptr) leap_second_data_section_pointer;
    
    // [ExPoolCleanupExpansionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x385028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f26c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x385de8, 0x1fe000 bytes
    //
    _m91(sdk::unknown_ptr) pool_cleanup_expansion_table;
    
    // [ExPoolState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc545c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54580, 0x1fe000 bytes
    //
    _m92(sdk::unknown_ptr) pool_state;
    
    // [ExQueryBigPoolTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5adaa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2cec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad920, 0x1fe000 bytes
    //
    _m93(sdk::unknown_ptr) query_big_pool_tag;
    
    // [ExQueueWorkItemToPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x351ecc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2895c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23505c, 0x1fe000 bytes
    //
    _m94(sdk::unknown_ptr) queue_work_item_to_partition;
    
    // [ExRebootSystemForRecovery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ac578, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1b54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac3f8, 0x1fe000 bytes
    //
    _m95(sdk::unknown_ptr) reboot_system_for_recovery;
    
    // [ExRecordOneTimerExpiry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b0670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6c34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b04f0, 0x1fe000 bytes
    //
    _m96(sdk::unknown_ptr) record_one_timer_expiry;
    
    // [ExReinitializeFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x390320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391370, 0x1fe000 bytes
    //
    _m97(sdk::unknown_ptr) reinitialize_fast_resource;
    
    // [ExReleaseDisownedFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x389e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38aeb0, 0x1fe000 bytes
    //
    _m98(sdk::unknown_ptr) release_disowned_fast_resource;
    
    // [ExReleaseDisownedFastResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae000, 0x1fe000 bytes
    //
    _m99(sdk::unknown_ptr) release_disowned_fast_resource_exclusive;
    
    // [ExReleaseDisownedFastResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae290, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae110, 0x1fe000 bytes
    //
    _n00(sdk::unknown_ptr) release_disowned_fast_resource_shared;
    
    // [ExReleaseFastResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38a190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x394c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38b230, 0x1fe000 bytes
    //
    _n01(sdk::unknown_ptr) release_fast_resource;
    
    // [ExReleaseFastResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae3b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae230, 0x1fe000 bytes
    //
    _n02(sdk::unknown_ptr) release_fast_resource_exclusive;
    
    // [ExReleaseFastResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f54a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae360, 0x1fe000 bytes
    //
    _n03(sdk::unknown_ptr) release_fast_resource_shared;
    
    // [ExRemovePoolTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x35d8a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30ce30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fab78, 0x1fe000 bytes
    //
    _n04(sdk::unknown_ptr) remove_pool_tag;
    
    // [ExSaAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38ce74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ee2b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38df04, 0x1fe000 bytes
    //
    _n05(sdk::unknown_ptr) sa_allocate;
    
    // [ExSaFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38fccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37102c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x390d1c, 0x1fe000 bytes
    //
    _n06(sdk::unknown_ptr) sa_free;
    
    // [ExSetLeapSecondEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x948644, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb3d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x946f14, 0x1fe000 bytes
    //
    _n07(sdk::unknown_ptr) set_leap_second_enabled;
    
    // [ExSoftRebootState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc54594, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c50, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54564, 0x1fe000 bytes
    //
    _n08(sdk::unknown_ptr) soft_reboot_state;
    
    // [ExStartRecordingIRTimerExpiries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94bd94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80cef8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a674, 0x1fe000 bytes
    //
    _n09(sdk::unknown_ptr) start_recording_ir_timer_expiries;
    
    // [ExStopRecordingIRTimerExpiries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x94be20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eeeac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a700, 0x1fe000 bytes
    //
    _n10(sdk::unknown_ptr) stop_recording_ir_timer_expiries;
    
    // [ExSvmBeginDeviceReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b1e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f82c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b1cc0, 0x1fe000 bytes
    //
    _n11(sdk::unknown_ptr) svm_begin_device_reset;
    
    // [ExSvmDevicePowerCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e4f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b2230, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b20b0, 0x1fe000 bytes
    //
    _n12(sdk::unknown_ptr) svm_device_power_callback;
    
    // [ExSvmFinalizeDeviceReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b2270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f8490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b20f0, 0x1fe000 bytes
    //
    _n13(sdk::unknown_ptr) svm_finalize_device_reset;
    
    // [ExTryToConvertFastResourceSharedToExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5ae620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f55e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ae4a0, 0x1fe000 bytes
    //
    _n14(sdk::unknown_ptr) try_to_convert_fast_resource_shared_to_exclusive;
    
    // [ExWnfCleanupServerSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x959740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f9230, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x958020, 0x1fe000 bytes
    //
    _n15(sdk::unknown_ptr) wnf_cleanup_server_silo_state;
    
    // [ExWnfCrossVmCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x952a10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f3e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9512f0, 0x1fe000 bytes
    //
    _n16(sdk::unknown_ptr) wnf_cross_vm_callback;
    
    // [ExAcquireAutoExpandPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbb580, 0x32828 bytes
    // ntoskrnl.exe .text:0x24c430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ffe70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6030, 0x1fe000 bytes
    //
    _n17(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*) acquire_auto_expand_push_lock_exclusive;
    
    // [ExAcquireAutoExpandPushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87da0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dab0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359730, 0x1fe000 bytes
    //
    _n18(sdk::function<void*(struct ex::push_lock_auto_expand_t*, uint32_t)>*) acquire_auto_expand_push_lock_shared;
    
    // [ExAcquireCacheAwarePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87ccc, 0x32828 bytes
    // ntoskrnl.exe .text:0x20dfd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359bf0, 0x1fe000 bytes
    //
    _n19(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*) acquire_cache_aware_push_lock_exclusive;
    
    // [ExAcquireCacheAwarePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cc04, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ef950, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423660, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1230, 0x1fe000 bytes
    //
    _n20(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*) acquire_cache_aware_push_lock_exclusive_ex;
    
    // [ExAcquireCacheAwarePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x880f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2df1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260440, 0x1fe000 bytes
    //
    _n21(sdk::function<uint64_t*(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*) acquire_cache_aware_push_lock_shared_ex;
    
    // [ExAcquireFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf3eb0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dee40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c9400, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2600d0, 0x1fe000 bytes
    //
    _n22(sdk::function<void(struct nt::fast_mutex_t*)>*) acquire_fast_mutex;
    
    // [ExAcquireFastMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffd80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2daa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfeb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25bc80, 0x1fe000 bytes
    //
    _n23(sdk::function<void(struct nt::fast_mutex_t*)>*) acquire_fast_mutex_unsafe;
    
    // [ExAcquirePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x882b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2df750, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8ff0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2609e0, 0x1fe000 bytes
    //
    _n24(sdk::function<void(uint64_t*, uint32_t)>*) acquire_push_lock_exclusive_ex;
    
    // [ExAcquirePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x88530, 0x32828 bytes
    // ntoskrnl.exe .text:0x2df910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260ba0, 0x1fe000 bytes
    //
    _n25(sdk::function<void(uint64_t*, uint32_t)>*) acquire_push_lock_shared_ex;
    
    // [ExAcquireResourceExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe7bd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e0960, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x230830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261c10, 0x1fe000 bytes
    //
    _n26(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*) acquire_resource_exclusive_lite;
    
    // [ExAcquireResourceSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe8080, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e0d20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c3a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261fd0, 0x1fe000 bytes
    //
    _n27(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*) acquire_resource_shared_lite;
    
    // [ExAcquireRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebd50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8b00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2068e0, 0x1fe000 bytes
    //
    _n28(sdk::function<uint8_t(struct ex::rundown_ref_t*)>*) acquire_rundown_protection;
    
    // [ExAcquireRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1420, 0x32828 bytes
    // ntoskrnl.exe .text:0x23e000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34afa0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eac50, 0x1fe000 bytes
    //
    _n29(sdk::function<uint8_t(struct ex::rundown_ref_cache_aware_t*)>*) acquire_rundown_protection_cache_aware;
    
    // [ExAcquireRundownProtectionCacheAwareEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ede0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3464f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2730, 0x1fe000 bytes
    //
    _n30(sdk::function<uint8_t(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*) acquire_rundown_protection_cache_aware_ex;
    
    // [ExAcquireRundownProtectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ee20, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e5b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2780, 0x1fe000 bytes
    //
    _n31(sdk::function<uint8_t(struct ex::rundown_ref_t*, uint32_t)>*) acquire_rundown_protection_ex;
    
    // [ExAcquireSharedStarveExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21710, 0x32828 bytes
    // ntoskrnl.exe .text:0x311310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2838f0, 0x1fe000 bytes
    //
    _n32(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*) acquire_shared_starve_exclusive;
    
    // [ExAcquireSharedWaitForExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130d48, 0x32828 bytes
    // ntoskrnl.exe .text:0x5aece0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x392180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aeb60, 0x1fe000 bytes
    //
    _n33(sdk::function<uint8_t(struct nt::eresource_t*, uint8_t)>*) acquire_shared_wait_for_exclusive;
    
    // [ExAcquireSpinLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38700, 0x32828 bytes
    // ntoskrnl.exe .text:0x296b40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27cfe0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23c6e0, 0x1fe000 bytes
    //
    _n34(sdk::function<uint8_t(volatile int32_t*)>*) acquire_spin_lock_exclusive;
    
    // [ExAcquireSpinLockExclusiveAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x15dd0, 0x32828 bytes
    // ntoskrnl.exe .text:0x345f40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x231d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a37d0, 0x1fe000 bytes
    //
    _n35(sdk::function<void(volatile int32_t*)>*) acquire_spin_lock_exclusive_at_dpc_level;
    
    // [ExAcquireSpinLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb420, 0x32828 bytes
    // ntoskrnl.exe .text:0x33a2a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ac20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2814c0, 0x1fe000 bytes
    //
    _n36(sdk::function<uint8_t(volatile int32_t*)>*) acquire_spin_lock_shared;
    
    // [ExAcquireSpinLockSharedAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdebf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x336840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29fc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27d890, 0x1fe000 bytes
    //
    _n37(sdk::function<void(volatile int32_t*)>*) acquire_spin_lock_shared_at_dpc_level;
    
    // [ExAcquireTimeRefreshLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x418298, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x686008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x789fa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d0be8, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) acquire_time_refresh_lock;
    
    // [ExAddPrivateDataToCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c230, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad4c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1fe4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad340, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) add_private_data_to_crash_dump;
    
    // [ExAllocateAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133684, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dde0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3991d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ee70, 0x1fe000 bytes
    //
    _n40(sdk::function<struct ex::push_lock_auto_expand_t*(uint32_t)>*) allocate_auto_expand_push_lock;
    
    // [ExAllocateCacheAwarePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1100b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dc220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c3e70, 0x1fe000 bytes
    //
    _n41(sdk::function<struct ex::push_lock_cache_aware_legacy_t*(uint32_t)>*) allocate_cache_aware_push_lock;
    
    // [ExAllocateCacheAwareRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e467c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f94a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7980b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7022c0, 0x1fe000 bytes
    //
    _n42(sdk::function<struct ex::rundown_ref_cache_aware_t*(enum nt::pool_type_t, uint32_t)>*) allocate_cache_aware_rundown_protection;
    
    // [ExAllocateCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d8b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7775f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7879d0, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) allocate_call_back;
    
    // [ExAllocateFromNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e00c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d7c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2930e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1284, 0x1fe000 bytes
    //
    _n44(sdk::function<void*(struct nt::npaged_lookaside_list_t*)>*) allocate_from_n_paged_lookaside_list;
    
    // [ExAllocateFromPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e00c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27d7c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2930e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1284, 0x1fe000 bytes
    //
    _n45(sdk::function<void*(struct nt::paged_lookaside_list_t*)>*) allocate_from_paged_lookaside_list;
    
    // [ExAllocatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x270d40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322500, 0x1fe000 bytes
    //
    _n46(sdk::function<void*(enum nt::pool_type_t, uint64_t)>*) allocate_pool;
    
    // [ExAllocatePoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc050, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x344ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c5c0, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) allocate_pool_ex;
    
    // [ExAllocatePoolSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x7241f8, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9ead84, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3c7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9d84, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) allocate_pool_sanity_checks;
    
    // [ExAllocatePoolWithQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c348, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad3d0, 0x1fe000 bytes
    //
    _n49(sdk::function<void*(enum nt::pool_type_t, uint64_t)>*) allocate_pool_with_quota;
    
    // [ExAllocatePoolWithQuotaTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf1f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2421d0, 0x1fe000 bytes
    //
    _n50(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*) allocate_pool_with_quota_tag;
    
    // [ExAllocatePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x254de0, 0x32828 bytes
    // ntoskrnl.exe POOLCODE:0x9b2030, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9acc0, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b1030, 0x1fe000 bytes
    //
    _n51(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*) allocate_pool_with_tag;
    
    // [ExAllocatePoolWithTagPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6e4b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2cedc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35eb60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24fde0, 0x1fe000 bytes
    //
    _n52(sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t, enum ex::pool_priority_t)>*) allocate_pool_with_tag_priority;
    
    // [ExAllocateTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131128, 0x32828 bytes
    // ntoskrnl.exe .text:0x210cf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35bc10, 0x1fe000 bytes
    //
    _n53(sdk::function<struct ex::timer_t*(sdk::function<void(struct ex::timer_t*, void*)>*, void*, uint32_t)>*) allocate_timer;
    
    // [ExAllocateTimerInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x131140, 0x32828 bytes
    // ntoskrnl.exe .text:0x5aff80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afe00, 0x1fe000 bytes
    //
    _n54(sdk::function<struct ex::timer_t*(sdk::function<void(struct ex::timer_t*, void*)>*, void*, uint32_t)>*) allocate_timer_internal;
    
    // [ExBlockOnAddressPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a488, 0x32828 bytes
    // ntoskrnl.exe .text:0x23dbb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebc50, 0x1fe000 bytes
    //
    _n55(sdk::function<int32_t(uint64_t*, volatile void*, void*, uint64_t, int64_t*)>*) block_on_address_push_lock;
    
    // [ExBlockPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a528, 0x32828 bytes
    // ntoskrnl.exe .text:0x23dc70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3475e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebd10, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) block_push_lock;
    
    // [ExBootAppFailureStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb44, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf9e28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf9e28, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) boot_app_failure_status;
    
    // [ExBootDeviceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc660, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19100, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d150, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19150, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) boot_device_list;
    
    // [ExBootDeviceListSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc670, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19138, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d148, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19198, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) boot_device_list_spin_lock;
    
    // [ExBootDeviceRemovalHandler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc608, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19110, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d138, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19160, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) boot_device_removal_handler;
    
    // [ExBootDevicesRemovedEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc620, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d180, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19180, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) boot_devices_removed_event;
    
    // [ExBootLoaderMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb38, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54588, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c58, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54558, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) boot_loader_metadata;
    
    // [ExBurnMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7ba12c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8ae48, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7c798, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8a0c8, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) burn_memory;
    
    // [ExCallCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe6e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c34c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70a5e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63731c, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) call_call_back;
    
    // [ExCallSessionCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fcaa8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x634d38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77c8f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x710788, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) call_session_call_back;
    
    // [ExCallbackObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab520, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb938, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df08, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb938, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) callback_object_type;
    
    // [ExCancelTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa806c, 0x32828 bytes
    // ntoskrnl.exe .text:0x210a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9560, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b320, 0x1fe000 bytes
    //
    _n67(sdk::function<uint8_t(struct ex::timer_t*, void*)>*) cancel_timer;
    
    // [ExCbEnlightenmentState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31260, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19230, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) cb_enlightenment_state;
    
    // [ExCbPhase1InitComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31268, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19208, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) cb_phase1_init_complete;
    
    // [ExCbPowerState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb48, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191a8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31270, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19200, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) cb_power_state;
    
    // [ExCbProcessorAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19198, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31250, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191f8, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) cb_processor_add;
    
    // [ExCbSeImageVerificationDriverInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31278, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19240, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) cb_se_image_verification_driver_info;
    
    // [ExCbSetSystemState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19210, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) cb_set_system_state;
    
    // [ExCbSetSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc191c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc31258, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19238, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) cb_set_system_time;
    
    // [ExCheckSingleFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x157a64, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad56c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x46944e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad3ec, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) check_single_filter;
    
    // [ExCleanTimerResolutionRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc45ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x3689d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x369d84, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) clean_timer_resolution_request;
    
    // [ExCleanupAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe5c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38dee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x300230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d4de0, 0x1fe000 bytes
    //
    _n77(sdk::function<void(struct ex::push_lock_auto_expand_t*)>*) cleanup_auto_expand_push_lock;
    
    // [ExCleanupRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _n78(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) cleanup_rundown_protection_cache_aware;
    
    // [ExClearPoolFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f0cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad5a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f207c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad428, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) clear_pool_flags;
    
    // [ExCompareExchangeCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x134cf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a5bcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3abbb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af4dc, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) compare_exchange_call_back;
    
    // [ExCompositionObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa200, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7c0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7c0, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) composition_object_type;
    
    // [ExComputeTickCountMultiplier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4930, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6b67c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2dbdc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6af74, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) compute_tick_count_multiplier;
    
    // [ExConvertExclusiveToSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb209c, 0x32828 bytes
    // ntoskrnl.exe .text:0x216490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35d610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3039a0, 0x1fe000 bytes
    //
    _n83(sdk::function<void(struct nt::eresource_t*)>*) convert_exclusive_to_shared_lite;
    
    // [ExConvertPushLockExclusiveToShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bab4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ef930, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x423640, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1210, 0x1fe000 bytes
    //
    _n84(sdk::function<void(struct ex::push_lock_t*)>*) convert_push_lock_exclusive_to_shared;
    
    // [ExCopyWakeTimerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d694, 0x32828 bytes
    // ntoskrnl.exe .text:0x5affb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afe30, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) copy_wake_timer_info;
    
    // [ExCoreMessagingObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1f0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de30, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7a0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) core_messaging_object_type;
    
    // [ExCovMaxPagedPoolToUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ef8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cb2c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f58, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) cov_max_paged_pool_to_use;
    
    // [ExCovReadjustUnloadedModuleEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5378d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x756a28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ec28c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e478, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) cov_readjust_unloaded_module_entry;
    
    // [ExCpuSetResourceManagerAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10ee98, 0x32828 bytes
    // ntoskrnl.exe .text:0x25c2b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e46dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202268, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) cpu_set_resource_manager_access_check;
    
    // [ExCreateCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49dff8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6735a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7db530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6b90, 0x1fe000 bytes
    //
    _n90(sdk::function<int32_t(struct nt::callback_object_t**, struct nt::object_attributes_t*, uint8_t, uint8_t)>*) create_callback;
    
    // [ExCreateHandleEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463c20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d5d0, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) create_handle_ex;
    
    // [ExCreateHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4748c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cec88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73f6fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69f1c8, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) create_handle_table;
    
    // [ExCreatePoolTagTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5516c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77d43c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x831b9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78214c, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) create_pool_tag_table;
    
    // [ExCriticalWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc500, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16668, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d050, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc167cc, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) critical_worker_threads;
    
    // [ExDelayedWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc388, 0x32828 bytes
    // ntoskrnl.exe .data:0xc166d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2cf70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16718, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) delayed_worker_threads;
    
    // [ExDeleteLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7a3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ea20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ebb0, 0x1fe000 bytes
    //
    _n96(sdk::function<void(struct nt::lookaside_list_ex_t*)>*) delete_lookaside_list_ex;
    
    // [ExDeleteNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147c3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x396480, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a8830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3974a0, 0x1fe000 bytes
    //
    _n97(sdk::function<void(struct nt::npaged_lookaside_list_t*)>*) delete_n_paged_lookaside_list;
    
    // [ExDeletePagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc79d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30eb30, 0x1fe000 bytes
    //
    _n98(sdk::function<void(struct nt::paged_lookaside_list_t*)>*) delete_paged_lookaside_list;
    
    // [ExDeletePoolTagTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c354, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad5bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad43c, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) delete_pool_tag_table;
    
    // [ExDeleteResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3ade0, 0x32828 bytes
    // ntoskrnl.exe .text:0x34deb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x331a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x231040, 0x1fe000 bytes
    //
    _o00(sdk::function<int32_t(struct nt::eresource_t*)>*) delete_resource_lite;
    
    // [ExDeleteTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12edf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x210a90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9180, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35b3a0, 0x1fe000 bytes
    //
    _o01(sdk::function<uint8_t(struct ex::timer_t*, uint8_t, uint8_t, struct ext::delete_parameters_t*)>*) delete_timer;
    
    // [ExDeleteWakeTimerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d6f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x25d170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f67e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d8c0, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) delete_wake_timer_info;
    
    // [ExDereferenceCallBackBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10980, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b6e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f5870, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5ad0, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) dereference_call_back_block;
    
    // [ExDereferenceHandleDebugInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afe9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9493d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ec550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947ca4, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) dereference_handle_debug_info;
    
    // [ExDesktopObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1f8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7c8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de08, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7c8, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) desktop_object_type;
    
    // [ExDestroyHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425bac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6938f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68bda4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f1908, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) destroy_handle;
    
    // [ExDisableAllLookasideLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22da18, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b082c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f648c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b06ac, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) disable_all_lookaside_lists;
    
    // [ExDisableHandleTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bffc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac908, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f1e54, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac788, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) disable_handle_tracing;
    
    // [ExDisableResourceBoostLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110790, 0x32828 bytes
    // ntoskrnl.exe .text:0x264ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a3260, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x315310, 0x1fe000 bytes
    //
    _o09(sdk::function<void(struct nt::eresource_t*)>*) disable_resource_boost_lite;
    
    // [ExDupHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474a90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683840, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7add90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670ba0, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) dup_handle_table;
    
    // [ExEnableHandleExceptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41cfb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6706ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9b54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3e3c, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) enable_handle_exceptions;
    
    // [ExEnableHandleTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6afef4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949434, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ec5b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947d04, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) enable_handle_tracing;
    
    // [ExEnableRaiseUMExceptionOnInvalidHandleClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ead0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664bf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c2fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d7f54, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) enable_raise_um_exception_on_invalid_handle_close;
    
    // [ExEnterCriticalRegionAndAcquireFastMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bbc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x247f50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfe80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f31e0, 0x1fe000 bytes
    //
    _o14(sdk::function<void(struct nt::fast_mutex_t*)>*) enter_critical_region_and_acquire_fast_mutex_unsafe;
    
    // [ExEnterCriticalRegionAndAcquireResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe7b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e0c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261f10, 0x1fe000 bytes
    //
    _o15(sdk::function<void*(struct nt::eresource_t*)>*) enter_critical_region_and_acquire_resource_exclusive;
    
    // [ExEnterCriticalRegionAndAcquireResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3170, 0x32828 bytes
    // ntoskrnl.exe .text:0x23cf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e9570, 0x1fe000 bytes
    //
    _o16(sdk::function<void*(struct nt::eresource_t*)>*) enter_critical_region_and_acquire_resource_shared;
    
    // [ExEnterCriticalRegionAndAcquireSharedWaitForExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ceb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af2c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af140, 0x1fe000 bytes
    //
    _o17(sdk::function<void*(struct nt::eresource_t*)>*) enter_critical_region_and_acquire_shared_wait_for_exclusive;
    
    // [ExEnterPriorityRegionAndAcquireResourceExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cee4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5cc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af180, 0x1fe000 bytes
    //
    _o18(sdk::function<void*(struct nt::eresource_t*)>*) enter_priority_region_and_acquire_resource_exclusive;
    
    // [ExEnterPriorityRegionAndAcquireResourceShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe5670, 0x32828 bytes
    // ntoskrnl.exe .text:0x2406d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ab40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2edf30, 0x1fe000 bytes
    //
    _o19(sdk::function<void*(struct nt::eresource_t*)>*) enter_priority_region_and_acquire_resource_shared;
    
    // [ExEnumHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e0a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7cf0, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) enum_handle_table;
    
    // [ExEnumerateSystemFirmwareTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6adaa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x946cf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9e9b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9455c0, 0x1fe000 bytes
    //
    _o21(sdk::function<int32_t(uint32_t, void*, uint32_t, uint32_t*)>*) enumerate_system_firmware_tables;
    
    // [ExEventObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa020, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4a0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dac8, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb4a0, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) event_object_type;
    
    // [ExExtendZone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dba4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f72b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0970, 0x1fe000 bytes
    //
    _o23(sdk::function<int32_t(struct nt::zone_header_t*, void*, uint32_t)>*) extend_zone;
    
    // [ExExternalBootSupportInitializationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc640, 0x32828 bytes
    // ntoskrnl.exe .data:0xc19140, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d160, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc191a0, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) external_boot_support_initialization_event;
    
    // [ExFastReplenishHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd4fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x268cc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37a910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x319e90, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) fast_replenish_handle_table_entry;
    
    // [ExFlushLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7a70, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36ea60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ebf0, 0x1fe000 bytes
    //
    _o26(sdk::function<void(struct nt::lookaside_list_ex_t*)>*) flush_lookaside_list_ex;
    
    // [ExFlushTb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e088, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b1158, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f8258, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0fd8, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) flush_tb;
    
    // [ExFreeAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133c98, 0x32828 bytes
    // ntoskrnl.exe .text:0x38deb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38ef40, 0x1fe000 bytes
    //
    _o28(sdk::function<void(struct ex::push_lock_auto_expand_t*)>*) free_auto_expand_push_lock;
    
    // [ExFreeCacheAwarePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10de94, 0x32828 bytes
    // ntoskrnl.exe .text:0x5adda0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5adc20, 0x1fe000 bytes
    //
    _o29(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*) free_cache_aware_push_lock;
    
    // [ExFreeCacheAwareRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2628, 0x32828 bytes
    // ntoskrnl.exe .text:0x2480b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3340, 0x1fe000 bytes
    //
    _o30(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) free_cache_aware_rundown_protection;
    
    // [ExFreeCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) free_call_back;
    
    // [ExFreePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x254380, 0x32828 bytes
    // ntoskrnl.exe POOLCODE:0x9b2010, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9ac80, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b1010, 0x1fe000 bytes
    //
    _o32(sdk::function<void(void*)>*) free_pool;
    
    // [ExFreePoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25d170, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d8c0, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) free_pool_ex;
    
    // [ExFreePoolSanityChecks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEVRFY:0x724338, 0x32828 bytes
    // ntoskrnl.exe PAGEVRFY:0x9eaef0, 0x1fe000 bytes
    // ntoskrnl.exe PAGEVRFY:0xad3dfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGEVRFY:0x9e9ef0, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) free_pool_sanity_checks;
    
    // [ExFreePoolWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe POOLCODE:0x254390, 0x32828 bytes
    // ntoskrnl.exe POOLCODE:0x9b2010, 0x1fe000 bytes
    // ntoskrnl.exe POOLCODE:0xa9a010, 0x1fd000 bytes
    // ntoskrnl.exe POOLCODE:0x9b1010, 0x1fe000 bytes
    //
    _o35(sdk::function<void(void*, uint32_t)>*) free_pool_with_tag;
    
    // [ExFreeSvmAsid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6244, 0x32828 bytes
    // ntoskrnl.exe .text:0x2680bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37da94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x318fcc, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) free_svm_asid;
    
    // [ExFreeToNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebc5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2192e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x293120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7298, 0x1fe000 bytes
    //
    _o37(sdk::function<void(struct nt::npaged_lookaside_list_t*, void*)>*) free_to_n_paged_lookaside_list;
    
    // [ExFreeToPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebc5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2192e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x293120, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7298, 0x1fe000 bytes
    //
    _o38(sdk::function<void(struct nt::paged_lookaside_list_t*, void*)>*) free_to_paged_lookaside_list;
    
    // [ExGenRandom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x101514, 0x32828 bytes
    // ntoskrnl.exe .text:0x30e9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aff60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a9670, 0x1fe000 bytes
    //
    _o39(sdk::function<uint32_t(enum ex::gen_random_domain_t)>*) gen_random;
    
    // [ExGetBigPoolInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c394, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad6cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2370, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad54c, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) get_big_pool_info;
    
    // [ExGetCallBackBlockRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a74, 0x32828 bytes
    // ntoskrnl.exe .text:0x37dea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39ca80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37f220, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) get_call_back_block_routine;
    
    // [ExGetCurrentProcessorCounts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0314, 0x32828 bytes
    // ntoskrnl.exe .text:0x24f380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35b190, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcc00, 0x1fe000 bytes
    //
    _o42(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*) get_current_processor_counts;
    
    // [ExGetCurrentProcessorCpuUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5abbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aba60, 0x1fe000 bytes
    //
    _o43(sdk::function<void(uint32_t*)>*) get_current_processor_cpu_usage;
    
    // [ExGetExclusiveWaiterCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cf30, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a02a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af1d0, 0x1fe000 bytes
    //
    _o44(sdk::function<uint32_t(struct nt::eresource_t*)>*) get_exclusive_waiter_count;
    
    // [ExGetExpirationDate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51e998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x786e34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83cec8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x790bd4, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) get_expiration_date;
    
    // [ExGetExtensionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79830, 0x32828 bytes
    // ntoskrnl.exe .text:0x212680, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d3fe8, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) get_extension_table;
    
    // [ExGetFirmwareEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x57153c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676ba0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9e90, 0x1fe000 bytes
    //
    _o47(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t*, uint32_t*)>*) get_firmware_environment_variable;
    
    // [ExGetLicenseTamperState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b0784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ecf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948860, 0x1fe000 bytes
    //
    _o48(sdk::function<uint8_t(enum nt::licensing_tamper_state_t*)>*) get_license_tamper_state;
    
    // [ExGetNextProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424dfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68fe68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76a264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef0b4, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) get_next_process;
    
    // [ExGetNextWakeTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3df50c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b01a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa96ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9af118, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) get_next_wake_time;
    
    // [ExGetNextWakeTimeForDeepSleep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d6fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0014, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5afe94, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) get_next_wake_time_for_deep_sleep;
    
    // [ExGetPoolTagInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47cd3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651a1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c536c, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) get_pool_tag_info;
    
    // [ExGetPreviousMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff9c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x247dc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2042c0, 0x1fe000 bytes
    //
    _o53(sdk::function<char()>*) get_previous_mode;
    
    // [ExGetSharedWaiterCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cf34, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af390, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a1390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af210, 0x1fe000 bytes
    //
    _o54(sdk::function<uint32_t(struct nt::eresource_t*)>*) get_shared_waiter_count;
    
    // [ExGetSuiteMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56657c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79fa50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82f50c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a7c70, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) get_suite_mask;
    
    // [ExGetSystemFirmwareTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56eeac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b2c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86afb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba7b0, 0x1fe000 bytes
    //
    _o56(sdk::function<int32_t(uint32_t, uint32_t, void*, uint32_t, uint32_t*)>*) get_system_firmware_table;
    
    // [ExGetWakeTimerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d768, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0088, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6878, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aff08, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) get_wake_timer_list;
    
    // [ExHandleLogBadReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c064, 0x32828 bytes
    // ntoskrnl.exe .text:0x2011b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x202b6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2011b8, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) handle_log_bad_reference;
    
    // [ExHandleTableQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4848c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x692a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76cebc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616650, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) handle_table_query;
    
    // [ExHandleTraceDbDefaultStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec29c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ee24, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) handle_trace_db_default_stacks;
    
    // [ExHandleTraceDbMaxStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec174, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980364, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63e28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec44, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) handle_trace_db_max_stacks;
    
    // [ExHandleTraceDbMinStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec170, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980378, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ec58, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) handle_trace_db_min_stacks;
    
    // [ExInitPoolLookasidePointers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d334c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9984c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa75098, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997be8, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) init_pool_lookaside_pointers;
    
    // [ExInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a0e84, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa650dc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb34db4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa647bc, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) init_system;
    
    // [ExInitSystemPhase2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79589c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa42e30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb22a68, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3e0b4, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) init_system_phase2;
    
    // [ExInitializeAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe644, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cf00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352ab0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6c20, 0x1fe000 bytes
    //
    _o66(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*) initialize_auto_expand_push_lock;
    
    // [ExInitializeCallBack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x546d5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7724b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dbb0, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) initialize_call_back;
    
    // [ExInitializeExternalBootSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9648, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70888, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb607d4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6fc34, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) initialize_external_boot_support;
    
    // [ExInitializeLookasideListEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6ddc, 0x32828 bytes
    // ntoskrnl.exe .text:0x354790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eef00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1d20, 0x1fe000 bytes
    //
    _o69(sdk::function<int32_t(struct nt::lookaside_list_ex_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t, struct nt::lookaside_list_ex_t*)>*, sdk::function<void(void*, struct nt::lookaside_list_ex_t*)>*, enum nt::pool_type_t, uint32_t, uint64_t, uint32_t, uint16_t)>*) initialize_lookaside_list_ex;
    
    // [ExInitializeLookasideListExInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6e20, 0x32828 bytes
    // ntoskrnl.exe .text:0x3547e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2eef50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c1d70, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) initialize_lookaside_list_ex_internal;
    
    // [ExInitializeNPagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10faa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3764e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x377860, 0x1fe000 bytes
    //
    _o71(sdk::function<void(struct nt::npaged_lookaside_list_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*, sdk::function<void(void*)>*, uint32_t, uint64_t, uint32_t, uint16_t)>*) initialize_n_paged_lookaside_list;
    
    // [ExInitializeNPagedLookasideListInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10fadc, 0x32828 bytes
    // ntoskrnl.exe .text:0x376520, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3769d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3778a0, 0x1fe000 bytes
    //
    _o72(sdk::unknown_ptr) initialize_n_paged_lookaside_list_internal;
    
    // [ExInitializePagedLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4fcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d40d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651980, 0x1fe000 bytes
    //
    _o73(sdk::function<void(struct nt::paged_lookaside_list_t*, sdk::function<void*(enum nt::pool_type_t, uint64_t, uint32_t)>*, sdk::function<void(void*)>*, uint32_t, uint64_t, uint32_t, uint16_t)>*) initialize_paged_lookaside_list;
    
    // [ExInitializePagedLookasideListInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6cd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x264f30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2430, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) initialize_paged_lookaside_list_internal;
    
    // [ExInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x138064, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3dfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3aca34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a977c, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) initialize_processor;
    
    // [ExInitializePushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc17e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x208de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0830, 0x1fe000 bytes
    //
    _o76(sdk::function<void(struct ex::push_lock_t*)>*) initialize_push_lock;
    
    // [ExInitializeResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3a150, 0x32828 bytes
    // ntoskrnl.exe .text:0x302040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x235960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26c4c0, 0x1fe000 bytes
    //
    _o77(sdk::function<int32_t(struct nt::eresource_t*)>*) initialize_resource_lite;
    
    // [ExInitializeRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc17e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x208de0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x212eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c0830, 0x1fe000 bytes
    //
    _o78(sdk::function<void(struct ex::rundown_ref_t*)>*) initialize_rundown_protection;
    
    // [ExInitializeRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e4774, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x798010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x702220, 0x1fe000 bytes
    //
    _o79(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint64_t)>*) initialize_rundown_protection_cache_aware;
    
    // [ExInitializeRundownProtectionCacheAwareEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x396370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3973d0, 0x1fe000 bytes
    //
    _o80(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*) initialize_rundown_protection_cache_aware_ex;
    
    // [ExInitializeSystemLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d3480, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9985fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa751d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x997d24, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) initialize_system_lookaside_list;
    
    // [ExInitializeTimeRefresh]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77cf24, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53898, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4b05c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53734, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) initialize_time_refresh;
    
    // [ExInitializeUtcTimeZoneBias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9a4c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70ca8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fc30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6ffd4, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) initialize_utc_time_zone_bias;
    
    // [ExInitializeZone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1479dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7320, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b09e0, 0x1fe000 bytes
    //
    _o84(sdk::function<int32_t(struct nt::zone_header_t*, uint32_t, void*, uint32_t)>*) initialize_zone;
    
    // [ExInsertPoolTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7c1f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x35e66c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30c0e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f965c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) insert_pool_tag;
    
    // [ExInterlockedAddLargeInteger]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dd0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0da0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7c40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0c20, 0x1fe000 bytes
    //
    _o86(sdk::function<int64_t(int64_t*, int64_t, uint64_t*)>*) interlocked_add_large_integer;
    
    // [ExInterlockedAddUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13128c, 0x32828 bytes
    // ntoskrnl.exe .text:0x375700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x397fd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x376a80, 0x1fe000 bytes
    //
    _o87(sdk::function<uint32_t(uint32_t*, uint32_t, uint64_t*)>*) interlocked_add_ulong;
    
    // [ExInterlockedExtendZone]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dc08, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0bd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f73a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0a50, 0x1fe000 bytes
    //
    _o88(sdk::function<int32_t(struct nt::zone_header_t*, void*, uint32_t, uint64_t*)>*) interlocked_extend_zone;
    
    // [ExInterlockedInsertHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6750, 0x32828 bytes
    // ntoskrnl.exe .text:0x2486f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36e090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3e90, 0x1fe000 bytes
    //
    _o89(sdk::function<nt::list_entry_t*(nt::list_entry_t*, nt::list_entry_t*, uint64_t*)>*) interlocked_insert_head_list;
    
    // [ExInterlockedInsertTailList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0f60, 0x32828 bytes
    // ntoskrnl.exe .text:0x248770, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34bdc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3f10, 0x1fe000 bytes
    //
    _o90(sdk::function<nt::list_entry_t*(nt::list_entry_t*, nt::list_entry_t*, uint64_t*)>*) interlocked_insert_tail_list;
    
    // [ExInterlockedPopEntryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dd50, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0e00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7cd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0c80, 0x1fe000 bytes
    //
    _o91(sdk::function<struct nt::single_list_entry_t*(struct nt::single_list_entry_t*, uint64_t*)>*) interlocked_pop_entry_list;
    
    // [ExInterlockedPushEntryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22dd90, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7d60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0cd0, 0x1fe000 bytes
    //
    _o92(sdk::function<struct nt::single_list_entry_t*(struct nt::single_list_entry_t*, struct nt::single_list_entry_t*, uint64_t*)>*) interlocked_push_entry_list;
    
    // [ExInterlockedRemoveHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xaa730, 0x32828 bytes
    // ntoskrnl.exe .text:0x248820, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34aa10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3fc0, 0x1fe000 bytes
    //
    _o93(sdk::function<nt::list_entry_t*(nt::list_entry_t*, uint64_t*)>*) interlocked_remove_head_list;
    
    // [ExIsManufacturingModeEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52986c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71fed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7354e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727cf0, 0x1fe000 bytes
    //
    _o94(sdk::function<uint8_t()>*) is_manufacturing_mode_enabled;
    
    // [ExIsMultiSessionSku]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b3748, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86c174, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bb2d8, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) is_multi_session_sku;
    
    // [ExIsProcessorFeaturePresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130414, 0x32828 bytes
    // ntoskrnl.exe .text:0x26fcc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cde0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3214e0, 0x1fe000 bytes
    //
    _o96(sdk::function<uint8_t(uint32_t)>*) is_processor_feature_present;
    
    // [ExIsResourceAcquiredExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb38d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x348dc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e7dd0, 0x1fe000 bytes
    //
    _o97(sdk::function<uint8_t(struct nt::eresource_t*)>*) is_resource_acquired_exclusive_lite;
    
    // [ExIsResourceAcquiredSharedLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf4be0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2eb2f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2090d0, 0x1fe000 bytes
    //
    _o98(sdk::function<uint32_t(struct nt::eresource_t*)>*) is_resource_acquired_shared_lite;
    
    // [ExIsRestrictedCaller]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cd14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d43ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cec6c, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) is_restricted_caller;
    
    // [ExIsSafeWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x154950, 0x32828 bytes
    // ntoskrnl.exe .text:0x3d6650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3f6020, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3d7720, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) is_safe_work_item;
    
    // [ExIsSoftBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a80c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9ea0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x397e30, 0x1fe000 bytes
    //
    _p01(sdk::function<uint8_t()>*) is_soft_boot;
    
    // [ExLocalTimeToSystemTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4660, 0x32828 bytes
    // ntoskrnl.exe .text:0x254830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f480, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201810, 0x1fe000 bytes
    //
    _p02(sdk::function<void(int64_t*, int64_t*)>*) local_time_to_system_time;
    
    // [ExLockHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e9e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214d78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x264150, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) lock_handle_table_entry;
    
    // [ExLockUserBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5162d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bcad8, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) lock_user_buffer;
    
    // [ExMapHandleToPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69cfd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68bfc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637fa0, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) map_handle_to_pointer;
    
    // [ExMapHandleToPointerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x425d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6901f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bbed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f1ec8, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) map_handle_to_pointer_ex;
    
    // [ExMinimumLookasideDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b88, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ed8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0c9bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f38, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) minimum_lookaside_depth;
    
    // [ExMutantObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1d0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa248, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c288, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa248, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) mutant_object_type;
    
    // [ExNPagedLookasideListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc590, 0x32828 bytes
    // ntoskrnl.exe .data:0xc167f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16840, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) n_paged_lookaside_list_head;
    
    // [ExNPagedLookasideLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc570, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16850, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) n_paged_lookaside_lock;
    
    // [ExNode0]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3c0100, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd24440, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd49ac0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd24440, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) node0;
    
    // [ExNotifyBootDeviceRemoval]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c788, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5aced0, 0x1fe000 bytes
    //
    _p12(sdk::function<uint8_t(struct ex::boot_device_handle_t*)>*) notify_boot_device_removal;
    
    // [ExNotifyCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106318, 0x32828 bytes
    // ntoskrnl.exe .text:0x252580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355f60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3005a0, 0x1fe000 bytes
    //
    _p13(sdk::function<void(void*, void*, void*)>*) notify_callback;
    
    // [ExNotifyPlatformBinaryExecuted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779f34, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) notify_platform_binary_executed;
    
    // [ExNotifyWithProcessing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x106320, 0x32828 bytes
    // ntoskrnl.exe .text:0x252598, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x355f78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3005b8, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) notify_with_processing;
    
    // [ExNumMissingBootDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc600, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc19140, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) num_missing_boot_devices;
    
    // [ExPageLockHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab2d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb528, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1db38, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb528, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) page_lock_handle;
    
    // [ExPagedLookasideListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16810, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16860, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) paged_lookaside_list_head;
    
    // [ExPagedLookasideLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d100, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16870, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) paged_lookaside_lock;
    
    // [ExPoolCodeEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308158, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc133e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a220, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) pool_code_end;
    
    // [ExPoolCodeStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x308150, 0x32828 bytes
    // ntoskrnl.exe .data:0xc2a278, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc133e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc2a218, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) pool_code_start;
    
    // [ExPoolFailures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc190b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d208, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc190f8, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) pool_failures;
    
    // [ExPoolLookasideListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc560, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16830, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d0c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16830, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) pool_lookaside_list_head;
    
    // [ExPoolTagTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc700, 0x32828 bytes
    // ntoskrnl.exe .data:0xc168a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc168e0, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) pool_tag_tables;
    
    // [ExProcessorCounterSetCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a76f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68b6b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cf030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6efbe0, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) processor_counter_set_callback;
    
    // [ExProfileObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa278, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2d0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c328, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa2d0, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) profile_object_type;
    
    // [ExProtectPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffcb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26d6e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2ccc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df9a4, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) protect_pool;
    
    // [ExProtectPoolEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8ac0, 0x32828 bytes
    // ntoskrnl.exe .text:0x21fbc4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20a7d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2df9c4, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) protect_pool_ex;
    
    // [ExQueryBootEntropyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5713a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77bd10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82d7c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x780a24, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) query_boot_entropy_information;
    
    // [ExQueryDepthSList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2d10, 0x32828 bytes
    // ntoskrnl.exe .text:0x2407f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34d950, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee050, 0x1fe000 bytes
    //
    _p30(sdk::function<uint16_t(union nt::slist_header_t*)>*) query_depth_s_list;
    
    // [ExQueryHandleExceptionsPermanency]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c144, 0x32828 bytes
    // ntoskrnl.exe .text:0x37cb80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a899c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37df00, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) query_handle_exceptions_permanency;
    
    // [ExQueryPoolBlockSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c62c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8870, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9740, 0x1fe000 bytes
    //
    _p32(sdk::function<uint64_t(void*, uint8_t*)>*) query_pool_block_size;
    
    // [ExQueryPoolUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb1180, 0x32828 bytes
    // ntoskrnl.exe .text:0x29cf30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f6c70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x204084, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) query_pool_usage;
    
    // [ExQueryProcessHandleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53c528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949614, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ec784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x947ef4, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) query_process_handle_information;
    
    // [ExQuerySystemLockInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3df3e8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9b0024, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa9693c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aef94, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) query_system_lock_information;
    
    // [ExQueryTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22bf00, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cb970, 0x1fe000 bytes
    //
    _p36(sdk::function<void(uint32_t*, uint32_t*, uint32_t*)>*) query_timer_resolution;
    
    // [ExQueryWnfStateData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4957a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x671630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dfe20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e4e90, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) query_wnf_state_data;
    
    // [ExQueueDebuggerWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7ae78, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c1cbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c2acc, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) queue_debugger_worker;
    
    // [ExQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeba9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c0a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b3130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x226f40, 0x1fe000 bytes
    //
    _p39(sdk::function<void(struct nt::work_queue_item_t*, enum nt::work_queue_type_t)>*) queue_work_item;
    
    // [ExQueueWorkItemEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc7e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x25e484, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36d1a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356c10, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) queue_work_item_ex;
    
    // [ExQueueWorkItemExFromIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ddd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b0ea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f7dec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b0d28, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) queue_work_item_ex_from_io;
    
    // [ExQueueWorkItemFromIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee588, 0x32828 bytes
    // ntoskrnl.exe .text:0x255bf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2f30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x304f98, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) queue_work_item_from_io;
    
    // [ExQueueWorkItemToPrivatePool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x122608, 0x32828 bytes
    // ntoskrnl.exe .text:0x386cf8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469a2e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x387ab8, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) queue_work_item_to_private_pool;
    
    // [ExRaiseAccessViolation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b8b98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x952e60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816590, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951740, 0x1fe000 bytes
    //
    _p44(sdk::function<void()>*) raise_access_violation;
    
    // [ExRaiseDatatypeMisalignment]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b8ba8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75f150, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f43f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x766ba0, 0x1fe000 bytes
    //
    _p45(sdk::function<void()>*) raise_datatype_misalignment;
    
    // [ExRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b8bb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x952e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951760, 0x1fe000 bytes
    //
    _p46(sdk::function<int32_t(int32_t, uint32_t, uint32_t, uint64_t*, uint32_t, uint32_t*)>*) raise_hard_error;
    
    // [ExRawInputManagerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1e8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7a8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de18, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7a8, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) raw_input_manager_object_type;
    
    // [ExReInitializeRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130354, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37cd70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bac0, 0x1fe000 bytes
    //
    _p48(sdk::function<void(struct ex::rundown_ref_t*)>*) re_initialize_rundown_protection;
    
    // [ExReInitializeRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9bd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2119c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x346960, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f6d0, 0x1fe000 bytes
    //
    _p49(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) re_initialize_rundown_protection_cache_aware;
    
    // [ExReadyForErrors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a2f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc5459c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c6c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc5456c, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) ready_for_errors;
    
    // [ExRealTimeIsUniversal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd559c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2549b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x201990, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) real_time_is_universal;
    
    // [ExReferenceCallBackBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x109c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b6d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f57b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2a5a10, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) reference_call_back_block;
    
    // [ExReferenceHandleDebugInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41fb74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x949814, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ec988, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9480f4, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) reference_handle_debug_info;
    
    // [ExRegisterBootDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22c7d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ad0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f48d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5acf20, 0x1fe000 bytes
    //
    _p54(sdk::function<int32_t(struct ex::boot_device_registration_t*, struct ex::boot_device_handle_t**)>*) register_boot_device;
    
    // [ExRegisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e0b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ab20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37f440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bea0, 0x1fe000 bytes
    //
    _p55(sdk::function<void*(struct nt::callback_object_t*, sdk::function<void(void*, void*, void*)>*, void*)>*) register_callback;
    
    // [ExRegisterExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f54c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78f630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82db90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a5de0, 0x1fe000 bytes
    //
    _p56(sdk::function<int32_t(struct ex::extension_t**, uint32_t, void*)>*) register_extension;
    
    // [ExRegisterHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55f72c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78f850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82ddb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a6000, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) register_host;
    
    // [ExReinitializeResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb97c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x357100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ecc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dcc60, 0x1fe000 bytes
    //
    _p58(sdk::function<int32_t(struct nt::eresource_t*)>*) reinitialize_resource_lite;
    
    // [ExReleaseAutoExpandPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9e40, 0x32828 bytes
    // ntoskrnl.exe .text:0x24b470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fffd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f5090, 0x1fe000 bytes
    //
    _p59(sdk::function<void(struct ex::push_lock_auto_expand_t*, uint32_t)>*) release_auto_expand_push_lock_exclusive;
    
    // [ExReleaseAutoExpandPushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb0ce0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ccd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e92c0, 0x1fe000 bytes
    //
    _p60(sdk::function<void(void*, uint32_t)>*) release_auto_expand_push_lock_shared;
    
    // [ExReleaseCacheAwarePushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x895b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20f060, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e4cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a450, 0x1fe000 bytes
    //
    _p61(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*)>*) release_cache_aware_push_lock_exclusive;
    
    // [ExReleaseCacheAwarePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cc50, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ef9a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4236b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1280, 0x1fe000 bytes
    //
    _p62(sdk::function<void(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*) release_cache_aware_push_lock_exclusive_ex;
    
    // [ExReleaseCacheAwarePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2df370, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260600, 0x1fe000 bytes
    //
    _p63(sdk::function<void(uint64_t*, uint32_t)>*) release_cache_aware_push_lock_shared_ex;
    
    // [ExReleaseExtensionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79824, 0x32828 bytes
    // ntoskrnl.exe .text:0x212664, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336b44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d3fcc, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) release_extension_table;
    
    // [ExReleaseFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x898b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x20de80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c87c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263bb0, 0x1fe000 bytes
    //
    _p65(sdk::function<void(struct nt::fast_mutex_t*)>*) release_fast_mutex;
    
    // [ExReleaseFastMutexUnsafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dabd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfe40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25be10, 0x1fe000 bytes
    //
    _p66(sdk::function<void(struct nt::fast_mutex_t*)>*) release_fast_mutex_unsafe;
    
    // [ExReleaseFastMutexUnsafeAndLeaveCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb5440, 0x32828 bytes
    // ntoskrnl.exe .text:0x248010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2dfe10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f32a0, 0x1fe000 bytes
    //
    _p67(sdk::function<void(struct nt::fast_mutex_t*)>*) release_fast_mutex_unsafe_and_leave_critical_region;
    
    // [ExReleasePushLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xea870, 0x32828 bytes
    // ntoskrnl.exe .text:0x2dfc50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c8cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260ee0, 0x1fe000 bytes
    //
    _p68(sdk::function<void(uint64_t*, uint32_t)>*) release_push_lock_ex;
    
    // [ExReleasePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xea8e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2df4e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c9160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x260770, 0x1fe000 bytes
    //
    _p69(sdk::function<void(uint64_t*, uint32_t)>*) release_push_lock_exclusive_ex;
    
    // [ExReleasePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeabc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e28a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c9540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263b50, 0x1fe000 bytes
    //
    _p70(sdk::function<void(uint64_t*, uint32_t)>*) release_push_lock_shared_ex;
    
    // [ExReleaseResourceAndLeaveCriticalRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe7b70, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e1e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x294810, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2630e0, 0x1fe000 bytes
    //
    _p71(sdk::function<void(struct nt::eresource_t*)>*) release_resource_and_leave_critical_region;
    
    // [ExReleaseResourceAndLeavePriorityRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cf38, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af3d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af250, 0x1fe000 bytes
    //
    _p72(sdk::function<void(struct nt::eresource_t*)>*) release_resource_and_leave_priority_region;
    
    // [ExReleaseResourceForThreadLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc71cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x242db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2941d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eea80, 0x1fe000 bytes
    //
    _p73(sdk::function<void(struct nt::eresource_t*, uint64_t)>*) release_resource_for_thread_lite;
    
    // [ExReleaseResourceLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe8460, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e01b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c3820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261460, 0x1fe000 bytes
    //
    _p74(sdk::function<void(struct nt::eresource_t*)>*) release_resource_lite;
    
    // [ExReleaseRundownProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebd80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa9a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206420, 0x1fe000 bytes
    //
    _p75(sdk::function<void(struct ex::rundown_ref_t*)>*) release_rundown_protection;
    
    // [ExReleaseRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb3860, 0x32828 bytes
    // ntoskrnl.exe .text:0x23ff70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34bf00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed500, 0x1fe000 bytes
    //
    _p76(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) release_rundown_protection_cache_aware;
    
    // [ExReleaseRundownProtectionCacheAwareEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x236e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x297620, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e5060, 0x1fe000 bytes
    //
    _p77(sdk::function<void(struct ex::rundown_ref_cache_aware_t*, uint32_t)>*) release_rundown_protection_cache_aware_ex;
    
    // [ExReleaseRundownProtectionEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d224, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afa00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469690, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af880, 0x1fe000 bytes
    //
    _p78(sdk::function<void(struct ex::rundown_ref_t*, uint32_t)>*) release_rundown_protection_ex;
    
    // [ExReleaseSpinLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38510, 0x32828 bytes
    // ntoskrnl.exe .text:0x247ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x353990, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3180, 0x1fe000 bytes
    //
    _p79(sdk::function<void(volatile int32_t*, uint8_t)>*) release_spin_lock_exclusive;
    
    // [ExReleaseSpinLockExclusiveFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x38550, 0x32828 bytes
    // ntoskrnl.exe .text:0x3012d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a2200, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26b750, 0x1fe000 bytes
    //
    _p80(sdk::function<void(volatile int32_t*)>*) release_spin_lock_exclusive_from_dpc_level;
    
    // [ExReleaseSpinLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8a90, 0x32828 bytes
    // ntoskrnl.exe .text:0x240040, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed5d0, 0x1fe000 bytes
    //
    _p81(sdk::function<void(volatile int32_t*, uint8_t)>*) release_spin_lock_shared;
    
    // [ExReleaseSpinLockSharedFromDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8c30, 0x32828 bytes
    // ntoskrnl.exe .text:0x3366d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2af580, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27d690, 0x1fe000 bytes
    //
    _p82(sdk::function<void(volatile int32_t*)>*) release_spin_lock_shared_from_dpc_level;
    
    // [ExReleaseTimeRefreshLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4846d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x687984, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x805138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d0bc4, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) release_time_refresh_lock;
    
    // [ExRemoveLowBoxAtomReferences]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3af4, 0x32828 bytes
    // ntoskrnl.exe .text:0x216ea0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x345544, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202fe8, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) remove_low_box_atom_references;
    
    // [ExResourceCheckFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12080, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cd44, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc120e0, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) resource_check_flags;
    
    // [ExResourceTimeoutCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34260c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b7c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd1762c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b7c, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) resource_timeout_count;
    
    // [ExReturnPoolQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa7f74, 0x32828 bytes
    // ntoskrnl.exe .text:0x25116c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d1350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ff22c, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) return_pool_quota;
    
    // [ExRngInitializeSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4534, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6b1dc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb59aa0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6aad4, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) rng_initialize_system;
    
    // [ExRundownCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd2ab4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27cdf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3010c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d44c0, 0x1fe000 bytes
    //
    _p89(sdk::function<void(struct ex::rundown_ref_t*)>*) rundown_completed;
    
    // [ExRundownCompletedCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9c18, 0x32828 bytes
    // ntoskrnl.exe .text:0x211a10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3469b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f720, 0x1fe000 bytes
    //
    _p90(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) rundown_completed_cache_aware;
    
    // [ExSaNonPagedSlotAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbbe0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8e8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ea8, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) sa_non_paged_slot_allocator;
    
    // [ExSaPageArrays]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbbf0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15eb0, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) sa_page_arrays;
    
    // [ExSaPageGroupDescriptorArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbbf8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ec0, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) sa_page_group_descriptor_array;
    
    // [ExSaPageGroupDescriptorArrayLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbc00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15eb8, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) sa_page_group_descriptor_array_lock;
    
    // [ExSaPagedSlotAllocator]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fbbe8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc15e80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2c8d8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc15ea0, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) sa_paged_slot_allocator;
    
    // [ExSemaphoreObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1d8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa258, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c298, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa258, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) semaphore_object_type;
    
    // [ExSetFirmwareEnvironmentVariable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94c210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ef2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94aaf0, 0x1fe000 bytes
    //
    _p97(sdk::function<int32_t(nt::unicode_view*, struct nt::guid_t*, void*, uint32_t, uint32_t)>*) set_firmware_environment_variable;
    
    // [ExSetHandleAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4880, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b744c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x215bbc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcd34, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) set_handle_attributes;
    
    // [ExSetLicenseTamperState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b0d70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94a040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ecfe0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948920, 0x1fe000 bytes
    //
    _p99(sdk::function<void(enum nt::licensing_tamper_state_t)>*) set_license_tamper_state;
    
    // [ExSetPoolFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x16f0d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5adb48, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f2eb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ad9c8, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) set_pool_flags;
    
    // [ExSetResourceOwnerPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x130fc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af410, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af290, 0x1fe000 bytes
    //
    _q01(sdk::function<void(struct nt::eresource_t*, void*)>*) set_resource_owner_pointer;
    
    // [ExSetResourceOwnerPointerEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb216c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35a260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330a60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2da520, 0x1fe000 bytes
    //
    _q02(sdk::function<void(struct nt::eresource_t*, void*, uint32_t)>*) set_resource_owner_pointer_ex;
    
    // [ExSetTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xffcdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x210b60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f9250, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35ba80, 0x1fe000 bytes
    //
    _q03(sdk::function<uint8_t(struct ex::timer_t*, int64_t, int64_t, struct ext::set_parameters_v0_t*)>*) set_timer;
    
    // [ExSetTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a558, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ac330, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e8830, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ac1b0, 0x1fe000 bytes
    //
    _q04(sdk::function<uint32_t(uint32_t, uint8_t)>*) set_timer_resolution;
    
    // [ExShareAddressSpaceWithDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22e0e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b11c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f48e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b1040, 0x1fe000 bytes
    //
    _q05(sdk::function<int32_t(struct nt::device_object_t*, uint32_t*)>*) share_address_space_with_device;
    
    // [ExShortTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2faa10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12cd0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0dd18, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12d40, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) short_time;
    
    // [ExShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3df274, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aff18, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa9672c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9aee88, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) shutdown_system;
    
    // [ExSizeOfAutoExpandPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22caa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5add90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x352980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5adc10, 0x1fe000 bytes
    //
    _q08(sdk::function<uint64_t(uint32_t)>*) size_of_auto_expand_push_lock;
    
    // [ExSizeOfRundownProtectionCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d044, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x816780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76c4c0, 0x1fe000 bytes
    //
    _q09(sdk::function<uint64_t()>*) size_of_rundown_protection_cache_aware;
    
    // [ExSlowReplenishHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb2f70, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e3010, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb410, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x264320, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) slow_replenish_handle_table_entry;
    
    // [ExSoftRebootFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fdb40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc54590, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc70c4c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc54560, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) soft_reboot_flags;
    
    // [ExSubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a254c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66a690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dd360, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) subscribe_wnf_state_change;
    
    // [ExSwapinWorkerThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524bd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7578d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f3e58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75f464, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) swapin_worker_threads;
    
    // [ExSweepHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4766f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x609310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d5e80, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) sweep_handle_table;
    
    // [ExSweepSingleHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8c070, 0x32828 bytes
    // ntoskrnl.exe .text:0x29b564, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214dc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23f444, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) sweep_single_handle;
    
    // [ExSystemExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4774cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b65f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x870030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be1c0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) system_exception_filter;
    
    // [ExSystemLookasideListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc5b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc167e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc16820, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) system_lookaside_list_head;
    
    // [ExSystemTimeToLocalTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4dcc, 0x32828 bytes
    // ntoskrnl.exe .text:0x271000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f4d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3227c0, 0x1fe000 bytes
    //
    _q18(sdk::function<void(int64_t*, int64_t*)>*) system_time_to_local_time;
    
    // [ExTbFlushActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342610, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17628, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b78, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) tb_flush_active;
    
    // [ExTimedWaitForUnblockPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10a544, 0x32828 bytes
    // ntoskrnl.exe .text:0x23dc90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347600, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ebd30, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) timed_wait_for_unblock_push_lock;
    
    // [ExTimerObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa0c8, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb678, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dce0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb678, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) timer_object_type;
    
    // [ExTimerRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc61e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b74ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x213ff4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x355f74, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) timer_rundown;
    
    // [ExTraceAllTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec04e, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980316, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63dd6, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ebf6, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) trace_all_tables;
    
    // [ExTraceTimerResolution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51c918, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x607264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eb45c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ceb68, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) trace_timer_resolution;
    
    // [ExTryAcquireAutoExpandPushLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133c20, 0x32828 bytes
    // ntoskrnl.exe .text:0x38ca90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x398100, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38db20, 0x1fe000 bytes
    //
    _q25(sdk::function<uint8_t(struct ex::push_lock_auto_expand_t*, uint32_t)>*) try_acquire_auto_expand_push_lock_exclusive;
    
    // [ExTryAcquireAutoExpandPushLockShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1323dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x38c320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x396eb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38d3b0, 0x1fe000 bytes
    //
    _q26(sdk::function<void*(struct ex::push_lock_auto_expand_t*, uint32_t)>*) try_acquire_auto_expand_push_lock_shared;
    
    // [ExTryAcquireCacheAwarePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ccdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5ade10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5adc90, 0x1fe000 bytes
    //
    _q27(sdk::function<uint8_t(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*) try_acquire_cache_aware_push_lock_exclusive_ex;
    
    // [ExTryAcquireCacheAwarePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cda8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5adee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4e80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5add60, 0x1fe000 bytes
    //
    _q28(sdk::function<void*(struct ex::push_lock_cache_aware_legacy_t*, uint32_t)>*) try_acquire_cache_aware_push_lock_shared_ex;
    
    // [ExTryAcquirePushLockExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x86c40, 0x32828 bytes
    // ntoskrnl.exe .text:0x227f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x293160, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340d40, 0x1fe000 bytes
    //
    _q29(sdk::function<uint8_t(uint64_t*, uint32_t)>*) try_acquire_push_lock_exclusive_ex;
    
    // [ExTryAcquirePushLockSharedEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x87f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x227940, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fe0b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3406f0, 0x1fe000 bytes
    //
    _q30(sdk::function<uint8_t(uint64_t*, uint32_t)>*) try_acquire_push_lock_shared_ex;
    
    // [ExTryAcquireSpinLockExclusiveAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x90e00, 0x32828 bytes
    // ntoskrnl.exe .text:0x2810f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x233670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d80a0, 0x1fe000 bytes
    //
    _q31(sdk::function<uint32_t(volatile int32_t*)>*) try_acquire_spin_lock_exclusive_at_dpc_level;
    
    // [ExTryAcquireSpinLockSharedAtDpcLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d284, 0x32828 bytes
    // ntoskrnl.exe .text:0x5afa70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x469700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af8f0, 0x1fe000 bytes
    //
    _q32(sdk::function<uint32_t(volatile int32_t*)>*) try_acquire_spin_lock_shared_at_dpc_level;
    
    // [ExTryConvertPushLockSharedToExclusiveEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc67c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2589f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35be30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3084a0, 0x1fe000 bytes
    //
    _q33(sdk::function<uint8_t(uint64_t*, uint32_t)>*) try_convert_push_lock_shared_to_exclusive_ex;
    
    // [ExTryConvertSharedSpinLockExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbdcd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d850, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3e60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ebd0, 0x1fe000 bytes
    //
    _q34(sdk::function<uint32_t(volatile int32_t*)>*) try_convert_shared_spin_lock_exclusive;
    
    // [ExTryConvertSharedToExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22cf6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af44c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5d5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af2cc, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) try_convert_shared_to_exclusive_lite;
    
    // [ExTryQueueWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x90f80, 0x32828 bytes
    // ntoskrnl.exe .text:0x2be310, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2893b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x22a0e0, 0x1fe000 bytes
    //
    _q36(sdk::function<uint8_t(struct nt::work_queue_item_t*, enum nt::work_queue_type_t)>*) try_queue_work_item;
    
    // [ExTryToAcquireFastMutex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbd730, 0x32828 bytes
    // ntoskrnl.exe .text:0x227ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fde00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340ca0, 0x1fe000 bytes
    //
    _q37(sdk::function<uint8_t(struct nt::fast_mutex_t*)>*) try_to_acquire_fast_mutex;
    
    // [ExTryToAcquireResourceExclusiveLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22d018, 0x32828 bytes
    // ntoskrnl.exe .text:0x5af490, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f5da0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5af310, 0x1fe000 bytes
    //
    _q38(sdk::function<uint8_t(struct nt::eresource_t*)>*) try_to_acquire_resource_exclusive_lite;
    
    // [ExUnblockOnAddressPushLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ce6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3efa40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39bec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3f1320, 0x1fe000 bytes
    //
    _q39(sdk::function<void(uint64_t*, uint32_t)>*) unblock_on_address_push_lock_ex;
    
    // [ExUnblockPushLockEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ce6c, 0x32828 bytes
    // ntoskrnl.exe .text:0x23d3f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2e20, 0x1fe000 bytes
    //
    _q40(sdk::function<void(uint64_t*, uint32_t)>*) unblock_push_lock_ex;
    
    // [ExUnlockHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4655b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cba50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eca20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cc2f0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) unlock_handle_table_entry;
    
    // [ExUnlockUserBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10b63c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35fe78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fb754, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f85b0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) unlock_user_buffer;
    
    // [ExUnregisterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fc2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x37d6b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3854c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37ea30, 0x1fe000 bytes
    //
    _q43(sdk::function<void(void*)>*) unregister_callback;
    
    // [ExUnregisterExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b93a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9536b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9f4680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x951f90, 0x1fe000 bytes
    //
    _q44(sdk::function<void(struct ex::extension_t*)>*) unregister_extension;
    
    // [ExUnsubscribeWnfStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3798, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x708550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc1b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de350, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) unsubscribe_wnf_state_change;
    
    // [ExUpdateLicenseData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b1580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a270, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ebb60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed6a0, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) update_license_data;
    
    // [ExUpdateOsPfnInRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b1588, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94a160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ed100, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x948a40, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) update_os_pfn_in_registry;
    
    // [ExUpdateSystemTimeFromCmos]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8c94, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98cb34, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa745c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98b2e0, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) update_system_time_from_cmos;
    
    // [ExUuidCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44cc48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6f6630, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77a4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65b290, 0x1fe000 bytes
    //
    _q49(sdk::function<int32_t(struct nt::guid_t*)>*) uuid_create;
    
    // [ExVerifySuite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a9b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9210, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3aafd0, 0x1fe000 bytes
    //
    _q50(sdk::function<uint8_t(enum nt::suite_type_t)>*) verify_suite;
    
    // [ExWaitForCallBacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b2750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x94bd7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9eedd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x94a65c, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) wait_for_call_backs;
    
    // [ExWaitForRundownProtectionRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7604, 0x32828 bytes
    // ntoskrnl.exe .text:0x2b74c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x356010, 0x1fe000 bytes
    //
    _q52(sdk::function<void(struct ex::rundown_ref_t*)>*) wait_for_rundown_protection_release;
    
    // [ExWaitForRundownProtectionReleaseCacheAware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9d78, 0x32828 bytes
    // ntoskrnl.exe .text:0x211900, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3468a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f610, 0x1fe000 bytes
    //
    _q53(sdk::function<void(struct ex::rundown_ref_cache_aware_t*)>*) wait_for_rundown_protection_release_cache_aware;
    
    // [ExWaitForUnblockPushLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22ceac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5adfa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f4f40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5ade20, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) wait_for_unblock_push_lock;
    
    // [ExWakeTimersPause]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1125fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x388c34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6c98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3896a4, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) wake_timers_pause;
    
    // [ExWakeTimersResume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x112470, 0x32828 bytes
    // ntoskrnl.exe .text:0x388db0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5f6e20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3898c4, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) wake_timers_resume;
    
    // [ExWindowStationObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa1e0, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7b8, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1de10, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb7b8, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) window_station_object_type;
    
    // [ExWnfExitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9c70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70550c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76763c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x665444, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) wnf_exit_process;
    
    // [ExWorkerQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2fc4f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc16678, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc2d048, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc166c8, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) worker_queue;
    
    // [ExPoolZeroingNativelySupported]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .data:0x2b36d0, 0x27ef0 bytes
    //
    _q60(uint8_t*) pool_zeroing_natively_supported;
};
#include "magic/api.end.hpp"
