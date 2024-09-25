#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::coredeviceaccess
{
    // [AcquireExclusive@COREDEVICEACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9ec8, 0x60098 bytes
    // dxgkrnl.sys .text:0x1fdc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x37c8, 0x84380 bytes
    // dxgkrnl.sys .text:0x20b8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireExclusiveUncheck@COREDEVICEACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9e18, 0x60098 bytes
    // dxgkrnl.sys .text:0x1db4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2f8c, 0x84380 bytes
    // dxgkrnl.sys .text:0xb508, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_exclusive_uncheck;
    
    // [AcquireShared@COREDEVICEACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9e40, 0x60098 bytes
    // dxgkrnl.sys .text:0x6cd0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa810, 0x84380 bytes
    // dxgkrnl.sys .text:0x8080, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_shared;
    
    // [AcquireSharedUncheck@COREDEVICEACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9db0, 0x60098 bytes
    // dxgkrnl.sys .text:0x3008, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbf24, 0x84380 bytes
    // dxgkrnl.sys .text:0x43a8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire_shared_uncheck;
    
    // [??0COREDEVICEACCESS@@QEAA@QEAVDXGDEVICE@@W4_DXGDEVICEACCESS_TYPE@@I_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9f24, 0x60098 bytes
    // dxgkrnl.sys .text:0x2534, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3328, 0x84380 bytes
    // dxgkrnl.sys .text:0x1cd8, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1COREDEVICEACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9bd0, 0x60098 bytes
    // dxgkrnl.sys .text:0x236e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b2f0, 0x84380 bytes
    // dxgkrnl.sys .text:0x24200, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Release@COREDEVICEACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9d8c, 0x60098 bytes
    // dxgkrnl.sys .text:0x7bac, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbf54, 0x84380 bytes
    // dxgkrnl.sys .text:0x3b64, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
