#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_win32k_locks
{
    // [hDestDc@CWin32kLocks]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4557c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2eeb4, 0x84380 bytes
    // dxgkrnl.sys .text:0x4576c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) h_dest_dc;
    
    // [??0CWin32kLocks@@QEAA@QEBU_DXGKWIN32KENG_INTERFACE@@PEAVDXGADAPTER@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1485f4, 0x60098 bytes
    // dxgkrnl.sys .text:0x24398, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c1f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x25028, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1CWin32kLocks@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1485d8, 0x60098 bytes
    // dxgkrnl.sys .text:0x243c4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c2a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x25054, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Lock@CWin32kLocks]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14846c, 0x60098 bytes
    // dxgkrnl.sys .text:0x1afd4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20a80, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b654, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) lock;
    
    // [Unlock@CWin32kLocks]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1483dc, 0x60098 bytes
    // dxgkrnl.sys .text:0x243e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c2c4, 0x84380 bytes
    // dxgkrnl.sys .text:0x25078, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
