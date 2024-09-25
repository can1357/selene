#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgautomutex
{
    // [ReleaseIfAcquired@DXGAUTOMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23c90, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2492c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) release_if_acquired;
    
    // [??0DXGAUTOMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a710, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b5e0, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ad50, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [Initialize@DXGAUTOMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23c08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4a7c0, 0x84380 bytes
    // dxgkrnl.sys .text:0x248a4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [Acquire@DXGAUTOMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x89c0, 0x60098 bytes
    // dxgkrnl.sys .text:0x5600, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb4e8, 0x84380 bytes
    // dxgkrnl.sys .text:0x69a0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) acquire;
    
    // [??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8914, 0x60098 bytes
    // dxgkrnl.sys .text:0x6004, 0x762b0 bytes
    // dxgkrnl.sys .text:0xa72c, 0x84380 bytes
    // dxgkrnl.sys .text:0x73b4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance_;
    
    // [??1DXGAUTOMUTEX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x11050, 0x60098 bytes
    // dxgkrnl.sys .text:0x55c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b150, 0x84380 bytes
    // dxgkrnl.sys .text:0x6964, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [Release@DXGAUTOMUTEX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8950, 0x60098 bytes
    // dxgkrnl.sys .text:0x54b0, 0x762b0 bytes
    // dxgkrnl.sys .text:0xb460, 0x84380 bytes
    // dxgkrnl.sys .text:0x6850, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
