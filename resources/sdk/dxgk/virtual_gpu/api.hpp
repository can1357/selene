#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::virtual_gpu
{
    // [DestroyVirtualGpu@DXGK_VIRTUAL_GPU]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x15d2bc, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [ReportState@DXGK_VIRTUAL_GPU]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3591f0, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) report_state;
    
    // [??0DXGK_VIRTUAL_GPU@@QEAA@PEAVADAPTER_RENDER@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x229f20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3573a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x22a050, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [GetBackingResource@DXGK_VIRTUAL_GPU]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a730, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adb0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_backing_resource;
    
    // [GetMmioRangeCount@DXGK_VIRTUAL_GPU]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a730, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adb0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_mmio_range_count;
    
    // [GetMmioRanges@DXGK_VIRTUAL_GPU]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a730, 0x762b0 bytes
    // dxgkrnl.sys .text:0x202f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1adb0, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_mmio_ranges;
};
#include "magic/api.end.hpp"
