#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_vid_sch_submit_data
{
    // [??1CVidSchSubmitData@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x9858, 0x60098 bytes
    // dxgkrnl.sys .text:0x2ee8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2090, 0x84380 bytes
    // dxgkrnl.sys .text:0x4288, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [InitializeSubmitData@CVidSchSubmitData]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x98a4, 0x60098 bytes
    // dxgkrnl.sys .text:0x16724, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f28, 0x84380 bytes
    // dxgkrnl.sys .text:0x16eb4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) initialize_submit_data;
};
#include "magic/api.end.hpp"
