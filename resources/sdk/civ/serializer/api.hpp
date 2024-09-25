#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace civ::serializer
{
    // [??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x214ffc, 0x27ef0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CIVSerializer@@UEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 11
    // win32kbase.sys .text:0x2151cc, 0x27ef0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [??0CIVSerializer@@QEAA@_K@Z]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1bd6e4, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb4c4, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) construct_instance_;
    
    // [Deserialize@CIVSerializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1bde08, 0x243e0 bytes
    // win32kbase.sys .text:0x1bbbe8, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) deserialize;
    
    // [??1CIVSerializer@@QEAA@XZ]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // win32kbase.sys .text:0x1bd74c, 0x243e0 bytes
    // win32kbase.sys .text:0x1bb52c, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance_;
    
    // [Ensure@CIVSerializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1be584, 0x243e0 bytes
    // win32kbase.sys .text:0x215314, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bc364, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) ensure;
    
    // [ExtendByMeasuredExtra@CIVSerializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1be5ac, 0x243e0 bytes
    // win32kbase.sys .text:0x215338, 0x27ef0 bytes
    // win32kbase.sys .text:0x1bc38c, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) extend_by_measured_extra;
    
    // [Serialize@CIVSerializer]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x1c0c0c, 0x243e0 bytes
    // win32kbase.sys .text:0x216034, 0x27ef0 bytes
    // win32kbase.sys .text:0x1be9ec, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) serialize;
};
#include "magic/api.end.hpp"
