#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgworkqueue
{
    // [FlushQueue@DXGWORKQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xca7c, 0x60098 bytes
    // dxgkrnl.sys .text:0x44318, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2eb58, 0x84380 bytes
    // dxgkrnl.sys .text:0x44508, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) flush_queue;
    
    // [QueueWork@DXGWORKQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x277a0, 0x60098 bytes
    // dxgkrnl.sys .text:0x4869c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2ebfc, 0x84380 bytes
    // dxgkrnl.sys .text:0x488f4, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) queue_work;
};
#include "magic/api.end.hpp"
