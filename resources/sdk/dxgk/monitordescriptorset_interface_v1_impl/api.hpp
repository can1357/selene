#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::monitordescriptorset_interface_v1_impl
{
    // [AcquireFirstDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe55a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f18b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201210, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1620, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_first_descriptor_info;
    
    // [AcquireNextDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe5660, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f1ed0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3b2fa0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f1c40, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_next_descriptor_info;
    
    // [DxgMonitorDescriptorSetInterfaceV1@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0x55b10, 0x60098 bytes
    // dxgkrnl.sys .data:0xaedb0, 0x762b0 bytes
    // dxgkrnl.sys .data:0x12feb0, 0x84380 bytes
    // dxgkrnl.sys .data:0xaedb0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) dxg_monitor_descriptor_set_interface_v1;
    
    // [GetNumDescriptors@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf2980, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f2bc0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2010e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2930, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_num_descriptors;
    
    // [ReleaseDescriptorInfo@DXGK_MONITORDESCRIPTORSET_INTERFACE_V1_IMPL]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xe5740, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f2f80, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x201320, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f2cf0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release_descriptor_info;
};
#include "magic/api.end.hpp"
