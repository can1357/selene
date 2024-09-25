#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _BDCB_CALLBACK_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bdcb_callback_type_t : int32_t
    {                                        
        status_update =    0x0,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        initialize_image = 0x1,                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
