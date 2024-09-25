#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/fast_ref_t.hpp"
#include "../nt/pool_type_t.hpp"
#include "../nt/wait_type_t.hpp"
#include "../nt/object_type_t.hpp"
#include "../nt/access_state_t.hpp"
#include "../nt/generic_mapping_t.hpp"
#include "callback_registration_t.hpp"
#include "../nt/object_attributes_t.hpp"
#include "../nt/object_name_information_t.hpp"
#include "../nt/object_handle_information_t.hpp"

namespace nt  { struct ejob_t;                           }
namespace nt  { struct kprocess_t;                       }
namespace win { struct object_handle_flag_information_t; }

#include "magic/api.start.hpp"
namespace ob
{
    // [ObCleanupSiloState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x96ec70, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) cleanup_silo_state;
    
    // [ObClearProcessDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7a6cf8, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) clear_process_device_map;
    
    // [ObDereferenceObjectExWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x347b08, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) dereference_object_ex_with_tag;
    
    // [ObDrainDeferredObjectDeletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x66a6e8, 0x32828 bytes
    //
    _m3(sdk::unknown_ptr) drain_deferred_object_deletion;
    
    // [ObFastDereferenceObjectDeferDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2d6cc0, 0x1fd000 bytes
    //
    _m4(sdk::function<void(struct ex::fast_ref_t*, void*, uint32_t)>*) fast_dereference_object_defer_delete;
    
    // [ObGetAssociatedWaitObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2af990, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) get_associated_wait_object;
    
    // [ObNormalizeHandleValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x66aab4, 0x32828 bytes
    //
    _m6(sdk::unknown_ptr) normalize_handle_value;
    
    // [ObReleaseObjectSecurityEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x698868, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) release_object_security_ex;
    
    // [ObDisableEtwReferenceTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x66bc58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9705a0, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) disable_etw_reference_trace;
    
    // [ObGetExtendedUserInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8da1fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8d89fc, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) get_extended_user_info;
    
    // [ObCleanupSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77daf4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821c1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x782804, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) cleanup_security_descriptor;
    
    // [ObCreateKernelObjectsSD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x77db38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x821278, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x782848, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) create_kernel_objects_sd;
    
    // [ObCreateSymbolicLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66434c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c56d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d794c, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) create_symbolic_link;
    
    // [ObGetCurrentIrql]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x238a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x236140, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_current_irql;
    
    // [ObSetCurrentProcessDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47efa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64e598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c1878, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) set_current_process_device_map;
    
    // [ObAdjustSecurityQuota]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427b0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bee38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613db8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) adjust_security_quota;
    
    // [ObAssignObjectSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49632c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc7f0, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) assign_object_security_descriptor;
    
    // [ObAssignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x538a78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7565c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73b120, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75e010, 0x1fe000 bytes
    //
    _n7(sdk::function<int32_t(struct nt::access_state_t*, void*, void*, struct nt::object_type_t*)>*) assign_security;
    
    // [ObAuditInheritedHandleProcedure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x669f9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d92c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96ec00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7ac0, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) audit_inherited_handle_procedure;
    
    // [ObCaptureObjectStateForDuplication]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47eb74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654558, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76ca40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c839c, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) capture_object_state_for_duplication;
    
    // [ObCheckActiveHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48eb14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c64c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d301c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6df00c, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) check_active_handles;
    
    // [ObCheckCreateObjectAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8274, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x653230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b5940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616ca0, 0x1fe000 bytes
    //
    _o1(sdk::function<uint8_t(void*, uint32_t, struct nt::access_state_t*, nt::unicode_view*, uint8_t, char, int32_t*)>*) check_create_object_access;
    
    // [ObCheckObjectAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8fc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62e470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x739c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6bb580, 0x1fe000 bytes
    //
    _o2(sdk::function<uint8_t(void*, struct nt::access_state_t*, uint8_t, char, int32_t*)>*) check_object_access;
    
    // [ObCheckRefTraceProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f85d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6840f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x765868, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) check_ref_trace_process;
    
    // [ObCloseHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46318c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69c090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7dd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x637060, 0x1fe000 bytes
    //
    _o4(sdk::function<int32_t(void*, char)>*) close_handle;
    
    // [ObCloseHandleTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b3580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d21a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68c174, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6285e0, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) close_handle_table_entry;
    
    // [ObCompleteObjectDuplication]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x480cd4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61aeb4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c878, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66b2ac, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) complete_object_duplication;
    
    // [ObCreateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4103b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ee9e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73bc00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643a20, 0x1fe000 bytes
    //
    _o7(sdk::function<int32_t(char, struct nt::object_type_t*, struct nt::object_attributes_t*, char, void*, uint32_t, uint32_t, uint32_t, void**)>*) create_object;
    
    // [ObCreateObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cf060, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ab640, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c7d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x601b00, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) create_object_ex;
    
    // [ObCreateObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5474d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772670, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c170, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dd70, 0x1fe000 bytes
    //
    _o9(sdk::function<int32_t(nt::unicode_view*, void*, void*, struct nt::object_type_t**)>*) create_object_type;
    
    // [ObCreateObjectTypeEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5474e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772690, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77dd90, 0x1fe000 bytes
    //
    _p0(sdk::function<int32_t(nt::unicode_view*, void*, void*, int64_t, struct nt::object_type_t**)>*) create_object_type_ex;
    
    // [ObCreateSiloRootDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8a34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97d2d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa5ff90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97bbb0, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) create_silo_root_directory;
    
    // [ObDeassignSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4963a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7501fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cc86c, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) deassign_security;
    
    // [ObDeleteCapturedInsertInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41ae74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7aef20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68d880, 0x1fe000 bytes
    //
    _p3(sdk::function<void(void*)>*) delete_captured_insert_info;
    
    // [ObDereferenceDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f9b94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701b8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a6dcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65e354, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) dereference_device_map;
    
    // [ObDereferenceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2617b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x378390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261190, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) dereference_object;
    
    // [ObDereferenceObjectDeferDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x52570, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c91a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347b90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24a1d0, 0x1fe000 bytes
    //
    _p6(sdk::function<void(void*)>*) dereference_object_defer_delete;
    
    // [ObDereferenceObjectDeferDeleteWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebea0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2cbfa0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2952c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x24cfc0, 0x1fe000 bytes
    //
    _p7(sdk::function<void(void*, uint32_t)>*) dereference_object_defer_delete_with_tag;
    
    // [ObDereferenceObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbddac, 0x32828 bytes
    // ntoskrnl.exe .text:0x236ec0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x347aec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281800, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) dereference_object_ex;
    
    // [ObDereferenceProcessHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66aa08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6577b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cbeb0, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) dereference_process_handle_table;
    
    // [ObDereferenceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d17f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613910, 0x1fe000 bytes
    //
    _q0(sdk::function<void(void*, uint32_t)>*) dereference_security_descriptor;
    
    // [ObDestroyHandleRevocationBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ee34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80c09c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d2534, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) destroy_handle_revocation_block;
    
    // [ObDuplicateObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x463430, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c8490, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6aff00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61e8d0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) duplicate_object;
    
    // [ObEnableEtwReferenceTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bcfc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dae00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97062c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9600, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) enable_etw_reference_trace;
    
    // [ObEnumerateObjectsByType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66af20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8da22c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f638, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8a2c, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) enumerate_objects_by_type;
    
    // [ObFastDereferenceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef040, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8760, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d55f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206540, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) fast_dereference_object;
    
    // [ObFastReferenceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xef110, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e8830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d5c50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x206610, 0x1fe000 bytes
    //
    _q6(sdk::function<void*(struct ex::fast_ref_t*)>*) fast_reference_object;
    
    // [ObFastReferenceObjectLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee214, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d9fd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e760, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b058, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) fast_reference_object_locked;
    
    // [ObFastReplaceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa660, 0x32828 bytes
    // ntoskrnl.exe .text:0x3508ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28640c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x233a3c, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) fast_replace_object;
    
    // [ObFindHandleForObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50dffc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x642c20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76c3a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b7c40, 0x1fe000 bytes
    //
    _q9(sdk::function<uint8_t(struct nt::kprocess_t*, void*, struct nt::object_type_t*, struct nt::object_handle_information_t*, void**)>*) find_handle_for_object;
    
    // [ObGetFilterVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b7dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8daab0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9703a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d92b0, 0x1fe000 bytes
    //
    _r0(sdk::function<uint16_t(...)>*) get_filter_version;
    
    // [ObGetHandleInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66aa14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9c6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d846c, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) get_handle_information;
    
    // [ObGetHandleInformationEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66aa64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f56c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d84c0, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) get_handle_information_ex;
    
    // [ObGetObjectInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66afe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8da2f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f6f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8af8, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) get_object_information;
    
    // [ObGetObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fcc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe940, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9cc0, 0x1fe000 bytes
    //
    _r4(sdk::function<int32_t(void*, void**, uint8_t*)>*) get_object_security;
    
    // [ObGetObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48d838, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6662b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d1110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d9160, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) get_object_type;
    
    // [ObGetProcessHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484870, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cadc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76ce00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfd4c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) get_process_handle_count;
    
    // [ObGetSiloRootDirectoryPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6e8cb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x97d60c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa602d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97beec, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) get_silo_root_directory_path;
    
    // [ObHandleRevocationBlockAddObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a4b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d97c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f16c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7fc0, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) handle_revocation_block_add_object;
    
    // [ObHeaderCookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab464, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb71c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd88, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb71c, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) header_cookie;
    
    // [ObInheritObjectHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x474f64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683d04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ae22c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x671064, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) inherit_object_handle;
    
    // [ObInitProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f82c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x683dc8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fcb20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66f200, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) init_process;
    
    // [ObInitServerSilo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56a8cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aaee0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8611c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b2860, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) init_server_silo;
    
    // [ObInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x784e48, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa3a564, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb29778, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3aa14, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) init_system;
    
    // [ObInitializeFastReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f72cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fbf08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6a34, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) initialize_fast_reference;
    
    // [ObInitializeProcessor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x547dc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772f7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x82c9c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x77e67c, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) initialize_processor;
    
    // [ObInsertObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x40fe34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ecca0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x642330, 0x1fe000 bytes
    //
    _s6(sdk::function<int32_t(void*, struct nt::access_state_t*, uint32_t, uint32_t, void**, void**)>*) insert_object;
    
    // [ObInsertObjectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d05f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6ab850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c93e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x601d40, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) insert_object_ex;
    
    // [ObIsDosDeviceLocallyMapped]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569a08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aff60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x814760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b7af0, 0x1fe000 bytes
    //
    _s8(sdk::function<int32_t(uint32_t, uint8_t*)>*) is_dos_device_locally_mapped;
    
    // [ObIsKernelHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1247e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2716d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385b80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323260, 0x1fe000 bytes
    //
    _s9(sdk::function<uint8_t(void*)>*) is_kernel_handle;
    
    // [ObKillProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f44a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60b698, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7403e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d8208, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) kill_process;
    
    // [ObLogSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bf1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74f960, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x614120, 0x1fe000 bytes
    //
    _t1(sdk::function<int32_t(void*, void**, uint32_t)>*) log_security_descriptor;
    
    // [ObMakeTemporaryObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e38f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x673480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc1a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703f30, 0x1fe000 bytes
    //
    _t2(sdk::function<void(void*)>*) make_temporary_object;
    
    // [ObOpenObjectByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fd434, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6da120, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734040, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eaf20, 0x1fe000 bytes
    //
    _t3(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_type_t*, char, struct nt::access_state_t*, uint32_t, void*, void**)>*) open_object_by_name;
    
    // [ObOpenObjectByNameEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cac60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6da1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bff70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eafa0, 0x1fe000 bytes
    //
    _t4(sdk::function<int32_t(struct nt::object_attributes_t*, struct nt::object_type_t*, char, struct nt::access_state_t*, uint32_t, void*, struct nt::ejob_t*, void**)>*) open_object_by_name_ex;
    
    // [ObOpenObjectByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6159a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69f570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e0db0, 0x1fe000 bytes
    //
    _t5(sdk::function<int32_t(void*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, void**)>*) open_object_by_pointer;
    
    // [ObOpenObjectByPointerWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66a728, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96fec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d8130, 0x1fe000 bytes
    //
    _t6(sdk::function<int32_t(void*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, uint32_t, void**)>*) open_object_by_pointer_with_tag;
    
    // [ObQueryDeviceMapInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x401550, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x611f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70d730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5df740, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) query_device_map_information;
    
    // [ObQueryNameInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4860b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65fbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c6080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d3540, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) query_name_info;
    
    // [ObQueryNameString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x490388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60e080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f8500, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d9410, 0x1fe000 bytes
    //
    _t9(sdk::function<int32_t(void*, struct nt::object_name_information_t*, uint32_t, uint32_t*)>*) query_name_string;
    
    // [ObQueryNameStringMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aaf00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60e5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f8b1c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d9930, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) query_name_string_mode;
    
    // [ObQueryObjectAuditingByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x50e2b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d620, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68beb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5a70, 0x1fe000 bytes
    //
    _u1(sdk::function<int32_t(void*, uint8_t*)>*) query_object_auditing_by_handle;
    
    // [ObQueryRefTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bda0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dae74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9706b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9674, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) query_ref_trace_information;
    
    // [ObQuerySecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x654dd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75018c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x616f58, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) query_security_descriptor_info;
    
    // [ObQuerySecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413404, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f3d28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6feabc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f7534, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) query_security_object;
    
    // [ObQueryTypeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x485140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664fd8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f936c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d8338, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) query_type_info;
    
    // [ObQueryTypeName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66bbc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dad50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97049c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d9550, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) query_type_name;
    
    // [ObReferenceFileObjectForWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e2310, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x697000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96fef4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e46a0, 0x1fe000 bytes
    //
    _u7(sdk::function<int32_t(void*, char, void**, struct nt::object_handle_information_t*)>*) reference_file_object_for_write;
    
    // [ObReferenceObjectByHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b5db0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d48d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bf3b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62ad10, 0x1fe000 bytes
    //
    _u8(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, void**, struct nt::object_handle_information_t*)>*) reference_object_by_handle;
    
    // [ObReferenceObjectByHandleWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x457254, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d4890, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ac540, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62acd0, 0x1fe000 bytes
    //
    _u9(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, uint32_t, void**, struct nt::object_handle_information_t*)>*) reference_object_by_handle_with_tag;
    
    // [ObReferenceObjectByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9e90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697a40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613070, 0x1fe000 bytes
    //
    _v0(sdk::function<int32_t(nt::unicode_view*, uint32_t, struct nt::access_state_t*, uint32_t, struct nt::object_type_t*, char, void*, void**)>*) reference_object_by_name;
    
    // [ObReferenceObjectByNameEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x45a1f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6fe420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ec89c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64b400, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) reference_object_by_name_ex;
    
    // [ObReferenceObjectByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x28a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2039a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9d20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2de590, 0x1fe000 bytes
    //
    _v2(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char)>*) reference_object_by_pointer;
    
    // [ObReferenceObjectByPointerWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf2d30, 0x32828 bytes
    // ntoskrnl.exe .text:0x217f70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x290a20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2046b0, 0x1fe000 bytes
    //
    _v3(sdk::function<int32_t(void*, uint32_t, struct nt::object_type_t*, char, uint32_t)>*) reference_object_by_pointer_with_tag;
    
    // [ObReferenceObjectExWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb8f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x247fc0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34f130, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f3250, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) reference_object_ex_with_tag;
    
    // [ObReferenceObjectSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb13c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x242d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x34ec70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eea30, 0x1fe000 bytes
    //
    _v5(sdk::function<uint8_t(void*)>*) reference_object_safe;
    
    // [ObReferenceObjectSafeWithTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xea830, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2b50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2203c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263e60, 0x1fe000 bytes
    //
    _v6(sdk::function<uint8_t(void*, uint32_t)>*) reference_object_safe_with_tag;
    
    // [ObReferenceProcessHandleTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4639d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c8a94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76ce68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61eed4, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) reference_process_handle_table;
    
    // [ObReferenceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4940a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66cac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfd30, 0x1fe000 bytes
    //
    _v8(sdk::function<void(void*, uint32_t)>*) reference_security_descriptor;
    
    // [ObRegisterCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x569ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ac610, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3f90, 0x1fe000 bytes
    //
    _v9(sdk::function<int32_t(struct ob::callback_registration_t*, void**)>*) register_callbacks;
    
    // [ObReleaseObjectSecurity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4d1dc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6fe990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613680, 0x1fe000 bytes
    //
    _w0(sdk::function<void(void*, uint8_t)>*) release_object_security;
    
    // [ObRevokeHandles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x522f00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75cbfc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96f22c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76464c, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) revoke_handles;
    
    // [ObSetHandleAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x484778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69d3c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x68bbc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c0ee0, 0x1fe000 bytes
    //
    _w2(sdk::function<int32_t(void*, struct win::object_handle_flag_information_t*, char)>*) set_handle_attributes;
    
    // [ObSetProcessDeviceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d52c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc50c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97054c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dad0c, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) set_process_device_map;
    
    // [ObSetRefTraceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66c0b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8db14c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9709c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d994c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) set_ref_trace_information;
    
    // [ObSetSecurityDescriptorInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x427974, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6be5a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74e890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x613520, 0x1fe000 bytes
    //
    _w5(sdk::function<int32_t(void*, uint32_t*, void*, void**, enum nt::pool_type_t, struct nt::generic_mapping_t*)>*) set_security_descriptor_info;
    
    // [ObSetSecurityObjectByPointer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a81f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6987d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6151b0, 0x1fe000 bytes
    //
    _w6(sdk::function<int32_t(void*, uint32_t, void*)>*) set_security_object_by_pointer;
    
    // [ObShutdownSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x669ff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8d9330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x96eca0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d7b30, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) shutdown_system;
    
    // [ObTypeIndexTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab910, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbe10, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1e6b0, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfbe10, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) type_index_table;
    
    // [ObUnRegisterCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66b7e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8daac0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9703b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8d92c0, 0x1fe000 bytes
    //
    _w9(sdk::function<void(void*)>*) un_register_callbacks;
    
    // [ObWaitForMultipleObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4b3f70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x688ea0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bbe70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5f7450, 0x1fe000 bytes
    //
    _x0(sdk::function<int32_t(uint32_t, void**, char, enum nt::wait_type_t, char, uint8_t, int64_t*)>*) wait_for_multiple_objects;
    
    // [ObWaitForSingleObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d61d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bbd20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62c610, 0x1fe000 bytes
    //
    _x1(sdk::function<int32_t(void*, char, char, uint8_t, int64_t*)>*) wait_for_single_object;
};
#include "magic/api.end.hpp"
