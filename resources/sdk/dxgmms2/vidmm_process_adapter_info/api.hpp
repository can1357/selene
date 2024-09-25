#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_process_adapter_info
{
    // [AcquireProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1bfc, 0x158b bytes
    //
    _m0(sdk::unknown_ptr) acquire_process_adapter_info_lock;
    
    // [ReleaseProcessAdapterInfoLock@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1c40, 0x158b bytes
    //
    _m1(sdk::unknown_ptr) release_process_adapter_info_lock;
    
    // [BeginMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b134, 0x158b bytes
    // dxgmms2.sys PAGE:0x649f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9b058, 0x20ba bytes
    // dxgmms2.sys PAGE:0x64fe0, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) begin_memory_usage_change;
    
    // [CheckBudgetRefreshConditionOnProcessMemoryChange@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x88444, 0x158b bytes
    // dxgmms2.sys PAGE:0x7e56c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdfb40, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7eb5c, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) check_budget_refresh_condition_on_process_memory_change;
    
    // [CommitMemoryUsageChange@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b148, 0x158b bytes
    // dxgmms2.sys PAGE:0x64a54, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9afc4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x65044, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) commit_memory_usage_change;
    
    // [??0VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b32c, 0x158b bytes
    // dxgmms2.sys PAGE:0x7fd68, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9cf94, 0x20ba bytes
    // dxgmms2.sys PAGE:0x80358, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_PROCESS_ADAPTER_INFO@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b20c, 0x158b bytes
    // dxgmms2.sys PAGE:0x800dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9d764, 0x20ba bytes
    // dxgmms2.sys PAGE:0x806cc, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [GetNumBytesToTrim@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4b184, 0x158b bytes
    // dxgmms2.sys PAGE:0x75724, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9a888, 0x20ba bytes
    // dxgmms2.sys PAGE:0x75d14, 0x1c52 bytes
    //
    _m7(sdk::unknown_ptr) get_num_bytes_to_trim;
    
    // [SuspendAllDevices@VIDMM_PROCESS_ADAPTER_INFO]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x908f8, 0x158b bytes
    // dxgmms2.sys PAGE:0xbabe8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xdf620, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbb1b8, 0x1c52 bytes
    //
    _m8(sdk::unknown_ptr) suspend_all_devices;
};
#include "magic/api.end.hpp"
