#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sm
{
    // [SmCompressionProcessHoldsPartitionReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b5070, 0x1fd000 bytes
    //
    _m0(sdk::unknown_ptr) compression_process_holds_partition_reference;
    
    // [SmCreatePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x73dec0, 0x1fd000 bytes
    //
    _m1(sdk::unknown_ptr) create_partition;
    
    // [SmDeletePartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9ca8ec, 0x1fd000 bytes
    //
    _m2(sdk::unknown_ptr) delete_partition;
    
    // [SmGlobalsStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb2ec04, 0x1fd000 bytes
    //
    _m3(sdk::unknown_ptr) globals_start;
    
    // [SmHpIdGetChunk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x119c70, 0x32828 bytes
    //
    _m4(sdk::unknown_ptr) hp_id_get_chunk;
    
    // [SmKmStoreDereference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x75420, 0x32828 bytes
    //
    _m5(sdk::unknown_ptr) km_store_dereference;
    
    // [SmKmVirtualLockCtxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3dc5a0, 0x1fd000 bytes
    //
    _m6(sdk::unknown_ptr) km_virtual_lock_ctx_initialize;
    
    // [SmPartitionCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9ca9bc, 0x1fd000 bytes
    //
    _m7(sdk::unknown_ptr) partition_cleanup;
    
    // [SmPartitionInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x85b0e0, 0x1fd000 bytes
    //
    _m8(sdk::unknown_ptr) partition_initialize;
    
    // [SmPartitionJobPaired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9caaa8, 0x1fd000 bytes
    //
    _m9(sdk::unknown_ptr) partition_job_paired;
    
    // [SmProcessProcessStoreInfoRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9caf38, 0x1fd000 bytes
    //
    _n0(sdk::unknown_ptr) process_process_store_info_request;
    
    // [SmQuerySystemInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b9030, 0x1fd000 bytes
    //
    _n1(sdk::unknown_ptr) query_system_information;
    
    // [SmSetThreadFaultState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x760b8, 0x32828 bytes
    //
    _n2(sdk::unknown_ptr) set_thread_fault_state;
    
    // [SmStNormalPriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x2f9b34, 0x32828 bytes
    //
    _n3(sdk::unknown_ptr) st_normal_priority;
    
    // [SmStoreGetId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b9100, 0x1fd000 bytes
    //
    _n4(sdk::unknown_ptr) store_get_id;
    
    // [SmTerminateStoreProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5b5178, 0x1fd000 bytes
    //
    _n5(sdk::unknown_ptr) terminate_store_process;
    
    // [SmFpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe .text:0x2204a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3dc554, 0x1fd000 bytes
    //
    _n6(sdk::unknown_ptr) fp_initialize;
    
    // [SmProcessCreateNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6fb918, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6f6584, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) process_create_notification;
    
    // [SmProcessDeleteNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x92690c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9251dc, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) process_delete_notification;
    
    // [SmAllocWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x271670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea48c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323200, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) alloc_wrapper;
    
    // [SmCrAuthDecrypt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x59a0a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b913c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599f20, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) cr_auth_decrypt;
    
    // [SmFatalHeapCorruptionDumpCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x598ee0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598d60, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) fatal_heap_corruption_dump_callback;
    
    // [SmFixSingleBitCorruption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x597110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b55d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x596f90, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) fix_single_bit_corruption;
    
    // [SmGlobalsInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1b14, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68100, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa676f0, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) globals_initialize;
    
    // [SmHpBufferProtectEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29add0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5844, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23fd24, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) hp_buffer_protect_ex;
    
    // [SmHpChunkHeapProtect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2757b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x325e1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d21e8, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) hp_chunk_heap_protect;
    
    // [SmHpChunkUnprotect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x29ad94, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5be4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23fce8, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) hp_chunk_unprotect;
    
    // [SmHpUnprotectListNeighbors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x278514, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5c20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c8410, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) hp_unprotect_list_neighbors;
    
    // [SmIoRequestComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x299174, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8a1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23d648, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) io_request_complete;
    
    // [SmIsCompressionProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe718, 0x32828 bytes
    // ntoskrnl.exe .text:0x250380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdda0, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) is_compression_process;
    
    // [SmKmCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x927dcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc578, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92669c, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) km_cleanup;
    
    // [SmKmEtwLogStoreRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x560a00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e0c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a5748, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) km_etw_log_store_rundown;
    
    // [SmKmIssueFileIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x597888, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6334, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597708, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) km_issue_file_io;
    
    // [SmPrepareForFatalHeapCorruption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x599cd0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8c9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599b50, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) prepare_for_fatal_heap_corruption;
    
    // [SmQueryRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1a94, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6807c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa6766c, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) query_registry;
    
    // [SmQueryStoreCommitUsage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x596ff0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b50e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x596e70, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) query_store_commit_usage;
    
    // [SmRegistrationCtxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3e5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a464, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ed7d8, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) registration_ctx_initialize;
    
    // [SmRereferenceProcessObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc8a40, 0x32828 bytes
    // ntoskrnl.exe .text:0x26ea68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2029f8, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) rereference_process_object;
    
    // [SmWorkQueueGetDepth]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2773c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5244, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c823c, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) work_queue_get_depth;
    
    // [SmAcquireReleaseCharges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76128, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b674, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x327cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3c54, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) acquire_release_charges;
    
    // [SmAcquireReleaseResAvailForRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11bbb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x279800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x464564, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x309660, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) acquire_release_res_avail_for_read;
    
    // [SmAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd7094, 0x32828 bytes
    // ntoskrnl.exe .text:0x26951c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fdc04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cbbf8, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) alloc;
    
    // [SmArrayGrow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x123ba4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27324c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b545c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d0fd0, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) array_grow;
    
    // [SmBinaryArrayGrow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x113598, 0x32828 bytes
    // ntoskrnl.exe .text:0x275538, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b553c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x312768, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) binary_array_grow;
    
    // [SmCalcIoWorkItemSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221cd4, 0x32828 bytes
    // ntoskrnl.exe .text:0x599b14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b89e4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599994, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) calc_io_work_item_size;
    
    // [SmCrAuthEncrypt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2221ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b91a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599f84, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) cr_auth_encrypt;
    
    // [SmCrEncCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41cf38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67b2c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778784, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655f84, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) cr_enc_cleanup;
    
    // [SmCrEncInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a5000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x696130, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779880, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655320, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) cr_enc_initialize;
    
    // [SmCrEncStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e34c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce6bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x928878, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) cr_enc_start;
    
    // [SmCrGenRandom]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222218, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a180, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b921c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a000, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) cr_gen_random;
    
    // [SmCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f50c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b33d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bb3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7baf64, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) create_event;
    
    // [SmDecompressBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7308c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27aa98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x328264, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3074, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) decompress_buffer;
    
    // [SmEtwDescriptorPtrs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25d200, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x9820, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xaed0, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x9800, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) etw_descriptor_ptrs;
    
    // [SmEtwEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5609ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79e070, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84fa30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a56f0, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) etw_enable_callback;
    
    // [SmEtwEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x75298, 0x32828 bytes
    // ntoskrnl.exe .text:0x299afc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32778c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c620c, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) etw_enabled;
    
    // [SmEtwLogRegionOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x22018c, 0x32828 bytes
    // ntoskrnl.exe .text:0x597920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b644c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5977a0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) etw_log_region_op;
    
    // [SmEtwLogStoreCorruption]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220250, 0x32828 bytes
    // ntoskrnl.exe .text:0x5979ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6518, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59786c, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) etw_log_store_corruption;
    
    // [SmEtwLogStoreOp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220360, 0x32828 bytes
    // ntoskrnl.exe .text:0x597b24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6650, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5979a4, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) etw_log_store_op;
    
    // [SmEtwLogStoreStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220424, 0x32828 bytes
    // ntoskrnl.exe .text:0x597bf0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b671c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597a70, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) etw_log_store_state_change;
    
    // [SmEventCacheTermination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fcb8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e8d8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3cb48, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ec18, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) event_cache_termination;
    
    // [SmEventProvider]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x2609d0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xe598, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x11a30, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xe008, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) event_provider;
    
    // [SmEventSQMStreamRow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fca8, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2e198, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c2d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e4d8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) event_sqm_stream_row;
    
    // [SmEventStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fd88, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d878, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b860, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dbb8, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) event_store_create;
    
    // [SmEventStoreDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fd78, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2df28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3c040, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2e268, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) event_store_delete;
    
    // [SmEventStoreIoStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fd18, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2eb18, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3ce00, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2ee58, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) event_store_io_stats;
    
    // [SmEventStoreRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x27fd68, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x2d7a8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3b740, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x2dae8, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) event_store_rundown;
    
    // [SmFatalPageErrorDumpCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221354, 0x32828 bytes
    // ntoskrnl.exe .text:0x598f20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7b20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598da0, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) fatal_page_error_dump_callback;
    
    // [SmFirstTimeInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4c90, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a1c98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x77949c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2caf84, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) first_time_init;
    
    // [SmFpAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1195ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x279da8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4641be, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x309c08, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) fp_allocate;
    
    // [SmFpCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76250, 0x32828 bytes
    // ntoskrnl.exe .text:0x275464, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3289dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d1db4, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) fp_cleanup;
    
    // [SmFpFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x118688, 0x32828 bytes
    // ntoskrnl.exe .text:0x299214, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4642d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23d59c, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) fp_free;
    
    // [SmFpPreAllocate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146a24, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c3b24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db248, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4934, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) fp_pre_allocate;
    
    // [SmFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) free;
    
    // [SmFreeWrapper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x740d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b1b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2170, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) free_wrapper;
    
    // [SmGetRegistrationInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56be5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0ddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867e98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b896c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) get_registration_info;
    
    // [SmGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3bea40, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd229c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6ae80, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd229c0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) globals;
    
    // [SmHpBufferAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11362c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2755d4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b56a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31263c, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) hp_buffer_alloc;
    
    // [SmHpBufferCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fac4, 0x32828 bytes
    // ntoskrnl.exe .text:0x368e70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b57e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36a220, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) hp_buffer_cleanup;
    
    // [SmHpBufferUpdateFullness]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x116014, 0x32828 bytes
    // ntoskrnl.exe .text:0x277d60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c7420, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) hp_buffer_update_fullness;
    
    // [SmHpChunkAlloc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x115f84, 0x32828 bytes
    // ntoskrnl.exe .text:0x277cd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5acc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c7394, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) hp_chunk_alloc;
    
    // [SmHpChunkFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x115348, 0x32828 bytes
    // ntoskrnl.exe .text:0x277c44, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5b58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c46a4, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) hp_chunk_free;
    
    // [SmHpChunkHeapCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7698c, 0x32828 bytes
    // ntoskrnl.exe .text:0x275830, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x325e68, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d2194, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) hp_chunk_heap_cleanup;
    
    // [SmHpChunkHeapInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6b54, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a277c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x328fb4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2cba68, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) hp_chunk_heap_initialize;
    
    // [SmInitSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a1a34, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa68014, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2eb10, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa67604, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) init_system;
    
    // [SmIssueIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221d04, 0x32828 bytes
    // ntoskrnl.exe .text:0x599b4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8a78, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5999cc, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) issue_io;
    
    // [SmKeyConvert]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1196c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x295238, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b80d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23add4, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) key_convert;
    
    // [SmKmAllocateMdlForLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d51c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a8c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3db464, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a140, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) km_allocate_mdl_for_lock;
    
    // [SmKmEtwAppendObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2204d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x597c78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b67a4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597af8, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) km_etw_append_object_name;
    
    // [SmKmEtwAppendProductName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220648, 0x32828 bytes
    // ntoskrnl.exe .text:0x597df8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b691c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597c78, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) km_etw_append_product_name;
    
    // [SmKmEtwLogStoreChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c3a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927ee4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc604, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9267b4, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) km_etw_log_store_change;
    
    // [SmKmEtwLogStoreStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c4cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927ff4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc714, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9268c4, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) km_etw_log_store_stats;
    
    // [SmKmFileInfoCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9280f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9269c0, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) km_file_info_cleanup;
    
    // [SmKmFileInfoDuplicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c65c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928194, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cc8b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926a64, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) km_file_info_duplicate;
    
    // [SmKmFileInfoGetPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c7d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92831c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cca3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926bec, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) km_file_info_get_path;
    
    // [SmKmFileInfoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571f74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9283f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ccb14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926cc4, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) km_file_info_init;
    
    // [SmKmFreeMdlForLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1224d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a894, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6a90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3213c8, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) km_free_mdl_for_lock;
    
    // [SmKmGenericCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcb60c, 0x32828 bytes
    // ntoskrnl.exe .text:0x25cac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6ad0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30d1c0, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) km_generic_completion;
    
    // [SmKmGetStoreList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c894, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928410, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ccb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926ce0, 0x1fe000 bytes
    //
    _v7(sdk::unknown_ptr) km_get_store_list;
    
    // [SmKmGlobals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x344010, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf6260, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd182b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf6260, 0x1fe000 bytes
    //
    _v8(sdk::unknown_ptr) km_globals;
    
    // [SmKmInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566fcc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7428, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b274, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af548, 0x1fe000 bytes
    //
    _v9(sdk::unknown_ptr) km_initialize;
    
    // [SmKmIsVolumeIoPossible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c8e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92846c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ccb8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926d3c, 0x1fe000 bytes
    //
    _w0(sdk::unknown_ptr) km_is_volume_io_possible;
    
    // [SmKmIssueIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2207c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x597f6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6af4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597dec, 0x1fe000 bytes
    //
    _w1(sdk::unknown_ptr) km_issue_io;
    
    // [SmKmIssueVolumeIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2208ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x597fd4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6b5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597e54, 0x1fe000 bytes
    //
    _w2(sdk::unknown_ptr) km_issue_volume_io;
    
    // [SmKmKeyGenGenerate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69c9e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928578, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ccc9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926e48, 0x1fe000 bytes
    //
    _w3(sdk::unknown_ptr) km_key_gen_generate;
    
    // [SmKmKeyGenKeyDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69cb1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928688, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ccdb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926f58, 0x1fe000 bytes
    //
    _w4(sdk::unknown_ptr) km_key_gen_key_delete;
    
    // [SmKmKeyGenKeyFind]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69cbdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x92871c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cce44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x926fec, 0x1fe000 bytes
    //
    _w5(sdk::unknown_ptr) km_key_gen_key_find;
    
    // [SmKmKeyGenLoadKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69cc18, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cce88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927030, 0x1fe000 bytes
    //
    _w6(sdk::unknown_ptr) km_key_gen_load_key;
    
    // [SmKmKeyGenNewKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69cd78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9288ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd004, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9271bc, 0x1fe000 bytes
    //
    _w7(sdk::unknown_ptr) km_key_gen_new_key;
    
    // [SmKmKeyGenStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69cf94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928ae8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd1ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9273b8, 0x1fe000 bytes
    //
    _w8(sdk::unknown_ptr) km_key_gen_start;
    
    // [SmKmProbeAndLockAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11c9c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x279270, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b63cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a1fc, 0x1fe000 bytes
    //
    _w9(sdk::unknown_ptr) km_probe_and_lock_address;
    
    // [SmKmRegParamsLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d048, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd2ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927490, 0x1fe000 bytes
    //
    _x0(sdk::unknown_ptr) km_reg_params_load;
    
    // [SmKmSendDeviceControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d15c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928cdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9275ac, 0x1fe000 bytes
    //
    _x1(sdk::unknown_ptr) km_send_device_control;
    
    // [SmKmSendUsageNotification]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d20c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd484, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927660, 0x1fe000 bytes
    //
    _x2(sdk::unknown_ptr) km_send_usage_notification;
    
    // [SmKmSqmAddToStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222224, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a19c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9238, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59a01c, 0x1fe000 bytes
    //
    _x3(sdk::unknown_ptr) km_sqm_add_to_stream;
    
    // [SmKmStoreAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41c87c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69599c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7791f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x65481c, 0x1fe000 bytes
    //
    _x4(sdk::unknown_ptr) km_store_add;
    
    // [SmKmStoreCreatePrepare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a504c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x696178, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x779164, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655368, 0x1fe000 bytes
    //
    _x5(sdk::unknown_ptr) km_store_create_prepare;
    
    // [SmKmStoreDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41cb78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674118, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7787ec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e73b0, 0x1fe000 bytes
    //
    _x6(sdk::unknown_ptr) km_store_delete;
    
    // [SmKmStoreDeleteWhenEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x752f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x25d768, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3265dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30deb8, 0x1fe000 bytes
    //
    _x7(sdk::unknown_ptr) km_store_delete_when_empty;
    
    // [SmKmStoreDeleteWhenEmptyWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x751cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x26e5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x326720, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31fc70, 0x1fe000 bytes
    //
    _x8(sdk::unknown_ptr) km_store_delete_when_empty_worker;
    
    // [SmKmStoreFileCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d2c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x928e54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cd554, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927724, 0x1fe000 bytes
    //
    _x9(sdk::unknown_ptr) km_store_file_create;
    
    // [SmKmStoreFileCreateForIoType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cda08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927bd4, 0x1fe000 bytes
    //
    _y0(sdk::unknown_ptr) km_store_file_create_for_io_type;
    
    // [SmKmStoreFileDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69d9bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9295b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cdcb8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927e84, 0x1fe000 bytes
    //
    _y1(sdk::unknown_ptr) km_store_file_delete;
    
    // [SmKmStoreFileGetExtents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69da54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cdd54, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x927f20, 0x1fe000 bytes
    //
    _y2(sdk::unknown_ptr) km_store_file_get_extents;
    
    // [SmKmStoreFileMakeSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69dcd8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9298d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cdfdc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9281a8, 0x1fe000 bytes
    //
    _y3(sdk::unknown_ptr) km_store_file_make_security_descriptor;
    
    // [SmKmStoreFileOpenVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69df44, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929b4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce258, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92841c, 0x1fe000 bytes
    //
    _y4(sdk::unknown_ptr) km_store_file_open_volume;
    
    // [SmKmStoreFileWriteHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e0ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929cec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce3f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9285bc, 0x1fe000 bytes
    //
    _y5(sdk::unknown_ptr) km_store_file_write_header;
    
    // [SmKmStoreHelperCheckWaitCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x75d88, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a814, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3265bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c8fd8, 0x1fe000 bytes
    //
    _y6(sdk::unknown_ptr) km_store_helper_check_wait_command;
    
    // [SmKmStoreHelperCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x75ccc, 0x32828 bytes
    // ntoskrnl.exe .text:0x275414, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x326504, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d1d64, 0x1fe000 bytes
    //
    _y7(sdk::unknown_ptr) km_store_helper_cleanup;
    
    // [SmKmStoreHelperCommandCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220a10, 0x32828 bytes
    // ntoskrnl.exe .text:0x598144, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6ccc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597fc4, 0x1fe000 bytes
    //
    _y8(sdk::unknown_ptr) km_store_helper_command_cleanup;
    
    // [SmKmStoreHelperCommandProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11be78, 0x32828 bytes
    // ntoskrnl.exe .text:0x279430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b6d98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x309290, 0x1fe000 bytes
    //
    _y9(sdk::unknown_ptr) km_store_helper_command_process;
    
    // [SmKmStoreHelperSendCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x75d14, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a798, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x326554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c8f5c, 0x1fe000 bytes
    //
    _z0(sdk::unknown_ptr) km_store_helper_send_command;
    
    // [SmKmStoreHelperStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x74e24, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a06c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x327c58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c9ba0, 0x1fe000 bytes
    //
    _z1(sdk::unknown_ptr) km_store_helper_start;
    
    // [SmKmStoreHelperWaitForCommand]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11c92c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7018, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c8eb4, 0x1fe000 bytes
    //
    _z2(sdk::unknown_ptr) km_store_helper_wait_for_command;
    
    // [SmKmStoreHelperWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x750ec, 0x32828 bytes
    // ntoskrnl.exe .text:0x279350, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381f00, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3091b0, 0x1fe000 bytes
    //
    _z3(sdk::unknown_ptr) km_store_helper_worker;
    
    // [SmKmStoreRefFromStoreIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x756b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x297f98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3276c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23dda0, 0x1fe000 bytes
    //
    _z4(sdk::unknown_ptr) km_store_ref_from_store_index;
    
    // [SmKmStoreReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7543c, 0x32828 bytes
    // ntoskrnl.exe .text:0x297e18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x327544, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23dc20, 0x1fe000 bytes
    //
    _z5(sdk::unknown_ptr) km_store_reference;
    
    // [SmKmStoreReferenceEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7567c, 0x32828 bytes
    // ntoskrnl.exe .text:0x297f5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x32768c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23dd64, 0x1fe000 bytes
    //
    _z6(sdk::unknown_ptr) km_store_reference_ex;
    
    // [SmKmStoreTerminateWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220aa8, 0x32828 bytes
    // ntoskrnl.exe .text:0x598210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b70f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598090, 0x1fe000 bytes
    //
    _z7(sdk::unknown_ptr) km_store_terminate_worker;
    
    // [SmKmUnlockMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11c48c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2792e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b747c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x32003c, 0x1fe000 bytes
    //
    _z8(sdk::unknown_ptr) km_unlock_mdl;
    
    // [SmKmVirtualLockContextIncreaseWsMin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220e38, 0x32828 bytes
    // ntoskrnl.exe .text:0x5985ac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b74f8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x59842c, 0x1fe000 bytes
    //
    _z9(sdk::unknown_ptr) km_virtual_lock_context_increase_ws_min;
    
    // [SmKmVirtualLockCtxLockMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x220f88, 0x32828 bytes
    // ntoskrnl.exe .text:0x598890, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7634, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598710, 0x1fe000 bytes
    //
    _a0(sdk::unknown_ptr) km_virtual_lock_ctx_lock_memory;
    
    // [SmKmVirtualLockCtxMemoryUnlocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2210d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5989b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b7754, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x598830, 0x1fe000 bytes
    //
    _a1(sdk::unknown_ptr) km_virtual_lock_ctx_memory_unlocked;
    
    // [SmKmVolumeQueryUniqueId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69e2bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x929f14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9ce628, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9287e4, 0x1fe000 bytes
    //
    _a2(sdk::unknown_ptr) km_volume_query_unique_id;
    
    // [SmMapPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x119c34, 0x32828 bytes
    // ntoskrnl.exe .text:0x27bacc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8bf8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23a9c4, 0x1fe000 bytes
    //
    _a3(sdk::unknown_ptr) map_page;
    
    // [SmPageRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11bc38, 0x32828 bytes
    // ntoskrnl.exe .text:0x26bc88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5090, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31d318, 0x1fe000 bytes
    //
    _a4(sdk::unknown_ptr) page_read;
    
    // [SmPerformStoreSwapOperation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221e7c, 0x32828 bytes
    // ntoskrnl.exe .text:0x273320, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8c4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d10a4, 0x1fe000 bytes
    //
    _a5(sdk::unknown_ptr) perform_store_swap_operation;
    
    // [SmPrepareForFatalPageError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x221ec8, 0x32828 bytes
    // ntoskrnl.exe .text:0x599dd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8d94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599c58, 0x1fe000 bytes
    //
    _a6(sdk::unknown_ptr) prepare_for_fatal_page_error;
    
    // [SmProcessCompressionInfoRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41cd3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x667208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778994, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da728, 0x1fe000 bytes
    //
    _a7(sdk::unknown_ptr) process_compression_info_request;
    
    // [SmProcessConfigRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bbdc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b053c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x865ed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b80cc, 0x1fe000 bytes
    //
    _a8(sdk::unknown_ptr) process_config_request;
    
    // [SmProcessCreateRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4968, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x695634, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x778e04, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654ac0, 0x1fe000 bytes
    //
    _a9(sdk::unknown_ptr) process_create_request;
    
    // [SmProcessDeleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b018, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x926990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cab30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925260, 0x1fe000 bytes
    //
    _b0(sdk::unknown_ptr) process_delete_request;
    
    // [SmProcessListRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b080, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9269fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cabb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9252cc, 0x1fe000 bytes
    //
    _b1(sdk::unknown_ptr) process_list_request;
    
    // [SmProcessListRequestExtended]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b244, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x926bcc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cadfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x92549c, 0x1fe000 bytes
    //
    _b2(sdk::unknown_ptr) process_list_request_extended;
    
    // [SmProcessQueryStoreStats]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53cfe8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x926d08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x892f44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9255d8, 0x1fe000 bytes
    //
    _b3(sdk::unknown_ptr) process_query_store_stats;
    
    // [SmProcessRegistrationRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bdb4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0d30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867dd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b88c0, 0x1fe000 bytes
    //
    _b4(sdk::unknown_ptr) process_registration_request;
    
    // [SmProcessResizeRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b358, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x926db4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb064, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925684, 0x1fe000 bytes
    //
    _b5(sdk::unknown_ptr) process_resize_request;
    
    // [SmProcessStatsRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b44c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x926eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb17c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925780, 0x1fe000 bytes
    //
    _b6(sdk::unknown_ptr) process_stats_request;
    
    // [SmProcessStoreMemoryPriorityRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7fec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cee08, 0x1fe000 bytes
    //
    _b7(sdk::unknown_ptr) process_store_memory_priority_request;
    
    // [SmProcessSystemStoreTrimRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b6cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927140, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb490, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925a10, 0x1fe000 bytes
    //
    _b8(sdk::unknown_ptr) process_system_store_trim_request;
    
    // [SmQueryStoreInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1cb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66711c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7799d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6da63c, 0x1fe000 bytes
    //
    _b9(sdk::unknown_ptr) query_store_information;
    
    // [SmRegistrationCtxStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56f4bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b337c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86bae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7baf0c, 0x1fe000 bytes
    //
    _c0(sdk::unknown_ptr) registration_ctx_start;
    
    // [SmRegistrationInfoFill]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56bf30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0e88, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867f50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8a18, 0x1fe000 bytes
    //
    _c1(sdk::unknown_ptr) registration_info_fill;
    
    // [SmSanitizeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fb18, 0x32828 bytes
    // ntoskrnl.exe .text:0x5971e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5ccc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597060, 0x1fe000 bytes
    //
    _c2(sdk::unknown_ptr) sanitize_string;
    
    // [SmSetStoreInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48a078, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x674bd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e7f3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cef34, 0x1fe000 bytes
    //
    _c3(sdk::unknown_ptr) set_store_information;
    
    // [SmSetThreadPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x76cf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27a2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x335800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a110, 0x1fe000 bytes
    //
    _c4(sdk::unknown_ptr) set_thread_page_priority;
    
    // [SmSetThreadSystemPagePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x11ac3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27b1a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b90bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c3780, 0x1fe000 bytes
    //
    _c5(sdk::unknown_ptr) set_thread_system_page_priority;
    
    // [SmStoreCompressionStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53c948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ae00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb62c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0c80, 0x1fe000 bytes
    //
    _c6(sdk::unknown_ptr) store_compression_start;
    
    // [SmStoreCompressionStop]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53c8dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ad04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb6cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d0b9c, 0x1fe000 bytes
    //
    _c7(sdk::unknown_ptr) store_compression_stop;
    
    // [SmStoreCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b790, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9271fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb820, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925acc, 0x1fe000 bytes
    //
    _c8(sdk::unknown_ptr) store_create;
    
    // [SmStoreDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b89c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9272f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb928, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925bc8, 0x1fe000 bytes
    //
    _c9(sdk::unknown_ptr) store_delete;
    
    // [SmStoreExistsForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x8bb90, 0x32828 bytes
    // ntoskrnl.exe .text:0x292f24, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306ab8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x239c88, 0x1fe000 bytes
    //
    _d0(sdk::unknown_ptr) store_exists_for_process;
    
    // [SmStorePhysicalRequestIssue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69b928, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x927380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cb9b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925c50, 0x1fe000 bytes
    //
    _d1(sdk::unknown_ptr) store_physical_request_issue;
    
    // [SmStoreResize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x69ba74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9274d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cbb14, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x925da0, 0x1fe000 bytes
    //
    _d2(sdk::unknown_ptr) store_resize;
    
    // [SmStoreSetProcessVaRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a46fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x69539c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7786c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6555e8, 0x1fe000 bytes
    //
    _d3(sdk::unknown_ptr) store_set_process_va_ranges;
    
    // [SmSwapStore]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a4294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67b02c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9cbbd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x655ccc, 0x1fe000 bytes
    //
    _d4(sdk::unknown_ptr) swap_store;
    
    // [SmUniqueIdParseProductName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21fbdc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5972b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b5d88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x597130, 0x1fe000 bytes
    //
    _d5(sdk::unknown_ptr) unique_id_parse_product_name;
    
    // [SmWaitForSyncIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x222184, 0x32828 bytes
    // ntoskrnl.exe .text:0x59a074, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b9110, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x599ef4, 0x1fe000 bytes
    //
    _d6(sdk::unknown_ptr) wait_for_sync_io;
};
#include "magic/api.end.hpp"
