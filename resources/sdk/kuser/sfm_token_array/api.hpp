#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::sfm_token_array
{
    // [AddNotificationToken@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2fed0, 0x1eb80 bytes
    // win32kbase.sys .text:0xae230, 0x243e0 bytes
    // win32kbase.sys .text:0xbf580, 0x27ef0 bytes
    // win32kbase.sys .text:0xa4550, 0x243e0 bytes
    //
    _m0(sdk::unknown_ptr) add_notification_token;
    
    // [AddNotificationTokens@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ff3c, 0x1eb80 bytes
    // win32kbase.sys .text:0xae1b0, 0x243e0 bytes
    // win32kbase.sys .text:0xbf500, 0x27ef0 bytes
    // win32kbase.sys .text:0xa44d0, 0x243e0 bytes
    //
    _m1(sdk::unknown_ptr) add_notification_tokens;
    
    // [DeInitialize@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ffe0, 0x1eb80 bytes
    // win32kbase.sys .text:0xb4eb0, 0x243e0 bytes
    // win32kbase.sys .text:0xc80b0, 0x27ef0 bytes
    // win32kbase.sys .text:0xae510, 0x243e0 bytes
    //
    _m2(sdk::unknown_ptr) de_initialize;
    
    // [EnsureTokenBufferSize@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2fda0, 0x1eb80 bytes
    // win32kbase.sys .text:0xae2b4, 0x243e0 bytes
    // win32kbase.sys .text:0xbf604, 0x27ef0 bytes
    // win32kbase.sys .text:0xa45d4, 0x243e0 bytes
    //
    _m3(sdk::unknown_ptr) ensure_token_buffer_size;
    
    // [GetNotificationTokens@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2fe30, 0x1eb80 bytes
    // win32kbase.sys .text:0x3d0e0, 0x243e0 bytes
    // win32kbase.sys .text:0x55de0, 0x27ef0 bytes
    // win32kbase.sys .text:0x3efd0, 0x243e0 bytes
    //
    _m4(sdk::unknown_ptr) get_notification_tokens;
    
    // [Initialize@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2fd90, 0x1eb80 bytes
    // win32kbase.sys .text:0x10bf0, 0x243e0 bytes
    // win32kbase.sys .text:0xb92a0, 0x27ef0 bytes
    // win32kbase.sys .text:0x716d0, 0x243e0 bytes
    //
    _m5(sdk::unknown_ptr) initialize;
    
    // [TransferTokens@SfmTokenArray]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kbase.sys .text:0x2ffb0, 0x1eb80 bytes
    // win32kbase.sys .text:0xae180, 0x243e0 bytes
    // win32kbase.sys .text:0xbf4d0, 0x27ef0 bytes
    // win32kbase.sys .text:0xa44a0, 0x243e0 bytes
    //
    _m6(sdk::unknown_ptr) transfer_tokens;
};
#include "magic/api.end.hpp"
