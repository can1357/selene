#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_auto_ref_counted_buffer
{
    // [??0CAutoRefCountedBuffer@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a700, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1fa40, 0x84380 bytes
    // dxgkrnl.sys .text:0x1ad40, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CAutoRefCountedBuffer@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3def0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1a7f4, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e0e0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
