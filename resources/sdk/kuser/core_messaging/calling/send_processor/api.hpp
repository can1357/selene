#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::core_messaging::calling::send_processor
{
    // [MarshalArray@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaf120, 0x243e0 bytes
    // win32kbase.sys .text:0xbb6f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5460, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) marshal_array;
    
    // [MarshalLPCWSTR@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaf120, 0x243e0 bytes
    // win32kbase.sys .text:0xbb6f4, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5460, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) marshal_lpcwstr;
    
    // [MarshalSend@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaea44, 0x243e0 bytes
    // win32kbase.sys .text:0xbb024, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4d84, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) marshal_send;
    
    // [NotifyInvalidHelper@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x209430, 0x243e0 bytes
    // win32kbase.sys .text:0x25961c, 0x27ef0 bytes
    // win32kbase.sys .text:0x207230, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) notify_invalid_helper;
    
    // [PrepareArray@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xae7c0, 0x243e0 bytes
    // win32kbase.sys .text:0xbada0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4b00, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) prepare_array;
    
    // [PrepareLPCWSTR@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaf0b4, 0x243e0 bytes
    // win32kbase.sys .text:0xbb688, 0x27ef0 bytes
    // win32kbase.sys .text:0xa53f4, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) prepare_lpcwstr;
    
    // [PrepareMessage@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaec20, 0x243e0 bytes
    // win32kbase.sys .text:0xbb1f8, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4f60, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) prepare_message;
    
    // [PrepareStruct@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaf070, 0x243e0 bytes
    // win32kbase.sys .text:0xbb644, 0x27ef0 bytes
    // win32kbase.sys .text:0xa53b0, 0x243e0 bytes
    //
    _m7(sdk::unknown_ptr) prepare_struct;
    
    // [ReadParameterSize@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0xaeef8, 0x243e0 bytes
    // win32kbase.sys .text:0xbb4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5238, 0x243e0 bytes
    //
    _m8(sdk::unknown_ptr) read_parameter_size;
    
    // [ComputeMaximumMessageSize@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79834, 0x1eb80 bytes
    // win32kbase.sys .text:0xaece0, 0x243e0 bytes
    // win32kbase.sys .text:0xbb2b8, 0x27ef0 bytes
    // win32kbase.sys .text:0xa5020, 0x243e0 bytes
    //
    _m9(sdk::unknown_ptr) compute_maximum_message_size;
    
    // [PrepareMessageWorker@SendProcessor@Calling@CoreMessaging]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x79640, 0x1eb80 bytes
    // win32kbase.sys .text:0xaeda0, 0x243e0 bytes
    // win32kbase.sys .text:0xbb378, 0x27ef0 bytes
    // win32kbase.sys .text:0xa50e0, 0x243e0 bytes
    //
    _n0(sdk::unknown_ptr) prepare_message_worker;
};
#include "magic/api.end.hpp"
