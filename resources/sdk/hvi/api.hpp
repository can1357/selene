#pragma once
#include <sdkgen/support_library.hpp>
#include "../hv/x64_hypervisor_features_t.hpp"

#include "magic/api.start.hpp"
namespace hvi
{
    // [HviCopyMemory]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58e5f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a0fc4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e470, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) copy_memory;
    
    // [HviCopyMemoryNonTemporal]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58e66c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1040, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e4ec, 0x1fe000 bytes
    //
    _m1(sdk::unknown_ptr) copy_memory_non_temporal;
    
    // [HviEnterKernelAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58e6f0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a10c4, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e570, 0x1fe000 bytes
    //
    _m2(sdk::unknown_ptr) enter_kernel_aperture;
    
    // [HviGetDebugDeviceOptions]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2313e8, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b8e50, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8cd0, 0x1fe000 bytes
    //
    _m3(sdk::unknown_ptr) get_debug_device_options;
    
    // [HviGetIptFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x5b8ff8, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x60064c, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8e78, 0x1fe000 bytes
    //
    _m4(sdk::unknown_ptr) get_ipt_features;
    
    // [HviIsIommuInUse]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23157c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b90a0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5b8f20, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) is_iommu_in_use;
    
    // [HviLeaveKernelAperture]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x58e74c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x5a1124, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x58e5cc, 0x1fe000 bytes
    //
    _m6(sdk::unknown_ptr) leave_kernel_aperture;
    
    // [HviGetEnlightenmentInformation]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x231418, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a4190, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad140, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9b10, 0x1fe000 bytes
    //
    _m7(sdk::unknown_ptr) get_enlightenment_information;
    
    // [HviGetHardwareFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x231458, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b8e90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600500, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8d10, 0x1fe000 bytes
    //
    _m8(sdk::unknown_ptr) get_hardware_features;
    
    // [HviGetHypervisorFeatures]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x1491d8, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a41d0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3adb50, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9b50, 0x1fe000 bytes
    //
    _m9(sdk::function<void(struct hv::x64_hypervisor_features_t*)>*) get_hypervisor_features;
    
    // [HviGetHypervisorInterface]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149244, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a4260, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad594, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9be0, 0x1fe000 bytes
    //
    _n0(sdk::unknown_ptr) get_hypervisor_interface;
    
    // [HviGetHypervisorVendorAndMaxFunction]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2314bc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b8f10, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600574, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8d90, 0x1fe000 bytes
    //
    _n1(sdk::unknown_ptr) get_hypervisor_vendor_and_max_function;
    
    // [HviGetHypervisorVersion]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x2314fc, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b8f60, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x6005bc, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8de0, 0x1fe000 bytes
    //
    _n2(sdk::unknown_ptr) get_hypervisor_version;
    
    // [HviGetImplementationLimits]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x23153c, 0x32828 bytes
    // ntoskrnl.exe .text:0x5b8fb0, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x600604, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x5b8e30, 0x1fe000 bytes
    //
    _n3(sdk::unknown_ptr) get_implementation_limits;
    
    // [HviIsAnyHypervisorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x12f668, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a1020, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad5d0, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a24e0, 0x1fe000 bytes
    //
    _n4(sdk::unknown_ptr) is_any_hypervisor_present;
    
    // [HviIsHypervisorMicrosoftCompatible]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x149208, 0x32828 bytes
    // ntoskrnl.exe .text:0x3a4210, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ad548, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3a9b90, 0x1fe000 bytes
    //
    _n5(sdk::unknown_ptr) is_hypervisor_microsoft_compatible;
    
    // [HviIsHypervisorVendorMicrosoft]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x13a81c, 0x32828 bytes
    // ntoskrnl.exe .text:0x3b7c20, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3a9800, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3af230, 0x1fe000 bytes
    //
    _n6(sdk::unknown_ptr) is_hypervisor_vendor_microsoft;
    
    // [HviIsXboxNanovisorPresent]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll .text:0x15adc, 0x11e8 bytes
    // ntoskrnl.exe .text:0x3c9224, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3d7220, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3ca114, 0x1fe000 bytes
    //
    _n7(sdk::unknown_ptr) is_xbox_nanovisor_present;
};
#include "magic/api.end.hpp"
