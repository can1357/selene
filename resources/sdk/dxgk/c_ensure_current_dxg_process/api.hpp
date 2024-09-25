#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_ensure_current_dxg_process
{
    // [AttachToProcess@CEnsureCurrentDxgProcess]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3906c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x462d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x3929c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) attach_to_process;
    
    // [??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x38f68, 0x762b0 bytes
    // dxgkrnl.sys .text:0x46238, 0x84380 bytes
    // dxgkrnl.sys .text:0x39198, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
