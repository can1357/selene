#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/irp_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/eprocess_t.hpp"
#include "../nt/file_object_t.hpp"
#include "../nt/device_object_t.hpp"
#include "../io/stack_location_t.hpp"
#include "../wdf/stack_creation_settings_t.hpp"

#include "magic/api.start.hpp"
namespace iop
{
    // [IopAcquireFileObjectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x3e5884, 0x32828 bytes
    //
    _m00(sdk::unknown_ptr) acquire_file_object_lock;
    
    // [IopAddAddressRangeToRemovePagesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x549114, 0x1fd000 bytes
    //
    _m01(sdk::unknown_ptr) add_address_range_to_remove_pages_array;
    
    // [IopAddCodeRegion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53e978, 0x1fd000 bytes
    //
    _m02(sdk::unknown_ptr) add_code_region;
    
    // [IopAddKernelSpacePagesToPartialDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x549264, 0x1fd000 bytes
    //
    _m03(sdk::unknown_ptr) add_kernel_space_pages_to_partial_dump;
    
    // [IopAllocateAndLockMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93f63c, 0x1fd000 bytes
    //
    _m04(sdk::unknown_ptr) allocate_and_lock_mdl;
    
    // [IopAllocateAndPopulateWriteIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e8800, 0x1fd000 bytes
    //
    _m05(sdk::unknown_ptr) allocate_and_populate_write_irp;
    
    // [IopAllocateMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e72c8, 0x1fd000 bytes
    //
    _m06(sdk::unknown_ptr) allocate_mdl;
    
    // [IopBugCheckDriverDataCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a7b8, 0x1fd000 bytes
    //
    _m07(sdk::unknown_ptr) bug_check_driver_data_callback_record;
    
    // [IopBugCheckProgressEfiVariableServicesAvailable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53eeb4, 0x1fd000 bytes
    //
    _m08(sdk::unknown_ptr) bug_check_progress_efi_variable_services_available;
    
    // [IopCancelIoFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7d5c3c, 0x1fd000 bytes
    //
    _m09(sdk::unknown_ptr) cancel_io_file;
    
    // [IopCloseIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943d00, 0x1fd000 bytes
    //
    _m10(sdk::unknown_ptr) close_io_ring;
    
    // [IopCollectTriageDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53ef00, 0x1fd000 bytes
    //
    _m11(sdk::unknown_ptr) collect_triage_dump_data;
    
    // [IopCompactRemovePagesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5498e0, 0x1fd000 bytes
    //
    _m12(sdk::unknown_ptr) compact_remove_pages_array;
    
    // [IopCompleteIoRingEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x545d1c, 0x1fd000 bytes
    //
    _m13(sdk::unknown_ptr) complete_io_ring_entry;
    
    // [IopCopyAbortCopyReadRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422320, 0x1fd000 bytes
    //
    _m14(sdk::unknown_ptr) copy_abort_copy_read_request;
    
    // [IopCopyCompleteIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422350, 0x1fd000 bytes
    //
    _m15(sdk::unknown_ptr) copy_complete_irp;
    
    // [IopCopyCompleteReadIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4224f0, 0x1fd000 bytes
    //
    _m16(sdk::unknown_ptr) copy_complete_read_irp;
    
    // [IopCopyCompleteReadRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422870, 0x1fd000 bytes
    //
    _m17(sdk::unknown_ptr) copy_complete_read_request;
    
    // [IopCrashDumpPolicyChangeWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93f080, 0x1fd000 bytes
    //
    _m18(sdk::unknown_ptr) crash_dump_policy_change_wnf_callback;
    
    // [IopCreateIoRingObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb60070, 0x1fd000 bytes
    //
    _m19(sdk::unknown_ptr) create_io_ring_object_type;
    
    // [IopDecrementCompletionContextUsageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x377f18, 0x1fd000 bytes
    //
    _m20(sdk::unknown_ptr) decrement_completion_context_usage_count;
    
    // [IopDeleteIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943d40, 0x1fd000 bytes
    //
    _m21(sdk::unknown_ptr) delete_io_ring;
    
    // [IopDoFullTraverseCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v20H2
    // ntoskrnl.exe .text:0x2547b0, 0x1fe000 bytes
    //
    _m22(sdk::unknown_ptr) do_full_traverse_check;
    
    // [IopDoesCompletionNeedsApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x541e9c, 0x1fd000 bytes
    //
    _m23(sdk::unknown_ptr) does_completion_needs_apc;
    
    // [IopDumpEtwEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd16a84, 0x1fd000 bytes
    //
    _m24(sdk::unknown_ptr) dump_etw_enabled;
    
    // [IopDumpEtwRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xd16a88, 0x1fd000 bytes
    //
    _m25(sdk::unknown_ptr) dump_etw_reg_handle;
    
    // [IopDumpIsTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f458, 0x1fd000 bytes
    //
    _m26(sdk::unknown_ptr) dump_is_tracing_enabled;
    
    // [IopDumpTraceCrashDumpDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f47c, 0x1fd000 bytes
    //
    _m27(sdk::unknown_ptr) dump_trace_crash_dump_disabled;
    
    // [IopDumpTraceCrashDumpReconfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f558, 0x1fd000 bytes
    //
    _m28(sdk::unknown_ptr) dump_trace_crash_dump_reconfiguration;
    
    // [IopDumpTraceDisableCrashDumpFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f668, 0x1fd000 bytes
    //
    _m29(sdk::unknown_ptr) dump_trace_disable_crash_dump_failure;
    
    // [IopDumpTraceForceDumpDisabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93f37c, 0x1fd000 bytes
    //
    _m30(sdk::unknown_ptr) dump_trace_force_dump_disabled;
    
    // [IopDumpTraceFreeDumpStackFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f778, 0x1fd000 bytes
    //
    _m31(sdk::unknown_ptr) dump_trace_free_dump_stack_failure;
    
    // [IopDumpTraceInitializeCrashDumpFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f888, 0x1fd000 bytes
    //
    _m32(sdk::unknown_ptr) dump_trace_initialize_crash_dump_failure;
    
    // [IopDumpTraceInitializeDumpStackFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53f998, 0x1fd000 bytes
    //
    _m33(sdk::unknown_ptr) dump_trace_initialize_dump_stack_failure;
    
    // [IopDumpTraceLoadCrashDumpDriverFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53faa8, 0x1fd000 bytes
    //
    _m34(sdk::unknown_ptr) dump_trace_load_crash_dump_driver_failure;
    
    // [IopDumpTraceLoadDumpStackFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x53fbb8, 0x1fd000 bytes
    //
    _m35(sdk::unknown_ptr) dump_trace_load_dump_stack_failure;
    
    // [IopDumpTracingControlCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3ea370, 0x1fd000 bytes
    //
    _m36(sdk::unknown_ptr) dump_tracing_control_callback;
    
    // [IopExceptionCleanupEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93ff58, 0x1fd000 bytes
    //
    _m37(sdk::function<void(struct nt::file_object_t*, struct nt::irp_t*, struct nt::kevent_t*, struct nt::kevent_t*, uint8_t)>*) exception_cleanup_ex;
    
    // [IopFilterAndAddPageRangeToPageMaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5499e8, 0x1fd000 bytes
    //
    _m38(sdk::unknown_ptr) filter_and_add_page_range_to_page_maps;
    
    // [IopFlushBuffersFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7b7244, 0x1fd000 bytes
    //
    _m39(sdk::unknown_ptr) flush_buffers_file;
    
    // [IopFreeCopyObjectsFromDataBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x546670, 0x1fd000 bytes
    //
    _m40(sdk::unknown_ptr) free_copy_objects_from_data_buffer;
    
    // [IopFreeCopyObjectsFromIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5466fc, 0x1fd000 bytes
    //
    _m41(sdk::unknown_ptr) free_copy_objects_from_irp;
    
    // [IopGetOriginalServiceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x833e54, 0x1fd000 bytes
    //
    _m42(sdk::unknown_ptr) get_original_service_name;
    
    // [IopGetRootDeviceId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x833dc8, 0x1fd000 bytes
    //
    _m43(sdk::unknown_ptr) get_root_device_id;
    
    // [IopIncrementCompletionContextUsageCountAndReadData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x375734, 0x1fd000 bytes
    //
    _m44(sdk::unknown_ptr) increment_completion_context_usage_count_and_read_data;
    
    // [IopInitializeBugCheckDriverData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x870260, 0x1fd000 bytes
    //
    _m45(sdk::unknown_ptr) initialize_bug_check_driver_data;
    
    // [IopInitializeDumpPolicySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86b534, 0x1fd000 bytes
    //
    _m46(sdk::unknown_ptr) initialize_dump_policy_settings;
    
    // [IopInitializeMdlCache]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x844f24, 0x1fd000 bytes
    //
    _m47(sdk::unknown_ptr) initialize_mdl_cache;
    
    // [IopInitializeRemovePagesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x3cc914, 0x1fd000 bytes
    //
    _m48(sdk::unknown_ptr) initialize_remove_pages_array;
    
    // [IopIoRingCleanupRegBufferArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943db4, 0x1fd000 bytes
    //
    _m49(sdk::unknown_ptr) io_ring_cleanup_reg_buffer_array;
    
    // [IopIoRingCompleteIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x545e9c, 0x1fd000 bytes
    //
    _m50(sdk::unknown_ptr) io_ring_complete_irp;
    
    // [IopIoRingDispatchCancel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943e0c, 0x1fd000 bytes
    //
    _m51(sdk::unknown_ptr) io_ring_dispatch_cancel;
    
    // [IopIoRingDispatchFlush]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943ecc, 0x1fd000 bytes
    //
    _m52(sdk::unknown_ptr) io_ring_dispatch_flush;
    
    // [IopIoRingDispatchRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x943fac, 0x1fd000 bytes
    //
    _m53(sdk::unknown_ptr) io_ring_dispatch_read;
    
    // [IopIoRingDispatchRegisterBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x944120, 0x1fd000 bytes
    //
    _m54(sdk::unknown_ptr) io_ring_dispatch_register_buffers;
    
    // [IopIoRingDispatchRegisterFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x944540, 0x1fd000 bytes
    //
    _m55(sdk::unknown_ptr) io_ring_dispatch_register_files;
    
    // [IopIoRingDispatchWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9447f4, 0x1fd000 bytes
    //
    _m56(sdk::unknown_ptr) io_ring_dispatch_write;
    
    // [IopIoRingGetAvailableCqSlots]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x545f78, 0x1fd000 bytes
    //
    _m57(sdk::unknown_ptr) io_ring_get_available_cq_slots;
    
    // [IopIoRingGetBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94499c, 0x1fd000 bytes
    //
    _m58(sdk::unknown_ptr) io_ring_get_buffer;
    
    // [IopIoRingReferenceFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x944a94, 0x1fd000 bytes
    //
    _m59(sdk::unknown_ptr) io_ring_reference_file_object;
    
    // [IopIoRingSetOperationLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .rdata:0x3f3f8, 0x1fd000 bytes
    //
    _m60(sdk::unknown_ptr) io_ring_set_operation_length;
    
    // [IopIoRingSetupCompletionWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x546038, 0x1fd000 bytes
    //
    _m61(sdk::unknown_ptr) io_ring_setup_completion_wait;
    
    // [IopIoRingUpdateCompletionUserEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x546180, 0x1fd000 bytes
    //
    _m62(sdk::unknown_ptr) io_ring_update_completion_user_event;
    
    // [IopIoRingWaitForCompletionEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54627c, 0x1fd000 bytes
    //
    _m63(sdk::unknown_ptr) io_ring_wait_for_completion_event;
    
    // [IopIsProcessAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xd235c, 0x32828 bytes
    //
    _m64(sdk::function<uint8_t(struct nt::eprocess_t*)>*) is_process_app_container;
    
    // [IopLiveDumpAddIptTraceBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85e90, 0x1fd000 bytes
    //
    _m65(sdk::unknown_ptr) live_dump_add_ipt_trace_buffers;
    
    // [IopLiveDumpAddIptTraceBuffersPredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f50, 0x1fd000 bytes
    //
    _m66(sdk::unknown_ptr) live_dump_add_ipt_trace_buffers_predicate;
    
    // [IopLiveDumpAddPfnDatabase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f70, 0x1fd000 bytes
    //
    _m67(sdk::unknown_ptr) live_dump_add_pfn_database;
    
    // [IopLiveDumpAddPfnDatabasePredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f50, 0x1fd000 bytes
    //
    _m68(sdk::unknown_ptr) live_dump_add_pfn_database_predicate;
    
    // [IopLiveDumpAddPoolTrackTables]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f90, 0x1fd000 bytes
    //
    _m69(sdk::unknown_ptr) live_dump_add_pool_track_tables;
    
    // [IopLiveDumpAddPoolTrackTablesPredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa74720, 0x1fd000 bytes
    //
    _m70(sdk::unknown_ptr) live_dump_add_pool_track_tables_predicate;
    
    // [IopLiveDumpAddProcesses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85fb0, 0x1fd000 bytes
    //
    _m71(sdk::unknown_ptr) live_dump_add_processes;
    
    // [IopLiveDumpAddProcessesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85fe0, 0x1fd000 bytes
    //
    _m72(sdk::unknown_ptr) live_dump_add_processes_callback;
    
    // [IopLiveDumpAddProcessesPredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa74720, 0x1fd000 bytes
    //
    _m73(sdk::unknown_ptr) live_dump_add_processes_predicate;
    
    // [IopLiveDumpAddSessionSpaceStructure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa86020, 0x1fd000 bytes
    //
    _m74(sdk::unknown_ptr) live_dump_add_session_space_structure;
    
    // [IopLiveDumpAddSessionSpaceStructurePredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f50, 0x1fd000 bytes
    //
    _m75(sdk::unknown_ptr) live_dump_add_session_space_structure_predicate;
    
    // [IopLiveDumpAddTriageDumpDataPredicate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa85f50, 0x1fd000 bytes
    //
    _m76(sdk::unknown_ptr) live_dump_add_triage_dump_data_predicate;
    
    // [IopLiveDumpAllocNonPagedPool]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1cd74c, 0x32828 bytes
    //
    _m77(sdk::unknown_ptr) live_dump_alloc_non_paged_pool;
    
    // [IopLiveDumpAllocateFromIOSpace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x947eb8, 0x1fd000 bytes
    //
    _m78(sdk::unknown_ptr) live_dump_allocate_from_io_space;
    
    // [IopLiveDumpAllocateIoSpaceRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x9483f4, 0x1fd000 bytes
    //
    _m79(sdk::unknown_ptr) live_dump_allocate_io_space_ranges;
    
    // [IopLiveDumpCapture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x948830, 0x1fd000 bytes
    //
    _m80(sdk::unknown_ptr) live_dump_capture;
    
    // [IopLiveDumpCollectPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa869b8, 0x1fd000 bytes
    //
    _m81(sdk::unknown_ptr) live_dump_collect_pages;
    
    // [IopLiveDumpEnterCoralledState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGELK:0xa86ffc, 0x1fd000 bytes
    //
    _m82(sdk::unknown_ptr) live_dump_enter_coralled_state;
    
    // [IopLiveDumpFilterAndMarkPage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGELK:0x3daf80, 0x32828 bytes
    //
    _m83(sdk::unknown_ptr) live_dump_filter_and_mark_page;
    
    // [IopLiveDumpFreeIoSpaceRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x948bb8, 0x1fd000 bytes
    //
    _m84(sdk::unknown_ptr) live_dump_free_io_space_ranges;
    
    // [IopLiveDumpGetHvMergePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x62c260, 0x32828 bytes
    //
    _m85(sdk::unknown_ptr) live_dump_get_hv_merge_pages;
    
    // [IopLiveDumpOpenVMMemoryPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x546944, 0x1fd000 bytes
    //
    _m86(sdk::unknown_ptr) live_dump_open_vm_memory_partition;
    
    // [IopLiveDumpPolicyChangeWnfCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x949380, 0x1fd000 bytes
    //
    _m87(sdk::unknown_ptr) live_dump_policy_change_wnf_callback;
    
    // [IopLiveDumpQueryIOSpaceRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x949670, 0x1fd000 bytes
    //
    _m88(sdk::unknown_ptr) live_dump_query_io_space_ranges;
    
    // [IopLiveDumpRegisterWnfNotificationCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x86b694, 0x1fd000 bytes
    //
    _m89(sdk::unknown_ptr) live_dump_register_wnf_notification_callback;
    
    // [IopLiveDumpTraceDumpDisabledOnBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x949964, 0x1fd000 bytes
    //
    _m90(sdk::unknown_ptr) live_dump_trace_dump_disabled_on_boot;
    
    // [IopLiveDumpTraceHvlPrepareLivedumpDescriptorFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x547698, 0x1fd000 bytes
    //
    _m91(sdk::unknown_ptr) live_dump_trace_hvl_prepare_livedump_descriptor_failure;
    
    // [IopLiveDumpUnpackMemoryRun]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x949a64, 0x1fd000 bytes
    //
    _m92(sdk::unknown_ptr) live_dump_unpack_memory_run;
    
    // [IopLiveDumpWriteDumpFileWithHvPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe PAGE:0x62c994, 0x32828 bytes
    //
    _m93(sdk::unknown_ptr) live_dump_write_dump_file_with_hv_pages;
    
    // [IopLogDeviceResetComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x951af4, 0x1fd000 bytes
    //
    _m94(sdk::unknown_ptr) log_device_reset_complete;
    
    // [IopMapTransfer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x4f1580, 0x1fd000 bytes
    //
    _m95(sdk::unknown_ptr) map_transfer;
    
    // [IopMarkDeviceToBeReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x951b90, 0x1fd000 bytes
    //
    _m96(sdk::unknown_ptr) mark_device_to_be_reset;
    
    // [IopMaxDeviceNodeLevel]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x320814, 0x32828 bytes
    //
    _m97(sdk::unknown_ptr) max_device_node_level;
    
    // [IopMcAddMdlPagesToTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b4f4, 0x1fd000 bytes
    //
    _m98(sdk::unknown_ptr) mc_add_mdl_pages_to_table;
    
    // [IopMcCreateBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b6fc, 0x1fd000 bytes
    //
    _m99(sdk::unknown_ptr) mc_create_buffer_entry;
    
    // [IopMcCreateBufferEntryMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94bf30, 0x1fd000 bytes
    //
    _n00(sdk::unknown_ptr) mc_create_buffer_entry_mdl;
    
    // [IopMcCreatePartialMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94bfbc, 0x1fd000 bytes
    //
    _n01(sdk::unknown_ptr) mc_create_partial_mdl;
    
    // [IopMcData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc5d220, 0x1fd000 bytes
    //
    _n02(sdk::unknown_ptr) mc_data;
    
    // [IopMcDereferenceBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b884, 0x1fd000 bytes
    //
    _n03(sdk::unknown_ptr) mc_dereference_buffer_entry;
    
    // [IopMcDereferenceMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b8d4, 0x1fd000 bytes
    //
    _n04(sdk::unknown_ptr) mc_dereference_mdl;
    
    // [IopMcFindNextTableEntryForUnlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2040d8, 0x1fd000 bytes
    //
    _n05(sdk::unknown_ptr) mc_find_next_table_entry_for_unlock;
    
    // [IopMcGetBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x94c070, 0x1fd000 bytes
    //
    _n06(sdk::unknown_ptr) mc_get_buffer;
    
    // [IopMcReferenceBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b968, 0x1fd000 bytes
    //
    _n07(sdk::unknown_ptr) mc_reference_buffer_entry;
    
    // [IopMcReleaseMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54b9a4, 0x1fd000 bytes
    //
    _n08(sdk::unknown_ptr) mc_release_mdl;
    
    // [IopMcRemoveMdlPagesFromTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54ba54, 0x1fd000 bytes
    //
    _n09(sdk::unknown_ptr) mc_remove_mdl_pages_from_table;
    
    // [IopMcShouldYield]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54bc04, 0x1fd000 bytes
    //
    _n10(sdk::unknown_ptr) mc_should_yield;
    
    // [IopMcTryUnlockMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54bc40, 0x1fd000 bytes
    //
    _n11(sdk::unknown_ptr) mc_try_unlock_mdl;
    
    // [IopMcWaitAndCleanupBufferEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54bc9c, 0x1fd000 bytes
    //
    _n12(sdk::unknown_ptr) mc_wait_and_cleanup_buffer_entry;
    
    // [IopOpenIoRing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x7c4870, 0x1fd000 bytes
    //
    _n13(sdk::unknown_ptr) open_io_ring;
    
    // [IopPartialDumpAddProcessesCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54a2e0, 0x1fd000 bytes
    //
    _n14(sdk::unknown_ptr) partial_dump_add_processes_callback;
    
    // [IopPopulateCopyWriteWorkerData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422928, 0x1fd000 bytes
    //
    _n15(sdk::unknown_ptr) populate_copy_write_worker_data;
    
    // [IopProcessBufferedIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2d0920, 0x1fd000 bytes
    //
    _n16(sdk::unknown_ptr) process_buffered_io_completion;
    
    // [IopProcessIoRingEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x944b08, 0x1fd000 bytes
    //
    _n17(sdk::unknown_ptr) process_io_ring_entry;
    
    // [IopQueryFullDriverPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1ccc10, 0x32828 bytes
    //
    _n18(sdk::unknown_ptr) query_full_driver_path;
    
    // [IopQueueCopyWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x422a10, 0x1fd000 bytes
    //
    _n19(sdk::unknown_ptr) queue_copy_write;
    
    // [IopReadFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x79dc80, 0x1fd000 bytes
    //
    _n20(sdk::unknown_ptr) read_file;
    
    // [IopReleaseGlobalPassiveInterruptListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0x1d059c, 0x32828 bytes
    //
    _n21(sdk::unknown_ptr) release_global_passive_interrupt_list_lock;
    
    // [IopRemoveLargeAllocsFromPartialDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54a300, 0x1fd000 bytes
    //
    _n22(sdk::unknown_ptr) remove_large_allocs_from_partial_dump;
    
    // [IopRemovePagesArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .data:0xc6a8a0, 0x1fd000 bytes
    //
    _n23(sdk::unknown_ptr) remove_pages_array;
    
    // [IopRemovePagesRunsSort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x54a360, 0x1fd000 bytes
    //
    _n24(sdk::unknown_ptr) remove_pages_runs_sort;
    
    // [IopSearchAndAddPageRangeToPageMaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5404c8, 0x1fd000 bytes
    //
    _n25(sdk::unknown_ptr) search_and_add_page_range_to_page_maps;
    
    // [IopSetCopyInformationExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x545848, 0x1fd000 bytes
    //
    _n26(sdk::unknown_ptr) set_copy_information_extension;
    
    // [IopShutdownFileSystems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .data:0x342320, 0x32828 bytes
    //
    _n27(sdk::unknown_ptr) shutdown_file_systems;
    
    // [IopStoreBootDriveLetter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe INIT:0xb4923c, 0x1fd000 bytes
    //
    _n28(sdk::unknown_ptr) store_boot_drive_letter;
    
    // [IopTraceCrashDumpDisabledOnBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x93f47c, 0x1fd000 bytes
    //
    _n29(sdk::unknown_ptr) trace_crash_dump_disabled_on_boot;
    
    // [IopUnlockAndFreeMdl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x542e9c, 0x1fd000 bytes
    //
    _n30(sdk::unknown_ptr) unlock_and_free_mdl;
    
    // [IopUpdateIrpTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x543040, 0x1fd000 bytes
    //
    _n31(sdk::unknown_ptr) update_irp_transfer_count;
    
    // [IopUpdateOtherTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x543084, 0x1fd000 bytes
    //
    _n32(sdk::function<void(uint32_t, struct nt::eprocess_t*)>*) update_other_transfer_count;
    
    // [IopUpdateReadTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x5430bc, 0x1fd000 bytes
    //
    _n33(sdk::function<void(uint32_t, struct nt::eprocess_t*)>*) update_read_transfer_count;
    
    // [IopValidateAndGetWriteParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe .text:0x2e82d0, 0x1fd000 bytes
    //
    _n34(sdk::unknown_ptr) validate_and_get_write_parameters;
    
    // [IopWriteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11
    // ntoskrnl.exe PAGE:0x6e29a0, 0x1fd000 bytes
    //
    _n35(sdk::unknown_ptr) write_file;
    
    // [IopCheckBackupRestorePrivilege]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a8da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x5ffa00, 0x1fe000 bytes
    //
    _n36(sdk::unknown_ptr) check_backup_restore_privilege;
    
    // [IopInsertActiveConnectListLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 11
    // ntoskrnl.exe PAGE:0x52aa80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x85f980, 0x1fd000 bytes
    //
    _n37(sdk::unknown_ptr) insert_active_connect_list_locked;
    
    // [IopIsRelationInList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8afb4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8ae2fc, 0x1fe000 bytes
    //
    _n38(sdk::unknown_ptr) is_relation_in_list;
    
    // [IopIsSecurityContextAppContainer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x504d4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x504b0c, 0x1fe000 bytes
    //
    _n39(sdk::unknown_ptr) is_security_context_app_container;
    
    // [IopLiveDumpTraceCaptureDumpDataBufferingDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x502d10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x502ad0, 0x1fe000 bytes
    //
    _n40(sdk::unknown_ptr) live_dump_trace_capture_dump_data_buffering_duration;
    
    // [IopLiveDumpTraceCaptureHvlCollectLiveDumpDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x502f80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x502d40, 0x1fe000 bytes
    //
    _n41(sdk::unknown_ptr) live_dump_trace_capture_hvl_collect_live_dump_duration;
    
    // [IopLoadBootHotPatches]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa707bc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa6fb00, 0x1fe000 bytes
    //
    _n42(sdk::unknown_ptr) load_boot_hot_patches;
    
    // [IopRequireDeviceAccessCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc0caf0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f08, 0x1fe000 bytes
    //
    _n43(sdk::unknown_ptr) require_device_access_check;
    
    // [IopResourceRequirementsChanged]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89ce70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89b620, 0x1fe000 bytes
    //
    _n44(sdk::unknown_ptr) resource_requirements_changed;
    
    // [IopSymlinkPropagateToExtensionIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6aa400, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6008c0, 0x1fe000 bytes
    //
    _n45(sdk::unknown_ptr) symlink_propagate_to_extension_if_needed;
    
    // [IopWriteBugCheckSelEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4feb7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x4fe93c, 0x1fe000 bytes
    //
    _n46(sdk::unknown_ptr) write_bug_check_sel_entries;
    
    // [IopAcquireActiveConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52aa64, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a740, 0x1fe000 bytes
    //
    _n47(sdk::unknown_ptr) acquire_active_connect_lock;
    
    // [IopAcquirePassiveInterruptBlockLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x507184, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d84b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506f44, 0x1fe000 bytes
    //
    _n48(sdk::unknown_ptr) acquire_passive_interrupt_block_lock;
    
    // [IopAddBugcheckPnpWatchdogTriageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x504dd8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54852c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504b98, 0x1fe000 bytes
    //
    _n49(sdk::unknown_ptr) add_bugcheck_pnp_watchdog_triage_data;
    
    // [IopAddBugcheckTriageCompletionQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50501c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548788, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504ddc, 0x1fe000 bytes
    //
    _n50(sdk::unknown_ptr) add_bugcheck_triage_completion_queue;
    
    // [IopAddBugcheckTriageDataFromParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fd45c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53e684, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd21c, 0x1fe000 bytes
    //
    _n51(sdk::unknown_ptr) add_bugcheck_triage_data_from_parameters;
    
    // [IopAddLiveDumpPagesToPartialKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505768, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5492dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505528, 0x1fe000 bytes
    //
    _n52(sdk::unknown_ptr) add_live_dump_pages_to_partial_kernel_dump;
    
    // [IopAddMiniDumpPagesToPartialKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505a80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5495d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505840, 0x1fe000 bytes
    //
    _n53(sdk::unknown_ptr) add_mini_dump_pages_to_partial_kernel_dump;
    
    // [IopAddTriageDumpDataToPartialKernelDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505c00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x549764, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5059c0, 0x1fe000 bytes
    //
    _n54(sdk::unknown_ptr) add_triage_dump_data_to_partial_kernel_dump;
    
    // [IopAllocateIrpExReturn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2d1f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252f80, 0x1fe000 bytes
    //
    _n55(sdk::unknown_ptr) allocate_irp_ex_return;
    
    // [IopApplyMutableTagToRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5e1ed0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x716c00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d1f6c, 0x1fe000 bytes
    //
    _n56(sdk::unknown_ptr) apply_mutable_tag_to_registry_key;
    
    // [IopAssignBootDriveLetter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d504, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa544d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa54374, 0x1fe000 bytes
    //
    _n57(sdk::unknown_ptr) assign_boot_drive_letter;
    
    // [IopBugCheckTriageDumpDataCallbackRecord]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc50a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a868, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50a90, 0x1fe000 bytes
    //
    _n58(sdk::unknown_ptr) bug_check_triage_dump_data_callback_record;
    
    // [IopCalculateStackInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505c9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x549800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505a5c, 0x1fe000 bytes
    //
    _n59(sdk::unknown_ptr) calculate_stack_information;
    
    // [IopCheckAndUpdateStopOnSymlinkEcp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x891544, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942594, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88fcf4, 0x1fe000 bytes
    //
    _n60(sdk::unknown_ptr) check_and_update_stop_on_symlink_ecp;
    
    // [IopCheckIrpCancelled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fa668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541ba8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa428, 0x1fe000 bytes
    //
    _n61(sdk::unknown_ptr) check_irp_cancelled;
    
    // [IopCreateLegacyDeviceIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8af82c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9615b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8adfdc, 0x1fe000 bytes
    //
    _n62(sdk::unknown_ptr) create_legacy_device_ids;
    
    // [IopCreateRootEnumeratedDeviceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aaab8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8616e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b2438, 0x1fe000 bytes
    //
    _n63(sdk::unknown_ptr) create_root_enumerated_device_object;
    
    // [IopCreateSecureDeviceClassSettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74fb74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84dde4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7577b4, 0x1fe000 bytes
    //
    _n64(sdk::unknown_ptr) create_secure_device_class_settings;
    
    // [IopCreateUmdfDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0xa561d4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb594e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56074, 0x1fe000 bytes
    //
    _n65(sdk::unknown_ptr) create_umdf_directory;
    
    // [IopDeviceRemovalForResetComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631878, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89db50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89c300, 0x1fe000 bytes
    //
    _n66(sdk::unknown_ptr) device_removal_for_reset_complete;
    
    // [IopDisableBufferedIoInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342360, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf48c8, 0x1fe000 bytes
    //
    _n67(sdk::unknown_ptr) disable_buffered_io_init;
    
    // [IopDispatchAllocateIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb61c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dc7c, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb61c, 0x1fe000 bytes
    //
    _n68(sdk::unknown_ptr) dispatch_allocate_irp;
    
    // [IopDispatchCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb65c, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dcb4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb65c, 0x1fe000 bytes
    //
    _n69(sdk::unknown_ptr) dispatch_call_driver;
    
    // [IopDispatchCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb6b0, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1dd20, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb6b0, 0x1fe000 bytes
    //
    _n70(sdk::unknown_ptr) dispatch_complete_request;
    
    // [IopDispatchFreeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0xcfb748, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1ddb4, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb748, 0x1fe000 bytes
    //
    _n71(sdk::unknown_ptr) dispatch_free_irp;
    
    // [IopEliminateBogusConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d3a74, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a650, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x50a410, 0x1fe000 bytes
    //
    _n72(sdk::unknown_ptr) eliminate_bogus_conflict;
    
    // [IopExceptionCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6266c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ea58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x88d208, 0x1fe000 bytes
    //
    _n73(sdk::unknown_ptr) exception_cleanup;
    
    // [IopExceptionFilterMode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4faa7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54203c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa83c, 0x1fe000 bytes
    //
    _n74(sdk::unknown_ptr) exception_filter_mode;
    
    // [IopFilesystemDatabaseShutdownRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc459f0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d588, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45980, 0x1fe000 bytes
    //
    _n75(sdk::unknown_ptr) filesystem_database_shutdown_rundown;
    
    // [IopFreeResetRemovalContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6319ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89dd10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89c4c0, 0x1fe000 bytes
    //
    _n76(sdk::unknown_ptr) free_reset_removal_context;
    
    // [IopGetMaxValidMemorySizeDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4fe1a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53ff08, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fdf64, 0x1fe000 bytes
    //
    _n77(sdk::unknown_ptr) get_max_valid_memory_size_down;
    
    // [IopGetPersistedStateLocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x74fdac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e01c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7579ec, 0x1fe000 bytes
    //
    _n78(sdk::unknown_ptr) get_persisted_state_location;
    
    // [IopGetSecurityDescriptorInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7197ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73a894, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7215cc, 0x1fe000 bytes
    //
    _n79(sdk::unknown_ptr) get_security_descriptor_information;
    
    // [IopGetThreadActiveConsoleId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89174c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94279c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88fefc, 0x1fe000 bytes
    //
    _n80(sdk::unknown_ptr) get_thread_active_console_id;
    
    // [IopInitFailCode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc46fa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db34, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc46f68, 0x1fe000 bytes
    //
    _n81(sdk::unknown_ptr) init_fail_code;
    
    // [IopInitializeTriageDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x7aaf58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85bc38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b28d8, 0x1fe000 bytes
    //
    _n82(sdk::unknown_ptr) initialize_triage_dump_data;
    
    // [IopIsActivityTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2da668, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209318, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b27c, 0x1fe000 bytes
    //
    _n83(sdk::unknown_ptr) is_activity_tracing_enabled;
    
    // [IopIsNotifyInBroadcast]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x993f0c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a624, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x992f1c, 0x1fe000 bytes
    //
    _n84(sdk::unknown_ptr) is_notify_in_broadcast;
    
    // [IopIsRootEnumeratedDeviceObjectActive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x72f254, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bf260, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x737264, 0x1fe000 bytes
    //
    _n85(sdk::unknown_ptr) is_root_enumerated_device_object_active;
    
    // [IopLiveDumpAddTriageDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a8640, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa86040, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a75b0, 0x1fe000 bytes
    //
    _n86(sdk::unknown_ptr) live_dump_add_triage_dump_data;
    
    // [IopLiveDumpAllocateExtraBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x894934, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x947b74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8930e4, 0x1fe000 bytes
    //
    _n87(sdk::unknown_ptr) live_dump_allocate_extra_buffers;
    
    // [IopLiveDumpAllocateFromVMMemoryPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x894bd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9481f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893380, 0x1fe000 bytes
    //
    _n88(sdk::unknown_ptr) live_dump_allocate_from_vm_memory_partition;
    
    // [IopLiveDumpAllocateIptBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x894f24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94857c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8936d4, 0x1fe000 bytes
    //
    _n89(sdk::unknown_ptr) live_dump_allocate_ipt_buffers;
    
    // [IopLiveDumpGenerateIptSecondaryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9a9a68, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8741c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a89d8, 0x1fe000 bytes
    //
    _n90(sdk::unknown_ptr) live_dump_generate_ipt_secondary_data;
    
    // [IopLiveDumpGetExtraMergePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x895450, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x948d48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893c00, 0x1fe000 bytes
    //
    _n91(sdk::unknown_ptr) live_dump_get_extra_merge_pages;
    
    // [IopLiveDumpGetMillisecondCounter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5028bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5467a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50267c, 0x1fe000 bytes
    //
    _n92(sdk::unknown_ptr) live_dump_get_millisecond_counter;
    
    // [IopLiveDumpInitRegistrySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x895780, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9490d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893f30, 0x1fe000 bytes
    //
    _n93(sdk::unknown_ptr) live_dump_init_registry_settings;
    
    // [IopLiveDumpRemoveSystemCacheFromDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x9aa864, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8823c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a97d4, 0x1fe000 bytes
    //
    _n94(sdk::unknown_ptr) live_dump_remove_system_cache_from_dump;
    
    // [IopLiveDumpTraceAllocationFromVMMemoryPartitionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5029bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546b3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50277c, 0x1fe000 bytes
    //
    _n95(sdk::unknown_ptr) live_dump_trace_allocation_from_vm_memory_partition_failure;
    
    // [IopLiveDumpTraceCaptureGenerateIptSecondaryDataDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x502e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546e7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502c10, 0x1fe000 bytes
    //
    _n96(sdk::unknown_ptr) live_dump_trace_capture_generate_ipt_secondary_data_duration;
    
    // [IopLiveDumpTraceCaptureMemoryPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5030c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546fc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502e80, 0x1fe000 bytes
    //
    _n97(sdk::unknown_ptr) live_dump_trace_capture_memory_pages;
    
    // [IopLiveDumpTraceCaptureProcessorContextDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5031c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5470c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502f80, 0x1fe000 bytes
    //
    _n98(sdk::unknown_ptr) live_dump_trace_capture_processor_context_duration;
    
    // [IopLiveDumpTraceCorralProcessorsDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547224, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5030c0, 0x1fe000 bytes
    //
    _n99(sdk::unknown_ptr) live_dump_trace_corral_processors_duration;
    
    // [IopLiveDumpTraceEstimatedAndAllocatedPageCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5035f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5033b0, 0x1fe000 bytes
    //
    _o00(sdk::unknown_ptr) live_dump_trace_estimated_and_allocated_page_count;
    
    // [IopLiveDumpTraceMarkImportantDumpDataDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5037e8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547984, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5035a8, 0x1fe000 bytes
    //
    _o01(sdk::unknown_ptr) live_dump_trace_mark_important_dump_data_duration;
    
    // [IopLiveDumpTraceMarkRequiredDumpDataDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503928, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547ae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5036e8, 0x1fe000 bytes
    //
    _o02(sdk::unknown_ptr) live_dump_trace_mark_required_dump_data_duration;
    
    // [IopLiveDumpTraceMmDuplicateMemoryFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503b78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503938, 0x1fe000 bytes
    //
    _o03(sdk::unknown_ptr) live_dump_trace_mm_duplicate_memory_failure;
    
    // [IopLiveDumpTraceOpenVMMemoryPartitionFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503c30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547e04, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5039f0, 0x1fe000 bytes
    //
    _o04(sdk::unknown_ptr) live_dump_trace_open_vm_memory_partition_failure;
    
    // [IopLiveDumpTracePopulateBitmapForDumpDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503ccc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547e88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503a8c, 0x1fe000 bytes
    //
    _o05(sdk::unknown_ptr) live_dump_trace_populate_bitmap_for_dump_duration;
    
    // [IopLiveDumpTraceQueryHvlDumpSizeFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x503e40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548000, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503c00, 0x1fe000 bytes
    //
    _o06(sdk::unknown_ptr) live_dump_trace_query_hvl_dump_size_failure;
    
    // [IopLiveDumpTraceUncorralProcessorsDuration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x504008, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5481c8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503dc8, 0x1fe000 bytes
    //
    _o07(sdk::unknown_ptr) live_dump_trace_uncorral_processors_duration;
    
    // [IopLiveDumpWriteDumpFileWithExtraPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x896160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94a248, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x894910, 0x1fe000 bytes
    //
    _o08(sdk::unknown_ptr) live_dump_write_dump_file_with_extra_pages;
    
    // [IopLoadCrashdmpImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x771fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ef70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7799a0, 0x1fe000 bytes
    //
    _o09(sdk::unknown_ptr) load_crashdmp_image;
    
    // [IopLoadDriverImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3957f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x373e58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396858, 0x1fe000 bytes
    //
    _o10(sdk::unknown_ptr) load_driver_image;
    
    // [IopLogEventIoMgrMountBegin]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133b40, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e8a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f8f0, 0x1fe000 bytes
    //
    _o11(sdk::unknown_ptr) log_event_io_mgr_mount_begin;
    
    // [IopLogEventIoMgrMountFailed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7da4, 0x32828 bytes
    // ntoskrnl.exe .text:0x38f6a4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3906f4, 0x1fe000 bytes
    //
    _o12(sdk::unknown_ptr) log_event_io_mgr_mount_failed;
    
    // [IopLogEventIoMgrMountSucceeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x133a60, 0x32828 bytes
    // ntoskrnl.exe .text:0x38e998, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38f9e8, 0x1fe000 bytes
    //
    _o13(sdk::unknown_ptr) log_event_io_mgr_mount_succeeded;
    
    // [IopMarkApcRoutineIfAsynchronousIo32]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2d23c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28cb88, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2533e0, 0x1fe000 bytes
    //
    _o14(sdk::unknown_ptr) mark_apc_routine_if_asynchronous_io32;
    
    // [IopMarkPagesForDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505d7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x549afc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505b3c, 0x1fe000 bytes
    //
    _o15(sdk::unknown_ptr) mark_pages_for_device_node;
    
    // [IopMarkPagesForDpcData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505ddc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x549b5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505b9c, 0x1fe000 bytes
    //
    _o16(sdk::unknown_ptr) mark_pages_for_dpc_data;
    
    // [IopMarkPagesForLoadedDriverInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505f00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x549f9c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505cc0, 0x1fe000 bytes
    //
    _o17(sdk::unknown_ptr) mark_pages_for_loaded_driver_information;
    
    // [IopMarkPagesForProcessorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x505fbc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54a058, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505d7c, 0x1fe000 bytes
    //
    _o18(sdk::unknown_ptr) mark_pages_for_processor_data;
    
    // [IopMarkPagesForRunTimeTriageDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5060d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54a20c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505e90, 0x1fe000 bytes
    //
    _o19(sdk::unknown_ptr) mark_pages_for_run_time_triage_data_blocks;
    
    // [IopQueryBusResourceUpdateInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x8affc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961ce0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae770, 0x1fe000 bytes
    //
    _o20(sdk::unknown_ptr) query_bus_resource_update_interface;
    
    // [IopQueryConflictFillConflicts]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65306c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b674c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b4efc, 0x1fe000 bytes
    //
    _o21(sdk::unknown_ptr) query_conflict_fill_conflicts;
    
    // [IopQueryConflictFillString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x653454, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b6b80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b5330, 0x1fe000 bytes
    //
    _o22(sdk::unknown_ptr) query_conflict_fill_string;
    
    // [IopQueryConflictList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x653560, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b6c94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b5444, 0x1fe000 bytes
    //
    _o23(sdk::unknown_ptr) query_conflict_list;
    
    // [IopQueryConflictListInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6535f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b6d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8b54dc, 0x1fe000 bytes
    //
    _o24(sdk::unknown_ptr) query_conflict_list_internal;
    
    // [IopQueryDeviceResetRegistrySettings]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a9554, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa49c38, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xa49abc, 0x1fe000 bytes
    //
    _o25(sdk::unknown_ptr) query_device_reset_registry_settings;
    
    // [IopQueryInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x644e00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b92a0, 0x1fe000 bytes
    //
    _o26(sdk::unknown_ptr) query_information;
    
    // [IopQueryRegistryKeySystemPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71e0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cd914, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x725ec0, 0x1fe000 bytes
    //
    _o27(sdk::unknown_ptr) query_registry_key_system_path;
    
    // [IopQuerySecureDeviceClassState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x71cc5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84e0cc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724a7c, 0x1fe000 bytes
    //
    _o28(sdk::unknown_ptr) query_secure_device_class_state;
    
    // [IopQueueDeviceResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89dd8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951d0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c53c, 0x1fe000 bytes
    //
    _o29(sdk::unknown_ptr) queue_device_reset_event;
    
    // [IopReleaseActiveConnectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52aa48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742adc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x74a71c, 0x1fe000 bytes
    //
    _o30(sdk::unknown_ptr) release_active_connect_lock;
    
    // [IopReleaseFileObjectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2ddc30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ce470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25eec0, 0x1fe000 bytes
    //
    _o31(sdk::unknown_ptr) release_file_object_lock;
    
    // [IopResetEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe0250, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d2300, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x253320, 0x1fe000 bytes
    //
    _o32(sdk::unknown_ptr) reset_event;
    
    // [IopRetryDeviceRemovalForReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631a1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89de10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x89c5c0, 0x1fe000 bytes
    //
    _o33(sdk::unknown_ptr) retry_device_removal_for_reset;
    
    // [IopRetryDeviceRemovalForResetDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd562c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2716a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x323230, 0x1fe000 bytes
    //
    _o34(sdk::unknown_ptr) retry_device_removal_for_reset_dpc;
    
    // [IopSetDriverFlagsExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23fc14, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed1a4, 0x1fe000 bytes
    //
    _o35(sdk::unknown_ptr) set_driver_flags_extension;
    
    // [IopSetFileMemoryPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x89176c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9427bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ff1c, 0x1fe000 bytes
    //
    _o36(sdk::unknown_ptr) set_file_memory_partition_information;
    
    // [IopSymlinkGetMostRecentlyUsedName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12d178, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a2dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x30ad4c, 0x1fe000 bytes
    //
    _o37(sdk::unknown_ptr) symlink_get_most_recently_used_name;
    
    // [IopSymlinkProcessReparse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x65a024, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7baa0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd9b4, 0x1fe000 bytes
    //
    _o38(sdk::unknown_ptr) symlink_process_reparse;
    
    // [IopTriageDumpDataArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc50ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ac0, 0x1fe000 bytes
    //
    _o39(sdk::unknown_ptr) triage_dump_data_array;
    
    // [IopUniqueDriverObjectNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0xc45ab0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6b8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a50, 0x1fe000 bytes
    //
    _o40(sdk::unknown_ptr) unique_driver_object_number;
    
    // [IopUpdateSecureDeviceClassState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x79f7c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84db48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a79e4, 0x1fe000 bytes
    //
    _o41(sdk::unknown_ptr) update_secure_device_class_state;
    
    // [IopValidateQueryInformationParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6a96f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c8a50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600350, 0x1fe000 bytes
    //
    _o42(sdk::unknown_ptr) validate_query_information_parameters;
    
    // [IopWaitAndAcquireFileObjectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5f5078, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e22ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x709eb8, 0x1fe000 bytes
    //
    _o43(sdk::unknown_ptr) wait_and_acquire_file_object_lock;
    
    // [IopAbortRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626074, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88c9d0, 0x1fe000 bytes
    //
    _o44(sdk::unknown_ptr) abort_request;
    
    // [IopAcquireGlobalPassiveInterruptListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d02d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x50710c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8304, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506ecc, 0x1fe000 bytes
    //
    _o45(sdk::unknown_ptr) acquire_global_passive_interrupt_list_lock;
    
    // [IopAcquireReferencesFromIoAttributionHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x78f88, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a104, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334d30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2dafc4, 0x1fe000 bytes
    //
    _o46(sdk::unknown_ptr) acquire_references_from_io_attribution_handle;
    
    // [IopAcquireReleaseConnectLockInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a9e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a6694, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854c98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ae7ac, 0x1fe000 bytes
    //
    _o47(sdk::unknown_ptr) acquire_release_connect_lock_internal;
    
    // [IopAcquireReleaseDispatcherLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6321d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e92c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x855030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d0dc, 0x1fe000 bytes
    //
    _o48(sdk::unknown_ptr) acquire_release_dispatcher_lock;
    
    // [IopAddBootDiskInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1395b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3af0e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b23c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b2384, 0x1fe000 bytes
    //
    _o49(sdk::unknown_ptr) add_boot_disk_information;
    
    // [IopAddBugcheckPnpTriageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cec14, 0x32828 bytes
    // ntoskrnl.exe .text:0x504d70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5484c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504b30, 0x1fe000 bytes
    //
    _o50(sdk::unknown_ptr) add_bugcheck_pnp_triage_data;
    
    // [IopAddBugcheckPowerTriageData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ced18, 0x32828 bytes
    // ntoskrnl.exe .text:0x504e80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5485ec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504c40, 0x1fe000 bytes
    //
    _o51(sdk::unknown_ptr) add_bugcheck_power_triage_data;
    
    // [IopAddBugcheckTriageDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ceeac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5050d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548844, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504e98, 0x1fe000 bytes
    //
    _o52(sdk::unknown_ptr) add_bugcheck_triage_device;
    
    // [IopAddBugcheckTriageDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cefb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5051e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54894c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504fa0, 0x1fe000 bytes
    //
    _o53(sdk::unknown_ptr) add_bugcheck_triage_device_node;
    
    // [IopAddBugcheckTriageIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf09c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5052d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548a3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x505090, 0x1fe000 bytes
    //
    _o54(sdk::unknown_ptr) add_bugcheck_triage_irp;
    
    // [IopAddBugcheckTriageThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf21c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50542c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548bb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5051ec, 0x1fe000 bytes
    //
    _o55(sdk::unknown_ptr) add_bugcheck_triage_thread;
    
    // [IopAddBugcheckTriageUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf310, 0x32828 bytes
    // ntoskrnl.exe .text:0x50552c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548cb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5052ec, 0x1fe000 bytes
    //
    _o56(sdk::unknown_ptr) add_bugcheck_triage_unicode_string;
    
    // [IopAddBugcheckTriageWorkQueue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cf3a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x5055bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548d4c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50537c, 0x1fe000 bytes
    //
    _o57(sdk::unknown_ptr) add_bugcheck_triage_work_queue;
    
    // [IopAddPageDumpRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9790, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fd738, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53eb58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd4f8, 0x1fe000 bytes
    //
    _o58(sdk::unknown_ptr) add_page_dump_range;
    
    // [IopAddPageRangeToPageMaps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9870, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fd83c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53ec5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd5fc, 0x1fe000 bytes
    //
    _o59(sdk::unknown_ptr) add_page_range_to_page_maps;
    
    // [IopAddPageToPageMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c994c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fd920, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53ed40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd6e0, 0x1fe000 bytes
    //
    _o60(sdk::unknown_ptr) add_page_to_page_map;
    
    // [IopAddRelationToList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f71c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a870, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd4e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731bf0, 0x1fe000 bytes
    //
    _o61(sdk::unknown_ptr) add_relation_to_list;
    
    // [IopAddRemoveReqDescs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c730, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732b3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ceb38, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73ab4c, 0x1fe000 bytes
    //
    _o62(sdk::unknown_ptr) add_remove_req_descs;
    
    // [IopAddRunTimeTriageDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9a90, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fdb04, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53edd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd8c4, 0x1fe000 bytes
    //
    _o63(sdk::unknown_ptr) add_run_time_triage_data_blocks;
    
    // [IopAddTriageDumpDataBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14968c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c7458, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e0d1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c8328, 0x1fe000 bytes
    //
    _o64(sdk::unknown_ptr) add_triage_dump_data_block;
    
    // [IopAdjustFileObjectKeepAliveCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc76c, 0x32828 bytes
    // ntoskrnl.exe .text:0x501338, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544e5c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5010f8, 0x1fe000 bytes
    //
    _o65(sdk::unknown_ptr) adjust_file_object_keep_alive_count;
    
    // [IopAllocRealFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4de5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a9820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c6b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600480, 0x1fe000 bytes
    //
    _o66(sdk::unknown_ptr) alloc_real_file_object;
    
    // [IopAllocateBackpocketIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c70a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fa0d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5415f0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4f9e90, 0x1fe000 bytes
    //
    _o67(sdk::unknown_ptr) allocate_backpocket_irp;
    
    // [IopAllocateBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797350, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834bf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79cea0, 0x1fe000 bytes
    //
    _o68(sdk::unknown_ptr) allocate_boot_resources;
    
    // [IopAllocateBootResourcesInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b090, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7973e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834c78, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79cf30, 0x1fe000 bytes
    //
    _o69(sdk::unknown_ptr) allocate_boot_resources_internal;
    
    // [IopAllocateBootResourcesRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3205f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc447f8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c3f8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc447d8, 0x1fe000 bytes
    //
    _o70(sdk::unknown_ptr) allocate_boot_resources_routine;
    
    // [IopAllocateErrorLogEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f114, 0x32828 bytes
    // ntoskrnl.exe .text:0x37c11c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38479c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37d49c, 0x1fe000 bytes
    //
    _o71(sdk::unknown_ptr) allocate_error_log_entry;
    
    // [IopAllocateFileObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfb7e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x30e2e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281dd0, 0x1fe000 bytes
    //
    _o72(sdk::function<int32_t(struct nt::file_object_t*, void**)>*) allocate_file_object_extension;
    
    // [IopAllocateFoExtensionsOnCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e3234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67ef2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6745ec, 0x1fe000 bytes
    //
    _o73(sdk::unknown_ptr) allocate_fo_extensions_on_create;
    
    // [IopAllocateGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626098, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e250, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ca00, 0x1fe000 bytes
    //
    _o74(sdk::unknown_ptr) allocate_generic_table_entry;
    
    // [IopAllocateIrpCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6260ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e274, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f724, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ca24, 0x1fe000 bytes
    //
    _o75(sdk::unknown_ptr) allocate_irp_cleanup;
    
    // [IopAllocateIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4fe4, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fe30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x20965c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed3c0, 0x1fe000 bytes
    //
    _o76(sdk::unknown_ptr) allocate_irp_extension;
    
    // [IopAllocateIrpMustSucceed]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5bf0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d2430, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x253450, 0x1fe000 bytes
    //
    _o77(sdk::unknown_ptr) allocate_irp_must_succeed;
    
    // [IopAllocateIrpPrivate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5c30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d1f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cb4a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x252fb0, 0x1fe000 bytes
    //
    _o78(sdk::unknown_ptr) allocate_irp_private;
    
    // [IopAllocateIrpWithExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1bc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x21170c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208dd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f41c, 0x1fe000 bytes
    //
    _o79(sdk::unknown_ptr) allocate_irp_with_extension;
    
    // [IopAllocateLegacyBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78e65c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa63b30, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40530, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5fa0c, 0x1fe000 bytes
    //
    _o80(sdk::unknown_ptr) allocate_legacy_boot_resources;
    
    // [IopAllocateMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4105a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5eeb3c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x71fb88, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643b7c, 0x1fe000 bytes
    //
    _o81(sdk::unknown_ptr) allocate_mini_completion_packet;
    
    // [IopAllocatePassiveInterruptBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632224, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89e980, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854f00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d130, 0x1fe000 bytes
    //
    _o82(sdk::unknown_ptr) allocate_passive_interrupt_block;
    
    // [IopAllocateRelationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4302c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c1d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc1b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73292c, 0x1fe000 bytes
    //
    _o83(sdk::unknown_ptr) allocate_relation_list;
    
    // [IopAllocateReserveIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7384, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fa35c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541888, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa11c, 0x1fe000 bytes
    //
    _o84(sdk::unknown_ptr) allocate_reserve_irp;
    
    // [IopAllocateUnicodeString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe0f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x727afc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727860, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f91c, 0x1fe000 bytes
    //
    _o85(sdk::unknown_ptr) allocate_unicode_string;
    
    // [IopAllowLoadCrashDumpDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342668, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c28, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17684, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4c28, 0x1fe000 bytes
    //
    _o86(sdk::unknown_ptr) allow_load_crash_dump_driver;
    
    // [IopAllowRemoteDASD]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ceb28, 0x32828 bytes
    // ntoskrnl.exe .text:0x504c90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545528, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504a50, 0x1fe000 bytes
    //
    _o87(sdk::unknown_ptr) allow_remote_dasd;
    
    // [IopAmbiguousSystemDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430d8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5150, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17bd9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5150, 0x1fe000 bytes
    //
    _o88(sdk::unknown_ptr) ambiguous_system_disk;
    
    // [IopApcHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e2b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f760, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ca60, 0x1fe000 bytes
    //
    _o89(sdk::unknown_ptr) apc_hard_error;
    
    // [IopAppendLegacyVeto]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62f678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8af758, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9614e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8adf08, 0x1fe000 bytes
    //
    _o90(sdk::unknown_ptr) append_legacy_veto;
    
    // [IopApplySystemPartitionProt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bb814, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8e9f0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7fc20, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8dc70, 0x1fe000 bytes
    //
    _o91(sdk::unknown_ptr) apply_system_partition_prot;
    
    // [IopAttachDeviceToDeviceStackSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108ec8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2567c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc0c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33db74, 0x1fe000 bytes
    //
    _o92(sdk::unknown_ptr) attach_device_to_device_stack_safe;
    
    // [IopAutoReboot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x340f00, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41c4, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16a80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41c4, 0x1fe000 bytes
    //
    _o93(sdk::unknown_ptr) auto_reboot;
    
    // [IopBlockLegacyFsFilters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342364, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf48cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17368, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48d0, 0x1fe000 bytes
    //
    _o94(sdk::unknown_ptr) block_legacy_fs_filters;
    
    // [IopBoostThreadCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x50a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x266550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x371780, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316ce0, 0x1fe000 bytes
    //
    _o95(sdk::unknown_ptr) boost_thread_callback;
    
    // [IopBootAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c664, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8350d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79d064, 0x1fe000 bytes
    //
    _o96(sdk::unknown_ptr) boot_allocation;
    
    // [IopBootConfigsReserved]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a78, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c79, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c8b9, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44c38, 0x1fe000 bytes
    //
    _o97(sdk::unknown_ptr) boot_configs_reserved;
    
    // [IopBootDriverReinitCompleted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327128, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50acc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a89c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50acc, 0x1fe000 bytes
    //
    _o98(sdk::unknown_ptr) boot_driver_reinit_completed;
    
    // [IopBootDriverReinitializeQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321730, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d620, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459b0, 0x1fe000 bytes
    //
    _o99(sdk::unknown_ptr) boot_driver_reinitialize_queue_head;
    
    // [IopBootLog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a2674, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754ad0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e4264, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c390, 0x1fe000 bytes
    //
    _p00(sdk::unknown_ptr) boot_log;
    
    // [IopBootLogToFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626134, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e2e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f794, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ca94, 0x1fe000 bytes
    //
    _p01(sdk::unknown_ptr) boot_log_to_file;
    
    // [IopBuildAsynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc6d0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x259a70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e9440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x340120, 0x1fe000 bytes
    //
    _p02(sdk::unknown_ptr) build_asynchronous_fsd_request;
    
    // [IopBuildDeviceIoControlRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfdb80, 0x32828 bytes
    // ntoskrnl.exe .text:0x30df60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2adc80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x279670, 0x1fe000 bytes
    //
    _p03(sdk::unknown_ptr) build_device_io_control_request;
    
    // [IopBuildFullDriverPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f9d0c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d3c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e41bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7251e8, 0x1fe000 bytes
    //
    _p04(sdk::unknown_ptr) build_full_driver_path;
    
    // [IopBuildGlobalSymbolicLinkString]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fdfe4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7279e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x727744, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f804, 0x1fe000 bytes
    //
    _p05(sdk::unknown_ptr) build_global_symbolic_link_string;
    
    // [IopBuildSynchronousFsdRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x487b08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x658fb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e3110, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x703fd0, 0x1fe000 bytes
    //
    _p06(sdk::unknown_ptr) build_synchronous_fsd_request;
    
    // [IopBusNumberInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ec78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788a10, 0x1fe000 bytes
    //
    _p07(sdk::unknown_ptr) bus_number_initialize;
    
    // [IopBusNumberPackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3de8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809680, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711a80, 0x1fe000 bytes
    //
    _p08(sdk::unknown_ptr) bus_number_pack_resource;
    
    // [IopBusNumberScoreRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54fd2c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8703f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be770, 0x1fe000 bytes
    //
    _p09(sdk::unknown_ptr) bus_number_score_requirement;
    
    // [IopBusNumberUnpackRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3dc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a060, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8096b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711ab0, 0x1fe000 bytes
    //
    _p10(sdk::unknown_ptr) bus_number_unpack_requirement;
    
    // [IopBusNumberUnpackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a090, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8096e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711ae0, 0x1fe000 bytes
    //
    _p11(sdk::unknown_ptr) bus_number_unpack_resource;
    
    // [IopCacheHitIncrement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec180, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980470, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa63f28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97ed50, 0x1fe000 bytes
    //
    _p12(sdk::unknown_ptr) cache_hit_increment;
    
    // [IopCachePreviousBootData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bb2c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8e448, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7f688, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8d6c8, 0x1fe000 bytes
    //
    _p13(sdk::unknown_ptr) cache_previous_boot_data;
    
    // [IopCallArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7324b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa574, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a4c4, 0x1fe000 bytes
    //
    _p14(sdk::unknown_ptr) call_arbiter;
    
    // [IopCallBootDriverReinitializationRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4fa4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6ba28, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb599f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b320, 0x1fe000 bytes
    //
    _p15(sdk::unknown_ptr) call_boot_driver_reinitialization_routines;
    
    // [IopCallDriverReference]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x3d868, 0x32828 bytes
    // ntoskrnl.exe .text:0x334d00, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ae450, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x27ad40, 0x1fe000 bytes
    //
    _p16(sdk::unknown_ptr) call_driver_reference;
    
    // [IopCallDriverReinitializationRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4993e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x754b84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc058, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75c444, 0x1fe000 bytes
    //
    _p17(sdk::unknown_ptr) call_driver_reinitialization_routines;
    
    // [IopCancelAlertedRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e4ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93f95c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88cc5c, 0x1fe000 bytes
    //
    _p18(sdk::unknown_ptr) cancel_alerted_request;
    
    // [IopCancelApcRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff9d4, 0x32828 bytes
    // ntoskrnl.exe .text:0x353508, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x307878, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e4e9c, 0x1fe000 bytes
    //
    _p19(sdk::unknown_ptr) cancel_apc_required;
    
    // [IopCancelIrpsInCurrentThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2fec, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a0e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37450c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ab54, 0x1fe000 bytes
    //
    _p20(sdk::unknown_ptr) cancel_irps_in_current_thread_list;
    
    // [IopCancelIrpsInCurrentThreadListApcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482744, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6598a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd230, 0x1fe000 bytes
    //
    _p21(sdk::unknown_ptr) cancel_irps_in_current_thread_list_apc_routine;
    
    // [IopCancelIrpsInCurrentThreadListDummyApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x519108, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8094b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711860, 0x1fe000 bytes
    //
    _p22(sdk::unknown_ptr) cancel_irps_in_current_thread_list_dummy_apc;
    
    // [IopCancelIrpsInCurrentThreadListSpecialApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcd344, 0x32828 bytes
    // ntoskrnl.exe .text:0x269620, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37c440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a630, 0x1fe000 bytes
    //
    _p23(sdk::unknown_ptr) cancel_irps_in_current_thread_list_special_apc;
    
    // [IopCancelIrpsInFileObjectList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2d78, 0x32828 bytes
    // ntoskrnl.exe .text:0x259e8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4490, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30a8fc, 0x1fe000 bytes
    //
    _p24(sdk::unknown_ptr) cancel_irps_in_file_object_list;
    
    // [IopCancelIrpsInThreadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482784, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6598e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc380, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd278, 0x1fe000 bytes
    //
    _p25(sdk::unknown_ptr) cancel_irps_in_thread_list;
    
    // [IopCancelIrpsInThreadListForCurrentProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e34a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6e8c84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76d9c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x699928, 0x1fe000 bytes
    //
    _p26(sdk::unknown_ptr) cancel_irps_in_thread_list_for_current_process;
    
    // [IopCancelPendingEject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ed50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afdb8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae568, 0x1fe000 bytes
    //
    _p27(sdk::unknown_ptr) cancel_pending_eject;
    
    // [IopCancelSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be880, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22840, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd484c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22740, 0x1fe000 bytes
    //
    _p28(sdk::unknown_ptr) cancel_spin_lock;
    
    // [IopCancelSynchronousIrpsForThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6262d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e600, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88cdb0, 0x1fe000 bytes
    //
    _p29(sdk::unknown_ptr) cancel_synchronous_irps_for_thread;
    
    // [IopCancelWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8404, 0x32828 bytes
    // ntoskrnl.exe .text:0x207e98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e118, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e266c, 0x1fe000 bytes
    //
    _p30(sdk::unknown_ptr) cancel_wait_completion_packet;
    
    // [IopCaptureObjectName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cfa1c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x993fa8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a470, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x992fb8, 0x1fe000 bytes
    //
    _p31(sdk::unknown_ptr) capture_object_name;
    
    // [IopCaseInsensitive]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b60, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11eac, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0cae8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f10, 0x1fe000 bytes
    //
    _p32(sdk::unknown_ptr) case_insensitive;
    
    // [IopCdRomFileSystemQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321700, 0x32828 bytes
    // ntoskrnl.exe .data:0xc459d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d630, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459a0, 0x1fe000 bytes
    //
    _p33(sdk::unknown_ptr) cd_rom_file_system_queue_head;
    
    // [IopChangeInterfaceType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631590, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89d81c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x951780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89bfcc, 0x1fe000 bytes
    //
    _p34(sdk::unknown_ptr) change_interface_type;
    
    // [IopCheckDeviceAndDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5680, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d2f90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3940, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x253fb0, 0x1fe000 bytes
    //
    _p35(sdk::unknown_ptr) check_device_and_driver;
    
    // [IopCheckDeviceFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cf9f4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x993f24, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a520, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x992f34, 0x1fe000 bytes
    //
    _p36(sdk::unknown_ptr) check_device_flags;
    
    // [IopCheckDiskName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x139628, 0x32828 bytes
    // ntoskrnl.exe .text:0x3aecb8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b21d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b1f58, 0x1fe000 bytes
    //
    _p37(sdk::unknown_ptr) check_disk_name;
    
    // [IopCheckGetQuotaBufferValidity]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e67c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fb30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88ce2c, 0x1fe000 bytes
    //
    _p38(sdk::unknown_ptr) check_get_quota_buffer_validity;
    
    // [IopCheckHandleForRevocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc9c8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5015a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5450d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501360, 0x1fe000 bytes
    //
    _p39(sdk::unknown_ptr) check_handle_for_revocation;
    
    // [IopCheckHardErrorEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c75fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fa5b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541af0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa370, 0x1fe000 bytes
    //
    _p40(sdk::unknown_ptr) check_hard_error_empty;
    
    // [IopCheckIfMergeRequired]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6508d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afa44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9617bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae1f4, 0x1fe000 bytes
    //
    _p41(sdk::unknown_ptr) check_if_merge_required;
    
    // [IopCheckIfNotNativeDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6263e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fbc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88cec0, 0x1fe000 bytes
    //
    _p42(sdk::unknown_ptr) check_if_not_native_driver;
    
    // [IopCheckInitiatorHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbe728, 0x32828 bytes
    // ntoskrnl.exe .text:0x216080, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35e930, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33e760, 0x1fe000 bytes
    //
    _p43(sdk::unknown_ptr) check_initiator_hint;
    
    // [IopCheckListForCancelableIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc2f40, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a028, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375d94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30aa98, 0x1fe000 bytes
    //
    _p44(sdk::unknown_ptr) check_list_for_cancelable_irp;
    
    // [IopCheckSessionDeviceAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbf3c, 0x32828 bytes
    // ntoskrnl.exe .text:0x50073c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5440e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5004fc, 0x1fe000 bytes
    //
    _p45(sdk::unknown_ptr) check_session_device_access;
    
    // [IopCheckStackForTransactionSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cebc4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3906dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39c7e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x39172c, 0x1fe000 bytes
    //
    _p46(sdk::unknown_ptr) check_stack_for_transaction_support;
    
    // [IopCheckTopDeviceHint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c538, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651f44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2f44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c60ec, 0x1fe000 bytes
    //
    _p47(sdk::unknown_ptr) check_top_device_hint;
    
    // [IopCheckUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e720, 0x32828 bytes
    // ntoskrnl.exe .text:0x37830c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3740b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37968c, 0x1fe000 bytes
    //
    _p48(sdk::unknown_ptr) check_unload_driver;
    
    // [IopCheckVpbMounted]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf58c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3db0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254590, 0x1fe000 bytes
    //
    _p49(sdk::unknown_ptr) check_vpb_mounted;
    
    // [IopChildToRootTranslation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7317e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f9970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7397f4, 0x1fe000 bytes
    //
    _p50(sdk::unknown_ptr) child_to_root_translation;
    
    // [IopCleanupExtraCreateParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a9b34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67a210, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x760ab4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed634, 0x1fe000 bytes
    //
    _p51(sdk::unknown_ptr) cleanup_extra_create_parameters;
    
    // [IopCleanupFileObjectIosbRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626478, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e7b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fcc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88cf68, 0x1fe000 bytes
    //
    _p52(sdk::unknown_ptr) cleanup_file_object_iosb_range;
    
    // [IopCleanupNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12e624, 0x32828 bytes
    // ntoskrnl.exe .text:0x378278, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3743f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3795f8, 0x1fe000 bytes
    //
    _p53(sdk::unknown_ptr) cleanup_notifications;
    
    // [IopCleanupProcessResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x482708, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659854, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd1e4, 0x1fe000 bytes
    //
    _p54(sdk::unknown_ptr) cleanup_process_resources;
    
    // [IopCloseFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dee00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a7290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c77a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fd7f0, 0x1fe000 bytes
    //
    _p55(sdk::unknown_ptr) close_file;
    
    // [IopCloseFileObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc4160, 0x32828 bytes
    // ntoskrnl.exe .text:0x2579f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305fb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x307368, 0x1fe000 bytes
    //
    _p56(sdk::unknown_ptr) close_file_object_extension;
    
    // [IopCloseIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4693c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64bf70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ad660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be850, 0x1fe000 bytes
    //
    _p57(sdk::unknown_ptr) close_io_completion;
    
    // [IopCloseWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa8358, 0x32828 bytes
    // ntoskrnl.exe .text:0x207d90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35de70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e2a90, 0x1fe000 bytes
    //
    _p58(sdk::unknown_ptr) close_wait_completion_packet;
    
    // [IopCombineCmResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549b40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7972f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834514, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ce44, 0x1fe000 bytes
    //
    _p59(sdk::unknown_ptr) combine_cm_resource_list;
    
    // [IopCombineLegacyResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633860, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0230, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x953f70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89e9e0, 0x1fe000 bytes
    //
    _p60(sdk::unknown_ptr) combine_legacy_resources;
    
    // [IopCommitConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a80c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73273c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e8150, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a74c, 0x1fe000 bytes
    //
    _p61(sdk::unknown_ptr) commit_configuration;
    
    // [IopCompareIosbRanges]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62656c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e8c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fdc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d070, 0x1fe000 bytes
    //
    _p62(sdk::unknown_ptr) compare_iosb_ranges;
    
    // [IopCompareReqAlternativePriority]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56d94c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b0aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x867620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b8630, 0x1fe000 bytes
    //
    _p63(sdk::unknown_ptr) compare_req_alternative_priority;
    
    // [IopCompletePageWrite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd29d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x26f3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3832a0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x320ab0, 0x1fe000 bytes
    //
    _p64(sdk::unknown_ptr) complete_page_write;
    
    // [IopCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x49750, 0x32828 bytes
    // ntoskrnl.exe .text:0x2c8790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2cfa20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2497c0, 0x1fe000 bytes
    //
    _p65(sdk::unknown_ptr) complete_request;
    
    // [IopCompleteUnloadOrDelete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2404, 0x32828 bytes
    // ntoskrnl.exe .text:0x211d30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fa40, 0x1fe000 bytes
    //
    _p66(sdk::unknown_ptr) complete_unload_or_delete;
    
    // [IopCompletionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be8c0, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22800, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48600, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22800, 0x1fe000 bytes
    //
    _p67(sdk::unknown_ptr) completion_lock;
    
    // [IopCompletionLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341500, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee580, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e340, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee580, 0x1fe000 bytes
    //
    _p68(sdk::unknown_ptr) completion_lookaside_list;
    
    // [IopCompletionMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f40, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96760, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95950, 0x1fe000 bytes
    //
    _p69(sdk::unknown_ptr) completion_mapping;
    
    // [IopConnectInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a488, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7424ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ed8c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a12c, 0x1fe000 bytes
    //
    _p70(sdk::unknown_ptr) connect_interrupt;
    
    // [IopConnectInterruptFullySpecified]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56abec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ad850, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8641d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b5470, 0x1fe000 bytes
    //
    _p71(sdk::unknown_ptr) connect_interrupt_fully_specified;
    
    // [IopConnectLineBasedInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529b84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab6d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x862394, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3054, 0x1fe000 bytes
    //
    _p72(sdk::unknown_ptr) connect_line_based_interrupt;
    
    // [IopConnectLinkTrackingPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626580, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88e8e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93fde0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d090, 0x1fe000 bytes
    //
    _p73(sdk::unknown_ptr) connect_link_tracking_port;
    
    // [IopConnectMessageBasedInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742174, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85e698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x749db4, 0x1fe000 bytes
    //
    _p74(sdk::unknown_ptr) connect_message_based_interrupt;
    
    // [IopConstructInMemoryDumpHeader]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9ba4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fdbe0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53f04c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fd9a0, 0x1fe000 bytes
    //
    _p75(sdk::unknown_ptr) construct_in_memory_dump_header;
    
    // [IopCopyBootLogRegistryToFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x57195c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x777c00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x825c20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779e98, 0x1fe000 bytes
    //
    _p76(sdk::unknown_ptr) copy_boot_log_registry_to_file;
    
    // [IopCopyOffloadCapable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1c40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x644fac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7a3c50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b944c, 0x1fe000 bytes
    //
    _p77(sdk::unknown_ptr) copy_offload_capable;
    
    // [IopCopyOverNewPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531978, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a34c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bad48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cdcdc, 0x1fe000 bytes
    //
    _p78(sdk::unknown_ptr) copy_over_new_path;
    
    // [IopCrashDumpLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322ce0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc46f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5eb40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc46f00, 0x1fe000 bytes
    //
    _p79(sdk::unknown_ptr) crash_dump_lock;
    
    // [IopCreateArcName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545118, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x813a08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76aab8, 0x1fe000 bytes
    //
    _p80(sdk::unknown_ptr) create_arc_name;
    
    // [IopCreateArcNames]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d5e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53eb0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48be4, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53d4c, 0x1fe000 bytes
    //
    _p81(sdk::unknown_ptr) create_arc_names;
    
    // [IopCreateArcNamesCd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d034, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53ba4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48e90, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53a40, 0x1fe000 bytes
    //
    _p82(sdk::unknown_ptr) create_arc_names_cd;
    
    // [IopCreateArcNamesDisk]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d204, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53a3c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48d28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa538d8, 0x1fe000 bytes
    //
    _p83(sdk::unknown_ptr) create_arc_names_disk;
    
    // [IopCreateCmResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549a74, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x797220, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834440, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79cd70, 0x1fe000 bytes
    //
    _p84(sdk::unknown_ptr) create_cm_resource_list;
    
    // [IopCreateDefaultDeviceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e7000, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9a90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f79ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7028b0, 0x1fe000 bytes
    //
    _p85(sdk::unknown_ptr) create_default_device_security_descriptor;
    
    // [IopCreateFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3f2830, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61d380, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6a4570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66cd40, 0x1fe000 bytes
    //
    _p86(sdk::unknown_ptr) create_file;
    
    // [IopCreatePassiveInterruptRealtimeThreads]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56afd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab474, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86193c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b2df4, 0x1fe000 bytes
    //
    _p87(sdk::unknown_ptr) create_passive_interrupt_realtime_threads;
    
    // [IopCreateRegistryKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x529a94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71ce04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7363d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x724c24, 0x1fe000 bytes
    //
    _p88(sdk::unknown_ptr) create_registry_key_ex;
    
    // [IopCreateRootDirectories]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8344, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53dc0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb593f0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53c5c, 0x1fe000 bytes
    //
    _p89(sdk::unknown_ptr) create_root_directories;
    
    // [IopCreateSecurityCheck]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xca858, 0x32828 bytes
    // ntoskrnl.exe .text:0x21b380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc5e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f6c58, 0x1fe000 bytes
    //
    _p90(sdk::unknown_ptr) create_security_check;
    
    // [IopCreateSecurityDescriptorPerType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e70e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f9b68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6f7ad0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x702988, 0x1fe000 bytes
    //
    _p91(sdk::unknown_ptr) create_security_descriptor_per_type;
    
    // [IopCreateUnicodeFromAnsiBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13792c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b2a7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3c5374, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3b332c, 0x1fe000 bytes
    //
    _p92(sdk::unknown_ptr) create_unicode_from_ansi_buffer;
    
    // [IopCreateVpb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56dfc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764900, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8167b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76bba0, 0x1fe000 bytes
    //
    _p93(sdk::unknown_ptr) create_vpb;
    
    // [IopCsqCancelRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f47c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a0810, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e6670, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a1cd0, 0x1fe000 bytes
    //
    _p94(sdk::unknown_ptr) csq_cancel_routine;
    
    // [IopCurrentHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321540, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45838, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d480, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457d8, 0x1fe000 bytes
    //
    _p95(sdk::unknown_ptr) current_hard_error;
    
    // [IopDatabaseLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be900, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd227c0, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd485c0, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd228c0, 0x1fe000 bytes
    //
    _p96(sdk::unknown_ptr) database_lock;
    
    // [IopDatabaseResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321600, 0x32828 bytes
    // ntoskrnl.exe .data:0xc458e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d520, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45900, 0x1fe000 bytes
    //
    _p97(sdk::unknown_ptr) database_resource;
    
    // [IopDeadIrps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3219c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45d20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45c60, 0x1fe000 bytes
    //
    _p98(sdk::unknown_ptr) dead_irps;
    
    // [IopDeallocateApc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41960c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66f530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7da1f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e26b0, 0x1fe000 bytes
    //
    _p99(sdk::unknown_ptr) deallocate_apc;
    
    // [IopDebugPrint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d05bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x507764, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54d87c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507524, 0x1fe000 bytes
    //
    _q00(sdk::unknown_ptr) debug_print;
    
    // [IopDecDisableableDepends]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571a14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961ad8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be508, 0x1fe000 bytes
    //
    _q01(sdk::unknown_ptr) dec_disableable_depends;
    
    // [IopDecrementDeviceObjectHandleCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7648, 0x32828 bytes
    // ntoskrnl.exe .text:0x390ecc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39d23c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391f1c, 0x1fe000 bytes
    //
    _q02(sdk::unknown_ptr) decrement_device_object_handle_count;
    
    // [IopDecrementDeviceObjectRef]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5fa0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d3790, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x254800, 0x1fe000 bytes
    //
    _q03(sdk::unknown_ptr) decrement_device_object_ref;
    
    // [IopDecrementDeviceObjectRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x25f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2120bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38012c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fdcc, 0x1fe000 bytes
    //
    _q04(sdk::unknown_ptr) decrement_device_object_ref_count;
    
    // [IopDecrementVpbRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf6120, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d4690, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4b70, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x255700, 0x1fe000 bytes
    //
    _q05(sdk::unknown_ptr) decrement_vpb_ref_count;
    
    // [IopDeleteDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d834, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6043b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f50b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70fca0, 0x1fe000 bytes
    //
    _q06(sdk::unknown_ptr) delete_device;
    
    // [IopDeleteDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x535f54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x755290, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eae20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75cce0, 0x1fe000 bytes
    //
    _q07(sdk::unknown_ptr) delete_driver;
    
    // [IopDeleteFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e1740, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aa590, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c7a90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600a50, 0x1fe000 bytes
    //
    _q08(sdk::unknown_ptr) delete_file;
    
    // [IopDeleteFileObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xbbff0, 0x32828 bytes
    // ntoskrnl.exe .text:0x219190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305d7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d7140, 0x1fe000 bytes
    //
    _q09(sdk::unknown_ptr) delete_file_object_extension;
    
    // [IopDeleteIoCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4693bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64bf50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ad640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6be830, 0x1fe000 bytes
    //
    _q10(sdk::unknown_ptr) delete_io_completion;
    
    // [IopDeleteIoCompletionInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa58a8, 0x32828 bytes
    // ntoskrnl.exe .text:0x24ded8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359758, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fb7a8, 0x1fe000 bytes
    //
    _q11(sdk::unknown_ptr) delete_io_completion_internal;
    
    // [IopDequeueIrpFromFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa674c, 0x32828 bytes
    // ntoskrnl.exe .text:0x209260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359e98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c09b4, 0x1fe000 bytes
    //
    _q12(sdk::unknown_ptr) dequeue_irp_from_file_object;
    
    // [IopDequeueIrpFromThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf57c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d33b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d40c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2543d0, 0x1fe000 bytes
    //
    _q13(sdk::unknown_ptr) dequeue_irp_from_thread;
    
    // [IopDereferencePassiveInterruptBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d02f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x507200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7db4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x506fc0, 0x1fe000 bytes
    //
    _q14(sdk::unknown_ptr) dereference_passive_interrupt_block;
    
    // [IopDereferenceVpbAndFree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb9480, 0x32828 bytes
    // ntoskrnl.exe .text:0x2462f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x330880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2f01c0, 0x1fe000 bytes
    //
    _q15(sdk::unknown_ptr) dereference_vpb_and_free;
    
    // [IopDestroyActiveConnectBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a834, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eded0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a5b0, 0x1fe000 bytes
    //
    _q16(sdk::unknown_ptr) destroy_active_connect_block;
    
    // [IopDestroyDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42d890, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604414, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f61ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x70fd04, 0x1fe000 bytes
    //
    _q17(sdk::unknown_ptr) destroy_device_node;
    
    // [IopDestroyPassiveInterruptBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x632370, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89eae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95293c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89d290, 0x1fe000 bytes
    //
    _q18(sdk::unknown_ptr) destroy_passive_interrupt_block;
    
    // [IopDeviceEjectComplete]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d39cc, 0x32828 bytes
    // ntoskrnl.exe .text:0x50a0f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x550f90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x509eb0, 0x1fe000 bytes
    //
    _q19(sdk::unknown_ptr) device_eject_complete;
    
    // [IopDeviceInterfaceFilterCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4396b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x664f40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c1970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6d82a0, 0x1fe000 bytes
    //
    _q20(sdk::unknown_ptr) device_interface_filter_callback;
    
    // [IopDeviceObjectFromSymbolicName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5335c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b314, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0868, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723134, 0x1fe000 bytes
    //
    _q21(sdk::unknown_ptr) device_object_from_symbolic_name;
    
    // [IopDeviceTreeLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320860, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44ae0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c760, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44a20, 0x1fe000 bytes
    //
    _q22(sdk::unknown_ptr) device_tree_lock;
    
    // [IopDisableCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1401f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bb550, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53f14c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bbf00, 0x1fe000 bytes
    //
    _q23(sdk::unknown_ptr) disable_crash_dump;
    
    // [IopDisableTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7654, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c967c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204c6c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca56c, 0x1fe000 bytes
    //
    _q24(sdk::unknown_ptr) disable_timer;
    
    // [IopDisassociateThreadIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c76dc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fa704, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541c44, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa4c4, 0x1fe000 bytes
    //
    _q25(sdk::unknown_ptr) disassociate_thread_irp;
    
    // [IopDiskFileSystemQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3216f0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d590, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45970, 0x1fe000 bytes
    //
    _q26(sdk::unknown_ptr) disk_file_system_queue_head;
    
    // [IopDiskIoAttributionBaseIoSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5ed4, 0x32828 bytes
    // ntoskrnl.exe .data:0xc0f2c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc09988, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc0f318, 0x1fe000 bytes
    //
    _q27(sdk::unknown_ptr) disk_io_attribution_base_io_size;
    
    // [IopDiskIoAttributionKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321530, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45830, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d470, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457d0, 0x1fe000 bytes
    //
    _q28(sdk::unknown_ptr) disk_io_attribution_key;
    
    // [IopDiskIoAttributionLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321538, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4582c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d478, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457cc, 0x1fe000 bytes
    //
    _q29(sdk::unknown_ptr) disk_io_attribution_lock;
    
    // [IopDiskIoAttributionTree]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3217a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a90, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a40, 0x1fe000 bytes
    //
    _q30(sdk::unknown_ptr) disk_io_attribution_tree;
    
    // [IopDiskIoAttributionTreeCompare]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79118, 0x32828 bytes
    // ntoskrnl.exe .text:0x260288, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375fc0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x310ac8, 0x1fe000 bytes
    //
    _q31(sdk::unknown_ptr) disk_io_attribution_tree_compare;
    
    // [IopDispatchSessionNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53787c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892030, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9431c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8907e0, 0x1fe000 bytes
    //
    _q32(sdk::unknown_ptr) dispatch_session_notifications;
    
    // [IopDmaInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77eb98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839c40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x788930, 0x1fe000 bytes
    //
    _q33(sdk::unknown_ptr) dma_initialize;
    
    // [IopDmaOverrideConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809550, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711950, 0x1fe000 bytes
    //
    _q34(sdk::unknown_ptr) dma_override_conflict;
    
    // [IopDmaPackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54fd38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b68a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954310, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7be480, 0x1fe000 bytes
    //
    _q35(sdk::unknown_ptr) dma_pack_resource;
    
    // [IopDmaScoreRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f60, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8095b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7119b0, 0x1fe000 bytes
    //
    _q36(sdk::unknown_ptr) dma_score_requirement;
    
    // [IopDmaUnpackRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8095c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7119c0, 0x1fe000 bytes
    //
    _q37(sdk::unknown_ptr) dma_unpack_requirement;
    
    // [IopDmaUnpackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d68, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709fa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8095f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7119f0, 0x1fe000 bytes
    //
    _q38(sdk::unknown_ptr) dma_unpack_resource;
    
    // [IopDoDeferredSetInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fe3dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71af64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d45d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x722d84, 0x1fe000 bytes
    //
    _q39(sdk::unknown_ptr) do_deferred_set_interface_state;
    
    // [IopDriverLoadResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321580, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45860, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d4a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45800, 0x1fe000 bytes
    //
    _q40(sdk::unknown_ptr) driver_load_resource;
    
    // [IopDriverReinitializeQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321740, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d670, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459e0, 0x1fe000 bytes
    //
    _q41(sdk::unknown_ptr) driver_reinitialize_queue_head;
    
    // [IopDropIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xa6668, 0x32828 bytes
    // ntoskrnl.exe .text:0x20916c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359de4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c08c0, 0x1fe000 bytes
    //
    _q42(sdk::unknown_ptr) drop_irp;
    
    // [IopDumpCallAddPagesCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9c98, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fdce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53f1a8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fdaa0, 0x1fe000 bytes
    //
    _q43(sdk::unknown_ptr) dump_call_add_pages_callbacks;
    
    // [IopDumpCallRemovePagesCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9dbc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fde30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53f300, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fdbf0, 0x1fe000 bytes
    //
    _q44(sdk::unknown_ptr) dump_call_remove_pages_callbacks;
    
    // [IopDuplicateDetection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78cb94, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x834184, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x796934, 0x1fe000 bytes
    //
    _q45(sdk::unknown_ptr) duplicate_detection;
    
    // [IopEfiStatusToNTSTATUS]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d464, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89718c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94aed4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89593c, 0x1fe000 bytes
    //
    _q46(sdk::unknown_ptr) efi_status_to_ntstatus;
    
    // [IopEjectDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ed94, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afe00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961b20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae5b0, 0x1fe000 bytes
    //
    _q47(sdk::unknown_ptr) eject_device;
    
    // [IopEnableTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7858, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fa928, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541ee8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa6e8, 0x1fe000 bytes
    //
    _q48(sdk::unknown_ptr) enable_timer;
    
    // [IopEnumerateEnvironmentVariablesHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d64c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8973a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86fac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x895b50, 0x1fe000 bytes
    //
    _q49(sdk::unknown_ptr) enumerate_environment_variables_hal;
    
    // [IopEnumerateEnvironmentVariablesSysEnv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d660, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8973d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b0b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x895b80, 0x1fe000 bytes
    //
    _q50(sdk::unknown_ptr) enumerate_environment_variables_sys_env;
    
    // [IopEnumerateEnvironmentVariablesTrEE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d6e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b140, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x895c10, 0x1fe000 bytes
    //
    _q51(sdk::unknown_ptr) enumerate_environment_variables_tr_ee;
    
    // [IopEnumerateRelations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4301b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b4f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fbfcc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733580, 0x1fe000 bytes
    //
    _q52(sdk::unknown_ptr) enumerate_relations;
    
    // [IopErrorLogAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cb0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d408, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45760, 0x1fe000 bytes
    //
    _q53(sdk::unknown_ptr) error_log_allocation;
    
    // [IopErrorLogDisabledThisBoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32140c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4564d, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d278, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455e5, 0x1fe000 bytes
    //
    _q54(sdk::unknown_ptr) error_log_disabled_this_boot;
    
    // [IopErrorLogDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdd50, 0x32828 bytes
    // ntoskrnl.exe .text:0x504250, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54b3e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x504010, 0x1fe000 bytes
    //
    _q55(sdk::unknown_ptr) error_log_dpc;
    
    // [IopErrorLogGetEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12dab0, 0x32828 bytes
    // ntoskrnl.exe .text:0x36cc28, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37fae0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36dfa8, 0x1fe000 bytes
    //
    _q56(sdk::unknown_ptr) error_log_get_entry;
    
    // [IopErrorLogListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3217c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45bb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a60, 0x1fe000 bytes
    //
    _q57(sdk::unknown_ptr) error_log_list_head;
    
    // [IopErrorLogLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be180, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22180, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48180, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22180, 0x1fe000 bytes
    //
    _q58(sdk::unknown_ptr) error_log_lock;
    
    // [IopErrorLogQueueRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d1b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x896b34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94beb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8952e4, 0x1fe000 bytes
    //
    _q59(sdk::unknown_ptr) error_log_queue_request;
    
    // [IopErrorLogRequeueEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdd94, 0x32828 bytes
    // ntoskrnl.exe .text:0x50429c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54b42c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50405c, 0x1fe000 bytes
    //
    _q60(sdk::unknown_ptr) error_log_requeue_entry;
    
    // [IopErrorLogSession]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33ee60, 0x32828 bytes
    // ntoskrnl.exe .data:0xcec800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7b68, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcec800, 0x1fe000 bytes
    //
    _q61(sdk::unknown_ptr) error_log_session;
    
    // [IopErrorLogSessionPending]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32140d, 0x32828 bytes
    // ntoskrnl.exe .data:0xc4564e, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d279, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455e6, 0x1fe000 bytes
    //
    _q62(sdk::unknown_ptr) error_log_session_pending;
    
    // [IopErrorLogThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x532ac4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x735cc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e22e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73d900, 0x1fe000 bytes
    //
    _q63(sdk::unknown_ptr) error_log_thread;
    
    // [IopErrorLogWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321420, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45660, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d280, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45600, 0x1fe000 bytes
    //
    _q64(sdk::unknown_ptr) error_log_work_item;
    
    // [IopEtwEnableCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6266a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ea30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x93ff30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d1e0, 0x1fe000 bytes
    //
    _q65(sdk::unknown_ptr) etw_enable_callback;
    
    // [IopExceptionFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7900, 0x32828 bytes
    // ntoskrnl.exe .text:0x4faa38, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x541ff8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa7f8, 0x1fe000 bytes
    //
    _q66(sdk::unknown_ptr) exception_filter;
    
    // [IopExecuteHardwareProfileChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x651de0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b5f84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x965d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b4734, 0x1fe000 bytes
    //
    _q67(sdk::unknown_ptr) execute_hardware_profile_change;
    
    // [IopExecuteHwpDefaultSelect]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571dd0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a0f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809740, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711b40, 0x1fe000 bytes
    //
    _q68(sdk::unknown_ptr) execute_hwp_default_select;
    
    // [IopFailZeroAccessCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9b5c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc11ea8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0caec, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc11f0c, 0x1fe000 bytes
    //
    _q69(sdk::unknown_ptr) fail_zero_access_create;
    
    // [IopFastQueryNetworkAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62919c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8915c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942618, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88fd78, 0x1fe000 bytes
    //
    _q70(sdk::unknown_ptr) fast_query_network_attributes;
    
    // [IopFetchConfigurationInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d15c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53d0c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48ff8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53ba8, 0x1fe000 bytes
    //
    _q71(sdk::unknown_ptr) fetch_configuration_information;
    
    // [IopFileMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980730, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f010, 0x1fe000 bytes
    //
    _q72(sdk::unknown_ptr) file_mapping;
    
    // [IopFileObjectRevoked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf8250, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a957c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ca10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x205670, 0x1fe000 bytes
    //
    _q73(sdk::function<uint8_t(struct nt::file_object_t*)>*) file_object_revoked;
    
    // [IopFileUtilClearAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650f8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b175c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9635b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8aff0c, 0x1fe000 bytes
    //
    _q74(sdk::unknown_ptr) file_util_clear_attributes;
    
    // [IopFileUtilRename]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a5188, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6bc60, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a78c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b558, 0x1fe000 bytes
    //
    _q75(sdk::unknown_ptr) file_util_rename;
    
    // [IopFileUtilWalkDirectoryTreeBottomUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x651094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75fa18, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80e7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767468, 0x1fe000 bytes
    //
    _q76(sdk::unknown_ptr) file_util_walk_directory_tree_bottom_up;
    
    // [IopFileUtilWalkDirectoryTreeHelper]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6512b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75fbb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80e944, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x767600, 0x1fe000 bytes
    //
    _q77(sdk::unknown_ptr) file_util_walk_directory_tree_helper;
    
    // [IopFileUtilWalkDirectoryTreeTopDown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bc794, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8ff70, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb811bc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8f1f0, 0x1fe000 bytes
    //
    _q78(sdk::unknown_ptr) file_util_walk_directory_tree_top_down;
    
    // [IopFillTriageDumpDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c9ee0, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fdf80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53fcc8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fdd40, 0x1fe000 bytes
    //
    _q79(sdk::unknown_ptr) fill_triage_dump_data_blocks;
    
    // [IopFilterResourceRequirementsCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434300, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x730c50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x738c60, 0x1fe000 bytes
    //
    _q80(sdk::unknown_ptr) filter_resource_requirements_call;
    
    // [IopFindDiskIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79080, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334e40, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db0d0, 0x1fe000 bytes
    //
    _q81(sdk::unknown_ptr) find_disk_io_attribution;
    
    // [IopFindLegacyBusDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c2ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73245c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa51c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a46c, 0x1fe000 bytes
    //
    _q82(sdk::unknown_ptr) find_legacy_bus_device_node;
    
    // [IopFindMatchingComponentsLengthR]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e4ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898384, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942cb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896b34, 0x1fe000 bytes
    //
    _q83(sdk::unknown_ptr) find_matching_components_length_r;
    
    // [IopFindPassiveInterruptBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d0394, 0x32828 bytes
    // ntoskrnl.exe .text:0x507378, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8270, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507138, 0x1fe000 bytes
    //
    _q84(sdk::unknown_ptr) find_passive_interrupt_block;
    
    // [IopFindPassiveInterruptBlockLocked]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d03c4, 0x32828 bytes
    // ntoskrnl.exe .text:0x50742c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d82d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5071ec, 0x1fe000 bytes
    //
    _q85(sdk::unknown_ptr) find_passive_interrupt_block_locked;
    
    // [IopFindResourceHandlerInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c260, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7323cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa48c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a3dc, 0x1fe000 bytes
    //
    _q86(sdk::unknown_ptr) find_resource_handler_info;
    
    // [IopFindSystemDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e448, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8982d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c16c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896a84, 0x1fe000 bytes
    //
    _q87(sdk::unknown_ptr) find_system_device;
    
    // [IopFreeBackpocketIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7938, 0x32828 bytes
    // ntoskrnl.exe .text:0x4faa8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54204c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa84c, 0x1fe000 bytes
    //
    _q88(sdk::unknown_ptr) free_backpocket_irp;
    
    // [IopFreeBandwidthContract]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e564, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898510, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94c21c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896cc0, 0x1fe000 bytes
    //
    _q89(sdk::unknown_ptr) free_bandwidth_contract;
    
    // [IopFreeCompletionListPackets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46bc00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5ef568, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ad684, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x643d28, 0x1fe000 bytes
    //
    _q90(sdk::unknown_ptr) free_completion_list_packets;
    
    // [IopFreeGenericTableEntry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88eaf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940010, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d2a0, 0x1fe000 bytes
    //
    _q91(sdk::unknown_ptr) free_generic_table_entry;
    
    // [IopFreeIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x4a840, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d31c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d3bb0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2541e0, 0x1fe000 bytes
    //
    _q92(sdk::unknown_ptr) free_irp;
    
    // [IopFreeIrpExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd33f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x23f74c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x208e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2eccdc, 0x1fe000 bytes
    //
    _q93(sdk::unknown_ptr) free_irp_extension;
    
    // [IopFreeMiniCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x46bc80, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6d6320, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6ad4c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x62c760, 0x1fe000 bytes
    //
    _q94(sdk::unknown_ptr) free_mini_completion_packet;
    
    // [IopFreePoDeviceNotifyListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ce5b0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9940c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8a5a4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9930d8, 0x1fe000 bytes
    //
    _q95(sdk::unknown_ptr) free_po_device_notify_list_head;
    
    // [IopFreeRelationList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x43031c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72c298, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc168, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7329f0, 0x1fe000 bytes
    //
    _q96(sdk::unknown_ptr) free_relation_list;
    
    // [IopFreeReqAlternative]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b22c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7331bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9398, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b1cc, 0x1fe000 bytes
    //
    _q97(sdk::unknown_ptr) free_req_alternative;
    
    // [IopFreeReqList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b1dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733164, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d9340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b174, 0x1fe000 bytes
    //
    _q98(sdk::unknown_ptr) free_req_list;
    
    // [IopFreeReserveIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7998, 0x32828 bytes
    // ntoskrnl.exe .text:0x4faafc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5420bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa8bc, 0x1fe000 bytes
    //
    _q99(sdk::unknown_ptr) free_reserve_irp;
    
    // [IopFreeWaitCompletionPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfee34, 0x32828 bytes
    // ntoskrnl.exe .text:0x24e5a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x359f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2fbe70, 0x1fe000 bytes
    //
    _r00(sdk::unknown_ptr) free_wait_completion_packet;
    
    // [IopFsNotifyChangeQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321770, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d660, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459f0, 0x1fe000 bytes
    //
    _r01(sdk::unknown_ptr) fs_notify_change_queue_head;
    
    // [IopFsRegistrationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327120, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50534, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a110, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50534, 0x1fe000 bytes
    //
    _r02(sdk::unknown_ptr) fs_registration_in_progress;
    
    // [IopFsRegistrationOps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321548, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45840, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d488, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457e0, 0x1fe000 bytes
    //
    _r03(sdk::unknown_ptr) fs_registration_ops;
    
    // [IopFunctionPointerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321798, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45aa8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d690, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a30, 0x1fe000 bytes
    //
    _r04(sdk::unknown_ptr) function_pointer_lock;
    
    // [IopFunctionPointerMask]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34230c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4864, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172c4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4874, 0x1fe000 bytes
    //
    _r05(sdk::unknown_ptr) function_pointer_mask;
    
    // [IopGenericPackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a3a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711980, 0x1fe000 bytes
    //
    _r06(sdk::unknown_ptr) generic_pack_resource;
    
    // [IopGenericScoreRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54e0fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7aa040, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866cc0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b19c0, 0x1fe000 bytes
    //
    _r07(sdk::unknown_ptr) generic_score_requirement;
    
    // [IopGenericTranslateOrdering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ddb0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79ffb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8300a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a81d0, 0x1fe000 bytes
    //
    _r08(sdk::unknown_ptr) generic_translate_ordering;
    
    // [IopGenericUnpackRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54f0ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a71f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85b620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7af310, 0x1fe000 bytes
    //
    _r09(sdk::unknown_ptr) generic_unpack_requirement;
    
    // [IopGenericUnpackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633934, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0310, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89eac0, 0x1fe000 bytes
    //
    _r10(sdk::unknown_ptr) generic_unpack_resource;
    
    // [IopGetBasicInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e8ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65ea44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x766bd4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ed68, 0x1fe000 bytes
    //
    _r11(sdk::unknown_ptr) get_basic_information_file;
    
    // [IopGetBootDiskInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7bb37c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa8e50c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb7f74c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa8d78c, 0x1fe000 bytes
    //
    _r12(sdk::unknown_ptr) get_boot_disk_information;
    
    // [IopGetBootDiskInformationLite]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78f4e0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa40970, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb2f618, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa47720, 0x1fe000 bytes
    //
    _r13(sdk::unknown_ptr) get_boot_disk_information_lite;
    
    // [IopGetDeviceAttachmentBase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108994, 0x32828 bytes
    // ntoskrnl.exe .text:0x256adc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc3dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33de8c, 0x1fe000 bytes
    //
    _r14(sdk::unknown_ptr) get_device_attachment_base;
    
    // [IopGetDeviceInterfaces]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4386c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5e644c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x728698, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b372c, 0x1fe000 bytes
    //
    _r15(sdk::unknown_ptr) get_device_interfaces;
    
    // [IopGetDevicePDO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x108938, 0x32828 bytes
    // ntoskrnl.exe .text:0x256a78, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2fc378, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33de28, 0x1fe000 bytes
    //
    _r16(sdk::unknown_ptr) get_device_pdo;
    
    // [IopGetDriverNameFromKeyNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f8694, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71f9c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7348e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7277e0, 0x1fe000 bytes
    //
    _r17(sdk::unknown_ptr) get_driver_name_from_key_node;
    
    // [IopGetDriverPathInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c79fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fab74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542134, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fa934, 0x1fe000 bytes
    //
    _r18(sdk::unknown_ptr) get_driver_path_information;
    
    // [IopGetEnvironmentVariableHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62dae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8978a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x789390, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896050, 0x1fe000 bytes
    //
    _r19(sdk::unknown_ptr) get_environment_variable_hal;
    
    // [IopGetEnvironmentVariableSysEnv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62db04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8978d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b5c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896080, 0x1fe000 bytes
    //
    _r20(sdk::unknown_ptr) get_environment_variable_sys_env;
    
    // [IopGetEnvironmentVariableTrEE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62dc50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b730, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8961e0, 0x1fe000 bytes
    //
    _r21(sdk::unknown_ptr) get_environment_variable_tr_ee;
    
    // [IopGetFileInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4aca1c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60f5e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70ebfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5daf84, 0x1fe000 bytes
    //
    _r22(sdk::unknown_ptr) get_file_information;
    
    // [IopGetFileObjectExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x101430, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f584, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d52d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281b14, 0x1fe000 bytes
    //
    _r23(sdk::unknown_ptr) get_file_object_extension;
    
    // [IopGetFileVolumeNameInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcc504, 0x32828 bytes
    // ntoskrnl.exe .text:0x2650a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x37e0ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31542c, 0x1fe000 bytes
    //
    _r24(sdk::unknown_ptr) get_file_volume_name_information;
    
    // [IopGetFsRegistrationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbf94, 0x32828 bytes
    // ntoskrnl.exe .text:0x5007c8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544168, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500588, 0x1fe000 bytes
    //
    _r25(sdk::unknown_ptr) get_fs_registration_in_progress;
    
    // [IopGetInterruptConnectionData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a3a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742c1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ef3c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a85c, 0x1fe000 bytes
    //
    _r26(sdk::unknown_ptr) get_interrupt_connection_data;
    
    // [IopGetLegacyVetoListDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f66e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x604c04, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4df0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7104f4, 0x1fe000 bytes
    //
    _r27(sdk::unknown_ptr) get_legacy_veto_list_device_node;
    
    // [IopGetLegacyVetoListDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a8af4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6c0a28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x697330, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x61574c, 0x1fe000 bytes
    //
    _r28(sdk::unknown_ptr) get_legacy_veto_list_drivers;
    
    // [IopGetMaxValidMemorySize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca018, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe12c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53fe90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fdeec, 0x1fe000 bytes
    //
    _r29(sdk::unknown_ptr) get_max_valid_memory_size;
    
    // [IopGetModeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48136c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x650990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c8b7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c48a0, 0x1fe000 bytes
    //
    _r30(sdk::unknown_ptr) get_mode_information;
    
    // [IopGetMountFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xe01b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da200, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x375430, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x242060, 0x1fe000 bytes
    //
    _r31(sdk::unknown_ptr) get_mount_flag;
    
    // [IopGetNetworkOpenInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5710d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8983f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x942d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896ba0, 0x1fe000 bytes
    //
    _r32(sdk::unknown_ptr) get_network_open_information;
    
    // [IopGetNumaNodeInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a6e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892b98, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x945be0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x891348, 0x1fe000 bytes
    //
    _r33(sdk::unknown_ptr) get_numa_node_information;
    
    // [IopGetPhysicalMemoryBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x147e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c5d54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cc6b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c6c24, 0x1fe000 bytes
    //
    _r34(sdk::unknown_ptr) get_physical_memory_block;
    
    // [IopGetRegistryKeyInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52f820, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74d3b4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734e10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x754ff4, 0x1fe000 bytes
    //
    _r35(sdk::unknown_ptr) get_registry_key_information;
    
    // [IopGetRegistryValue]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f8848, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71fb58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x734a8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727978, 0x1fe000 bytes
    //
    _r36(sdk::unknown_ptr) get_registry_value;
    
    // [IopGetRegistryValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52f8cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x76e964, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7763d4, 0x1fe000 bytes
    //
    _r37(sdk::unknown_ptr) get_registry_values;
    
    // [IopGetRelatedFileName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626788, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5cd5b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x676308, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5cde58, 0x1fe000 bytes
    //
    _r38(sdk::unknown_ptr) get_related_file_name;
    
    // [IopGetRootDevices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f89b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72ecbc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7becbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736ccc, 0x1fe000 bytes
    //
    _r39(sdk::unknown_ptr) get_root_devices;
    
    // [IopGetSessionIdFromPDO]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434d6c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x723250, 0x1fe000 bytes
    //
    _r40(sdk::unknown_ptr) get_session_id_from_pdo;
    
    // [IopGetSessionIdFromSymbolicName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x533568, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b2b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f080c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7230d8, 0x1fe000 bytes
    //
    _r41(sdk::unknown_ptr) get_session_id_from_symbolic_name;
    
    // [IopGetSetObjectId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47feec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x637e68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7decf8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b5528, 0x1fe000 bytes
    //
    _r42(sdk::unknown_ptr) get_set_object_id;
    
    // [IopGetSetSecurityObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4acfc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6bd1c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7389d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5e3390, 0x1fe000 bytes
    //
    _r43(sdk::unknown_ptr) get_set_security_object;
    
    // [IopGetSetSpecificExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x100df4, 0x32828 bytes
    // ntoskrnl.exe .text:0x30f494, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d6e30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x281a24, 0x1fe000 bytes
    //
    _r44(sdk::unknown_ptr) get_set_specific_extension;
    
    // [IopGetSetStreamIdentifier]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cbfc0, 0x32828 bytes
    // ntoskrnl.exe .text:0x5007fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54419c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5005bc, 0x1fe000 bytes
    //
    _r45(sdk::unknown_ptr) get_set_stream_identifier;
    
    // [IopGetVolumeId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626998, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7170f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940030, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71eb30, 0x1fe000 bytes
    //
    _r46(sdk::unknown_ptr) get_volume_id;
    
    // [IopGraftName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531344, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7baa6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cda10, 0x1fe000 bytes
    //
    _r47(sdk::unknown_ptr) graft_name;
    
    // [IopGroupIndex]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213b8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc455c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d158, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45568, 0x1fe000 bytes
    //
    _r48(sdk::unknown_ptr) group_index;
    
    // [IopGroupListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc455b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d148, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45570, 0x1fe000 bytes
    //
    _r49(sdk::unknown_ptr) group_list_head;
    
    // [IopGroupTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3213c0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc455c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d150, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45578, 0x1fe000 bytes
    //
    _r50(sdk::unknown_ptr) group_table;
    
    // [IopHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3219e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45cc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d980, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45c80, 0x1fe000 bytes
    //
    _r51(sdk::unknown_ptr) hard_error;
    
    // [IopHardErrorThread]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626acc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88eb10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940190, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d2c0, 0x1fe000 bytes
    //
    _r52(sdk::unknown_ptr) hard_error_thread;
    
    // [IopIncDisableableDepends]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x567008, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a78e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85975c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afa08, 0x1fe000 bytes
    //
    _r53(sdk::unknown_ptr) inc_disableable_depends;
    
    // [IopIncrementDeviceObjectRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf6080, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d47a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4d50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x255810, 0x1fe000 bytes
    //
    _r54(sdk::unknown_ptr) increment_device_object_ref_count;
    
    // [IopIncrementVpbRefCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd6d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x211874, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0bf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f584, 0x1fe000 bytes
    //
    _r55(sdk::unknown_ptr) increment_vpb_ref_count;
    
    // [IopInitActivityIdIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7ae4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fac74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542234, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4faa34, 0x1fe000 bytes
    //
    _r56(sdk::unknown_ptr) init_activity_id_irp;
    
    // [IopInitCrashDumpDuringSysInit]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78e4f4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa69e20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb365c8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa694f8, 0x1fe000 bytes
    //
    _r57(sdk::unknown_ptr) init_crash_dump_during_sys_init;
    
    // [IopInitCrashDumpRegCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79aecc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa63ca0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4ca70, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5fb70, 0x1fe000 bytes
    //
    _r58(sdk::unknown_ptr) init_crash_dump_reg_callback;
    
    // [IopInitDumpCapsuleSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149b0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8ef0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e70d4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9dc0, 0x1fe000 bytes
    //
    _r59(sdk::unknown_ptr) init_dump_capsule_support;
    
    // [IopInitHalDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce538, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546b0, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f698, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546b0, 0x1fe000 bytes
    //
    _r60(sdk::unknown_ptr) init_hal_device_node;
    
    // [IopInitHalResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce528, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd54690, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f678, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd54690, 0x1fe000 bytes
    //
    _r61(sdk::unknown_ptr) init_hal_resources;
    
    // [IopInitReservedResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INITDATA:0x7ce530, 0x32828 bytes
    // ntoskrnl.exe INITDATA:0xd546a8, 0x1fe000 bytes
    // ntoskrnl.exe INITDATA:0xd7f690, 0x1fd000 bytes
    // ntoskrnl.exe INITDATA:0xd546a8, 0x1fe000 bytes
    //
    _r62(sdk::unknown_ptr) init_reserved_resource_list;
    
    // [IopInitSystemCompletedEnoughForReInitRoutines]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324310, 0x32828 bytes
    // ntoskrnl.exe .data:0xc503c0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6440c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc503c0, 0x1fe000 bytes
    //
    _r63(sdk::unknown_ptr) init_system_completed_enough_for_re_init_routines;
    
    // [IopInitializeActiveConnectBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x52a91c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x742b24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7eddfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74a764, 0x1fe000 bytes
    //
    _r64(sdk::unknown_ptr) initialize_active_connect_block;
    
    // [IopInitializeBootDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77fd24, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa56cdc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb44d30, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56b7c, 0x1fe000 bytes
    //
    _r65(sdk::unknown_ptr) initialize_boot_drivers;
    
    // [IopInitializeBootLogging]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626b78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88ebd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d380, 0x1fe000 bytes
    //
    _r66(sdk::unknown_ptr) initialize_boot_logging;
    
    // [IopInitializeBuiltinDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x780684, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa5776c, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb45730, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5760c, 0x1fe000 bytes
    //
    _r67(sdk::unknown_ptr) initialize_builtin_driver;
    
    // [IopInitializeCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55d328, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7990f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x844f5c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79ec48, 0x1fe000 bytes
    //
    _r68(sdk::unknown_ptr) initialize_crash_dump;
    
    // [IopInitializeDeviceInstanceKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f741c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72ef24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bef28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736f34, 0x1fe000 bytes
    //
    _r69(sdk::unknown_ptr) initialize_device_instance_key;
    
    // [IopInitializeInMemoryDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca118, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe2b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x53ff80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe070, 0x1fe000 bytes
    //
    _r70(sdk::unknown_ptr) initialize_in_memory_dump_data;
    
    // [IopInitializeIoRate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x141c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7af4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b2170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bf57c, 0x1fe000 bytes
    //
    _r71(sdk::unknown_ptr) initialize_io_rate;
    
    // [IopInitializeOfflineCrashDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x138d9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4a18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3b47d8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5788, 0x1fe000 bytes
    //
    _r72(sdk::unknown_ptr) initialize_offline_crash_dump;
    
    // [IopInitializePassiveInterruptServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a389c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa69fdc, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb56f40, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa696b4, 0x1fe000 bytes
    //
    _r73(sdk::unknown_ptr) initialize_passive_interrupt_services;
    
    // [IopInitializePlugPlayServices]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7817bc, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa4ac58, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb4336c, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa4aadc, 0x1fe000 bytes
    //
    _r74(sdk::unknown_ptr) initialize_plug_play_services;
    
    // [IopInitializeReserveIrps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a4974, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6b750, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5a4fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6b048, 0x1fe000 bytes
    //
    _r75(sdk::unknown_ptr) initialize_reserve_irps;
    
    // [IopInitializeResourceMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78ea24, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa36d80, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb39b44, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa3722c, 0x1fe000 bytes
    //
    _r76(sdk::unknown_ptr) initialize_resource_map;
    
    // [IopInitializeSessionNotifications]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a935c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa70068, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb602b0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6f3ac, 0x1fe000 bytes
    //
    _r77(sdk::unknown_ptr) initialize_session_notifications;
    
    // [IopInitializeSystemDrivers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f944, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa568a8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb448fc, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56748, 0x1fe000 bytes
    //
    _r78(sdk::unknown_ptr) initialize_system_drivers;
    
    // [IopInitializeSystemVariableService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a290, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c94f8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e781c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca3e8, 0x1fe000 bytes
    //
    _r79(sdk::unknown_ptr) initialize_system_variable_service;
    
    // [IopInsertLegacyBusDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5686fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a88c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b0244, 0x1fe000 bytes
    //
    _r80(sdk::unknown_ptr) insert_legacy_bus_device_node;
    
    // [IopInsertPassiveInterruptBlock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d03f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x507464, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7c30, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507224, 0x1fe000 bytes
    //
    _r81(sdk::unknown_ptr) insert_passive_interrupt_block;
    
    // [IopInsertRemoveDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2564, 0x32828 bytes
    // ntoskrnl.exe .text:0x211eec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2ed62c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33fbfc, 0x1fe000 bytes
    //
    _r82(sdk::unknown_ptr) insert_remove_device;
    
    // [IopInterlockedDecrementUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7ca8, 0x32828 bytes
    // ntoskrnl.exe .text:0x390e8c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a919c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x391edc, 0x1fe000 bytes
    //
    _r83(sdk::unknown_ptr) interlocked_decrement_ulong;
    
    // [IopInterlockedIncrementUlong]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd714, 0x32828 bytes
    // ntoskrnl.exe .text:0x2118b8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0c34, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f5c8, 0x1fe000 bytes
    //
    _r84(sdk::unknown_ptr) interlocked_increment_ulong;
    
    // [IopInterlockedInsertHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137eb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c0258, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x381fd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c1068, 0x1fe000 bytes
    //
    _r85(sdk::unknown_ptr) interlocked_insert_head_list;
    
    // [IopInterlockedInsertTailList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x146c44, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dca20, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c4d90, 0x1fe000 bytes
    //
    _r86(sdk::unknown_ptr) interlocked_insert_tail_list;
    
    // [IopInterlockedRemoveHeadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd01ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x37b614, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x374050, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37c994, 0x1fe000 bytes
    //
    _r87(sdk::unknown_ptr) interlocked_remove_head_list;
    
    // [IopInvalidDeviceRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc5bf8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2573a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3697d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x306e00, 0x1fe000 bytes
    //
    _r88(sdk::unknown_ptr) invalid_device_request;
    
    // [IopInvalidateVolumesForDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x626da8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75eb80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x80df98, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7665d0, 0x1fe000 bytes
    //
    _r89(sdk::unknown_ptr) invalidate_volumes_for_device;
    
    // [IopIoRateExtensionHost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ca8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457b8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45758, 0x1fe000 bytes
    //
    _r90(sdk::unknown_ptr) io_rate_extension_host;
    
    // [IopIoRateHostTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4628, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x59c0, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x5b10, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x59e0, 0x1fe000 bytes
    //
    _r91(sdk::unknown_ptr) io_rate_host_table;
    
    // [IopIoRateStartRateControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x796f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x2007a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x336984, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2007a8, 0x1fe000 bytes
    //
    _r92(sdk::unknown_ptr) io_rate_start_rate_control;
    
    // [IopIrpCompletionTimeoutInSeconds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x327124, 0x32828 bytes
    // ntoskrnl.exe .data:0xc50ac8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc6a898, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc50ac8, 0x1fe000 bytes
    //
    _r93(sdk::unknown_ptr) irp_completion_timeout_in_seconds;
    
    // [IopIrpCreditsEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x33e55c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcebf78, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0bb38, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcebf78, 0x1fe000 bytes
    //
    _r94(sdk::unknown_ptr) irp_credits_enabled;
    
    // [IopIrpExtensionControl]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7cd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fae70, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542440, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fac30, 0x1fe000 bytes
    //
    _r95(sdk::unknown_ptr) irp_extension_control;
    
    // [IopIrpExtensionStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x342310, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4868, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172c8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4868, 0x1fe000 bytes
    //
    _r96(sdk::unknown_ptr) irp_extension_status;
    
    // [IopIrpHasExtensionType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee538, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fb60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2092e0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed0f0, 0x1fe000 bytes
    //
    _r97(sdk::unknown_ptr) irp_has_extension_type;
    
    // [IopIrpHasValidCombinationOfExtensionTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cce5c, 0x32828 bytes
    // ntoskrnl.exe .text:0x501c60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45dcca, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501a20, 0x1fe000 bytes
    //
    _r98(sdk::unknown_ptr) irp_has_valid_combination_of_extension_types;
    
    // [IopIrpStackProfilerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3218e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45bc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d800, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45b80, 0x1fe000 bytes
    //
    _r99(sdk::unknown_ptr) irp_stack_profiler_dpc;
    
    // [IopIrpStackProfilerDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc9594, 0x32828 bytes
    // ntoskrnl.exe .text:0x243420, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a510, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3238e0, 0x1fe000 bytes
    //
    _s00(sdk::unknown_ptr) irp_stack_profiler_dpc_routine;
    
    // [IopIrpStackProfilerFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321560, 0x32828 bytes
    // ntoskrnl.exe .data:0xc458c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d498, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc457f0, 0x1fe000 bytes
    //
    _s01(sdk::unknown_ptr) irp_stack_profiler_flags;
    
    // [IopIrpStackProfilerMinSizeThreshold]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3218c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45ba8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d840, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a70, 0x1fe000 bytes
    //
    _s02(sdk::unknown_ptr) irp_stack_profiler_min_size_threshold;
    
    // [IopIrpStackProfilerSampleSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3218cc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45c00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d844, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45b68, 0x1fe000 bytes
    //
    _s03(sdk::unknown_ptr) irp_stack_profiler_sample_size;
    
    // [IopIrqInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5497c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ec10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x839bd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7889a8, 0x1fe000 bytes
    //
    _s04(sdk::unknown_ptr) irq_initialize;
    
    // [IopIrqPackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49d120, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709fc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711a10, 0x1fe000 bytes
    //
    _s05(sdk::unknown_ptr) irq_pack_resource;
    
    // [IopIrqScoreRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1dc0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a000, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809650, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711a50, 0x1fe000 bytes
    //
    _s06(sdk::unknown_ptr) irq_score_requirement;
    
    // [IopIrqUnpackRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x709f70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8095c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7119c0, 0x1fe000 bytes
    //
    _s07(sdk::unknown_ptr) irq_unpack_requirement;
    
    // [IopIrqUnpackResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a010, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711a60, 0x1fe000 bytes
    //
    _s08(sdk::unknown_ptr) irq_unpack_resource;
    
    // [IopIsActivityTracingEventEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x110ca4, 0x32828 bytes
    // ntoskrnl.exe .text:0x394d18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x399d98, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395d78, 0x1fe000 bytes
    //
    _s09(sdk::unknown_ptr) is_activity_tracing_event_enabled;
    
    // [IopIsAddressRangeValid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14973c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c4dfc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dccd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c5b6c, 0x1fe000 bytes
    //
    _s10(sdk::unknown_ptr) is_address_range_valid;
    
    // [IopIsBitlockerOn]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149b68, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c8f54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7128, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c9e24, 0x1fe000 bytes
    //
    _s11(sdk::unknown_ptr) is_bitlocker_on;
    
    // [IopIsDescendantNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x430474, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b68c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fc11c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733714, 0x1fe000 bytes
    //
    _s12(sdk::unknown_ptr) is_descendant_node;
    
    // [IopIsFileOpenOrSection]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a748, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892c10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891200, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8913c0, 0x1fe000 bytes
    //
    _s13(sdk::unknown_ptr) is_file_open_or_section;
    
    // [IopIsKnownGoodLegacyFsFilter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc120, 0x32828 bytes
    // ntoskrnl.exe .text:0x500af0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544494, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5008b0, 0x1fe000 bytes
    //
    _s14(sdk::unknown_ptr) is_known_good_legacy_fs_filter;
    
    // [IopIsNotNativeDriverImage]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627054, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88eddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94044c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d58c, 0x1fe000 bytes
    //
    _s15(sdk::unknown_ptr) is_not_native_driver_image;
    
    // [IopIsPciRootBus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633950, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0330, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89eae0, 0x1fe000 bytes
    //
    _s16(sdk::unknown_ptr) is_pci_root_bus;
    
    // [IopIsReportedAlready]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a07c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x78c8e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x833ed0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x796688, 0x1fe000 bytes
    //
    _s17(sdk::unknown_ptr) is_reported_already;
    
    // [IopIssueSystemEnvironmentCallout]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62ddc8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897bc0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b8d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896370, 0x1fe000 bytes
    //
    _s18(sdk::unknown_ptr) issue_system_environment_callout;
    
    // [IopIssueSystemEnvironmentRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62dde8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897be8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94b8f8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896398, 0x1fe000 bytes
    //
    _s19(sdk::unknown_ptr) issue_system_environment_request;
    
    // [IopIssueTrEERequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cea08, 0x32828 bytes
    // ntoskrnl.exe .text:0x504b30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5483cc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5048f0, 0x1fe000 bytes
    //
    _s20(sdk::unknown_ptr) issue_tr_ee_request;
    
    // [IopKeepAliveTracker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321a40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45d40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d900, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ce0, 0x1fe000 bytes
    //
    _s21(sdk::unknown_ptr) keep_alive_tracker;
    
    // [IopKeepAliveWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cca44, 0x32828 bytes
    // ntoskrnl.exe .text:0x501640, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501400, 0x1fe000 bytes
    //
    _s22(sdk::unknown_ptr) keep_alive_worker;
    
    // [IopLargeIrpLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341480, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee400, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee480, 0x1fe000 bytes
    //
    _s23(sdk::unknown_ptr) large_irp_lookaside_list;
    
    // [IopLargeIrpStackLocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321558, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f1c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6bc, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ebc, 0x1fe000 bytes
    //
    _s24(sdk::unknown_ptr) large_irp_stack_locations;
    
    // [IopLegacyBusInformationTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320600, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44820, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc447e0, 0x1fe000 bytes
    //
    _s25(sdk::unknown_ptr) legacy_bus_information_table;
    
    // [IopLegacyDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320720, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44800, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c400, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44900, 0x1fe000 bytes
    //
    _s26(sdk::unknown_ptr) legacy_device_node;
    
    // [IopLegacyResourceAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x549880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733570, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c588, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b580, 0x1fe000 bytes
    //
    _s27(sdk::unknown_ptr) legacy_resource_allocation;
    
    // [IopLinkTrackingPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ae0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45e00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5da00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45d60, 0x1fe000 bytes
    //
    _s28(sdk::unknown_ptr) link_tracking_packet;
    
    // [IopLinkTrackingPortObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321b20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45dc0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5da40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45dc0, 0x1fe000 bytes
    //
    _s29(sdk::unknown_ptr) link_tracking_port_object;
    
    // [IopLinkTrackingServiceEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74b038, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb28, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd538a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2cb28, 0x1fe000 bytes
    //
    _s30(sdk::unknown_ptr) link_tracking_service_event;
    
    // [IopLinkTrackingServiceObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74ad50, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c850, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd535e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2c850, 0x1fe000 bytes
    //
    _s31(sdk::unknown_ptr) link_tracking_service_object;
    
    // [IopLiveDumpAllocAndInitResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62b814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x893e7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x946f58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89262c, 0x1fe000 bytes
    //
    _s32(sdk::unknown_ptr) live_dump_alloc_and_init_resources;
    
    // [IopLiveDumpAllocateDumpBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62bdc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x894514, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9475c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x892cc4, 0x1fe000 bytes
    //
    _s33(sdk::unknown_ptr) live_dump_allocate_dump_buffers;
    
    // [IopLiveDumpAllocateMappingResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62bfa4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89512c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94875c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8938dc, 0x1fe000 bytes
    //
    _s34(sdk::unknown_ptr) live_dump_allocate_mapping_resources;
    
    // [IopLiveDumpBufferDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3da334, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a87bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa861c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a772c, 0x1fe000 bytes
    //
    _s35(sdk::unknown_ptr) live_dump_buffer_dump_data;
    
    // [IopLiveDumpCallRemovePagesCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3da4dc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a8980, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa863c8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a78f0, 0x1fe000 bytes
    //
    _s36(sdk::unknown_ptr) live_dump_call_remove_pages_callbacks;
    
    // [IopLiveDumpCaptureMemoryPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3da8b8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a8d24, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8676c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7c94, 0x1fe000 bytes
    //
    _s37(sdk::unknown_ptr) live_dump_capture_memory_pages;
    
    // [IopLiveDumpCheckTermination]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c088, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89521c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9488b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8939cc, 0x1fe000 bytes
    //
    _s38(sdk::unknown_ptr) live_dump_check_termination;
    
    // [IopLiveDumpContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x324318, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5148, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17bc0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5148, 0x1fe000 bytes
    //
    _s39(sdk::unknown_ptr) live_dump_context;
    
    // [IopLiveDumpCorralDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3daa30, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a8ff0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa86cf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7f60, 0x1fe000 bytes
    //
    _s40(sdk::unknown_ptr) live_dump_corral_dpc;
    
    // [IopLiveDumpCorralProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3daa98, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9060, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa86d60, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7fd0, 0x1fe000 bytes
    //
    _s41(sdk::unknown_ptr) live_dump_corral_processors;
    
    // [IopLiveDumpDiscardVirtualAddressRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c0b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89524c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9488e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8939fc, 0x1fe000 bytes
    //
    _s42(sdk::unknown_ptr) live_dump_discard_virtual_address_range;
    
    // [IopLiveDumpEndMirroringCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dabf8, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a92a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa86fa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8210, 0x1fe000 bytes
    //
    _s43(sdk::unknown_ptr) live_dump_end_mirroring_callback;
    
    // [IopLiveDumpEstimateMemoryPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3dae3c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a964c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8703c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a85bc, 0x1fe000 bytes
    //
    _s44(sdk::unknown_ptr) live_dump_estimate_memory_pages;
    
    // [IopLiveDumpEtwEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430d4, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41d0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16aa4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41d0, 0x1fe000 bytes
    //
    _s45(sdk::unknown_ptr) live_dump_etw_enabled;
    
    // [IopLiveDumpEtwRegHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e90, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41d8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16aa8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41d8, 0x1fe000 bytes
    //
    _s46(sdk::unknown_ptr) live_dump_etw_reg_handle;
    
    // [IopLiveDumpFreeDumpBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c140, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8952e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94897c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893a90, 0x1fe000 bytes
    //
    _s47(sdk::unknown_ptr) live_dump_free_dump_buffers;
    
    // [IopLiveDumpFreeMappingResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c1d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8953bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x948cb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893b6c, 0x1fe000 bytes
    //
    _s48(sdk::unknown_ptr) live_dump_free_mapping_resources;
    
    // [IopLiveDumpGetCapturePagesNoLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db01c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9c44, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa875fc, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8bb4, 0x1fe000 bytes
    //
    _s49(sdk::unknown_ptr) live_dump_get_capture_pages_no_lock;
    
    // [IopLiveDumpGetNtMergePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c3cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949058, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x893eb4, 0x1fe000 bytes
    //
    _s50(sdk::unknown_ptr) live_dump_get_nt_merge_pages;
    
    // [IopLiveDumpInitiateCorralStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db0cc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9d18, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa876c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8c88, 0x1fe000 bytes
    //
    _s51(sdk::unknown_ptr) live_dump_initiate_corral_state_change;
    
    // [IopLiveDumpIsTracingEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd760, 0x32828 bytes
    // ntoskrnl.exe .text:0x502910, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5467fc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5026d0, 0x1fe000 bytes
    //
    _s52(sdk::unknown_ptr) live_dump_is_tracing_enabled;
    
    // [IopLiveDumpIsUnderMemoryPressure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd77c, 0x32828 bytes
    // ntoskrnl.exe .text:0x502934, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546820, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5026f4, 0x1fe000 bytes
    //
    _s53(sdk::unknown_ptr) live_dump_is_under_memory_pressure;
    
    // [IopLiveDumpLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321460, 0x32828 bytes
    // ntoskrnl.exe .data:0xc456a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d2c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45640, 0x1fe000 bytes
    //
    _s54(sdk::unknown_ptr) live_dump_lock;
    
    // [IopLiveDumpLockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c43c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895988, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949358, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x894138, 0x1fe000 bytes
    //
    _s55(sdk::unknown_ptr) live_dump_lock_pages;
    
    // [IopLiveDumpMarkDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db108, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9db8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87764, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8d28, 0x1fe000 bytes
    //
    _s56(sdk::unknown_ptr) live_dump_mark_device_node;
    
    // [IopLiveDumpMarkImportantDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db160, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9e18, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa877c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8d88, 0x1fe000 bytes
    //
    _s57(sdk::unknown_ptr) live_dump_mark_important_dump_data;
    
    // [IopLiveDumpMarkLoadedModuleList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db248, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a9fdc, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87940, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a8f4c, 0x1fe000 bytes
    //
    _s58(sdk::unknown_ptr) live_dump_mark_loaded_module_list;
    
    // [IopLiveDumpMarkProcessorData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db300, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa098, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87a54, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9008, 0x1fe000 bytes
    //
    _s59(sdk::unknown_ptr) live_dump_mark_processor_data;
    
    // [IopLiveDumpMarkRequiredDumpData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db40c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa1ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87b68, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a911c, 0x1fe000 bytes
    //
    _s60(sdk::unknown_ptr) live_dump_mark_required_dump_data;
    
    // [IopLiveDumpMirrorPhysicalMemoryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db5a4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa3a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87d50, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9310, 0x1fe000 bytes
    //
    _s61(sdk::unknown_ptr) live_dump_mirror_physical_memory_callback;
    
    // [IopLiveDumpPopulateBitmapForDump]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db6a0, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa588, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa87f10, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a94f8, 0x1fe000 bytes
    //
    _s62(sdk::unknown_ptr) live_dump_populate_bitmap_for_dump;
    
    // [IopLiveDumpProcessCorralStateChange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db830, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa73c, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa880b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a96ac, 0x1fe000 bytes
    //
    _s63(sdk::unknown_ptr) live_dump_process_corral_state_change;
    
    // [IopLiveDumpReleaseResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c450, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8959ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949718, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89415c, 0x1fe000 bytes
    //
    _s64(sdk::unknown_ptr) live_dump_release_resources;
    
    // [IopLiveDumpResetCorralContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d65fc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa882d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9868, 0x1fe000 bytes
    //
    _s65(sdk::unknown_ptr) live_dump_reset_corral_context;
    
    // [IopLiveDumpStartDumpDataBuffering]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db8c4, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa918, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa882f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9888, 0x1fe000 bytes
    //
    _s66(sdk::unknown_ptr) live_dump_start_dump_data_buffering;
    
    // [IopLiveDumpStartMirroringCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db954, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa990, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa883a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9900, 0x1fe000 bytes
    //
    _s67(sdk::unknown_ptr) live_dump_start_mirroring_callback;
    
    // [IopLiveDumpTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd7b0, 0x32828 bytes
    // ntoskrnl.exe .text:0x502978, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546af8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502738, 0x1fe000 bytes
    //
    _s68(sdk::unknown_ptr) live_dump_trace;
    
    // [IopLiveDumpTraceBufferAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd7e0, 0x32828 bytes
    // ntoskrnl.exe .text:0x502a58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546bc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502818, 0x1fe000 bytes
    //
    _s69(sdk::unknown_ptr) live_dump_trace_buffer_allocation;
    
    // [IopLiveDumpTraceBufferEstimation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd898, 0x32828 bytes
    // ntoskrnl.exe .text:0x502b84, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x546cf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x502944, 0x1fe000 bytes
    //
    _s70(sdk::unknown_ptr) live_dump_trace_buffer_estimation;
    
    // [IopLiveDumpTraceDumpFileWriteEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd96c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5034c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547408, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503284, 0x1fe000 bytes
    //
    _s71(sdk::unknown_ptr) live_dump_trace_dump_file_write_end;
    
    // [IopLiveDumpTraceInterfaceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cda84, 0x32828 bytes
    // ntoskrnl.exe .text:0x5036dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54771c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50349c, 0x1fe000 bytes
    //
    _s72(sdk::unknown_ptr) live_dump_trace_interface_end;
    
    // [IopLiveDumpTraceInterfaceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdb14, 0x32828 bytes
    // ntoskrnl.exe .text:0x503784, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547920, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503544, 0x1fe000 bytes
    //
    _s73(sdk::unknown_ptr) live_dump_trace_interface_start;
    
    // [IopLiveDumpTraceMirroringPhase0End]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdb60, 0x32828 bytes
    // ntoskrnl.exe .text:0x503a68, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547c3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503828, 0x1fe000 bytes
    //
    _s74(sdk::unknown_ptr) live_dump_trace_mirroring_phase0_end;
    
    // [IopLiveDumpTraceMirroringPhase1End]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdba0, 0x32828 bytes
    // ntoskrnl.exe .text:0x503ac0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547c94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503880, 0x1fe000 bytes
    //
    _s75(sdk::unknown_ptr) live_dump_trace_mirroring_phase1_end;
    
    // [IopLiveDumpTraceMirroringStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdbe0, 0x32828 bytes
    // ntoskrnl.exe .text:0x503b18, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x547cec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5038d8, 0x1fe000 bytes
    //
    _s76(sdk::unknown_ptr) live_dump_trace_mirroring_start;
    
    // [IopLiveDumpTraceRemovePagesCallbackFailure]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdc28, 0x32828 bytes
    // ntoskrnl.exe .text:0x503ec4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548084, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503c84, 0x1fe000 bytes
    //
    _s77(sdk::unknown_ptr) live_dump_trace_remove_pages_callback_failure;
    
    // [IopLiveDumpTraceSystemQuiesceEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdcac, 0x32828 bytes
    // ntoskrnl.exe .text:0x503f58, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548118, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503d18, 0x1fe000 bytes
    //
    _s78(sdk::unknown_ptr) live_dump_trace_system_quiesce_end;
    
    // [IopLiveDumpTraceSystemQuiesceStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdcec, 0x32828 bytes
    // ntoskrnl.exe .text:0x503fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x548170, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503d70, 0x1fe000 bytes
    //
    _s79(sdk::unknown_ptr) live_dump_trace_system_quiesce_start;
    
    // [IopLiveDumpTracingControlCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdd2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3ca9b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea350, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cba80, 0x1fe000 bytes
    //
    _s80(sdk::unknown_ptr) live_dump_tracing_control_callback;
    
    // [IopLiveDumpUnLockPages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cdd40, 0x32828 bytes
    // ntoskrnl.exe .text:0x5041cc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5483ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x503f8c, 0x1fe000 bytes
    //
    _s81(sdk::unknown_ptr) live_dump_un_lock_pages;
    
    // [IopLiveDumpUncorralProcessors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3db964, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9aa9a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa883b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a9918, 0x1fe000 bytes
    //
    _s82(sdk::unknown_ptr) live_dump_uncorral_processors;
    
    // [IopLiveDumpValidateCancelObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c544, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895be0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949aa4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x894390, 0x1fe000 bytes
    //
    _s83(sdk::unknown_ptr) live_dump_validate_cancel_object;
    
    // [IopLiveDumpValidateDumpFileHandle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c5a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895c48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949b0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8943f8, 0x1fe000 bytes
    //
    _s84(sdk::unknown_ptr) live_dump_validate_dump_file_handle;
    
    // [IopLiveDumpValidateParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c5f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895ca4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949b70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x894454, 0x1fe000 bytes
    //
    _s85(sdk::unknown_ptr) live_dump_validate_parameters;
    
    // [IopLiveDumpWriteBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c6c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895d7c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949cb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89452c, 0x1fe000 bytes
    //
    _s86(sdk::unknown_ptr) live_dump_write_buffer;
    
    // [IopLiveDumpWriteDumpFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62c778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x895e40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x949d74, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8945f0, 0x1fe000 bytes
    //
    _s87(sdk::unknown_ptr) live_dump_write_dump_file;
    
    // [IopLiveDumpWriteSecondaryData]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62d094, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x896a08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94aaa8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8951b8, 0x1fe000 bytes
    //
    _s88(sdk::unknown_ptr) live_dump_write_secondary_data;
    
    // [IopLoadCrashdumpDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13001c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a29d8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cc554, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3f28, 0x1fe000 bytes
    //
    _s89(sdk::unknown_ptr) load_crashdump_driver;
    
    // [IopLoadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4f77a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71d928, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x723fc4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x725748, 0x1fe000 bytes
    //
    _s90(sdk::unknown_ptr) load_driver;
    
    // [IopLoadFileSystemDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627230, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x760704, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x817320, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x768154, 0x1fe000 bytes
    //
    _s91(sdk::unknown_ptr) load_file_system_driver;
    
    // [IopLoadUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499354, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x763d20, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cbf60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76afc0, 0x1fe000 bytes
    //
    _s92(sdk::unknown_ptr) load_unload_driver;
    
    // [IopLogAuditIoRegisterNotificationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5464a4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a01e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e6fb4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8404, 0x1fe000 bytes
    //
    _s93(sdk::unknown_ptr) log_audit_io_register_notification_event;
    
    // [IopLogBlockedDriverEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6272f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88efe4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940654, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d794, 0x1fe000 bytes
    //
    _s94(sdk::unknown_ptr) log_blocked_driver_event;
    
    // [IopMarkBootPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d9c4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa53ff0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb489d0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa53e90, 0x1fe000 bytes
    //
    _s95(sdk::unknown_ptr) mark_boot_partition;
    
    // [IopMarshalIds]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f058, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9406c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d808, 0x1fe000 bytes
    //
    _s96(sdk::unknown_ptr) marshal_ids;
    
    // [IopMaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121970, 0x32828 bytes
    // ntoskrnl.exe .text:0x388904, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3dbf1c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389374, 0x1fe000 bytes
    //
    _s97(sdk::unknown_ptr) mask_interrupt;
    
    // [IopMdlLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341300, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee480, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e240, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee400, 0x1fe000 bytes
    //
    _s98(sdk::unknown_ptr) mdl_lookaside_list;
    
    // [IopMediumIrpLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341400, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee380, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e3c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee500, 0x1fe000 bytes
    //
    _s99(sdk::unknown_ptr) medium_irp_lookaside_list;
    
    // [IopMediumIrpStackLocations]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32155c, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f18, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45eb8, 0x1fe000 bytes
    //
    _t00(sdk::unknown_ptr) medium_irp_stack_locations;
    
    // [IopMemFindSuitableRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d900, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x79a810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x84b280, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a1d90, 0x1fe000 bytes
    //
    _t01(sdk::unknown_ptr) mem_find_suitable_range;
    
    // [IopMemInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54ff50, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77eab4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8392d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x78884c, 0x1fe000 bytes
    //
    _t02(sdk::unknown_ptr) mem_initialize;
    
    // [IopMemQueryConflict]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633a40, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0430, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954180, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ebe0, 0x1fe000 bytes
    //
    _t03(sdk::unknown_ptr) mem_query_conflict;
    
    // [IopMergeRelationLists]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6509cc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afb68, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9618c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae318, 0x1fe000 bytes
    //
    _t04(sdk::unknown_ptr) merge_relation_lists;
    
    // [IopMountCompletionEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ac0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45de0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d9e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45da0, 0x1fe000 bytes
    //
    _t05(sdk::unknown_ptr) mount_completion_event;
    
    // [IopMountCompletionWaiters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34231c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4874, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd172d4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf4878, 0x1fe000 bytes
    //
    _t06(sdk::unknown_ptr) mount_completion_waiters;
    
    // [IopMountInitializeVpb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1b30, 0x32828 bytes
    // ntoskrnl.exe .text:0x2117c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f4d0, 0x1fe000 bytes
    //
    _t07(sdk::unknown_ptr) mount_initialize_vpb;
    
    // [IopMountVolume]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e4804, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x5f8a30, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67f87c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x701854, 0x1fe000 bytes
    //
    _t08(sdk::unknown_ptr) mount_volume;
    
    // [IopMountsInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32a4f8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdb248, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf7b60, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdb208, 0x1fe000 bytes
    //
    _t09(sdk::unknown_ptr) mounts_in_progress;
    
    // [IopNetworkFileSystemQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321720, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a30, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459c0, 0x1fe000 bytes
    //
    _t10(sdk::unknown_ptr) network_file_system_queue_head;
    
    // [IopNotifyAlreadyRegisteredFileSystems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545d08, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7abbe8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86233c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b3568, 0x1fe000 bytes
    //
    _t11(sdk::unknown_ptr) notify_already_registered_file_systems;
    
    // [IopNotifyLastChanceShutdownQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321760, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a70, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a00, 0x1fe000 bytes
    //
    _t12(sdk::unknown_ptr) notify_last_chance_shutdown_queue_head;
    
    // [IopNotifyShutdownQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321750, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d680, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc459d0, 0x1fe000 bytes
    //
    _t13(sdk::unknown_ptr) notify_shutdown_queue_head;
    
    // [IopNumTriageDumpDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321cdc, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5eba8, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc46ee0, 0x1fe000 bytes
    //
    _t14(sdk::unknown_ptr) num_triage_dump_data_blocks;
    
    // [IopNumberDeviceNodes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320810, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44a10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c610, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc449f0, 0x1fe000 bytes
    //
    _t15(sdk::unknown_ptr) number_device_nodes;
    
    // [IopOpenLinkOrRenameTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48e6a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65e7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76694c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x66ead0, 0x1fe000 bytes
    //
    _t16(sdk::unknown_ptr) open_link_or_rename_target;
    
    // [IopOpenRegistryKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x499498, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c86c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cc000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7544ac, 0x1fe000 bytes
    //
    _t17(sdk::unknown_ptr) open_registry_key;
    
    // [IopOpenRegistryKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x545ae0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x788e50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x83ae08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x792bf0, 0x1fe000 bytes
    //
    _t18(sdk::unknown_ptr) open_registry_key_ex;
    
    // [IopOpenSystemVariableDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62df24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897d2c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72810c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8964dc, 0x1fe000 bytes
    //
    _t19(sdk::unknown_ptr) open_system_variable_device;
    
    // [IopOplockFoExtLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32acc0, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdba00, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf8440, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdba80, 0x1fe000 bytes
    //
    _t20(sdk::unknown_ptr) oplock_fo_ext_lookaside_list;
    
    // [IopParentToRawTranslation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b8b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x731998, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f98e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7399a8, 0x1fe000 bytes
    //
    _t21(sdk::unknown_ptr) parent_to_raw_translation;
    
    // [IopParseDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4dc4b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a7550, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c4d20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fdab0, 0x1fe000 bytes
    //
    _t22(sdk::unknown_ptr) parse_device;
    
    // [IopParseFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c19c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x651d80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b2c70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c56d0, 0x1fe000 bytes
    //
    _t23(sdk::unknown_ptr) parse_file;
    
    // [IopPassiveInterruptDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d047c, 0x32828 bytes
    // ntoskrnl.exe .text:0x507560, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea2b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507320, 0x1fe000 bytes
    //
    _t24(sdk::unknown_ptr) passive_interrupt_dpc;
    
    // [IopPassiveInterruptRealtimeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14a628, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c9b80, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e7570, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3caa70, 0x1fe000 bytes
    //
    _t25(sdk::unknown_ptr) passive_interrupt_realtime_worker;
    
    // [IopPassiveInterruptWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d048c, 0x32828 bytes
    // ntoskrnl.exe .text:0x507580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d8390, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x507340, 0x1fe000 bytes
    //
    _t26(sdk::unknown_ptr) passive_interrupt_worker;
    
    // [IopPendingEjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320840, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44a40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c650, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44b10, 0x1fe000 bytes
    //
    _t27(sdk::unknown_ptr) pending_ejects;
    
    // [IopPendingSurpriseRemovals]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320850, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44a50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44b20, 0x1fe000 bytes
    //
    _t28(sdk::unknown_ptr) pending_surprise_removals;
    
    // [IopPerfCallDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccfac, 0x32828 bytes
    // ntoskrnl.exe .text:0x501ea8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45dd4e, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501c68, 0x1fe000 bytes
    //
    _t29(sdk::unknown_ptr) perf_call_driver;
    
    // [IopPerfCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd080, 0x32828 bytes
    // ntoskrnl.exe .text:0x501f7c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45de22, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501d3c, 0x1fe000 bytes
    //
    _t30(sdk::unknown_ptr) perf_complete_request;
    
    // [IopPerfCompletionRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd2ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x5021b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545a80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501f70, 0x1fe000 bytes
    //
    _t31(sdk::unknown_ptr) perf_completion_routine;
    
    // [IopPerfDriverUniqueMatchId]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3214c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45708, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d330, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456a8, 0x1fe000 bytes
    //
    _t32(sdk::unknown_ptr) perf_driver_unique_match_id;
    
    // [IopPerfIoTrackingListHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321780, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a50, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a20, 0x1fe000 bytes
    //
    _t33(sdk::unknown_ptr) perf_io_tracking_list_head;
    
    // [IopPerfIoTrackingLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321790, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45a60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6b0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a10, 0x1fe000 bytes
    //
    _t34(sdk::unknown_ptr) perf_io_tracking_lock;
    
    // [IopPerfLogCallEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd3f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x502308, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545bd8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5020c8, 0x1fe000 bytes
    //
    _t35(sdk::unknown_ptr) perf_log_call_event;
    
    // [IopPerfLogCallReturnEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd4bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5023dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x545cac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50219c, 0x1fe000 bytes
    //
    _t36(sdk::unknown_ptr) perf_log_call_return_event;
    
    // [IopPerfStatus]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3430c8, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf5110, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17b88, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf5110, 0x1fe000 bytes
    //
    _t37(sdk::unknown_ptr) perf_status;
    
    // [IopPnPAddDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49c1ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x672f50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d6d80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e6620, 0x1fe000 bytes
    //
    _t38(sdk::unknown_ptr) pn_p_add_device;
    
    // [IopPnPCompleteRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x10bcc8, 0x32828 bytes
    // ntoskrnl.exe .text:0x36c50c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x38d610, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36d890, 0x1fe000 bytes
    //
    _t39(sdk::unknown_ptr) pn_p_complete_request;
    
    // [IopPnPDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x518c70, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72f920, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f7470, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x737930, 0x1fe000 bytes
    //
    _t40(sdk::unknown_ptr) pn_p_dispatch;
    
    // [IopPoHandleIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12a300, 0x32828 bytes
    // ntoskrnl.exe .text:0x393fb4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a4ab8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x395014, 0x1fe000 bytes
    //
    _t41(sdk::function<int32_t(struct nt::irp_t*)>*) po_handle_irp;
    
    // [IopPortAddAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d100, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9aa0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85def0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b1420, 0x1fe000 bytes
    //
    _t42(sdk::unknown_ptr) port_add_allocation;
    
    // [IopPortBacktrackAllocation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x633b3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a0540, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x954290, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89ecf0, 0x1fe000 bytes
    //
    _t43(sdk::unknown_ptr) port_backtrack_allocation;
    
    // [IopPortFindSuitableRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54fa98, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b27d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86ac70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ba360, 0x1fe000 bytes
    //
    _t44(sdk::unknown_ptr) port_find_suitable_range;
    
    // [IopPortGetNextAlias]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54d188, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a9b34, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85df84, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b14b4, 0x1fe000 bytes
    //
    _t45(sdk::unknown_ptr) port_get_next_alias;
    
    // [IopPortInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5496c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77ea1c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8393bc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7887b4, 0x1fe000 bytes
    //
    _t46(sdk::unknown_ptr) port_initialize;
    
    // [IopPowerDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x121ffc, 0x32828 bytes
    // ntoskrnl.exe .text:0x386a40, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54ec90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x387800, 0x1fe000 bytes
    //
    _t47(sdk::unknown_ptr) power_dispatch;
    
    // [IopProcessIoTracking]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cd524, 0x32828 bytes
    // ntoskrnl.exe .text:0x50244c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45e04c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50220c, 0x1fe000 bytes
    //
    _t48(sdk::unknown_ptr) process_io_tracking;
    
    // [IopProcessIrpStackProfiler]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc97b4, 0x32828 bytes
    // ntoskrnl.exe .text:0x24366c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36a708, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x323b2c, 0x1fe000 bytes
    //
    _t49(sdk::unknown_ptr) process_irp_stack_profiler;
    
    // [IopProcessSetInterfaceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4fdaf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72752c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x72725c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72f34c, 0x1fe000 bytes
    //
    _t50(sdk::unknown_ptr) process_set_interface_state;
    
    // [IopProcessWorkItem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x9d490, 0x32828 bytes
    // ntoskrnl.exe .text:0x20e6e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2f8770, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x35a300, 0x1fe000 bytes
    //
    _t51(sdk::unknown_ptr) process_work_item;
    
    // [IopProtectSystemPartition]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a8a58, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6f594, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5f2a8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6e924, 0x1fe000 bytes
    //
    _t52(sdk::unknown_ptr) protect_system_partition;
    
    // [IopQueryDeviceResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x433d3c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73063c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7efc8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73864c, 0x1fe000 bytes
    //
    _t53(sdk::unknown_ptr) query_device_resources;
    
    // [IopQueryDeviceState]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x435d78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x726534, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f4768, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72e354, 0x1fe000 bytes
    //
    _t54(sdk::unknown_ptr) query_device_state;
    
    // [IopQueryDockRemovalInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64ef30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0058, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961d6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae808, 0x1fe000 bytes
    //
    _t55(sdk::unknown_ptr) query_dock_removal_interface;
    
    // [IopQueryEnvironmentVariableInfoHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e06c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897e80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ba40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896630, 0x1fe000 bytes
    //
    _t56(sdk::unknown_ptr) query_environment_variable_info_hal;
    
    // [IopQueryEnvironmentVariableInfoSysEnv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e084, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897eb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94ba70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896660, 0x1fe000 bytes
    //
    _t57(sdk::unknown_ptr) query_environment_variable_info_sys_env;
    
    // [IopQueryEnvironmentVariableInfoTrEE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e138, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x897f80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94bb40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896730, 0x1fe000 bytes
    //
    _t58(sdk::unknown_ptr) query_environment_variable_info_tr_ee;
    
    // [IopQueryFsOperationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed598, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981cd0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65930, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9805b0, 0x1fe000 bytes
    //
    _t59(sdk::unknown_ptr) query_fs_operation_access;
    
    // [IopQueryFsOperationLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec348, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980700, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97efe0, 0x1fe000 bytes
    //
    _t60(sdk::unknown_ptr) query_fs_operation_length;
    
    // [IopQueryInterfaceRecurseUp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x566c20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x746958, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73cc3c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74e598, 0x1fe000 bytes
    //
    _t61(sdk::unknown_ptr) query_interface_recurse_up;
    
    // [IopQueryLegacyBusInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a08b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b5a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e1360, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7233c8, 0x1fe000 bytes
    //
    _t62(sdk::unknown_ptr) query_legacy_bus_information;
    
    // [IopQueryName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abd04, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60e0a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7d1070, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d9430, 0x1fe000 bytes
    //
    _t63(sdk::unknown_ptr) query_name;
    
    // [IopQueryNameInternal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4abd30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60f0d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x70e704, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5daa74, 0x1fe000 bytes
    //
    _t64(sdk::unknown_ptr) query_name_internal;
    
    // [IopQueryOperationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ee720, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9832c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa67410, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x981ba0, 0x1fe000 bytes
    //
    _t65(sdk::unknown_ptr) query_operation_access;
    
    // [IopQueryOperationLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed0c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9819f0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65620, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9802d0, 0x1fe000 bytes
    //
    _t66(sdk::unknown_ptr) query_operation_length;
    
    // [IopQueryPassiveInterruptRegistryOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56b0d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7ab594, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x861a60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b2f14, 0x1fe000 bytes
    //
    _t67(sdk::unknown_ptr) query_passive_interrupt_registry_options;
    
    // [IopQueryProcessIdsUsingFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62a824, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x892cf8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x945c58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8914a8, 0x1fe000 bytes
    //
    _t68(sdk::unknown_ptr) query_process_ids_using_file;
    
    // [IopQueryProcessorInitValues]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570f34, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b542c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86e6d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bcfec, 0x1fe000 bytes
    //
    _t69(sdk::unknown_ptr) query_processor_init_values;
    
    // [IopQueryReconfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64f02c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b0160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x961e6c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae910, 0x1fe000 bytes
    //
    _t70(sdk::unknown_ptr) query_reconfiguration;
    
    // [IopQueryResourceHandlerInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c40c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73259c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa660, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a5ac, 0x1fe000 bytes
    //
    _t71(sdk::unknown_ptr) query_resource_handler_interface;
    
    // [IopQuerySetAlignmentRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed020, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65580, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980230, 0x1fe000 bytes
    //
    _t72(sdk::unknown_ptr) query_set_alignment_requirement;
    
    // [IopQuerySetFsAlignmentRequirement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec510, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980b00, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa646b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f3e0, 0x1fe000 bytes
    //
    _t73(sdk::unknown_ptr) query_set_fs_alignment_requirement;
    
    // [IopQueryVpbFlagsSafe]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c20, 0x32828 bytes
    // ntoskrnl.exe .text:0x21175c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2096f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x33f46c, 0x1fe000 bytes
    //
    _t74(sdk::unknown_ptr) query_vpb_flags_safe;
    
    // [IopQueryXxxInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e96a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60de58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c094, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a5dc, 0x1fe000 bytes
    //
    _t75(sdk::unknown_ptr) query_xxx_information;
    
    // [IopQueueIrpToFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf7b80, 0x32828 bytes
    // ntoskrnl.exe .text:0x240800, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x349700, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ee060, 0x1fe000 bytes
    //
    _t76(sdk::unknown_ptr) queue_irp_to_file_object;
    
    // [IopQueueThreadIrp]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xf5b50, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e0050, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2d4280, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x261300, 0x1fe000 bytes
    //
    _t77(sdk::unknown_ptr) queue_thread_irp;
    
    // [IopQueueWorkItemProlog]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xee24c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2da10c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2b2e10, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x25b18c, 0x1fe000 bytes
    //
    _t78(sdk::unknown_ptr) queue_work_item_prolog;
    
    // [IopRaiseHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627364, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f0c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88d870, 0x1fe000 bytes
    //
    _t79(sdk::unknown_ptr) raise_hard_error;
    
    // [IopRaiseInformationalHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627600, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f360, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9409c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88db10, 0x1fe000 bytes
    //
    _t80(sdk::unknown_ptr) raise_informational_hard_error;
    
    // [IopReadDumpRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14012c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bb470, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cbcb8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bbe20, 0x1fe000 bytes
    //
    _t81(sdk::unknown_ptr) read_dump_registry;
    
    // [IopReadyDeviceObjects]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4a1808, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75460c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e3f24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75becc, 0x1fe000 bytes
    //
    _t82(sdk::unknown_ptr) ready_device_objects;
    
    // [IopRearrangeReqList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568574, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7310cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e96f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7390dc, 0x1fe000 bytes
    //
    _t83(sdk::unknown_ptr) rearrange_req_list;
    
    // [IopReassignSystemRoot]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7a590c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa6cd38, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5b9f8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa6c508, 0x1fe000 bytes
    //
    _t84(sdk::unknown_ptr) reassign_system_root;
    
    // [IopRecordIoAttribution]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x79180, 0x32828 bytes
    // ntoskrnl.exe .text:0x23a344, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x334f3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2db204, 0x1fe000 bytes
    //
    _t85(sdk::unknown_ptr) record_io_attribution;
    
    // [IopReferenceDriverObjectByName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5295c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71f8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x733c08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x727718, 0x1fe000 bytes
    //
    _t86(sdk::unknown_ptr) reference_driver_object_by_name;
    
    // [IopReferenceFileObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1033d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2e2ba0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28c9ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x263eb0, 0x1fe000 bytes
    //
    _t87(sdk::unknown_ptr) reference_file_object;
    
    // [IopReferenceIoAttributionFromProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c84c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35344c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28518c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x23561c, 0x1fe000 bytes
    //
    _t88(sdk::unknown_ptr) reference_io_attribution_from_process;
    
    // [IopReferenceVerifyVpb]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7ed8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fafac, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5425e8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fad6c, 0x1fe000 bytes
    //
    _t89(sdk::unknown_ptr) reference_verify_vpb;
    
    // [IopRegisterDeviceInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x449294, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x725530, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x729ae4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x72d350, 0x1fe000 bytes
    //
    _t90(sdk::unknown_ptr) register_device_interface;
    
    // [IopRegistryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a6ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x844d40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79b000, 0x1fe000 bytes
    //
    _t91(sdk::unknown_ptr) registry_callback;
    
    // [IopRegistryInitializeCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a5e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b538, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x844c28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79aee0, 0x1fe000 bytes
    //
    _t92(sdk::unknown_ptr) registry_initialize_callbacks;
    
    // [IopRegistryOpenDeepestPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a7c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x77b754, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x844e68, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x79b104, 0x1fe000 bytes
    //
    _t93(sdk::unknown_ptr) registry_open_deepest_path;
    
    // [IopRegistryRegisteredCallbacks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f4660, 0x32828 bytes
    // ntoskrnl.exe .data:0xc02fb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc04870, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc02ff0, 0x1fe000 bytes
    //
    _t94(sdk::unknown_ptr) registry_registered_callbacks;
    
    // [IopReleaseDeviceResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4307e0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b750, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7faf08, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7337d8, 0x1fe000 bytes
    //
    _t95(sdk::unknown_ptr) release_device_resources;
    
    // [IopReleaseFilteredBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5526d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x733234, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b030c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b244, 0x1fe000 bytes
    //
    _t96(sdk::unknown_ptr) release_filtered_boot_resources;
    
    // [IopReleaseResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5499e8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7334c8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c6f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b4d8, 0x1fe000 bytes
    //
    _t97(sdk::unknown_ptr) release_resources;
    
    // [IopRemoveCurrentRelationFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650aac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afc54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6788d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae404, 0x1fe000 bytes
    //
    _t98(sdk::unknown_ptr) remove_current_relation_from_list;
    
    // [IopRemoveDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4309b4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72b8fc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fb0f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x733984, 0x1fe000 bytes
    //
    _t99(sdk::unknown_ptr) remove_device;
    
    // [IopRemoveDeviceRelationsFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42db5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72e8f8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9ea4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x736904, 0x1fe000 bytes
    //
    _u00(sdk::unknown_ptr) remove_device_relations_from_list;
    
    // [IopRemoveDumpCapsuleSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1400f4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3bb3e0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cc958, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3bbd90, 0x1fe000 bytes
    //
    _u01(sdk::unknown_ptr) remove_dump_capsule_support;
    
    // [IopRemoveHardErrorPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7f54, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fb038, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542674, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fadf8, 0x1fe000 bytes
    //
    _u02(sdk::unknown_ptr) remove_hard_error_packet;
    
    // [IopRemoveLegacyDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5499ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7336a4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c6ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73b6b4, 0x1fe000 bytes
    //
    _u03(sdk::unknown_ptr) remove_legacy_device_node;
    
    // [IopRemovePageDumpRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca334, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe4ec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5401bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe2ac, 0x1fe000 bytes
    //
    _u04(sdk::unknown_ptr) remove_page_dump_range;
    
    // [IopRemovePageFromPageMap]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca40c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe5c0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540344, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe380, 0x1fe000 bytes
    //
    _u05(sdk::unknown_ptr) remove_page_from_page_map;
    
    // [IopRemoveRelationFromList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x650b24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8afcd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9619ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8ae484, 0x1fe000 bytes
    //
    _u06(sdk::unknown_ptr) remove_relation_from_list;
    
    // [IopRemoveTimerFromTimerList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc194, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c986c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x204db8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca75c, 0x1fe000 bytes
    //
    _u07(sdk::unknown_ptr) remove_timer_from_timer_list;
    
    // [IopReplaceCompletionPort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc2a0, 0x32828 bytes
    // ntoskrnl.exe .text:0x388b6c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544880, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3895dc, 0x1fe000 bytes
    //
    _u08(sdk::unknown_ptr) replace_completion_port;
    
    // [IopReplaceSeperatorWithPound]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x489904, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74482c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba5c4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x74c46c, 0x1fe000 bytes
    //
    _u09(sdk::unknown_ptr) replace_seperator_with_pound;
    
    // [IopReplaceSymlinkPath]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629c00, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8924a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943658, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890c50, 0x1fe000 bytes
    //
    _u10(sdk::unknown_ptr) replace_symlink_path;
    
    // [IopReportBootResources]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x78ed68, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa63c20, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb40620, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa5faf0, 0x1fe000 bytes
    //
    _u11(sdk::unknown_ptr) report_boot_resources;
    
    // [IopReportBugCheckProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x322d48, 0x32828 bytes
    // ntoskrnl.exe .data:0xc46fb0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5ebb0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc46f70, 0x1fe000 bytes
    //
    _u12(sdk::unknown_ptr) report_bug_check_progress;
    
    // [IopReserveIrps]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3217e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45ac0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d700, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a80, 0x1fe000 bytes
    //
    _u13(sdk::unknown_ptr) reserve_irps;
    
    // [IopResourceRequirementsListToReqList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54b930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x731a24, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f9b34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x739a34, 0x1fe000 bytes
    //
    _u14(sdk::unknown_ptr) resource_requirements_list_to_req_list;
    
    // [IopResurrectDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12fda4, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a2780, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e4268, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3cd0, 0x1fe000 bytes
    //
    _u15(sdk::unknown_ptr) resurrect_driver;
    
    // [IopRetestConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631af0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89deec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86aee8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c69c, 0x1fe000 bytes
    //
    _u16(sdk::unknown_ptr) retest_configuration;
    
    // [IopRetrieveSystemDeviceName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53222c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66c528, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7c857c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6deee8, 0x1fe000 bytes
    //
    _u17(sdk::unknown_ptr) retrieve_system_device_name;
    
    // [IopRetrieveTransactionParameters]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e19b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6aa930, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6c7ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x600df0, 0x1fe000 bytes
    //
    _u18(sdk::unknown_ptr) retrieve_transaction_parameters;
    
    // [IopRevocationExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f5458, 0x32828 bytes
    // ntoskrnl.exe .data:0xc046e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc06c30, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc04720, 0x1fe000 bytes
    //
    _u19(sdk::unknown_ptr) revocation_extension;
    
    // [IopRevokeFileObjectForProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ccc98, 0x32828 bytes
    // ntoskrnl.exe .text:0x501984, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5454bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x501744, 0x1fe000 bytes
    //
    _u20(sdk::unknown_ptr) revoke_file_object_for_process;
    
    // [IopRootBusNumberArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x31ff20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44120, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bd20, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44100, 0x1fe000 bytes
    //
    _u21(sdk::unknown_ptr) root_bus_number_arbiter;
    
    // [IopRootDeviceNode]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44c18, 0x1fe000 bytes
    //
    _u22(sdk::unknown_ptr) root_device_node;
    
    // [IopRootDmaArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3201e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc443e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5bfe0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc443c0, 0x1fe000 bytes
    //
    _u23(sdk::unknown_ptr) root_dma_arbiter;
    
    // [IopRootIrqArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320080, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44280, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5be80, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44260, 0x1fe000 bytes
    //
    _u24(sdk::unknown_ptr) root_irq_arbiter;
    
    // [IopRootMemArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3204a0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc446a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c140, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44680, 0x1fe000 bytes
    //
    _u25(sdk::unknown_ptr) root_mem_arbiter;
    
    // [IopRootPortArbiter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320340, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44540, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c2a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44520, 0x1fe000 bytes
    //
    _u26(sdk::unknown_ptr) root_port_arbiter;
    
    // [IopRunTimeContextOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x280cc0, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x33640, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f320, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33980, 0x1fe000 bytes
    //
    _u27(sdk::unknown_ptr) run_time_context_offsets;
    
    // [IopSafeCompletionLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341280, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee300, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e1c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee300, 0x1fe000 bytes
    //
    _u28(sdk::unknown_ptr) safe_completion_lookaside_list;
    
    // [IopSafebootDriverLoad]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627678, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f3e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940a44, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88db94, 0x1fe000 bytes
    //
    _u29(sdk::unknown_ptr) safeboot_driver_load;
    
    // [IopSaveRestoreConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x631b9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x89dfb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85d648, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x89c760, 0x1fe000 bytes
    //
    _u30(sdk::unknown_ptr) save_restore_configuration;
    
    // [IopSecurityResource]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321680, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45960, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d5a0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45880, 0x1fe000 bytes
    //
    _u31(sdk::unknown_ptr) security_resource;
    
    // [IopSelectNextConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54a44c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b1f10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86a720, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b9aa0, 0x1fe000 bytes
    //
    _u32(sdk::unknown_ptr) select_next_configuration;
    
    // [IopSendMessageToTrackService]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6277d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f580, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940be4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88dd30, 0x1fe000 bytes
    //
    _u33(sdk::unknown_ptr) send_message_to_track_service;
    
    // [IopSessionCallbackObject]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3214d0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45710, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d338, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456b0, 0x1fe000 bytes
    //
    _u34(sdk::unknown_ptr) session_callback_object;
    
    // [IopSessionChangeWorker]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f8d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9060, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a3310, 0x1fe000 bytes
    //
    _u35(sdk::unknown_ptr) session_change_worker;
    
    // [IopSessionEventType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x277438, 0x32828 bytes
    // ntoskrnl.exe .rdata:0x336e8, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0x3f3d8, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0x33a28, 0x1fe000 bytes
    //
    _u36(sdk::unknown_ptr) session_event_type;
    
    // [IopSessionNotificationLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ca0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457b0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d3e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45750, 0x1fe000 bytes
    //
    _u37(sdk::unknown_ptr) session_notification_lock;
    
    // [IopSessionNotificationQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c90, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457a0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d3f0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45740, 0x1fe000 bytes
    //
    _u38(sdk::unknown_ptr) session_notification_queue_head;
    
    // [IopSessionZeroAccessCheckEnabled]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x34266c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf4c2c, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd17688, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf48cc, 0x1fe000 bytes
    //
    _u39(sdk::unknown_ptr) session_zero_access_check_enabled;
    
    // [IopSetDeviceSecurityDescriptor]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4994e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74e03c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73aae8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x755c7c, 0x1fe000 bytes
    //
    _u40(sdk::unknown_ptr) set_device_security_descriptor;
    
    // [IopSetDeviceSecurityDescriptors]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x565490, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x764190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x73aa48, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x76b430, 0x1fe000 bytes
    //
    _u41(sdk::unknown_ptr) set_device_security_descriptors;
    
    // [IopSetDiskIoAttributionExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xb4fb8, 0x32828 bytes
    // ntoskrnl.exe .text:0x23fb98, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2093b4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2ed128, 0x1fe000 bytes
    //
    _u42(sdk::unknown_ptr) set_disk_io_attribution_extension;
    
    // [IopSetDiskIoAttributionFromProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x6c96c, 0x32828 bytes
    // ntoskrnl.exe .text:0x264404, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x209334, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x235f10, 0x1fe000 bytes
    //
    _u43(sdk::unknown_ptr) set_disk_io_attribution_from_process;
    
    // [IopSetEaOrQuotaInformationFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627ad8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88f86c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x940ec0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88e01c, 0x1fe000 bytes
    //
    _u44(sdk::unknown_ptr) set_ea_or_quota_information_file;
    
    // [IopSetEnvironmentVariableHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e1f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898050, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94bc10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896800, 0x1fe000 bytes
    //
    _u45(sdk::unknown_ptr) set_environment_variable_hal;
    
    // [IopSetEnvironmentVariableSysEnv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e210, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94bc40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896830, 0x1fe000 bytes
    //
    _u46(sdk::unknown_ptr) set_environment_variable_sys_env;
    
    // [IopSetEnvironmentVariableTrEE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x62e314, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x898190, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x94bd60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x896940, 0x1fe000 bytes
    //
    _u47(sdk::unknown_ptr) set_environment_variable_tr_ee;
    
    // [IopSetFileObjectExtensionFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xff1c0, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c380, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x305f38, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d95e0, 0x1fe000 bytes
    //
    _u48(sdk::unknown_ptr) set_file_object_extension_flag;
    
    // [IopSetFileObjectIosbRange]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x627ec8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x88fcac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941338, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88e45c, 0x1fe000 bytes
    //
    _u49(sdk::unknown_ptr) set_file_object_iosb_range;
    
    // [IopSetFsOperationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed5d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981d10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9805f0, 0x1fe000 bytes
    //
    _u50(sdk::unknown_ptr) set_fs_operation_access;
    
    // [IopSetFsOperationLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980710, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97eff0, 0x1fe000 bytes
    //
    _u51(sdk::unknown_ptr) set_fs_operation_length;
    
    // [IopSetFsRegistrationInProgress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x137e8c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3959e4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a65dc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x396a44, 0x1fe000 bytes
    //
    _u52(sdk::unknown_ptr) set_fs_registration_in_progress;
    
    // [IopSetLegacyResourcesFlag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1d09ac, 0x32828 bytes
    // ntoskrnl.exe .text:0x507c3c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54dde4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5079fc, 0x1fe000 bytes
    //
    _u53(sdk::unknown_ptr) set_legacy_resources_flag;
    
    // [IopSetLockOperationProcess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x102f04, 0x32828 bytes
    // ntoskrnl.exe .text:0x24b7a8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x28ca3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2e3c10, 0x1fe000 bytes
    //
    _u54(sdk::unknown_ptr) set_lock_operation_process;
    
    // [IopSetOperationAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6edff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9829c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa667e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x9812a0, 0x1fe000 bytes
    //
    _u55(sdk::unknown_ptr) set_operation_access;
    
    // [IopSetOperationLength]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed070, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x9819a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa655d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980280, 0x1fe000 bytes
    //
    _u56(sdk::unknown_ptr) set_operation_length;
    
    // [IopSetRelationsTag]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42e57c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a818, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fd1ac, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x731b98, 0x1fe000 bytes
    //
    _u57(sdk::unknown_ptr) set_relations_tag;
    
    // [IopSetRemoteLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x628388, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890188, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9417f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88e938, 0x1fe000 bytes
    //
    _u58(sdk::unknown_ptr) set_remote_link;
    
    // [IopSetTypeSpecificFoExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1014d0, 0x32828 bytes
    // ntoskrnl.exe .text:0x256670, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0f2c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305b80, 0x1fe000 bytes
    //
    _u59(sdk::unknown_ptr) set_type_specific_fo_extension;
    
    // [IopSetupArbiterAndTranslators]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54be78, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x731fec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa0a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x739ffc, 0x1fe000 bytes
    //
    _u60(sdk::unknown_ptr) setup_arbiter_and_translators;
    
    // [IopShutdownBaseFileSystems]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3da1fc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9a84f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa85d44, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9a7464, 0x1fe000 bytes
    //
    _u61(sdk::unknown_ptr) shutdown_base_file_systems;
    
    // [IopSizeTriageDumpDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca58c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe744, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540674, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe504, 0x1fe000 bytes
    //
    _u62(sdk::unknown_ptr) size_triage_dump_data_blocks;
    
    // [IopSmallIrpLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341380, 0x32828 bytes
    // ntoskrnl.exe .data:0xcee500, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd0e2c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcee380, 0x1fe000 bytes
    //
    _u63(sdk::unknown_ptr) small_irp_lookaside_list;
    
    // [IopSortRelationListForRemove]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x42f104, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72a304, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fcf0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x734084, 0x1fe000 bytes
    //
    _u64(sdk::unknown_ptr) sort_relation_list_for_remove;
    
    // [IopStartApcHardError]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6284dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890300, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x941970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88eab0, 0x1fe000 bytes
    //
    _u65(sdk::unknown_ptr) start_apc_hard_error;
    
    // [IopStartNextPacket]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcead0, 0x32828 bytes
    // ntoskrnl.exe .text:0x500b5c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x45dc0c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x50091c, 0x1fe000 bytes
    //
    _u66(sdk::unknown_ptr) start_next_packet;
    
    // [IopStartNextPacketByKey]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cc1f0, 0x32828 bytes
    // ntoskrnl.exe .text:0x500c1c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x544500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5009dc, 0x1fe000 bytes
    //
    _u67(sdk::unknown_ptr) start_next_packet_by_key;
    
    // [IopStartNextPacketByKeyEx]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce984, 0x32828 bytes
    // ntoskrnl.exe .text:0x500ce0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5445c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x500aa0, 0x1fe000 bytes
    //
    _u68(sdk::unknown_ptr) start_next_packet_by_key_ex;
    
    // [IopStaticRevocationExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321c40, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45740, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d380, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc456e0, 0x1fe000 bytes
    //
    _u69(sdk::unknown_ptr) static_revocation_extension;
    
    // [IopStoreArcInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77f1b4, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa563c8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb5d818, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa56268, 0x1fe000 bytes
    //
    _u70(sdk::unknown_ptr) store_arc_information;
    
    // [IopStoreSystemPartitionInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x77d71c, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa54208, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb48700, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa540a8, 0x1fe000 bytes
    //
    _u71(sdk::unknown_ptr) store_system_partition_information;
    
    // [IopSurpriseRemoveListLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3208e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44b60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c6e0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44aa0, 0x1fe000 bytes
    //
    _u72(sdk::unknown_ptr) surprise_remove_list_lock;
    
    // [IopSymlinkAllocateAndAddECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5312a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659f58, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7baf50, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd8e8, 0x1fe000 bytes
    //
    _u73(sdk::unknown_ptr) symlink_allocate_and_add_ecp;
    
    // [IopSymlinkApplyToOpenedName]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x629f14, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8927b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x943970, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x890f60, 0x1fe000 bytes
    //
    _u74(sdk::unknown_ptr) symlink_apply_to_opened_name;
    
    // [IopSymlinkCleanupECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530ee4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a460, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba810, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cddf0, 0x1fe000 bytes
    //
    _u75(sdk::function<void(void*, const struct nt::guid_t*)>*) symlink_cleanup_ecp;
    
    // [IopSymlinkCreateECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531068, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659d4c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bae28, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd6dc, 0x1fe000 bytes
    //
    _u76(sdk::unknown_ptr) symlink_create_ecp;
    
    // [IopSymlinkECPGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ec3c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x980720, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa641e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97f000, 0x1fe000 bytes
    //
    _u77(sdk::unknown_ptr) symlink_ecp_guid;
    
    // [IopSymlinkEnabledTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e88, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41cc, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16aa0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41cc, 0x1fe000 bytes
    //
    _u78(sdk::unknown_ptr) symlink_enabled_types;
    
    // [IopSymlinkEnforceEnabledTypes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x570814, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x679fa4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6789f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6ed3b4, 0x1fe000 bytes
    //
    _u79(sdk::unknown_ptr) symlink_enforce_enabled_types;
    
    // [IopSymlinkFreeRelatedMountPointChain]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531028, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a478, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba828, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cde08, 0x1fe000 bytes
    //
    _u80(sdk::unknown_ptr) symlink_free_related_mount_point_chain;
    
    // [IopSymlinkGetECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfff18, 0x32828 bytes
    // ntoskrnl.exe .text:0x25a2fc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0f58, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x30ad6c, 0x1fe000 bytes
    //
    _u81(sdk::unknown_ptr) symlink_get_ecp;
    
    // [IopSymlinkGetRelatedMountPoint]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x531a5c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65a42c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bad20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cddbc, 0x1fe000 bytes
    //
    _u82(sdk::unknown_ptr) symlink_get_related_mount_point;
    
    // [IopSymlinkInfoLookasideList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x32ad40, 0x32828 bytes
    // ntoskrnl.exe .data:0xcdba80, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xcf84c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcdba00, 0x1fe000 bytes
    //
    _u83(sdk::unknown_ptr) symlink_info_lookaside_list;
    
    // [IopSymlinkInitializeSymlinkInfo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5311fc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659e74, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7bb020, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd804, 0x1fe000 bytes
    //
    _u84(sdk::unknown_ptr) symlink_initialize_symlink_info;
    
    // [IopSymlinkQueryEnabledClasses]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a8a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af78c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866e9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b731c, 0x1fe000 bytes
    //
    _u85(sdk::unknown_ptr) symlink_query_enabled_classes;
    
    // [IopSymlinkRegistryCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x55a880, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7af760, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x866e70, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7b72f0, 0x1fe000 bytes
    //
    _u86(sdk::unknown_ptr) symlink_registry_callback;
    
    // [IopSymlinkRegistryInitCallback]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13ea90, 0x32828 bytes
    // ntoskrnl.exe .text:0x3c6700, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e2470, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3c75d0, 0x1fe000 bytes
    //
    _u87(sdk::unknown_ptr) symlink_registry_init_callback;
    
    // [IopSymlinkRememberJunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530dec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659bb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba870, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd540, 0x1fe000 bytes
    //
    _u88(sdk::unknown_ptr) symlink_remember_junction;
    
    // [IopSymlinkRemoveECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xfff2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2d49dc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e0f7c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x255a4c, 0x1fe000 bytes
    //
    _u89(sdk::unknown_ptr) symlink_remove_ecp;
    
    // [IopSymlinkSetFoExtension]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5238f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6558e4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7dc90c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c9424, 0x1fe000 bytes
    //
    _u90(sdk::unknown_ptr) symlink_set_fo_extension;
    
    // [IopSymlinkUpdateECP]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x530eec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x659a28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ba690, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6cd3b8, 0x1fe000 bytes
    //
    _u91(sdk::unknown_ptr) symlink_update_ecp;
    
    // [IopSynchronousApiServiceTail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47c8f8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x65319c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b7570, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c733c, 0x1fe000 bytes
    //
    _u92(sdk::unknown_ptr) synchronous_api_service_tail;
    
    // [IopSynchronousCall]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x44756c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x631940, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6e533c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x687558, 0x1fe000 bytes
    //
    _u93(sdk::function<int32_t(struct nt::device_object_t*, struct io::stack_location_t*, int32_t, uint64_t, uint64_t*)>*) synchronous_call;
    
    // [IopSynchronousServiceTail]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e1200, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a6e10, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bfa80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fd370, 0x1fe000 bytes
    //
    _u94(sdk::unknown_ptr) synchronous_service_tail;
    
    // [IopSysEnvFunctionTableHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981c90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa65910, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980590, 0x1fe000 bytes
    //
    _u95(sdk::unknown_ptr) sys_env_function_table_hal;
    
    // [IopSysEnvFunctionTableSysEnv]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ed6d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981cb0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa658f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x980570, 0x1fe000 bytes
    //
    _u96(sdk::unknown_ptr) sys_env_function_table_sys_env;
    
    // [IopSysEnvFunctionTableTrEE]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6ecca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x981238, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0xa64f30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x97fb18, 0x1fe000 bytes
    //
    _u97(sdk::unknown_ptr) sys_env_function_table_tr_ee;
    
    // [IopSysEnvOverrideFlags]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321408, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45648, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d2a4, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc455e0, 0x1fe000 bytes
    //
    _u98(sdk::unknown_ptr) sys_env_override_flags;
    
    // [IopSystemControlDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x64786c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a790, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a73f0, 0x1fe000 bytes
    //
    _u99(sdk::unknown_ptr) system_control_dispatch;
    
    // [IopTapeFileSystemQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321710, 0x32828 bytes
    // ntoskrnl.exe .data:0xc459e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d640, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45990, 0x1fe000 bytes
    //
    _v00(sdk::unknown_ptr) tape_file_system_queue_head;
    
    // [IopTestConfiguration]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54adec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x732950, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7ce94c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73a960, 0x1fe000 bytes
    //
    _v01(sdk::unknown_ptr) test_configuration;
    
    // [IopThreadStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d8f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7541d0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x815da0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x75ba90, 0x1fe000 bytes
    //
    _v02(sdk::unknown_ptr) thread_start;
    
    // [IopTimer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321980, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45c60, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d8c0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45be0, 0x1fe000 bytes
    //
    _v03(sdk::unknown_ptr) timer;
    
    // [IopTimerCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321930, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45ca0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d848, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45bd0, 0x1fe000 bytes
    //
    _v04(sdk::unknown_ptr) timer_count;
    
    // [IopTimerDispatch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1864, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fb110, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542750, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4faed0, 0x1fe000 bytes
    //
    _v05(sdk::unknown_ptr) timer_dispatch;
    
    // [IopTimerDpc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321940, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d880, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45c20, 0x1fe000 bytes
    //
    _v06(sdk::unknown_ptr) timer_dpc;
    
    // [IopTimerLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be140, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22140, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48140, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22140, 0x1fe000 bytes
    //
    _v07(sdk::unknown_ptr) timer_lock;
    
    // [IopTimerQueueHead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321920, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45c10, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d850, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45bc0, 0x1fe000 bytes
    //
    _v08(sdk::unknown_ptr) timer_queue_head;
    
    // [IopTrackLink]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x47f5c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6374a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7de354, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6b4b60, 0x1fe000 bytes
    //
    _v09(sdk::unknown_ptr) track_link;
    
    // [IopTranslateAndAdjustReqDesc]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54cae8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a472c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x854848, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7ac844, 0x1fe000 bytes
    //
    _v10(sdk::unknown_ptr) translate_and_adjust_req_desc;
    
    // [IopTranslateBusAddress]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54de38, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0048, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x830138, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8268, 0x1fe000 bytes
    //
    _v11(sdk::unknown_ptr) translate_bus_address;
    
    // [IopTranslatorHandlerCm]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x49eaac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x70a0b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x809700, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x711b00, 0x1fe000 bytes
    //
    _v12(sdk::unknown_ptr) translator_handler_cm;
    
    // [IopTranslatorHandlerIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x647888, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8a8c70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x95a7c0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8a7420, 0x1fe000 bytes
    //
    _v13(sdk::unknown_ptr) translator_handler_io;
    
    // [IopTriageDumpDataBlocks]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x321ce0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45f40, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5db40, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45ee0, 0x1fe000 bytes
    //
    _v14(sdk::unknown_ptr) triage_dump_data_blocks;
    
    // [IopUncacheInterfaceInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x434bf8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x71b4b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7f0ed8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7232d8, 0x1fe000 bytes
    //
    _v15(sdk::unknown_ptr) uncache_interface_information;
    
    // [IopUniqueDeviceObjectNumber]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3217b0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc45aa0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d6d0, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45a38, 0x1fe000 bytes
    //
    _v16(sdk::unknown_ptr) unique_device_object_number;
    
    // [IopUnloadDriver]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53521c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x74c560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7cbc90, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7541a0, 0x1fe000 bytes
    //
    _v17(sdk::unknown_ptr) unload_driver;
    
    // [IopUnloadSafeCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce7f8, 0x32828 bytes
    // ntoskrnl.exe .text:0x266840, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x376d90, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x316f00, 0x1fe000 bytes
    //
    _v18(sdk::unknown_ptr) unload_safe_completion;
    
    // [IopUnmaskInterrupt]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12310c, 0x32828 bytes
    // ntoskrnl.exe .text:0x388224, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3e3fec, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x388ad4, 0x1fe000 bytes
    //
    _v19(sdk::unknown_ptr) unmask_interrupt;
    
    // [IopUpdateFunctionPointers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c7fb4, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fb938, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x542ef4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fb6f8, 0x1fe000 bytes
    //
    _v20(sdk::unknown_ptr) update_function_pointers;
    
    // [IopUpdateMinidumpContext]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca604, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fe7c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5406f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe584, 0x1fe000 bytes
    //
    _v21(sdk::unknown_ptr) update_minidump_context;
    
    // [IopUpdatePriorityCallbackRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x3214e0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc457e0, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5d420, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc45780, 0x1fe000 bytes
    //
    _v22(sdk::unknown_ptr) update_priority_callback_routine;
    
    // [IopUpdatePriorityCallbackRoutineCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x341e8c, 0x32828 bytes
    // ntoskrnl.exe .data:0xcf41c8, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xd16a9c, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xcf41c8, 0x1fe000 bytes
    //
    _v23(sdk::unknown_ptr) update_priority_callback_routine_count;
    
    // [IopUpdateWriteTransferCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0bd8, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a95b0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5430f4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2056a0, 0x1fe000 bytes
    //
    _v24(sdk::function<void(uint32_t, struct nt::eprocess_t*)>*) update_write_transfer_count;
    
    // [IopUseCompletionOptimization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGEDATA:0x74a2d4, 0x32828 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b31c, 0x1fe000 bytes
    // ntoskrnl.exe PAGEDATA:0xd512e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGEDATA:0xd2b31c, 0x1fe000 bytes
    //
    _v25(sdk::unknown_ptr) use_completion_optimization;
    
    // [IopUserCompletion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9fa0, 0x1fe000 bytes
    //
    _v26(sdk::unknown_ptr) user_completion;
    
    // [IopUserRundown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x497ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x676c40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7e9d10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e9fa0, 0x1fe000 bytes
    //
    _v27(sdk::unknown_ptr) user_rundown;
    
    // [IopValidateJunctionTarget]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3e32b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x890374, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x67686c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x88eb24, 0x1fe000 bytes
    //
    _v28(sdk::unknown_ptr) validate_junction_target;
    
    // [IopVerifyDeviceObjectOnStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xc0440, 0x32828 bytes
    // ntoskrnl.exe .text:0x2541c4, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x35ffac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x303f14, 0x1fe000 bytes
    //
    _v29(sdk::unknown_ptr) verify_device_object_on_stack;
    
    // [IopVerifyDiskSignature]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x544a9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7b6068, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x86f050, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7bdbf8, 0x1fe000 bytes
    //
    _v30(sdk::unknown_ptr) verify_disk_signature;
    
    // [IopVerifyDriverObjectOnStack]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1c80b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fba88, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x54312c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fb848, 0x1fe000 bytes
    //
    _v31(sdk::unknown_ptr) verify_driver_object_on_stack;
    
    // [IopVpbSpinLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe CACHEALI:0x3be840, 0x32828 bytes
    // ntoskrnl.exe CACHEALI:0xd22880, 0x1fe000 bytes
    // ntoskrnl.exe CACHEALI:0xd48500, 0x1fd000 bytes
    // ntoskrnl.exe CACHEALI:0xd22880, 0x1fe000 bytes
    //
    _v32(sdk::unknown_ptr) vpb_spin_lock;
    
    // [IopWaitCompletionMapping]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c1f50, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96770, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4c0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95970, 0x1fe000 bytes
    //
    _v33(sdk::unknown_ptr) wait_completion_mapping;
    
    // [IopWaitCompletionPacketObjectType]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe ALMOSTRO:0x3ab560, 0x32828 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb998, 0x1fe000 bytes
    // ntoskrnl.exe ALMOSTRO:0xd1df58, 0x1fd000 bytes
    // ntoskrnl.exe ALMOSTRO:0xcfb998, 0x1fe000 bytes
    //
    _v34(sdk::unknown_ptr) wait_completion_packet_object_type;
    
    // [IopWaitForLockAlertable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x21b8, 0x32828 bytes
    // ntoskrnl.exe .text:0x20df54, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2e5ec0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x359b74, 0x1fe000 bytes
    //
    _v35(sdk::unknown_ptr) wait_for_lock_alertable;
    
    // [IopWaitForSynchronousIo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104b9c, 0x32828 bytes
    // ntoskrnl.exe .text:0x2171bc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33cdf0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3004dc, 0x1fe000 bytes
    //
    _v36(sdk::unknown_ptr) wait_for_synchronous_io;
    
    // [IopWarmEjectDevice]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x6515f0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8b1a50, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9638f0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8b0200, 0x1fe000 bytes
    //
    _v37(sdk::unknown_ptr) warm_eject_device;
    
    // [IopWarmEjectLock]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a20, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c20, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c860, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44c00, 0x1fe000 bytes
    //
    _v38(sdk::unknown_ptr) warm_eject_lock;
    
    // [IopWarmEjectPdo]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x320a18, 0x32828 bytes
    // ntoskrnl.exe .data:0xc44c38, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc5c878, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc44be8, 0x1fe000 bytes
    //
    _v39(sdk::unknown_ptr) warm_eject_pdo;
    
    // [IopWriteAllocatedResourcesToRegistry]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54aba0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x72f81c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fab20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x73782c, 0x1fe000 bytes
    //
    _v40(sdk::unknown_ptr) write_allocated_resources_to_registry;
    
    // [IopWriteCapsuleTriageDumpToFirmware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1ca958, 0x32828 bytes
    // ntoskrnl.exe .text:0x4febec, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540aa8, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fe9ac, 0x1fe000 bytes
    //
    _v41(sdk::unknown_ptr) write_capsule_triage_dump_to_firmware;
    
    // [IopWriteDriverList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cab2c, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fedcc, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540c84, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4feb8c, 0x1fe000 bytes
    //
    _v42(sdk::unknown_ptr) write_driver_list;
    
    // [IopWriteResourceList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x54c5a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7198d4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7fa7f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7216f4, 0x1fe000 bytes
    //
    _v43(sdk::unknown_ptr) write_resource_list;
    
    // [IopWriteTriageDumpToFirmware]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1cac88, 0x32828 bytes
    // ntoskrnl.exe .text:0x4fef30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x540de0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x4fecf0, 0x1fe000 bytes
    //
    _v44(sdk::unknown_ptr) write_triage_dump_to_firmware;
    
    // [IopWstrHal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2358, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96af8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a598, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ce8, 0x1fe000 bytes
    //
    _v45(sdk::unknown_ptr) wstr_hal;
    
    // [IopWstrLoaderReservedMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2310, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96ab0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a550, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95ca0, 0x1fe000 bytes
    //
    _v46(sdk::unknown_ptr) wstr_loader_reserved_memory;
    
    // [IopWstrPhysicalMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c22f0, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a90, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a530, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c80, 0x1fe000 bytes
    //
    _v47(sdk::unknown_ptr) wstr_physical_memory;
    
    // [IopWstrSpecialMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2200, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96a40, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a4e0, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95c30, 0x1fe000 bytes
    //
    _v48(sdk::unknown_ptr) wstr_special_memory;
    
    // [IopWstrSystem]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x7c2330, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa96ad0, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb8a570, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa95cc0, 0x1fe000 bytes
    //
    _v49(sdk::unknown_ptr) wstr_system;
    
    // [IopXxxControlFile]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4df9a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6a62a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6bdaf0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5fc800, 0x1fe000 bytes
    //
    _v50(sdk::unknown_ptr) xxx_control_file;
    
    // [IopDevObjApplyPostCreationSettings]
    // Ldr = [pci.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // pci.sys PAGE:0x3aa08, 0x1d08 bytes
    // pci.sys PAGE:0x6c0f0, 0x1cf0 bytes
    // pci.sys PAGE:0x753c0, 0x1cf0 bytes
    // pci.sys PAGE:0x6a050, 0x1cf0 bytes
    //
    _v51(sdk::function<int32_t(struct nt::device_object_t*, struct wdf::stack_creation_settings_t*)>*) dev_obj_apply_post_creation_settings;
};
#include "magic/api.end.hpp"
