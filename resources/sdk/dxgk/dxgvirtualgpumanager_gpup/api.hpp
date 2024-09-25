#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvirtualgpumanager_gpup
{
    // [CreateVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x231530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35ff60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x231660, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create_virtual_gpu;
    
    // [DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x231f70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x360f30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2320a0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2321b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361290, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2322e0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_virtual_gpu_manager;
    
    // [SaveKsrState@DXGVIRTUALGPUMANAGER_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232400, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232530, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) save_ksr_state;
};
#include "magic/api.end.hpp"
