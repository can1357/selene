#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgprotectedsession
{
    // [Close@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x339e9c, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) close;
    
    // [DestroyCoreState@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33a134, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) destroy_core_state;
    
    // [Reset@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x33a86c, 0x84380 bytes
    //
    _m2(sdk::unknown_ptr) reset;
    
    // [AddReference@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x44848, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5584c, 0x84380 bytes
    // dxgkrnl.sys .text:0x44a38, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) add_reference;
    
    // [??0DXGPROTECTEDSESSION@@QEAA@PEAVADAPTER_DISPLAY@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45ee4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57db4, 0x84380 bytes
    // dxgkrnl.sys .text:0x460d4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGPROTECTEDSESSION@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x45f98, 0x762b0 bytes
    // dxgkrnl.sys .text:0x57e6c, 0x84380 bytes
    // dxgkrnl.sys .text:0x46188, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) destroy_instance;
    
    // [DestroyProtectedSession@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x282d60, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a3ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x282de0, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) destroy_protected_session;
    
    // [Initialize@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x282e40, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a4b0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x282ec0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) initialize;
    
    // [Open@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x282ff0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a6c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x283070, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) open;
    
    // [QueueSignal@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x283060, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a75c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2830e0, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) queue_signal;
    
    // [SetSessionStatus@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x46100, 0x762b0 bytes
    // dxgkrnl.sys .text:0x580e4, 0x84380 bytes
    // dxgkrnl.sys .text:0x462f0, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) set_session_status;
    
    // [SignalFence@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x28315c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a8f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2831dc, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) signal_fence;
    
    // [SignalFenceWorkItemRoutine@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2831f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33a9c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x283270, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) signal_fence_work_item_routine;
    
    // [Stop@DXGPROTECTEDSESSION]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2832b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33aa74, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x283330, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) stop;
};
#include "magic/api.end.hpp"
