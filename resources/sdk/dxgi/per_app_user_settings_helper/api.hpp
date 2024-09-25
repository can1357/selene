#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgi::per_app_user_settings_helper
{
    // [QueryUserSettings@PerAppUserSettingsHelper]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8f5c, 0x17e70 bytes
    // dxgi.dll .text:0x8f5c, 0x17e70 bytes
    // dxgi.dll .text:0x1d7dc, 0x17e70 bytes
    //
    _m0(sdk::unknown_ptr) query_user_settings;
};
#include "magic/api.end.hpp"
