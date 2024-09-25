#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace pfp
{
    // [PfpRpIsRehashNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607
    // ntoskrnl.exe .text:0xeeba4, 0x32828 bytes
    //
    _m0(sdk::unknown_ptr) rp_is_rehash_needed;
    
    // [PfpIsProcessInfoPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x728a4, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c118, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x2c2e34, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) is_process_info_present;
    
    // [PfpCheckPrefetchAbort]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104c28, 0x32828 bytes
    // ntoskrnl.exe .text:0x2aab9c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33d018, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2bcd5c, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) check_prefetch_abort;
    
    // [PfpCopyEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415160, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d260, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x653ac0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) copy_event;
    
    // [PfpCopyUserPfnPrioRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4cc930, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x635650, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x69e0f0, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) copy_user_pfn_prio_request;
    
    // [PfpCreateEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563278, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1b6c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8532f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9d8c, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) create_event;
    
    // [PfpDeprioritizeOldPagesInWs]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d578, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc560, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x971d9c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dad60, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) deprioritize_old_pages_in_ws;
    
    // [PfpEventHandleFullBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x72620, 0x32828 bytes
    // ntoskrnl.exe .text:0x256580, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36c8c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x305ac0, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) event_handle_full_buffer;
    
    // [PfpEventHandleOutOfBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfbe8, 0x32828 bytes
    // ntoskrnl.exe .text:0x269570, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3066c0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x31a580, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) event_handle_out_of_buffers;
    
    // [PfpFileBuildReadList]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eab20, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60cb08, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78b188, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6408c0, 0x1fe000 bytes
    //
    _m9(sdk::unknown_ptr) file_build_read_list;
    
    // [PfpFileBuildReadSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9ca0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60ccac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78aeec, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x640560, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) file_build_read_support;
    
    // [PfpFileCheckAttributesForPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104f94, 0x32828 bytes
    // ntoskrnl.exe .text:0x217160, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33cd94, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2aa0e8, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) file_check_attributes_for_prefetch;
    
    // [PfpFileSetupObjectAttributes]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea778, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60cc14, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78cc24, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x640828, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) file_setup_object_attributes;
    
    // [PfpFlushBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4153b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d480, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768d00, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x653ce0, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) flush_buffers;
    
    // [PfpFlushEventBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415050, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d160, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7689a8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6539c0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) flush_event_buffers;
    
    // [PfpGetPageListCount]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea528, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x697810, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c75c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63fcd8, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) get_page_list_count;
    
    // [PfpGetParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562cc4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a155c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8530f4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a977c, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) get_parameter;
    
    // [PfpLogApplicationEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x71ef0, 0x32828 bytes
    // ntoskrnl.exe .text:0x35ae4c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3064ac, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d5624, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) log_application_event;
    
    // [PfpLogEventRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51fabc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75a4ec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x971ef8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x761f3c, 0x1fe000 bytes
    //
    _n8(sdk::unknown_ptr) log_event_request;
    
    // [PfpLogPageAccess]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415750, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d820, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x769000, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x654080, 0x1fe000 bytes
    //
    _n9(sdk::unknown_ptr) log_page_access;
    
    // [PfpLogScenarioEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51f8bc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75a5c4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85c080, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x762014, 0x1fe000 bytes
    //
    _o0(sdk::unknown_ptr) log_scenario_event;
    
    // [PfpMemoryListQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xce5fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x375e30, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x39b1c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3771b0, 0x1fe000 bytes
    //
    _o1(sdk::unknown_ptr) memory_list_query;
    
    // [PfpMemoryRangesQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xcfee8, 0x32828 bytes
    // ntoskrnl.exe .text:0x37a99c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3cc7b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37bc0c, 0x1fe000 bytes
    //
    _o2(sdk::unknown_ptr) memory_ranges_query;
    
    // [PfpOpenHandleClose]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4eaaa0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60dde0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c298, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a564, 0x1fe000 bytes
    //
    _o3(sdk::unknown_ptr) open_handle_close;
    
    // [PfpOpenHandleCreate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9f7c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60dc48, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78bf20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63a3cc, 0x1fe000 bytes
    //
    _o4(sdk::unknown_ptr) open_handle_create;
    
    // [PfpOpenHandleInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x571e54, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc6bc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x891e20, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8daebc, 0x1fe000 bytes
    //
    _o5(sdk::unknown_ptr) open_handle_initialize;
    
    // [PfpParametersInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79fa20, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa66ff4, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50a88, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa666d4, 0x1fe000 bytes
    //
    _o6(sdk::unknown_ptr) parameters_initialize;
    
    // [PfpParametersPropagate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e7e4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd954, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x9739d4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dc154, 0x1fe000 bytes
    //
    _o7(sdk::unknown_ptr) parameters_propagate;
    
    // [PfpParametersRead]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5626f4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0e38, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8529d8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9058, 0x1fe000 bytes
    //
    _o8(sdk::unknown_ptr) parameters_read;
    
    // [PfpParametersWatcher]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e8ec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dda80, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973b10, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dc280, 0x1fe000 bytes
    //
    _o9(sdk::unknown_ptr) parameters_watcher;
    
    // [PfpPfnPrioRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ccb60, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6cf970, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c780, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x625db0, 0x1fe000 bytes
    //
    _p0(sdk::unknown_ptr) pfn_prio_request;
    
    // [PfpPowerActionDpcRoutine]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124124, 0x32828 bytes
    // ntoskrnl.exe .text:0x388e60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56e9b0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x389980, 0x1fe000 bytes
    //
    _p1(sdk::unknown_ptr) power_action_dpc_routine;
    
    // [PfpPowerActionStartScenarioTracing]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ce0ec, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98df10, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8bd0c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98cf24, 0x1fe000 bytes
    //
    _p2(sdk::unknown_ptr) power_action_start_scenario_tracing;
    
    // [PfpPrefetchDirectoryStream]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eea24, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x648dd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1b4c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d2d60, 0x1fe000 bytes
    //
    _p3(sdk::unknown_ptr) prefetch_directory_stream;
    
    // [PfpPrefetchEntireDirectory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4e9b48, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x60c994, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78ad80, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c3648, 0x1fe000 bytes
    //
    _p4(sdk::unknown_ptr) prefetch_entire_directory;
    
    // [PfpPrefetchFiles]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66d6b8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dc6e0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972004, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8daee0, 0x1fe000 bytes
    //
    _p5(sdk::unknown_ptr) prefetch_files;
    
    // [PfpPrefetchFilesTrickle]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea0d4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6973a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c300, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63f870, 0x1fe000 bytes
    //
    _p6(sdk::unknown_ptr) prefetch_files_trickle;
    
    // [PfpPrefetchPrivatePages]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523178, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x646df0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972388, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3ce0, 0x1fe000 bytes
    //
    _p7(sdk::unknown_ptr) prefetch_private_pages;
    
    // [PfpPrefetchRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3edff0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x648148, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0614, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d20d4, 0x1fe000 bytes
    //
    _p8(sdk::unknown_ptr) prefetch_request;
    
    // [PfpPrefetchRequestPatchOffsets]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ee1dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64922c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1aa0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d31b8, 0x1fe000 bytes
    //
    _p9(sdk::unknown_ptr) prefetch_request_patch_offsets;
    
    // [PfpPrefetchRequestPerform]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ee338, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x648344, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b0e34, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d22d0, 0x1fe000 bytes
    //
    _q0(sdk::unknown_ptr) prefetch_request_perform;
    
    // [PfpPrefetchSharedCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef734, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64907c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1250, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3008, 0x1fe000 bytes
    //
    _q1(sdk::unknown_ptr) prefetch_shared_cleanup;
    
    // [PfpPrefetchSharedConflictNotifyEnd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66da30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dca70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678ea0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8db270, 0x1fe000 bytes
    //
    _q2(sdk::unknown_ptr) prefetch_shared_conflict_notify_end;
    
    // [PfpPrefetchSharedConflictNotifyStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66da8c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dcae0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x678ac0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8db2e0, 0x1fe000 bytes
    //
    _q3(sdk::unknown_ptr) prefetch_shared_conflict_notify_start;
    
    // [PfpPrefetchSharedDeref]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eeff4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64904c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1184, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d2fd8, 0x1fe000 bytes
    //
    _q4(sdk::unknown_ptr) prefetch_shared_deref;
    
    // [PfpPrefetchSharedInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef5c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649440, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1a58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d33cc, 0x1fe000 bytes
    //
    _q5(sdk::unknown_ptr) prefetch_shared_initialize;
    
    // [PfpPrefetchSharedStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ef604, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6492f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b1350, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3280, 0x1fe000 bytes
    //
    _q6(sdk::unknown_ptr) prefetch_shared_start;
    
    // [PfpPrefetchVolumesCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ee29c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64917c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b11b4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3108, 0x1fe000 bytes
    //
    _q7(sdk::unknown_ptr) prefetch_volumes_cleanup;
    
    // [PfpPrivSourceAdd]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424ef0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68ff84, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x76a2b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5ef1d4, 0x1fe000 bytes
    //
    _q8(sdk::unknown_ptr) priv_source_add;
    
    // [PfpPrivSourceEnum]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x424854, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x68f80c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x769bfc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5eea58, 0x1fe000 bytes
    //
    _q9(sdk::unknown_ptr) priv_source_enum;
    
    // [PfpProcessScenarioPhase]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5357dc, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x770488, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85bf8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x777ef8, 0x1fe000 bytes
    //
    _r0(sdk::unknown_ptr) process_scenario_phase;
    
    // [PfpQueryFileExtentsRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66db30, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dcb8c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972610, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8db38c, 0x1fe000 bytes
    //
    _r1(sdk::unknown_ptr) query_file_extents_request;
    
    // [PfpQueryGpuUtilization]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x48aaec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67210c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972cbc, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6e596c, 0x1fe000 bytes
    //
    _r2(sdk::unknown_ptr) query_gpu_utilization;
    
    // [PfpQueryScenarioInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5228d8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75be54, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972da4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7637e4, 0x1fe000 bytes
    //
    _r3(sdk::unknown_ptr) query_scenario_information;
    
    // [PfpReadSupportCleanup]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea724, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x696208, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78cbd0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x640504, 0x1fe000 bytes
    //
    _r4(sdk::unknown_ptr) read_support_cleanup;
    
    // [PfpReadSupportInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x104f70, 0x32828 bytes
    // ntoskrnl.exe .text:0x2a954c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x33da3c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2beaf0, 0x1fe000 bytes
    //
    _r5(sdk::unknown_ptr) read_support_initialize;
    
    // [PfpRepurposeNameLoggingTrace]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415024, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x67d128, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x768978, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x653988, 0x1fe000 bytes
    //
    _r6(sdk::unknown_ptr) repurpose_name_logging_trace;
    
    // [PfpReturnAccessBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0xd061c, 0x32828 bytes
    // ntoskrnl.exe .text:0x27c25c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x306980, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2c2f78, 0x1fe000 bytes
    //
    _r7(sdk::unknown_ptr) return_access_buffer;
    
    // [PfpRpCHashAddEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419ad4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x647b64, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8d58, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d1af0, 0x1fe000 bytes
    //
    _r8(sdk::unknown_ptr) rp_c_hash_add_entries;
    
    // [PfpRpCHashDeleteEntries]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ed624, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x647ddc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b92b8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d1d68, 0x1fe000 bytes
    //
    _r9(sdk::unknown_ptr) rp_c_hash_delete_entries;
    
    // [PfpRpCHashEmpty]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568460, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a79e8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a7d0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afb08, 0x1fe000 bytes
    //
    _s0(sdk::unknown_ptr) rp_c_hash_empty;
    
    // [PfpRpCHashGrow]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x51bdec, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x793d78, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8fe4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7994f8, 0x1fe000 bytes
    //
    _s1(sdk::unknown_ptr) rp_c_hash_grow;
    
    // [PfpRpControlRequest]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419614, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x647660, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b883c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d15ec, 0x1fe000 bytes
    //
    _s2(sdk::unknown_ptr) rp_control_request;
    
    // [PfpRpControlRequestCopy]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x41973c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6477a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8984, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d1734, 0x1fe000 bytes
    //
    _s3(sdk::unknown_ptr) rp_control_request_copy;
    
    // [PfpRpControlRequestPerform]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4196c8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x64772c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8908, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d16b8, 0x1fe000 bytes
    //
    _s4(sdk::unknown_ptr) rp_control_request_perform;
    
    // [PfpRpControlRequestReset]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x568410, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a7990, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x85a778, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7afab0, 0x1fe000 bytes
    //
    _s5(sdk::unknown_ptr) rp_control_request_reset;
    
    // [PfpRpControlRequestUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x419948, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6479cc, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b8ba8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d1958, 0x1fe000 bytes
    //
    _s6(sdk::unknown_ptr) rp_control_request_update;
    
    // [PfpRpControlRequestVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x73c0c, 0x32828 bytes
    // ntoskrnl.exe .text:0x24cf74, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x36922c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x202bec, 0x1fe000 bytes
    //
    _s7(sdk::unknown_ptr) rp_control_request_verify;
    
    // [PfpRpFileKeyUpdate]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c52b0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61e5b0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x6d6b40, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63d860, 0x1fe000 bytes
    //
    _s8(sdk::unknown_ptr) rp_file_key_update;
    
    // [PfpRpInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe INIT:0x79fde8, 0x32828 bytes
    // ntoskrnl.exe INIT:0xa67434, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb50c28, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa66b14, 0x1fe000 bytes
    //
    _s9(sdk::unknown_ptr) rp_initialize;
    
    // [PfpRpLogDeprioEvent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x7213c, 0x32828 bytes
    // ntoskrnl.exe .text:0x35b184, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x201790, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x2d595c, 0x1fe000 bytes
    //
    _t0(sdk::unknown_ptr) rp_log_deprio_event;
    
    // [PfpRpRehashIfNeeded]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4c59ac, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x61eb44, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x75fa7c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63e574, 0x1fe000 bytes
    //
    _t1(sdk::unknown_ptr) rp_rehash_if_needed;
    
    // [PfpRpShutdown]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x66e3c0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x8dd518, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x97366c, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x8dbd18, 0x1fe000 bytes
    //
    _t2(sdk::unknown_ptr) rp_shutdown;
    
    // [PfpRpStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563458, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1d90, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x853554, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9fb0, 0x1fe000 bytes
    //
    _t3(sdk::unknown_ptr) rp_start;
    
    // [PfpScenCtxInitialize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x563424, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1d5c, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8534e4, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9f7c, 0x1fe000 bytes
    //
    _t4(sdk::unknown_ptr) scen_ctx_initialize;
    
    // [PfpScenCtxPrefetchAbortSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d0138, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x9956c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8bdd8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x9946d0, 0x1fe000 bytes
    //
    _t5(sdk::unknown_ptr) scen_ctx_prefetch_abort_set;
    
    // [PfpScenCtxPrefetchStateSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cfbac, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x995280, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8bea8, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x994290, 0x1fe000 bytes
    //
    _t6(sdk::unknown_ptr) scen_ctx_prefetch_state_set;
    
    // [PfpScenCtxPrefetchWait]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cdf3c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98e0a8, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8bf8c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98d0bc, 0x1fe000 bytes
    //
    _t7(sdk::unknown_ptr) scen_ctx_prefetch_wait;
    
    // [PfpScenCtxQueryScenarioInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3cfafc, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x994da0, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8c194, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x993db0, 0x1fe000 bytes
    //
    _t8(sdk::unknown_ptr) scen_ctx_query_scenario_information;
    
    // [PfpScenCtxScenarioSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d265c, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x996e68, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d240, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x996208, 0x1fe000 bytes
    //
    _t9(sdk::unknown_ptr) scen_ctx_scenario_set;
    
    // [PfpScenCtxServiceThreadSet]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3d6510, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x99d7ac, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa7d8e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x99c82c, 0x1fe000 bytes
    //
    _u0(sdk::unknown_ptr) scen_ctx_service_thread_set;
    
    // [PfpScenCtxStart]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x56320c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a1aec, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8528a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a9d0c, 0x1fe000 bytes
    //
    _u1(sdk::unknown_ptr) scen_ctx_start;
    
    // [PfpScenCtxWaiterTimedOut]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124724, 0x32828 bytes
    // ntoskrnl.exe .text:0x389604, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ea50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x38a124, 0x1fe000 bytes
    //
    _u2(sdk::unknown_ptr) scen_ctx_waiter_timed_out;
    
    // [PfpSectInfoHandleFullBuffer]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x415e9c, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x66bdf0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7684b0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6de8c0, 0x1fe000 bytes
    //
    _u3(sdk::unknown_ptr) sect_info_handle_full_buffer;
    
    // [PfpSectInfoHandleOutOfBuffers]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x498234, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x772170, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x871990, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x779b70, 0x1fe000 bytes
    //
    _u4(sdk::unknown_ptr) sect_info_handle_out_of_buffers;
    
    // [PfpServiceMainThreadBoost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x124194, 0x32828 bytes
    // ntoskrnl.exe .text:0x388988, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ea80, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3893f8, 0x1fe000 bytes
    //
    _u5(sdk::unknown_ptr) service_main_thread_boost;
    
    // [PfpServiceMainThreadBoostPrep]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x524364, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x75d258, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972eb0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x764ca8, 0x1fe000 bytes
    //
    _u6(sdk::unknown_ptr) service_main_thread_boost_prep;
    
    // [PfpServiceMainThreadUnboost]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x112280, 0x32828 bytes
    // ntoskrnl.exe .text:0x37ef60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x56ebd0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x37fd60, 0x1fe000 bytes
    //
    _u7(sdk::unknown_ptr) service_main_thread_unboost;
    
    // [PfpSetBaseTime]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x562608, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0d40, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x8528e0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8f60, 0x1fe000 bytes
    //
    _u8(sdk::unknown_ptr) set_base_time;
    
    // [PfpSetParameter]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5626a0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7a0dd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x852974, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x7a8ff4, 0x1fe000 bytes
    //
    _u9(sdk::unknown_ptr) set_parameter;
    
    // [PfpSourceBuildVaArray]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x523530, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649d70, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x972f60, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d4190, 0x1fe000 bytes
    //
    _v0(sdk::unknown_ptr) source_build_va_array;
    
    // [PfpSourceGetPrefetchSupport]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5233c4, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x649bac, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973048, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d3fd8, 0x1fe000 bytes
    //
    _v1(sdk::unknown_ptr) source_get_prefetch_support;
    
    // [PfpStartLoggingHardFaultEvents]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGELK:0x3ce034, 0x32828 bytes
    // ntoskrnl.exe PAGELK:0x98dfd4, 0x1fe000 bytes
    // ntoskrnl.exe PAGELK:0xa8c22c, 0x1fd000 bytes
    // ntoskrnl.exe PAGELK:0x98cfe8, 0x1fe000 bytes
    //
    _v2(sdk::unknown_ptr) start_logging_hard_fault_events;
    
    // [PfpUpdateRepurposedByPrefetch]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x4ea428, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6976f4, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x78c640, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x63fbbc, 0x1fe000 bytes
    //
    _v3(sdk::unknown_ptr) update_repurposed_by_prefetch;
    
    // [PfpVirtualQuery]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x5223d0, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x7172d8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x973278, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x71ed18, 0x1fe000 bytes
    //
    _v4(sdk::unknown_ptr) virtual_query;
    
    // [PfpVolumeOpenAndVerify]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3eec84, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6486b8, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b16e8, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d2644, 0x1fe000 bytes
    //
    _v5(sdk::unknown_ptr) volume_open_and_verify;
    
    // [PfpVolumePrefetchMetadata]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x3ee6a8, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x648a28, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x7b14a0, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x5d29b4, 0x1fe000 bytes
    //
    _v6(sdk::unknown_ptr) volume_prefetch_metadata;
};
#include "magic/api.end.hpp"
