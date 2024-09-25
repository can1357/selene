#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::coreadapteraccess
{
    // [AcquireExclusive@COREADAPTERACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9b28, 0x60098 bytes
    // dxgkrnl.sys .text:0xaf60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6ef4, 0x84380 bytes
    // dxgkrnl.sys .text:0xae48, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@COREADAPTERACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9c54, 0x60098 bytes
    // dxgkrnl.sys .text:0x6708, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb604, 0x84380 bytes
    // dxgkrnl.sys .text:0x7ab8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_shared;
    
    // [??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9b94, 0x60098 bytes
    // dxgkrnl.sys .text:0x79ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0xd4e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x34f0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance;
    
    // [??1COREADAPTERACCESS@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9bd0, 0x60098 bytes
    // dxgkrnl.sys .text:0x6628, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb36c, 0x84380 bytes
    // dxgkrnl.sys .text:0x79d8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Release@COREADAPTERACCESS]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9b00, 0x60098 bytes
    // dxgkrnl.sys .text:0x130c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb6c0, 0x84380 bytes
    // dxgkrnl.sys .text:0xb74c, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
