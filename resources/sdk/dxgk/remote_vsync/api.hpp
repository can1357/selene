#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::remote_vsync
{
    // [??0REMOTE_VSYNC@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17b24c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208114, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17c0fc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1REMOTE_VSYNC@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x284cb4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33dc24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x284d34, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [EnsureEmulationRunning@REMOTE_VSYNC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc47f0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5440, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dad00, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5ad0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) ensure_emulation_running;
    
    // [GetScanLine@REMOTE_VSYNC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x176a8c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x284cf0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33dc88, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x284d70, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) get_scan_line;
    
    // [StartEmulation@REMOTE_VSYNC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4750, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd54e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dada4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5b74, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) start_emulation;
    
    // [WaitForVSync@REMOTE_VSYNC]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc4888, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xd5390, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dac50, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd5a20, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) wait_for_v_sync;
};
#include "magic/api.end.hpp"
