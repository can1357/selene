#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_flip_ex_buffer
{
    // [GetGpuFence@CFlipExBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3ba60, 0x1eb80 bytes
    //
    _m0(sdk::unknown_ptr) get_gpu_fence;
    
    // [ImmediateSignalGpuFence@CFlipExBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3c280, 0x1eb80 bytes
    //
    _m1(sdk::unknown_ptr) immediate_signal_gpu_fence;
    
    // [SetHDR10MetaData@CFlipExBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0xf7cb0, 0x1eb80 bytes
    //
    _m2(sdk::unknown_ptr) set_hdr10_meta_data;
    
    // [SignalMaxGpuFence@CFlipExBuffer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kbase.sys .text:0x3b9d8, 0x1eb80 bytes
    //
    _m3(sdk::unknown_ptr) signal_max_gpu_fence;
};
#include "magic/api.end.hpp"
