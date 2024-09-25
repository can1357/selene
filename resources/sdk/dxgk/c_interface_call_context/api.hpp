#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_interface_call_context
{
    // [??0CInterfaceCallContext@@QEAA@PEAX@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x29650, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@EE@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x5f248, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance_;
    
    // [??0CInterfaceCallContext@@QEAA@PEAXPEAU_IRP@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4e32c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4e57c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance__;
    
    // [??1CInterfaceCallContext@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x296f8, 0x60098 bytes
    // dxgkrnl.sys .text:0x4e454, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5f3c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x4e6a4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
