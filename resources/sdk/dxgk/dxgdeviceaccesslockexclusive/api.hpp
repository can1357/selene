#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdeviceaccesslockexclusive
{
    // [??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@H@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x349c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [Acquire@DXGDEVICEACCESSLOCKEXCLUSIVE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa270, 0x60098 bytes
    // dxgkrnl.sys .text:0x2320, 0x762b0 bytes
    // dxgkrnl.sys .text:0x3418, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f3c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire;
    
    // [??0DXGDEVICEACCESSLOCKEXCLUSIVE@@QEAA@PEAVDXGDEVICE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa188, 0x60098 bytes
    // dxgkrnl.sys .text:0x74e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc674, 0x84380 bytes
    // dxgkrnl.sys .text:0x8840, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [Release@DXGDEVICEACCESSLOCKEXCLUSIVE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa338, 0x60098 bytes
    // dxgkrnl.sys .text:0x749c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc630, 0x84380 bytes
    // dxgkrnl.sys .text:0x87fc, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release;
    
    // [TryAcquire@DXGDEVICEACCESSLOCKEXCLUSIVE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xa114, 0x60098 bytes
    // dxgkrnl.sys .text:0x21c0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x34d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x2028, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) try_acquire;
};
#include "magic/api.end.hpp"
