#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_composition_buffer
{
    // [GetGpuFence@CCompositionBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x839e0, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_gpu_fence;
    
    // [ImmediateSignalGpuFence@CCompositionBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae60, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) immediate_signal_gpu_fence;
    
    // [RemoveAllRealizations@CCompositionBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3c940, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) remove_all_realizations;
    
    // [SetHDR10MetaData@CCompositionBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x8ae70, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) set_hdr10_meta_data;
};
#include "magic/api.end.hpp"
