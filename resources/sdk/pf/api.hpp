#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/ethread_t.hpp"
#include "file_access_type_t.hpp"
#include "../nt/file_object_t.hpp"

#include "magic/api.start.hpp"
namespace pf
{
    // [PfIoPowerEventNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x520a50, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) io_power_event_notify;
    
    // [PfLockSharedAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x9b78, 0x32828 bytes
    //
    _m1(sdk::unknown_ptr) lock_shared_acquire;
    
    // [PfProcessExitNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x767a60, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) process_exit_notification;
    
    // [PfSnAltProfileFindByScenarioId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x78e420, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) sn_alt_profile_find_by_scenario_id;
    
    // [PfSnAltProfileTreeCompareByProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x675a70, 0x1fd000 bytes
    //
    _m4(sdk::unknown_ptr) sn_alt_profile_tree_compare_by_process;
    
    // [PfSnAltProfileTreeCompareByScenarioId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6746bc, 0x1fd000 bytes
    //
    _m5(sdk::unknown_ptr) sn_alt_profile_tree_compare_by_scenario_id;
    
    // [PfSnCalculateScenarioNameAndHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x78e4b0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) sn_calculate_scenario_name_and_hash;
    
    // [PfSnGetNLLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x759808, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) sn_get_nl_log_entry;
    
    // [PfSnLogFileDataAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2aafd4, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) sn_log_file_data_access;
    
    // [PfSnSetAltPrefetchParam]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x675a9c, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) sn_set_alt_prefetch_param;
    
    // [PfTAccessTracingCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3dd26c, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) t_access_tracing_check;
    
    // [PfLockExclusiveRelease]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3caa20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cbaf0, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) lock_exclusive_release;
    
    // [PfLockExclusiveAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5454, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cb0f0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) lock_exclusive_acquire;
    
    // [PfSnAcquiredNamesDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) sn_acquired_names_delete;
    
    // [PfSnCheckLogSequenceNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x33ad5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x289fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b6454, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) sn_check_log_sequence_number;
    
    // [PfSnLogIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x67f68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78f414, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6525c8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) sn_log_identifier;
    
    // [PfSnRemoveProcessTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x27c02c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2d48, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) sn_remove_process_trace;
    
    // [PfCalculateProcessHash]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413ae4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700b90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75b420, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64f5e0, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) calculate_process_hash;
    
    // [PfCheckDeprioritizeFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7020f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x66a93c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x662d00, 0x1fe000 bytes
    //
    _n8(sdk::function<uint32_t(uint32_t, uint64_t, uint64_t)>*) check_deprioritize_file;
    
    // [PfCheckDeprioritizeImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3fe27c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700a20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e2b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64f468, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) check_deprioritize_image;
    
    // [PfFbBufferListAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x144644, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0324, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d6510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1134, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) fb_buffer_list_allocate;
    
    // [PfFbBufferListAllocateTemporary]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfc08, 0x32828 bytes
    // ntoskrnl.exe .text:0x269594, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3066e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a5a4, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) fb_buffer_list_allocate_temporary;
    
    // [PfFbBufferListCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66eab8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8ddc7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dc47c, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) fb_buffer_list_cleanup;
    
    // [PfFbBufferListFlushStandby]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x725b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c1e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30690c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2f04, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) fb_buffer_list_flush_standby;
    
    // [PfFbBufferListInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8537a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8eb8, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) fb_buffer_list_initialize;
    
    // [PfFbBufferListInsertInFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72510, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306864, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2e5c, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) fb_buffer_list_insert_in_free;
    
    // [PfFbBufferListShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff338, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f178, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ecc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55ef58, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) fb_buffer_list_shutdown;
    
    // [PfFbBufferListUpdateMax]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd56f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x271808, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x385c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323398, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) fb_buffer_list_update_max;
    
    // [PfFbLogEntryComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xeebdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b54c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5d24, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) fb_log_entry_complete;
    
    // [PfFbLogEntryReserve]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xebc7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa82c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5c48, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) fb_log_entry_reserve;
    
    // [PfFileInfoNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xed4c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x33b340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2a9d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b5440, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) file_info_notify;
    
    // [PfGenerateTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51f9c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75a6d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c198, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762124, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) generate_trace;
    
    // [PfGetCompletedTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701d14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768568, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x662924, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) get_completed_trace;
    
    // [PfGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326600, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4fec0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64850, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4fec0, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) globals;
    
    // [PfHardFaultLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72694, 0x32828 bytes
    // ntoskrnl.exe .text:0x259730, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6a94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b87e8, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) hard_fault_log;
    
    // [PfHardFaultRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbf890, 0x32828 bytes
    // ntoskrnl.exe .text:0x250914, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6b00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b3e5c, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) hard_fault_record;
    
    // [PfInitializeSuperfetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79f930, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66efc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50808, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa665dc, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) initialize_superfetch;
    
    // [PfKernelGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33c1c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebf00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0b940, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebf00, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) kernel_globals;
    
    // [PfLockSharedTryAcquire]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x720d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b030, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x201648, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5808, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) lock_shared_try_acquire;
    
    // [PfLogDeleteHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0344, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b204, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37038c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d59dc, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) log_delete_helper;
    
    // [PfLogEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72254, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa730, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5b58, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) log_event;
    
    // [PfLogFileDataAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff248, 0x32828 bytes
    // ntoskrnl.exe .text:0x55f098, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2aa3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x55ee78, 0x1fe000 bytes
    //
    _q1(sdk::function<int32_t(uint64_t, struct nt::ethread_t*, uint64_t, uint64_t, enum pf::file_access_type_t)>*) log_file_data_access;
    
    // [PfLogForegroundProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x721d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b304, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376910, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5adc, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) log_foreground_process;
    
    // [PfMetadataRecordIsEqual]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ec1e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e604c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d47c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x67297c, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) metadata_record_is_equal;
    
    // [PfPowerActionNotify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cdbe0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98e198, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8baac, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98d1ac, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) power_action_notify;
    
    // [PfPrefetchRequestPrepareForVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3edd40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6498b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0c18, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3844, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) prefetch_request_prepare_for_verify;
    
    // [PfPrefetchRequestVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eda24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64956c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0814, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d34f8, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) prefetch_request_verify;
    
    // [PfPrefetchRequestVerifyPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3edc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6497ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0a68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3778, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) prefetch_request_verify_path;
    
    // [PfPrefetchRequestVerifyRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed944, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649488, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3414, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) prefetch_request_verify_ranges;
    
    // [PfProcessCreateNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41385c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78df58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e318, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) process_create_notification;
    
    // [PfQuerySuperfetchInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ca1b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d8580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x69f070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e9380, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) query_superfetch_information;
    
    // [PfRequestRangeCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3edd08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649878, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0af4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3804, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) request_range_check;
    
    // [PfSetSuperfetchInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4182d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x647048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x789fe8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d0c28, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) set_superfetch_information;
    
    // [PfSnActivateTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72a50, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c8f4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e460, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2550, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) sn_activate_trace;
    
    // [PfSnActiveTraceGetNext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfdebc, 0x32828 bytes
    // ntoskrnl.exe .text:0x293c10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364158, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23a7e0, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) sn_active_trace_get_next;
    
    // [PfSnActivityScenarioTypePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a728, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b630, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51648, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b638, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) sn_activity_scenario_type_prefix;
    
    // [PfSnAddProcessTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72af8, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c9b4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e520, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2610, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) sn_add_process_trace;
    
    // [PfSnAllocateEnablePrefetcherTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2c6c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997640, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d7d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9969e0, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) sn_allocate_enable_prefetcher_timer;
    
    // [PfSnAppLaunchScenarioControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e5e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd740, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dbf40, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) sn_app_launch_scenario_control;
    
    // [PfSnAppLaunchScenarioTypePrefix]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a730, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b638, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd51650, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b630, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) sn_app_launch_scenario_type_prefix;
    
    // [PfSnArrayGrow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e7b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66e7cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c27fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e18dc, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) sn_array_grow;
    
    // [PfSnAsyncContextCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efb4c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672efc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e190c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e65cc, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) sn_async_context_cleanup;
    
    // [PfSnAsyncContextInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49244c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c34c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5d70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ded0c, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) sn_async_context_initialize;
    
    // [PfSnAsyncPrefetchStep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efb98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6577cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b80bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2e50, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) sn_async_prefetch_step;
    
    // [PfSnAsyncPrefetchWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef804, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ff60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d530, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651620, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) sn_async_prefetch_worker;
    
    // [PfSnBeginAppLaunch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4138ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7007b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78dff0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e3b0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) sn_begin_app_launch;
    
    // [PfSnBeginBootPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d2b84, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x997554, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d73c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9968f4, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) sn_begin_boot_phase;
    
    // [PfSnBeginScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6802c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ecac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64fb4c, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) sn_begin_scenario;
    
    // [PfSnBeginTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x417334, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x680dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ef58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651afc, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) sn_begin_trace;
    
    // [PfSnBuildDumpFromTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416f68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67cd44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3710, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6535a4, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) sn_build_dump_from_trace;
    
    // [PfSnCancelTraceTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x729c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27bf8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x350b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2ca8, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) sn_cancel_trace_timer;
    
    // [PfSnCaptureParamBlockString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414b20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6506b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e750, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65042c, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) sn_capture_param_block_string;
    
    // [PfSnCheckActionsNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414d28, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x680710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65063c, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) sn_check_actions_needed;
    
    // [PfSnCheckLoggingForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3e024, 0x32828 bytes
    // ntoskrnl.exe .text:0x24407c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x206f94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3242d0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) sn_check_logging_for_thread;
    
    // [PfSnCheckModernApp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41353c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6645d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e95c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64ff9c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) sn_check_modern_app;
    
    // [PfSnCheckScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x413a84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7009bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e24c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64e5bc, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) sn_check_scenario;
    
    // [PfSnCleanupPrefetchHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea8d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60da68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78bd4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639fb8, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) sn_cleanup_prefetch_header;
    
    // [PfSnCleanupPrefetchSectionInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea9d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60db74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78be54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a0c4, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) sn_cleanup_prefetch_section_info;
    
    // [PfSnCleanupTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416e60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67cbcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65342c, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) sn_cleanup_trace;
    
    // [PfSnDeactivateTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x728c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27beac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3509b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2bc8, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) sn_deactivate_trace;
    
    // [PfSnDetermineEnablePrefetcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571b48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86aed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be7f0, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) sn_determine_enable_prefetcher;
    
    // [PfSnEnablePrefetcherTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4f20, 0x32828 bytes
    // ntoskrnl.exe .text:0x2710a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322840, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) sn_enable_prefetcher_timer_routine;
    
    // [PfSnEndProcessTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416b68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6633bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1234, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3f38, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) sn_end_process_trace;
    
    // [PfSnEndTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416c08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67c988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a34b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6531e8, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) sn_end_trace;
    
    // [PfSnEndTraceWorkerThreadRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416c00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67c970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a34a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6531d0, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) sn_end_trace_worker_thread_routine;
    
    // [PfSnEvt_AsyncWorker_Start]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3e0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb308, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe5e8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d58, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) sn_evt_async_worker_start;
    
    // [PfSnEvt_AsyncWorker_Stop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3c0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb2f8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe608, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d48, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) sn_evt_async_worker_stop;
    
    // [PfSnEvt_EndTrace_Info]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e440, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcb68, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf940, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa6b0, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) sn_evt_end_trace_info;
    
    // [PfSnEvt_GetReadLists_Start]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3f0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbcb0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfab0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb5c0, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) sn_evt_get_read_lists_start;
    
    // [PfSnEvt_GetReadLists_Stop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e400, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbca0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfac0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb5b0, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) sn_evt_get_read_lists_stop;
    
    // [PfSnEvt_OpenVolumes_Start]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eac0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa158, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf8e0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb838, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) sn_evt_open_volumes_start;
    
    // [PfSnEvt_OpenVolumes_Stop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eab0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa168, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf8d0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb848, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) sn_evt_open_volumes_stop;
    
    // [PfSnEvt_PrefetchMetadata_Start]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25eae0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xa898, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfca8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb5d0, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) sn_evt_prefetch_metadata_start;
    
    // [PfSnEvt_PrefetchMetadata_Stop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25ead0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbef0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfc98, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb5e0, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) sn_evt_prefetch_metadata_stop;
    
    // [PfSnEvt_PrefetchSections_Start]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e420, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc90, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfaa0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb5a0, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) sn_evt_prefetch_sections_start;
    
    // [PfSnEvt_PrefetchSections_Stop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e410, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xbc80, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xfad0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xb590, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) sn_evt_prefetch_sections_stop;
    
    // [PfSnEvt_ScenarioDecision_Info]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e430, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcb78, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf7d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa6a0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) sn_evt_scenario_decision_info;
    
    // [PfSnEvt_SyncPrefetchingDone_Info]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25e3d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xb2e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xe5f8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9d38, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) sn_evt_sync_prefetching_done_info;
    
    // [PfSnFailProcessTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51b3ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7189a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973998, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x720400, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) sn_fail_process_trace;
    
    // [PfSnFindImageFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414cb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x663370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e5e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6505f0, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) sn_find_image_file_name;
    
    // [PfSnFindPrefetchVolumeInfoInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4654b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d9dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b8e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639e4c, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) sn_find_prefetch_volume_info_in_list;
    
    // [PfSnFindString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414abc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e900, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6503c8, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) sn_find_string;
    
    // [PfSnGetCompletedTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48dd94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666e0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0d08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da32c, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) sn_get_completed_trace;
    
    // [PfSnGetFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x339f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x289c60, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281140, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) sn_get_file_information;
    
    // [PfSnGetPrefetchInstructions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419340, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e4d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78f494, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65266c, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) sn_get_prefetch_instructions;
    
    // [PfSnGetSectionObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4650fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d5f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639a68, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) sn_get_section_object;
    
    // [PfSnGetUnsafeProcessParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414b68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e6ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65047c, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) sn_get_unsafe_process_parameters;
    
    // [PfSnGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x326980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50240, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc69fc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50240, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) sn_globals;
    
    // [PfSnHashUnsafeUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48f660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650768, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ced24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dfa80, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) sn_hash_unsafe_unicode_string;
    
    // [PfSnInitializePrefetcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79fbb4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67190, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50908, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66870, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) sn_initialize_prefetcher;
    
    // [PfSnIsHostingApplication]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414bc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66514c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78eb9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6504e0, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) sn_is_hosting_application;
    
    // [PfSnIsSectionPrefetchedAfterPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x465488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d9a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78bd14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639e14, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) sn_is_section_prefetched_after_phase;
    
    // [PfSnIsVolumeMounted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ebed4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5f28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d224, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670354, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) sn_is_volume_mounted;
    
    // [PfSnLogAsyncWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x680244, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d804, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x651904, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) sn_log_async_worker;
    
    // [PfSnLogGetReadListsStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efc10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657c60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8408, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c32e4, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) sn_log_get_read_lists_start;
    
    // [PfSnLogGetReadListsStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efc90, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657be8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c326c, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) sn_log_get_read_lists_stop;
    
    // [PfSnLogHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700e9c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7597a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64f8ec, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) sn_log_helper;
    
    // [PfSnLogOpenVolumesForPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497634, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e606c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d49c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e3c64, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) sn_log_open_volumes_for_prefetch;
    
    // [PfSnLogPageFault]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6ebf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x243fd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x206eec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32422c, 0x1fe000 bytes
    //
    _x8(sdk::function<void(struct nt::file_object_t*, uint64_t, uint32_t)>*) sn_log_page_fault;
    
    // [PfSnLogPageFaultCommon]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xedf50, 0x32828 bytes
    // ntoskrnl.exe .text:0x33ac34, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x289b2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b632c, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) sn_log_page_fault_common;
    
    // [PfSnLogPrefetchMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4976cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x670474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c37bc, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) sn_log_prefetch_metadata;
    
    // [PfSnLogScenarioDecision]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41476c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x680598, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76a890, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64fe24, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) sn_log_scenario_decision;
    
    // [PfSnLogStreamCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x412318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x700d34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x64f784, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) sn_log_stream_create;
    
    // [PfSnLogStreamDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49fc34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x677218, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b67e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ea5d4, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) sn_log_stream_delete;
    
    // [PfSnLogVolumeCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x491194, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66b35c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5884, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6519bc, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) sn_log_volume_create;
    
    // [PfSnNameQueryWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc115c, 0x32828 bytes
    // ntoskrnl.exe .text:0x296a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x27ceb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23c5e0, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) sn_name_query_worker;
    
    // [PfSnNameRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21c4c, 0x32828 bytes
    // ntoskrnl.exe .text:0x293ccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x364218, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23a89c, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) sn_name_remove;
    
    // [PfSnNameRemoveAll]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e31e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6900c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b6790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef310, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) sn_name_remove_all;
    
    // [PfSnNumActiveTraces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3243d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4c384, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64464, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4c364, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) sn_num_active_traces;
    
    // [PfSnOpenVolumesForPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eb8b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e580c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ccbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670478, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) sn_open_volumes_for_prefetch;
    
    // [PfSnOperationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a286c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6631c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x673fd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3b38, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) sn_operation_process;
    
    // [PfSnParametersRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5628c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852ba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9230, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) sn_parameters_read;
    
    // [PfSnParametersSetDefaults]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79fd04, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa672f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50cbc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa669d0, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) sn_parameters_set_defaults;
    
    // [PfSnParametersVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562da4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a164c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8531e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a986c, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) sn_parameters_verify;
    
    // [PfSnParsePrefetchParam]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x414968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6504f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e7a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x650268, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) sn_parse_prefetch_param;
    
    // [PfSnPopulateReadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x464c10, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639530, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) sn_populate_read_list;
    
    // [PfSnPowerBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef2ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x675678, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e67f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8958, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) sn_power_boost;
    
    // [PfSnPowerBoostDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ff328, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a3140, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a4670, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) sn_power_boost_dpc;
    
    // [PfSnPowerBoostUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef35c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6756f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6874, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e89d4, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) sn_power_boost_update;
    
    // [PfSnPowerBoostWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e6e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8702f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779c10, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) sn_power_boost_worker;
    
    // [PfSnPreallocatePrefetchHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef470, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x660dac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c4f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d424c, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) sn_preallocate_prefetch_header;
    
    // [PfSnPrefetchCacheCtxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56323c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1b2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x853518, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9d4c, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) sn_prefetch_cache_ctx_initialize;
    
    // [PfSnPrefetchCacheCtxStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56976c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa420, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e9e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1da0, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) sn_prefetch_cache_ctx_start;
    
    // [PfSnPrefetchCacheEntryGet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415f48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x680a08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78db8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x650934, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) sn_prefetch_cache_entry_get;
    
    // [PfSnPrefetchCacheEntryUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x417594, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e3a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x788fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d14c0, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) sn_prefetch_cache_entry_update;
    
    // [PfSnPrefetchFileMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4959b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667718, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d2780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3854, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) sn_prefetch_file_metadata;
    
    // [PfSnPrefetchMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c6ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78aa98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3360, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) sn_prefetch_metadata;
    
    // [PfSnPrefetchScenario]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4923ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c2a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d5cc8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6dec60, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) sn_prefetch_scenario;
    
    // [PfSnPrefetchSections]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3efd0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65784c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b813c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c2ed0, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) sn_prefetch_sections;
    
    // [PfSnPrefetchSectionsCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3effc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x657af8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b84fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c317c, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) sn_prefetch_sections_cleanup;
    
    // [PfSnQueryPrefetcherInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48db70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x666bc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d0ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da0e4, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) sn_query_prefetcher_information;
    
    // [PfSnQueryVolumeInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eb770, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e5dec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78d348, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x670a58, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) sn_query_volume_info;
    
    // [PfSnQueueEnablePrefetcherTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5717f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b5f08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ae7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdb08, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) sn_queue_enable_prefetcher_timer;
    
    // [PfSnReferenceProcessTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6eca0, 0x32828 bytes
    // ntoskrnl.exe .text:0x33c000, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ab090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b6100, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) sn_reference_process_trace;
    
    // [PfSnScanCommandLine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4148e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78e630, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6501c8, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) sn_scan_command_line;
    
    // [PfSnScenarioAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4195f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6752b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e8420, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) sn_scenario_alloc;
    
    // [PfSnScenarioFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) sn_scenario_free;
    
    // [PfSnSectionInfoCleanupWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea818, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60d000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b2a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x639470, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) sn_section_info_cleanup_work_item;
    
    // [PfSnSetPrefetcherInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4188d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67e124, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x789118, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d1240, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) sn_set_prefetcher_information;
    
    // [PfSnStartTraceTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72bac, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c40c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e5dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2a74, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) sn_start_trace_timer;
    
    // [PfSnTraceBufferAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72b60, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c898, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33e414, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2680, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) sn_trace_buffer_allocate;
    
    // [PfSnTraceGetLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee0c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x33c22c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28a03c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2b64d0, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) sn_trace_get_log_entry;
    
    // [PfSnTraceTimerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72c70, 0x32828 bytes
    // ntoskrnl.exe .text:0x260340, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36eb30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310bc0, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) sn_trace_timer_routine;
    
    // [PfSnTracingStateDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd562c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2716a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x205170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323230, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) sn_tracing_state_dpc_routine;
    
    // [PfSnTracingStateExWorkerRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3c78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a1a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed5b0, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) sn_tracing_state_ex_worker_routine;
    
    // [PfSnUpdatePrefetcherFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd4f48, 0x32828 bytes
    // ntoskrnl.exe .text:0x2710d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x384540, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x322870, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) sn_update_prefetcher_flags;
    
    // [PfSnVolumeCheckIsSdBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e704, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd85c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891ebe, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dc05c, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) sn_volume_check_is_sd_bus;
    
    // [PfSnVolumeCheckSeekPenalty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x496c80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e6100, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dd514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e35bc, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) sn_volume_check_seek_penalty;
    
    // [PfSnVolumeKeyQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47e700, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x690110, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c2738, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef360, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) sn_volume_key_query;
    
    // [PfTAccessTracingCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c82c0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996ccc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa73310, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99606c, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) t_access_tracing_cleanup;
    
    // [PfTAccessTracingInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c838c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996dc4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa74284, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996164, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) t_access_tracing_initialize;
    
    // [PfTAccessTracingStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3c8408, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98d448, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa740b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98c458, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) t_access_tracing_start;
    
    // [PfTAcquireLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5217f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67de70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891e44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6546d0, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) t_acquire_log_entry;
    
    // [PfTAllocateBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a19f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8527a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9c14, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) t_allocate_buffers;
    
    // [PfTCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd23c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973370, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dba3c, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) t_cleanup;
    
    // [PfTCleanupBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e334, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd3ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973524, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dbbec, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) t_cleanup_buffers;
    
    // [PfTCreateTraceDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416330, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x767bd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69e460, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) t_create_trace_dump;
    
    // [PfTFreeBufferList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416a58, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701a64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69ec64, 0x1fe000 bytes
    //
    _d7(sdk::unknown_ptr) t_free_buffer_list;
    
    // [PfTFreeTraceDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7233c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b5a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30669c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5d80, 0x1fe000 bytes
    //
    _d8(sdk::unknown_ptr) t_free_trace_dump;
    
    // [PfTFullEventListAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72668, 0x32828 bytes
    // ntoskrnl.exe .text:0x2565cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c90c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305b0c, 0x1fe000 bytes
    //
    _d9(sdk::unknown_ptr) t_full_event_list_add;
    
    // [PfTGenerateTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4162e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701214, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x767b80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69e40c, 0x1fe000 bytes
    //
    _e0(sdk::unknown_ptr) t_generate_trace;
    
    // [PfTGetFreeBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415e7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67df94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76973c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6547f4, 0x1fe000 bytes
    //
    _e1(sdk::unknown_ptr) t_get_free_buffer;
    
    // [PfTGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3262c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4f9c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc64c00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc4f9c0, 0x1fe000 bytes
    //
    _e2(sdk::unknown_ptr) t_globals;
    
    // [PfTInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56231c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0a5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85356c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8c7c, 0x1fe000 bytes
    //
    _e3(sdk::unknown_ptr) t_initialize;
    
    // [PfTLbInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x416b1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701b38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768458, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69ed38, 0x1fe000 bytes
    //
    _e4(sdk::unknown_ptr) t_lb_initialize;
    
    // [PfTLoggingWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5524f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7823d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x841980, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78c170, 0x1fe000 bytes
    //
    _e5(sdk::unknown_ptr) t_logging_worker;
    
    // [PfTReplaceCurrentBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415de4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67def4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76969c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654754, 0x1fe000 bytes
    //
    _e6(sdk::unknown_ptr) t_replace_current_buffer;
    
    // [PfTSetTraceWorkerPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1121e4, 0x32828 bytes
    // ntoskrnl.exe .text:0x37f2ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dd1d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38009c, 0x1fe000 bytes
    //
    _e7(sdk::unknown_ptr) t_set_trace_worker_priority;
    
    // [PfTSetTracingPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3de500, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9ae1ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8c34c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9ad15c, 0x1fe000 bytes
    //
    _e8(sdk::unknown_ptr) t_set_tracing_priority;
    
    // [PfTStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562eb8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a175c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852510, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a997c, 0x1fe000 bytes
    //
    _e9(sdk::unknown_ptr) t_start;
    
    // [PfTTraceListAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41402c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x701fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768808, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x662bb4, 0x1fe000 bytes
    //
    _f0(sdk::unknown_ptr) t_trace_list_add;
    
    // [PfTTraceListFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41445c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7023dc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768954, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x662fec, 0x1fe000 bytes
    //
    _f1(sdk::unknown_ptr) t_trace_list_free;
    
    // [PfTTraceListTrim]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523b54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd47c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9735b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dbc7c, 0x1fe000 bytes
    //
    _f2(sdk::unknown_ptr) t_trace_list_trim;
    
    // [PfVerifyScenarioBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x418b50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67c140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a2c90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6529a0, 0x1fe000 bytes
    //
    _f3(sdk::unknown_ptr) verify_scenario_buffer;
    
    // [PfVerifyScenarioId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x417318, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d104, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3c2c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x653964, 0x1fe000 bytes
    //
    _f4(sdk::unknown_ptr) verify_scenario_id;
    
    // [PfVerifyTraceBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4171a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67cf88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3ab0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6537e8, 0x1fe000 bytes
    //
    _f5(sdk::unknown_ptr) verify_trace_buffer;
    
    // [PfVolumeSupportedForPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x48f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cfdc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35eb24, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202c54, 0x1fe000 bytes
    //
    _f6(sdk::unknown_ptr) volume_supported_for_prefetch;
};
#include "magic/api.end.hpp"
