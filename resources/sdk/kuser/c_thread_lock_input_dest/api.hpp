#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_thread_lock_input_dest
{
    // [??0CThreadLockInputDest@@QEAA@PEAVCInputDest@@@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88abc, 0x243e0 bytes
    // win32kbase.sys .text:0xd62c, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a91c, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CThreadLockInputDest@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x88c88, 0x243e0 bytes
    // win32kbase.sys .text:0xd864, 0x27ef0 bytes
    // win32kbase.sys .text:0x6a704, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
