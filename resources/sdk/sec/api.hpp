#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace sec
{
    // [SecurityMitigationsProviderGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0xde48, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xee18, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xcec8, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) mitigations_provider_guid;
    
    // [__security_check_cookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x14ab80, 0x32828 bytes
    // ntoskrnl.exe .text:0x3cad90, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x3ea630, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x3cbe60, 0x1fe000 bytes
    //
    _m1(sdk::function<void(uint64_t)>*) check_cookie;
    
    // [__security_cookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cd0, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12210, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce00, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12270, 0x1fe000 bytes
    //
    _m2(uint64_t*) cookie;
    
    // [__security_cookie_complement]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .data:0x2f9cd8, 0x32828 bytes
    // ntoskrnl.exe .data:0xc12218, 0x1fe000 bytes
    // ntoskrnl.exe .data:0xc0ce08, 0x1fd000 bytes
    // ntoskrnl.exe .data:0xc12278, 0x1fe000 bytes
    //
    _m3(uint64_t*) cookie_complement;
    
    // [__security_init_cookie]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hal.dll INIT:0x6d480, 0x11e8 bytes
    // ntoskrnl.exe INIT:0xa192e8, 0x1fe000 bytes
    // ntoskrnl.exe INIT:0xb032e8, 0x1fd000 bytes
    // ntoskrnl.exe INIT:0xa182e8, 0x1fe000 bytes
    //
    _m4(sdk::function<void()>*) init_cookie;
    
    // [SecurityProviderGuid]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .rdata:0x25fc50, 0x32828 bytes
    // ntoskrnl.exe .rdata:0xcc28, 0x1fe000 bytes
    // ntoskrnl.exe .rdata:0xf120, 0x1fd000 bytes
    // ntoskrnl.exe .rdata:0xa5d8, 0x1fe000 bytes
    //
    _m5(sdk::unknown_ptr) provider_guid;
    
    // [SecurityRod]
    // Ldr = [tcpip.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // tcpip.sys .data:0x1d0b20, 0x528a0 bytes
    // tcpip.sys .data:0x207a00, 0x7a898 bytes
    // tcpip.sys .data:0x217ca0, 0x91370 bytes
    // tcpip.sys .data:0x206b20, 0x7a860 bytes
    //
    _m6(sdk::unknown_ptr) rod;
    
    // [SecurityCookieInitCount]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x154134, 0x67960 bytes
    // ntdll.dll .data:0x16b77c, 0x6fc38 bytes
    // ntdll.dll .data:0x18530c, 0x74648 bytes
    // ntdll.dll .data:0x16c77c, 0x6fc38 bytes
    //
    _m7(sdk::unknown_ptr) cookie_init_count;
    
    // [SecurityCookieInitialized]
    // Ldr = [ntdll.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntdll.dll .data:0x153fc5, 0x67960 bytes
    // ntdll.dll .data:0x16b69c, 0x6fc38 bytes
    // ntdll.dll .data:0x185224, 0x74648 bytes
    // ntdll.dll .data:0x16c68c, 0x6fc38 bytes
    //
    _m8(sdk::unknown_ptr) cookie_initialized;
};
#include "magic/api.end.hpp"
