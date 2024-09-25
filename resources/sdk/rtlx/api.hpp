#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace rtlx
{
    // [RtlxRemoveInvertedFunctionTable]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe .text:0x36e52c, 0x1fe000 bytes
    // ntoskrnl.exe .text:0x337b14, 0x1fd000 bytes
    // ntoskrnl.exe .text:0x36f8ac, 0x1fe000 bytes
    //
    _m0(sdk::unknown_ptr) remove_inverted_function_table;
    
    // [RtlxAnsiStringToUnicodeSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x53d548, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x62d7a0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x68a1f0, 0x1fe000 bytes
    //
    _m1(sdk::function<uint32_t(nt::ascii_view*)>*) ansi_string_to_unicode_size;
    
    // [RtlxOemStringToUnicodeSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a014, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x741370, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x759340, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x748fb0, 0x1fe000 bytes
    //
    _m2(sdk::function<uint32_t(const nt::ascii_view*)>*) oem_string_to_unicode_size;
    
    // [RtlxUnicodeStringToAnsiSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x73e080, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x745cc0, 0x1fe000 bytes
    //
    _m3(sdk::function<uint32_t(const nt::unicode_view*)>*) unicode_string_to_ansi_size;
    
    // [RtlxUnicodeStringToOemSize]
    // Ldr = [ntoskrnl.exe, hal.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ntoskrnl.exe PAGE:0x68a038, 0x32828 bytes
    // ntoskrnl.exe PAGE:0x6501c0, 0x1fe000 bytes
    // ntoskrnl.exe PAGE:0x758c30, 0x1fd000 bytes
    // ntoskrnl.exe PAGE:0x6c4610, 0x1fe000 bytes
    //
    _m4(sdk::function<uint32_t(const nt::unicode_view*)>*) unicode_string_to_oem_size;
};
#include "magic/api.end.hpp"
