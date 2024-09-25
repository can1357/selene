#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_commit_telemetry
{
    // [LogAllProcesses@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys PAGE:0x65cd8, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) log_all_processes;
    
    // [Init@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x67d74, 0x158b bytes
    // dxgmms2.sys PAGE:0xc093c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7d6c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0f0c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) init;
    
    // [LogAllocationInformation@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9ad44, 0x158b bytes
    // dxgmms2.sys PAGE:0xc0964, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe50ec, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc0f34, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) log_allocation_information;
    
    // [LogDeviceInPenaltyBoxEvent@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x68ad4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc0cb8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa7554, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1288, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) log_device_in_penalty_box_event;
    
    // [LogFullDefragPass@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9af24, 0x158b bytes
    // dxgmms2.sys PAGE:0xc0ec0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe5a98, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1490, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) log_full_defrag_pass;
    
    // [LogLongPagingPacket@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65d60, 0x158b bytes
    // dxgmms2.sys PAGE:0xc0fec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe5bc4, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc15bc, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) log_long_paging_packet;
    
    // [LogMemoryState@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65b30, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1198, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe5d70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1768, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) log_memory_state;
    
    // [LogNoCandidatesToSuspendFound@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9b09c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1434, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe600c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1a04, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) log_no_candidates_to_suspend_found;
    
    // [LogProcessInformation@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65a6c, 0x158b bytes
    // dxgmms2.sys PAGE:0xc1578, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6150, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1b48, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) log_process_information;
    
    // [LogUnderBudgetButCantCommitEvent@VIDMM_COMMIT_TELEMETRY]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9b220, 0x158b bytes
    // dxgmms2.sys PAGE:0xc17a0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe6370, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc1d70, 0x1c52 bytes
    //
    _m9(sdk::unknown_ptr) log_under_budget_but_cant_commit_event;
};
#include "magic/api.end.hpp"
