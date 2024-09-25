#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_vid_sch_suspend_resume
{
    // [Resume@CVidSchSuspendResume]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x19d74, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1e8f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a4b4, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) resume;
    
    // [SetSuspendSourceMask@CVidSchSuspendResume]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38388, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2998, 0x84380 bytes
    // dxgkrnl.sys .text:0x385b8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) set_suspend_source_mask;
};
#include "magic/api.end.hpp"
