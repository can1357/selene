#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdevicebyhandle
{
    // [??1DXGDEVICEBYHANDLE@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb454, 0x60098 bytes
    // dxgkrnl.sys .text:0x3ba10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3bc40, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGDEVICEBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb33c, 0x60098 bytes
    // dxgkrnl.sys .text:0x6dd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc768, 0x84380 bytes
    // dxgkrnl.sys .text:0x8184, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
