#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdeviceaccesslockshared
{
    // [??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v20H2
    // dxgkrnl.sys .text:0x25258, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Acquire@DXGDEVICEACCESSLOCKSHARED]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1cee4, 0x84380 bytes
    // dxgkrnl.sys .text:0x2458c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire;
    
    // [??0DXGDEVICEACCESSLOCKSHARED@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb68c, 0x60098 bytes
    // dxgkrnl.sys .text:0x7304, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ceb8, 0x84380 bytes
    // dxgkrnl.sys .text:0x8604, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGDEVICEACCESSLOCKSHARED@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xb668, 0x60098 bytes
    // dxgkrnl.sys .text:0x3c9dc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1d2b8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ad64, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
