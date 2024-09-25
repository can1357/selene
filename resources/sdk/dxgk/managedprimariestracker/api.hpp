#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::managedprimariestracker
{
    // [AcquireWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1a9c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc23c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16d10c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b920, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire_win32k_and_pdev_locks;
    
    // [??0MANAGEDPRIMARIESTRACKER@@QEAA@PEAVADAPTER_DISPLAY@@PEAVDXGPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xbeac, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d38, 0x762b0 bytes
    // dxgkrnl.sys .text:0x30a8, 0x84380 bytes
    // dxgkrnl.sys .text:0xb250, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1MANAGEDPRIMARIESTRACKER@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1a70, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc19c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1698e0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12c9b8, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [ReleaseWin32kAndPDEVLocks@MANAGEDPRIMARIESTRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1a14, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc1cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x169910, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12c9e8, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) release_win32k_and_pdev_locks;
    
    // [RestoreManagedPrimaryState@MANAGEDPRIMARIESTRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1c7c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdc2e8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x16c700, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12b9cc, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) restore_managed_primary_state;
    
    // [SaveManagedPrimaryState@MANAGEDPRIMARIESTRACKER]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc1b34, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xdb530, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x17661c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12cf88, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) save_managed_primary_state;
};
#include "magic/api.end.hpp"
