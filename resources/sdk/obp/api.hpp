#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ejob_t.hpp"
#include "lookup_context_t.hpp"
#include "../nt/object_header_t.hpp"
#include "../nt/object_directory_t.hpp"

#include "magic/api.start.hpp"
namespace obp
{
    // [ObpDeleteDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x80b7a4, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) delete_device_map;
    
    // [ObpDeleteDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7995b8, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) delete_directory_name;
    
    // [ObpDereferenceCurrentDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x70debc, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) dereference_current_device_map;
    
    // [ObpDereferenceSecurityDescriptorForObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x698894, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) dereference_security_descriptor_for_object;
    
    // [ObpFastReplenishReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e91b4, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) fast_replenish_reference;
    
    // [ObpGetIntegrityLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6ea020, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) get_integrity_level;
    
    // [ObpHandlesToObjectAreRevoked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x970230, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) handles_to_object_are_revoked;
    
    // [ObpHashBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x471e30, 0x32828 bytes
    //
    _m7(sdk::unknown_ptr) hash_buffer;
    
    // [ObpLockChildDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x81697c, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) lock_child_directory;
    
    // [ObpLockUnrelatedDirectoryShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x73d490, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) lock_unrelated_directory_shared;
    
    // [ObpParseComponentName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x813e3c, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) parse_component_name;
    
    // [ObpReferenceCurrentDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x70dd10, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) reference_current_device_map;
    
    // [ObpReferenceDeviceMapFastRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x70de70, 0x1fd000 bytes
    //
    _n2(sdk::unknown_ptr) reference_device_map_fast_ref;
    
    // [ObpReferenceSecurityDescriptorSlow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x8102dc, 0x1fd000 bytes
    //
    _n3(sdk::unknown_ptr) reference_security_descriptor_slow;
    
    // [ObpSetCurrentProcessDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a6948, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) set_current_process_device_map;
    
    // [ObpShutdownTraceLoggingProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb82088, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) shutdown_trace_logging_provider;
    
    // [ObpSlowReferenceDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7d1338, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) slow_reference_device_map;
    
    // [ObpCreateCacheEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6bf494, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x614414, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) create_cache_entry;
    
    // [ObpIncrementHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8d9f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8d870c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) increment_handle_count;
    
    // [ObpMarkDirectoryTreeTemporary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650c54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c1080, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) mark_directory_tree_temporary;
    
    // [ObpPendingObjectDirectoryList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc25f80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc25f20, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) pending_object_directory_list;
    
    // [ObpPendingObjectDirectoryListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc25f88, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc25f28, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) pending_object_directory_list_lock;
    
    // [ObpReferenceObjectByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x4e2500, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97025c, 0x1fd000 bytes
    //
    _o2(sdk::unknown_ptr) reference_object_by_handle;
    
    // [ObpTraceObjectDereferenceIfActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2385c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x26b1c0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) trace_object_dereference_if_active;
    
    // [ObpDirectoryTeardownCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x97d760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c040, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) directory_teardown_callback;
    
    // [ObpDosDevicesShortName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec1b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980488, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97ed68, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) dos_devices_short_name;
    
    // [ObpDosDevicesShortNamePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec1f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9804e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97edc8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) dos_devices_short_name_prefix;
    
    // [ObpDosDevicesShortNameRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec1f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9804f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97edd0, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) dos_devices_short_name_root;
    
    // [ObpGetWaitObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfe930, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e6100, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x267410, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) get_wait_object;
    
    // [ObpLookupDirectoryEntryEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46ea50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bbe98, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) lookup_directory_entry_ex;
    
    // [ObpMarkDirectoryObjectsTemporary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650ccc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c10f8, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) mark_directory_objects_temporary;
    
    // [ObpPreInterceptHandleCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6b9350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a8c10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60f980, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) pre_intercept_handle_create;
    
    // [ObpReferenceDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4018c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x612560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5dfd70, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) reference_device_map;
    
    // [ObpRefillWorkItemFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cbd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dbc04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8da404, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) refill_work_item_free_list;
    
    // [ObpReleaseLookupContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf560, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x25b298, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) release_lookup_context;
    
    // [ObpAdjustAccessMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a4b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe714, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ecb74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b6f4, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) adjust_access_mask;
    
    // [ObpAdjustCreatorAccessState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a7e98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6971e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616ba4, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) adjust_creator_access_state;
    
    // [ObpAllocateAndQuerySecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x483094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x661ea4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b27dc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c5fdc, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) allocate_and_query_security_descriptor_info;
    
    // [ObpAllocateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cd220, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a4d00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c73a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fb260, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) allocate_object;
    
    // [ObpAssignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1130, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62de6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739a20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616dbc, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) assign_security;
    
    // [ObpAuditBaseDirectories]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307b54, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25e78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40078, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25f38, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) audit_base_directories;
    
    // [ObpAuditBaseObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307b58, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25e74, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc4007c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25f34, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) audit_base_objects;
    
    // [ObpAuditObjectAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9964, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9700d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8164, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) audit_object_access;
    
    // [ObpCallPostOperationCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b920, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dab80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891c52, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9380, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) call_post_operation_callbacks;
    
    // [ObpCallPreOperationCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ad9b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6b9180, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ade90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x60f7b0, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) call_pre_operation_callbacks;
    
    // [ObpCaptureBoundaryDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eac98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5faf5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d82c, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) capture_boundary_descriptor;
    
    // [ObpCaptureHandleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66aad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891920, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8520, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) capture_handle_information;
    
    // [ObpCaptureHandleInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ab94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9e20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891a30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8620, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) capture_handle_information_ex;
    
    // [ObpCaptureObjectCreateInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cb360, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6da910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c1b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eb710, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) capture_object_create_information;
    
    // [ObpCaptureObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cb5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6dab80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c1db0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eb980, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) capture_object_name;
    
    // [ObpCaseInsensitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11eb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0caf8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f14, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) case_insensitive;
    
    // [ObpChargeQuotaForObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427b88, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6cbd90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x614f80, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) charge_quota_for_object;
    
    // [ObpCheckDuplicateEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eaefc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1788, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d7c8, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) check_duplicate_entries;
    
    // [ObpCheckObjectReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9158, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697dbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6133e0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) check_object_reference;
    
    // [ObpCheckTraverseAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ac50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x671e9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d87b0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) check_traverse_access;
    
    // [ObpCloseDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a974, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6615c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4ca0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) close_directory_object;
    
    // [ObpCloseHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4631c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c0d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6beb80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6370a0, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) close_handle;
    
    // [ObpCompareEntryLevel1]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a12c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6233b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de090, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70d450, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) compare_entry_level1;
    
    // [ObpCompareEntryLevel2]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45b6a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66ba80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d94f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de550, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) compare_entry_level2;
    
    // [ObpCreateDefaultObjectTypeSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547bc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c858, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e430, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) create_default_object_type_sd;
    
    // [ObpCreateDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40e624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65cfc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d3aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d11f0, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) create_directory_object;
    
    // [ObpCreateDosDevicesDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a4b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77dc84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x782994, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) create_dos_devices_directory;
    
    // [ObpCreateHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cb810, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d4f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bc560, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62b3b0, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) create_handle;
    
    // [ObpCreateInfoLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341580, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee600, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f1c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee600, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) create_info_lookaside_list;
    
    // [ObpCreateSymbolicLinkName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49b424, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66fee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ad6e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e36d8, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) create_symbolic_link_name;
    
    // [ObpCreateTypeArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b654, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8da980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96fd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9180, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) create_type_array;
    
    // [ObpDecrementHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4acbbc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62e008, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c304, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a424, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) decrement_handle_count;
    
    // [ObpDefaultObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e80, 0x32828 bytes
    // ntoskrnl.exe .data:0xc259e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3fee0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc259a0, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) default_object;
    
    // [ObpDefaultSecurityDescriptorLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5d98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f0ec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09788, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f12c, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) default_security_descriptor_length;
    
    // [ObpDeferObjectDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbde14, 0x32828 bytes
    // ntoskrnl.exe .text:0x2389d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b780, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) defer_object_deletion;
    
    // [ObpDeferPushRefDerefInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff03c, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ee78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e788, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55ec58, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) defer_push_ref_deref_info;
    
    // [ObpDeleteDirectoryEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48364c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x656990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799538, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ca610, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) delete_directory_entry;
    
    // [ObpDeleteDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497760, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6732a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79c360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6970, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) delete_directory_object;
    
    // [ObpDeleteNameCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4accf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62e1c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c4f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a5e0, 0x1fe000 bytes
    //
    _t3(sdk::function<void(struct nt::object_header_t*)>*) delete_name_check;
    
    // [ObpDeleteSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a14fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e5570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8c40, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) delete_symbolic_link;
    
    // [ObpDeleteSymbolicLinkName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2630, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799840, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c12fc, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) delete_symbolic_link_name;
    
    // [ObpDereferenceNamedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe012c, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b2b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc7e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e19b8, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) dereference_named_object;
    
    // [ObpDeregisterObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x970a70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d99fc, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) deregister_object;
    
    // [ObpDestroyStackAndObjectTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c2e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db35c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x970bf4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9b5c, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) destroy_stack_and_object_tables;
    
    // [ObpDestroyTypeArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8daa60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96fe68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9260, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) destroy_type_array;
    
    // [ObpDirectoryMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ed0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96700, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a490, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa958f0, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) directory_mapping;
    
    // [ObpDirectoryObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305f00, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25a00, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) directory_object_type;
    
    // [ObpDosDevicesNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecaf0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981028, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f908, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) dos_devices_name_string;
    
    // [ObpDosDevicesShortNameRootString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981078, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f958, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) dos_devices_short_name_root_string;
    
    // [ObpEnumFindHandleProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e1a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x63ee50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ab7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5990, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) enum_find_handle_procedure;
    
    // [ObpFilterOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9e9c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2db35c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3074ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25c59c, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) filter_operation;
    
    // [ObpFreeObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ccf10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a49f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c25b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5faf50, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) free_object;
    
    // [ObpFreeObjectNameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be338, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6132b8, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) free_object_name_buffer;
    
    // [ObpFreeWorkItemBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c3c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db444, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x970cdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9c44, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) free_work_item_block;
    
    // [ObpGetDosDevicesProtection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a718, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77df20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821a18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x782c30, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) get_dos_devices_protection;
    
    // [ObpGetObjectRefInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c4a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db4f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x970da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9cf4, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) get_object_ref_info;
    
    // [ObpGetObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6beaf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x698250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613a70, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) get_object_security;
    
    // [ObpGetShadowDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x669ea8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d919c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7abd94, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d799c, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) get_shadow_directory;
    
    // [OBP_GET_SILO_ROOT_DIRECTORY_FROM_SILO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xdf4e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x217248, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ede80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x203428, 0x1fe000 bytes
    //
    _v3(sdk::function<struct nt::object_directory_t*(struct nt::ejob_t*)>*) get_silo_root_directory_from_silo;
    
    // [ObpGetSilosRootDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97d78c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa60460, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97c06c, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) get_silos_root_directory;
    
    // [ObpGetTraceIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c5b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db608, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x970eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9e08, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) get_trace_index;
    
    // [ObpGlobalDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec738, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64688, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f3a0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) global_directory_name;
    
    // [ObpGlobalDosDevicesShortName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64678, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f3b0, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) global_dos_devices_short_name;
    
    // [ObpGlobalNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981068, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f948, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) global_name_string;
    
    // [ObpGlobalRootNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981018, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f8f8, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) global_root_name_string;
    
    // [ObpGrantAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62e3cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739bc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb4d8, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) grant_access;
    
    // [ObpHandleRevocationBlockRemoveInsertedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a5d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9880, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8080, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) handle_revocation_block_remove_inserted_object;
    
    // [ObpHandleRevocationBlockRemoveObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x472320, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x694b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7af0, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) handle_revocation_block_remove_object;
    
    // [ObpHashBoundaryFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a0fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65f510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c8110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2c10, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) hash_boundary_function;
    
    // [ObpIncrPointerCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8230, 0x32828 bytes
    // ntoskrnl.exe .text:0x3012a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x29846c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x26b720, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) incr_pointer_count;
    
    // [ObpIncrPointerCountEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5308, 0x32828 bytes
    // ntoskrnl.exe .text:0x27ed80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9230, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30b6ec, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) incr_pointer_count_ex;
    
    // [ObpIncrementHandleCountEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b2e50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d29f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bd4d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x628e30, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) increment_handle_count_ex;
    
    // [ObpInfoMaskToOffset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307b60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25e80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc400a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25e20, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) info_mask_to_offset;
    
    // [ObpInitInfoBlockOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79ee04, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa65014, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4fa78, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa646f4, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) init_info_block_offsets;
    
    // [ObpInitObjectTypeSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547b28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772c9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c7c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e39c, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) init_object_type_sd;
    
    // [ObpInitStackAndObjectTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c7b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db7f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x971088, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9ff0, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) init_stack_and_object_tables;
    
    // [ObpInitStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a6f98, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6d610, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5ccfc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6cde0, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) init_stack_trace;
    
    // [ObpInitializeRootNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77d81c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8213c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78252c, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) initialize_root_namespace;
    
    // [ObpInsertCallbackByAltitude]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569ca8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ac7e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862d0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b4164, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) insert_callback_by_altitude;
    
    // [ObpInsertDirectoryEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x481128, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654e4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7a44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c8994, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) insert_directory_entry;
    
    // [ObpInsertHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4765d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6448cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5898, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8dec, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) insert_handle_count;
    
    // [ObpInsertOrLocateNamedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aa3b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d9d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61670c, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) insert_or_locate_named_object;
    
    // [ObpInvalidOpenByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25980, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f6a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25940, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) invalid_open_by_pointer;
    
    // [ObpIsKernelHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9ea28, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2e10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x214e04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x264120, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) is_kernel_handle;
    
    // [ObpIsObjectPoolTagTraced]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9711f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8da188, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) is_object_pool_tag_traced;
    
    // [ObpIsUnsecureName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5349b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8564f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7a34, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) is_unsecure_name;
    
    // [ObpKernelHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e98, 0x32828 bytes
    // ntoskrnl.exe .data:0xc259c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3fef8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25980, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) kernel_handle_table;
    
    // [ObpKernelObjectsNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981058, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f938, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) kernel_objects_name_string;
    
    // [ObpKernelObjectsPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f928, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) kernel_objects_path_string;
    
    // [ObpLockDirectoryExclusive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xed400, 0x32828 bytes
    // ntoskrnl.exe .text:0x25251c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x799808, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fcd68, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) lock_directory_exclusive;
    
    // [ObpLockDirectoryShared]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe02b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da0a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6979c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b128, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) lock_directory_shared;
    
    // [ObpLockHandleDataBaseEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x476440, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x644750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8c70, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) lock_handle_data_base_entry;
    
    // [ObpLookupDirectoryEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547cf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772e9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ada28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e59c, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) lookup_directory_entry;
    
    // [ObpLookupDirectoryUsingHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46eba4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64a224, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7adb58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bbfec, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) lookup_directory_using_hash;
    
    // [ObpLookupNamespaceEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eac00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb2f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c12ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67db6c, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) lookup_namespace_entry;
    
    // [ObpLookupObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b45f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d0ce0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c06a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x627120, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) lookup_object_name;
    
    // [ObpLUIDDeviceMapsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9aa4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1146c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0beec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114cc, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) luid_device_maps_enabled;
    
    // [ObpMaxStacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ab8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bf00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114e0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) max_stacks;
    
    // [ObpNameBufferLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341600, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee680, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0f140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee680, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) name_buffer_lookaside_list;
    
    // [ObpNumTracedObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061fc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d34, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ad4, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) num_traced_objects;
    
    // [ObpObjectBuckets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ab4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11478, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0befc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114d8, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) object_buckets;
    
    // [ObpObjectSecurityInheritance]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3425dc, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4b40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd175dc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4b44, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) object_security_inheritance;
    
    // [ObpObjectSecurityMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c2c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ff0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc6c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12050, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) object_security_mode;
    
    // [ObpObjectTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306208, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f658, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ae8, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) object_table;
    
    // [ObpObjectTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305ce0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25180, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f6c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25140, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) object_types;
    
    // [ObpObjectTypesNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981038, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f918, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) object_types_name_string;
    
    // [ObpObjectTypesPathString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecb50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981088, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f968, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) object_types_path_string;
    
    // [ObpParseSymbolicLinkEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e84f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e8ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e8b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6778a0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) parse_symbolic_link_ex;
    
    // [ObpPostInterceptHandleCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b9b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dac28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891cf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9428, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) post_intercept_handle_create;
    
    // [ObpPostInterceptHandleDuplicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ba74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dacbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891d8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d94bc, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) post_intercept_handle_duplicate;
    
    // [ObpPreInterceptHandleDuplicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480e94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65c690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c35ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0494, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) pre_intercept_handle_duplicate;
    
    // [ObpProcessRemoveObjectDpcWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1fedc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x55eba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e740, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55e980, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) process_remove_object_dpc_worker;
    
    // [ObpProcessRemoveObjectQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x471fdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x694830, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x79f670, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef430, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) process_remove_object_queue;
    
    // [ObpProtectionMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x307b50, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25e70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc40080, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25f30, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) protection_mode;
    
    // [ObpPushRefDerefInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c988, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db9f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97125c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8da1f0, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) push_ref_deref_info;
    
    // [ObpPushStackInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff138, 0x32828 bytes
    // ntoskrnl.exe .text:0x55ef78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e888, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55ed58, 0x1fe000 bytes
    //
    _b0(sdk::function<void(struct nt::object_header_t*, uint8_t, uint32_t, uint32_t)>*) push_stack_info;
    
    // [ObpPushStackInfoList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306248, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d58, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25af8, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) push_stack_info_list;
    
    // [ObpPushStackInfoQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cb58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dbb80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x971450, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8da380, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) push_stack_info_queue;
    
    // [ObpPushStackInfoWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306220, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f680, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25b00, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) push_stack_info_work_item;
    
    // [ObpReferenceNamedObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0178, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc7a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310aec, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) reference_named_object;
    
    // [ObpReferenceObjectByHandleWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b5df0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d4910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bf3f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62ad50, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) reference_object_by_handle_with_tag;
    
    // [ObpReferenceProcessObjectByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463a30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c7420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76cf64, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61d860, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) reference_process_object_by_handle;
    
    // [ObpReferenceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6becc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6972e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613c40, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) reference_security_descriptor;
    
    // [ObpRegTraceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061f4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f648, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25aa0, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) reg_trace_flags;
    
    // [ObpRegTracePoolTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306180, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f600, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25a60, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) reg_trace_pool_tags;
    
    // [ObpRegTraceProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f4d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ac0, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) reg_trace_process_name;
    
    // [ObpRegisterObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66cc14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dbc4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9714d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8da44c, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) register_object;
    
    // [ObpRegisterPrivateNamespace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ea8c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c11ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67daac, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) register_private_namespace;
    
    // [ObpReleaseHandleInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x472340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6446c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b8be4, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) release_handle_info;
    
    // [ObpRemoveNamespaceFromTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a990, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6615ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c0cec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d4ccc, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) remove_namespace_from_table;
    
    // [ObpRemoveObjectDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305ec0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25a00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc259c0, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) remove_object_dpc;
    
    // [ObpRemoveObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25998, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25958, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) remove_object_list;
    
    // [ObpRemoveObjectRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cce40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a4910, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c24d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fae70, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) remove_object_routine;
    
    // [ObpRemoveObjectWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e70, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25990, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3fec8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25950, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) remove_object_wait;
    
    // [ObpRemoveObjectWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305ea0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc259a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25960, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) remove_object_work_item;
    
    // [ObpRootDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980ab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64668, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f390, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) root_directory_name;
    
    // [ObpRootDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305f18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25168, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff98, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25128, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) root_directory_object;
    
    // [ObpRuntimeTraceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f64c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ad0, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) runtime_trace_flags;
    
    // [ObpRuntimeTracePoolTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306140, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25c80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25a20, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) runtime_trace_pool_tags;
    
    // [ObpRuntimeTraceProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f4e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ab0, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) runtime_trace_process_name;
    
    // [ObpSetDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49cea4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673d34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x812f5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e7024, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) set_device_map;
    
    // [ObpSetObjectAuditInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ad94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8da0d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891b32, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d88d8, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) set_object_audit_info;
    
    // [ObpSetSiloDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a6c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77deb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8219ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x782bc8, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) set_silo_device_map;
    
    // [ObpShutdownCloseHandleProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f0e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7f50, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) shutdown_close_handle_procedure;
    
    // [ObpSilosDirectoryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980680, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64130, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ef60, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) silos_directory_name;
    
    // [ObpStackBuckets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9ab0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc1147c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bef4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114dc, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) stack_buckets;
    
    // [ObpStackSequence]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f654, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25af0, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) stack_sequence;
    
    // [ObpStackTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306200, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f668, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ae0, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) stack_table;
    
    // [ObpStackTraceLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306240, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25ad8, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) stack_trace_lock;
    
    // [ObpStacksPerBucket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9aac, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11470, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bef0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114d0, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) stacks_per_bucket;
    
    // [ObpStartRuntimeStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66ce1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dbe38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9716d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8da638, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) start_runtime_stack_trace;
    
    // [ObpStopRuntimeStackTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d27c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc264, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x971b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8daa64, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) stop_runtime_stack_trace;
    
    // [ObpSymbolicLinkMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ef0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96720, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a470, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95910, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) symbolic_link_mapping;
    
    // [ObpSymbolicLinkObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305f08, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25a48, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25a08, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) symbolic_link_object_type;
    
    // [ObpTraceDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9aa8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11474, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0bef8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc114d4, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) trace_depth;
    
    // [ObpTraceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3aa008, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa010, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1c018, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfa010, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) trace_flags;
    
    // [ObpTracePermanent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f368, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25d20, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) trace_permanent;
    
    // [ObpTracePoolTags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25c68, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f4c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25a10, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) trace_pool_tags;
    
    // [ObpTracePoolTagsBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305f20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25b20, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) trace_pool_tags_buffer;
    
    // [ObpTracePoolTagsLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c34, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ff8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc74, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12058, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) trace_pool_tags_length;
    
    // [ObpTraceProcessName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3061d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25d08, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25aa8, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) trace_process_name;
    
    // [ObpTraceProcessNameBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x306020, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3f500, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25c20, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) trace_process_name_buffer;
    
    // [ObpTraceProcessNameLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c30, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ff4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc70, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12054, 0x1fe000 bytes
    //
    _f7(sdk::unknown_ptr) trace_process_name_length;
    
    // [ObpTypeDirectoryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305e68, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25988, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3fec0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25948, 0x1fe000 bytes
    //
    _f8(sdk::unknown_ptr) type_directory_object;
    
    // [ObpTypeMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1ee0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96710, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a480, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95900, 0x1fe000 bytes
    //
    _f9(sdk::unknown_ptr) type_mapping;
    
    // [ObpTypeObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x305f10, 0x32828 bytes
    // ntoskrnl.exe .data:0xc25170, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc3ff90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc25130, 0x1fe000 bytes
    //
    _g0(sdk::unknown_ptr) type_object_type;
    
    // [ObpUnlockDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb04e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da76c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697a00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b2d4, 0x1fe000 bytes
    //
    _g1(sdk::function<void(struct nt::object_directory_t*, struct obp::lookup_context_t*)>*) unlock_directory;
    
    // [ObpUnlockHandleDatabaseEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4763c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9f38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8738, 0x1fe000 bytes
    //
    _g2(sdk::unknown_ptr) unlock_handle_database_entry;
    
    // [ObpUnsecureGlobalNamesBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ee70, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16b40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c50, 0x1fe000 bytes
    //
    _g3(sdk::unknown_ptr) unsecure_global_names_buffer;
    
    // [ObpUnsecureGlobalNamesLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9c28, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11fec, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cc68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc1204c, 0x1fe000 bytes
    //
    _g4(sdk::unknown_ptr) unsecure_global_names_length;
    
    // [ObpVerifyAccessToBoundaryEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e7210, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fb3b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x795ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703700, 0x1fe000 bytes
    //
    _g5(sdk::unknown_ptr) verify_access_to_boundary_entry;
    
    // [ObpVerifyCreatorAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eaf50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5fad80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1364, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67d8d0, 0x1fe000 bytes
    //
    _g6(sdk::unknown_ptr) verify_creator_access_check;
    
    // [ObpWaitBlockLookaside]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33bfc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebd00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0b740, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebd00, 0x1fe000 bytes
    //
    _g7(sdk::unknown_ptr) wait_block_lookaside;
    
    // [ObpWorkItemFreeList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x344000, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf6250, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17c90, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf6250, 0x1fe000 bytes
    //
    _g8(sdk::unknown_ptr) work_item_free_list;
};
#include "magic/api.end.hpp"
