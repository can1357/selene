#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum DEVICE_TEXT_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_text_type_t : int32_t
    {                                      
        description =          0x0,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        location_information = 0x1,          // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
