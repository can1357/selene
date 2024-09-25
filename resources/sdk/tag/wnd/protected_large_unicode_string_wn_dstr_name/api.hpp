#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace tag::wnd::protected_large_unicode_string_wn_dstr_name
{
    // [getStrName@ProtectedLargeUnicodeStringWNDstrName@tagWND]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0xeccc8, 0x1596d bytes
    // win32kfull.sys .text:0xb0680, 0x1659e bytes
    // win32kfull.sys .text:0xeda08, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) get_str_name;
};
#include "magic/api.end.hpp"
