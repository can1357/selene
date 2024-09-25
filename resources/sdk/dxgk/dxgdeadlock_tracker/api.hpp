#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgdeadlock_tracker
{
    // [Activate@DXGDEADLOCK_TRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d9e9c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) activate;
    
    // [??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@_N@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1d9d00, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGDEADLOCK_TRACKER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x1db370, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [??0DXGDEADLOCK_TRACKER@@QEAA@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14ce00, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x14fa50, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance_;
    
    // [Cancel@DXGDEADLOCK_TRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14cf60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db428, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14fbb0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) cancel;
    
    // [DeadlockCounter@DXGDEADLOCK_TRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0xb0138, 0x762b0 bytes
    // dxgkrnl.sys .data:0x130d38, 0x84380 bytes
    // dxgkrnl.sys .data:0xb0138, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) deadlock_counter;
};
#include "magic/api.end.hpp"
