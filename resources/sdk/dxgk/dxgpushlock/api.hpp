#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpushlock
{
    // [LogEvent@DXGPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0xaba0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) log_event;
    
    // [AcquireExclusive@DXGPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xab54, 0x60098 bytes
    // dxgkrnl.sys .text:0x2d78, 0x762b0 bytes
    // dxgkrnl.sys .text:0xbeac, 0x84380 bytes
    // dxgkrnl.sys .text:0x4118, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) acquire_exclusive;
    
    // [AcquireShared@DXGPUSHLOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xabb0, 0x60098 bytes
    // dxgkrnl.sys .text:0x6fcc, 0x762b0 bytes
    // dxgkrnl.sys .text:0xc160, 0x84380 bytes
    // dxgkrnl.sys .text:0x837c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_shared;
};
#include "magic/api.end.hpp"
