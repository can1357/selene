#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgvirtualgpumanager_parav
{
    // [CreateVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230470, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35e950, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2305a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) create_virtual_gpu;
    
    // [DestroyVirtualGpu@DXGVIRTUALGPUMANAGER_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35efa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230980, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [InitializeVirtualGpuManager@DXGVIRTUALGPUMANAGER_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230950, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f0d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230a80, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize_virtual_gpu_manager;
    
    // [SaveKsrState@DXGVIRTUALGPUMANAGER_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155fd0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4a70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158e20, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) save_ksr_state;
};
#include "magic/api.end.hpp"
