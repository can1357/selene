#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::per_app_user_settings_helper::auto_string
{
    // [Free@AutoString@PerAppUserSettingsHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7e058, 0x17e70 bytes
    // dxgi.dll .text:0x7e1d8, 0x17e70 bytes
    // dxgi.dll .text:0x7eb9c, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) free;
};
#include "magic/api.end.hpp"
