#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdevicesyncobject
{
    // [??0DXGDEVICESYNCOBJECT@@QEAA@PEAVDXGDEVICE@@_N1@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1443f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x147304, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [MapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x118368, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b174c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xef73c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) map_gpu_va_for_paging_process;
    
    // [ReportState@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28f150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x344c18, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28f1f0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) report_state;
    
    // [UnmapCpuVaForParavirtualization@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x236460, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3671cc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x236590, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) unmap_cpu_va_for_paravirtualization;
    
    // [UnmapGpuVaForPagingProcess@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28f1c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x344c94, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28f264, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) unmap_gpu_va_for_paging_process;
    
    // [DestroyCoreState@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa4788, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c1c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a065c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1181f8, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_core_state;
    
    // [??1DXGDEVICESYNCOBJECT@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa4914, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10c0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a0490, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1180d0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_instance;
    
    // [DetachGlobalSyncObjectOnError@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17956c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28f0bc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x344b90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28f15c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) detach_global_sync_object_on_error;
    
    // [Initialize@DXGDEVICESYNCOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xa4510, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x10bda8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1a258c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x117dd8, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
