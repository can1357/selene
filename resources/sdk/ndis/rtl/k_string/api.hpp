#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::rtl::k_string
{
    // [Initialize@KString@Rtl]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0xa9124, 0x1c8a8 bytes
    // ndis.sys PAGE:0x100de8, 0x1d2c0 bytes
    // ndis.sys PAGE:0x104d5c, 0x1e858 bytes
    // ndis.sys PAGE:0x101308, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
