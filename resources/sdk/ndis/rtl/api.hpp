#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::rtl
{
    // [DuplicateUnicodeString@Rtl]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x108f00, 0x1d2c0 bytes
    // ndis.sys PAGE:0x10cd68, 0x1e858 bytes
    // ndis.sys PAGE:0x109420, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) duplicate_unicode_string;
};
#include "magic/api.end.hpp"
