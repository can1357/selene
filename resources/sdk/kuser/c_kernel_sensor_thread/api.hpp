#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_kernel_sensor_thread
{
    // [DeactivateInputProcessing@CKernelSensorThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86670, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) deactivate_input_processing;
    
    // [DestroyEventHandles@CKernelSensorThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x866a4, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_event_handles;
    
    // [??1CKernelSensorThread@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x86624, 0x27ef0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@CKernelSensorThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x85f18, 0x27ef0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
    
    // [InitializeEventHandles@CKernelSensorThread]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x87330, 0x27ef0 bytes
    //
    _m4(sdk::unknown_ptr) initialize_event_handles;
};
#include "magic/api.end.hpp"
