#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::c_temp_w32_tls_for_thread
{
    // [??0CTempW32TlsForThread@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7f088, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CTempW32TlsForThread@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x7e7b8, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
