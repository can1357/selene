#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdeviceaccesslockexclusivecdd
{
    // [??1DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x1c580, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGDEVICEACCESSLOCKEXCLUSIVECDD@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb54c, 0x60098 bytes
    // dxgkrnl.sys .text:0x6f08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3130, 0x84380 bytes
    // dxgkrnl.sys .text:0x82b8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [Release@DXGDEVICEACCESSLOCKEXCLUSIVECDD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb500, 0x60098 bytes
    // dxgkrnl.sys .text:0x190ac, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1df8c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1951c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
