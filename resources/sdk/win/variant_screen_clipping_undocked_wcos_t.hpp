#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum Variant_ScreenClippingUndockedWCOS]
    //  Windows 10 v2004, Windows 10 v20H2
    //
    enum class variant_screen_clipping_undocked_wcos_t : uint8_t
    {                                                           
        none =            0x0,                                    // Windows 10 v2004, Windows 10 v20H2
        f5_deploy_aumid = 0x1,                                    // Windows 10 v2004, Windows 10 v20H2
        inbox_aumid =     0x2,                                    // Windows 10 v2004, Windows 10 v20H2
        store_aumid =     0x3,                                    // Windows 10 v2004, Windows 10 v20H2
        registry_aumid =  0x4,                                    // Windows 10 v2004, Windows 10 v20H2
    };                                                          
};
