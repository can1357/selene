#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::virtual_gpu_gpup
{
    // [DisconnectVM@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x361180, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) disconnect_vm;
    
    // [DestroyVirtualGpu@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x231f20, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x360ee0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232050, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_virtual_gpu;
    
    // [DestroyVirtualGpuCoreState@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232010, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361020, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232140, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_virtual_gpu_core_state;
    
    // [GetBackingResource@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2320d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3611b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232200, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_backing_resource;
    
    // [GetDeviceLocation@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2320f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3611d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232220, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) get_device_location;
    
    // [GetMmioRangeCount@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232110, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3611f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232240, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_mmio_range_count;
    
    // [GetMmioRanges@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232130, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361210, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232260, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) get_mmio_ranges;
    
    // [GetResourceForBar@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232150, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361230, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232280, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) get_resource_for_bar;
    
    // [GetVendorAndDevice@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232170, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361250, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2322a0, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) get_vendor_and_device;
    
    // [GetVirtualGpuInfo@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232190, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2322c0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) get_virtual_gpu_info;
    
    // [QueryMitigatedRangeCount@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2322a0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3613a0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2323d0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) query_mitigated_range_count;
    
    // [QueryMitigatedRanges@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2322c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3613c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2323f0, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) query_mitigated_ranges;
    
    // [QueryProbedBars@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2322e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3613e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232410, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) query_probed_bars;
    
    // [QueryVirtualFunctionLuid@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232300, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361400, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232430, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) query_virtual_function_luid;
    
    // [ReadVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361420, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232450, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) read_virtual_function_config;
    
    // [ReadVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232340, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361440, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232470, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) read_virtual_function_config_block;
    
    // [ResetVirtualFunction@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232360, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361460, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232490, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) reset_virtual_function;
    
    // [SetVirtualFunctionPowerState@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232570, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361730, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2326a0, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) set_virtual_function_power_state;
    
    // [SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232590, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361750, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2326c0, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) set_virtual_gpu_vm_bus;
    
    // [VirtualGpuDriverEscape@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232830, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361a20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232960, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) virtual_gpu_driver_escape;
    
    // [WriteVirtualFunctionConfig@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232850, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361a40, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232980, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) write_virtual_function_config;
    
    // [WriteVirtualFunctionConfigBlock@DXGK_VIRTUAL_GPU_GPUP]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x232870, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361a60, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2329a0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) write_virtual_function_config_block;
};
#include "magic/api.end.hpp"
