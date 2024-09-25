#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging::calling::receive_processor
{
    // [NotifyProtocolViolationHelper@ReceiveProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v20H2
    // win32kbase.sys .text:0xd55a0, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) notify_protocol_violation_helper;
    
    // [ReadExpectedParameterSize@ReceiveProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x902bc, 0x243e0 bytes
    // win32kbase.sys .text:0xbde88, 0x27ef0 bytes
    // win32kbase.sys .text:0xb2cd8, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) read_expected_parameter_size;
    
    // [UnmarshalReceive@ReceiveProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xfd31c, 0x1eb80 bytes
    // win32kbase.sys .text:0x90000, 0x243e0 bytes
    // win32kbase.sys .text:0xbdbe8, 0x27ef0 bytes
    // win32kbase.sys .text:0xb58ac, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) unmarshal_receive;
};
#include "magic/api.end.hpp"
