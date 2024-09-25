#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgetwprofiler_base
{
    // [PopProfilerEntry@DXGETWPROFILER_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5c0c, 0x762b0 bytes
    // dxgkrnl.sys .text:0xadac, 0x84380 bytes
    // dxgkrnl.sys .text:0x6fbc, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) pop_profiler_entry;
    
    // [PushProfilerEntry@DXGETWPROFILER_BASE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x5bb8, 0x762b0 bytes
    // dxgkrnl.sys .text:0xadf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6f68, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) push_profiler_entry;
};
#include "magic/api.end.hpp"
