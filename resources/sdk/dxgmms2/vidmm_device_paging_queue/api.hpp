#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2::vidmm_device_paging_queue
{
    // [DestroyState@VIDMM_DEVICE_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7ec38, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x964b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7f228, 0x1c52 bytes
    //
    _m0(sdk::unknown_ptr) destroy_state;
    
    // [MapGpuVA@VIDMM_DEVICE_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb90ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddb08, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb967c, 0x1c52 bytes
    //
    _m1(sdk::unknown_ptr) map_gpu_va;
    
    // [ReportState@VIDMM_DEVICE_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb95dc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xddeac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb9bac, 0x1c52 bytes
    //
    _m2(sdk::unknown_ptr) report_state;
    
    // [UnmapGpuVA@VIDMM_DEVICE_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x7f7f0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x97524, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7fde0, 0x1c52 bytes
    //
    _m3(sdk::unknown_ptr) unmap_gpu_va;
    
    // [??0VIDMM_DEVICE_PAGING_QUEUE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1690, 0x158b bytes
    // dxgmms2.sys .text:0x124b0, 0x1c52 bytes
    // dxgmms2.sys .text:0x14a50, 0x20ba bytes
    // dxgmms2.sys .text:0x124b0, 0x1c52 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1VIDMM_DEVICE_PAGING_QUEUE@@QEAA@XZ]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x16b0, 0x158b bytes
    // dxgmms2.sys .text:0x123f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x15390, 0x20ba bytes
    // dxgmms2.sys .text:0x123f0, 0x1c52 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@VIDMM_DEVICE_PAGING_QUEUE]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49a88, 0x158b bytes
    // dxgmms2.sys PAGE:0x7efe0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x968e4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x7f5d0, 0x1c52 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
