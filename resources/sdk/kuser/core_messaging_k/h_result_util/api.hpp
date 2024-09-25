#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging_k::h_result_util
{
    // [NtStatusFromHRESULT@HResultUtil@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x207c00, 0x243e0 bytes
    // win32kbase.sys .text:0x258740, 0x27ef0 bytes
    // win32kbase.sys .text:0x205a00, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) nt_status_from_hresult;
    
    // [HRESULTFromNTStatus@HResultUtil@CoreMessagingK]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfc6d0, 0x1eb80 bytes
    // win32kbase.sys .text:0x8f9a0, 0x243e0 bytes
    // win32kbase.sys .text:0xc6f90, 0x27ef0 bytes
    // win32kbase.sys .text:0xaf9e0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) hresult_from_nt_status;
};
#include "magic/api.end.hpp"
