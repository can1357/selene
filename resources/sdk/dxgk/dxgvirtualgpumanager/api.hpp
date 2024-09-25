#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvirtualgpumanager
{
    // [ReportState@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3592f4, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) report_state;
    
    // [GetVirtualGpuByIndex@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d40c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3d5fc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) get_virtual_gpu_by_index;
    
    // [DestroyVirtualGpuManager@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22a7d4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357d48, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22a904, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_virtual_gpu_manager;
    
    // [DestroyVirtualGpuState@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22a880, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357df4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22a9b0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_virtual_gpu_state;
    
    // [FindVirtualGpuByLuid@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22a9e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x357f7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22ab10, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) find_virtual_gpu_by_luid;
    
    // [GetTargetPartitionId@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22afd8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3586f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b108, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_target_partition_id;
    
    // [NotifyVmmsProcessDestroyed@DXGVIRTUALGPUMANAGER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x22b3c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x358b34, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22b4f8, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) notify_vmms_process_destroyed;
};
#include "magic/api.end.hpp"
