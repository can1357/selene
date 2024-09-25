#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::virtual_gpu_parav
{
    // [??1DXGK_VIRTUAL_GPU_PARAV@@EEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x35e8f8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [DisconnectVM@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1fb60, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) disconnect_vm;
    
    // [ReleaseVirtualGpuReference@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x35f504, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) release_virtual_gpu_reference;
    
    // [??1DXGK_VIRTUAL_GPU_PARAV@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d6c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3d8b4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance_;
    
    // [??0DXGK_VIRTUAL_GPU_PARAV@@QEAA@PEAVADAPTER_RENDER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3d618, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35e82c, 0x84380 bytes
    // dxgkrnl.sys .text:0x3d808, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [DestroyVirtualGpu@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230710, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35ee40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230840, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xef0a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xfb070, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_virtual_gpu_core_state;
    
    // [GetDeviceLocation@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155ee0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4980, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158d30, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_device_location;
    
    // [GetResourceForBar@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155f00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e49a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158d50, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_resource_for_bar;
    
    // [GetVendorAndDevice@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f090, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230a40, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_vendor_and_device;
    
    // [GetVirtualGpuInfo@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155f20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e49c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158d70, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) get_virtual_gpu_info;
    
    // [InsertDxgDevice@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4083c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4c294, 0x84380 bytes
    // dxgkrnl.sys .text:0x40a2c, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) insert_dxg_device;
    
    // [QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155f70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4a10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158dc0, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) query_mitigated_range_count;
    
    // [QueryMitigatedRanges@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230a40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f1e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230b70, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) query_mitigated_ranges;
    
    // [QueryProbedBars@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155f90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4a30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158de0, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) query_probed_bars;
    
    // [QueryVirtualFunctionLuid@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x155fb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e4a50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158e00, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) query_virtual_function_luid;
    
    // [ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f250, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230bc0, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) read_virtual_function_config;
    
    // [ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230c70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f4a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230da0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) read_virtual_function_config_block;
    
    // [ResetVirtualFunction@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230cb0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f540, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230de0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) reset_virtual_function;
    
    // [SetVirtualFunctionPowerState@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x153b60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e2ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x156e10, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) set_virtual_function_power_state;
    
    // [SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x230e30, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35f6f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x230f60, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) set_virtual_gpu_vm_bus;
    
    // [VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x231180, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35fa90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2312b0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) virtual_gpu_driver_escape;
    
    // [WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2314f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35fee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x231620, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) write_virtual_function_config;
    
    // [WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_PARAV]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2314f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35ff30, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x231620, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) write_virtual_function_config_block;
};
#include "magic/api.end.hpp"
