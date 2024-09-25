#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndisp
{
    // [ndispConvOffsetToPointer]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xae638, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) conv_offset_to_pointer;
    
    // [ndispConvVar]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xae614, 0x1c8a8 bytes
    //
    _m1(sdk::unknown_ptr) conv_var;
    
    // [NdispRegisterShim]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xafc7c, 0x1c8a8 bytes
    // ndis.sys PAGE:0x108ff8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x113398, 0x1e858 bytes
    // ndis.sys PAGE:0x109518, 0x1d2c0 bytes
    //
    _m2(sdk::unknown_ptr) register_shim;
};
#include "magic/api.end.hpp"
