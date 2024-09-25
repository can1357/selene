#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_multi_per_object_lock_exclusive_ppi_pti_q
{
    // [??0CMultiPerObjectLockExclusivePpiPtiQ@@QEAA@PEAUtagTHREADINFO@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xaa090, 0x243e0 bytes
    // win32kbase.sys .text:0x9f8a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CMultiPerObjectLockExclusivePpiPtiQ@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [lock@CMultiPerObjectLockExclusivePpiPtiQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) lock;
    
    // [unlock@CMultiPerObjectLockExclusivePpiPtiQ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0xa8860, 0x243e0 bytes
    // win32kbase.sys .text:0x15eb0, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) unlock;
};
#include "magic/api.end.hpp"
