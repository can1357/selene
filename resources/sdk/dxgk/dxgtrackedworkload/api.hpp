#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgtrackedworkload
{
    // [m_bypassPowerLevel@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x132240, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) m_bypass_power_level;
    
    // [m_enableBypassPowerLevel@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x132244, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) m_enable_bypass_power_level;
    
    // [m_lastTrackedWorkloadNodeOrdinal@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x132248, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) m_last_tracked_workload_node_ordinal;
    
    // [m_lastTrackedWorkloadPhysicalAdapterIndex@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .data:0x13224c, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) m_last_tracked_workload_physical_adapter_index;
    
    // [ReportState@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3460dc, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) report_state;
    
    // [ReportStats@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3464f0, 0x84380 bytes
    //
    _m5(sdk::unknown_ptr) report_stats;
    
    // [??1DXGTRACKEDWORKLOAD@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6f7c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345240, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b701c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyTrackedWorkload@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b72a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34555c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7348, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) destroy_tracked_workload;
    
    // [EndTrackedWorkload@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b73c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34569c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7460, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) end_tracked_workload;
    
    // [FindInstancePair@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7564, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7604, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) find_instance_pair;
    
    // [GetAvailableIndex@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b75b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3458c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7658, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_available_index;
    
    // [GetIndexHelper@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7674, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3459a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7714, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) get_index_helper;
    
    // [GetInstanceForPair@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b76ac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3459e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b774c, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) get_instance_for_pair;
    
    // [GetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7734, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345a68, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b77d4, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_tracked_workload_user_statistics;
    
    // [ProcessActiveInstancePairs@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x345ba4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7920, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) process_active_instance_pairs;
    
    // [QPCFromGPUTimestamp@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b3d0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5a0f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b620, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) qpc_from_gpu_timestamp;
    
    // [Release@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4b488, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5a1a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x4b6d8, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) release;
    
    // [ResetTrackedWorkloadUserStatistics@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7d34, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3465e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7dd4, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) reset_tracked_workload_user_statistics;
    
    // [UpdateTrackedWorkload@DXGTRACKEDWORKLOAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b7f08, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3467a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b7fa8, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) update_tracked_workload;
};
#include "magic/api.end.hpp"
