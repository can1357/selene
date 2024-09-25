#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::cvp_system_thread
{
    // [??1CVP_SYSTEM_THREAD@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1680b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25e940, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305090, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25eaa0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [Start@CVP_SYSTEM_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x168450, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x25f1a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x305974, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x25f308, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) start;
    
    // [ThreadRoutine@CVP_SYSTEM_THREAD]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x169f90, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x260ea0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x307540, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x261000, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) thread_routine;
};
#include "magic/api.end.hpp"
