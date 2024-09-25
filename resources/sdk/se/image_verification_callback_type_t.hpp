#pragma once
#include <sdkgen/support_library.hpp>

namespace se
{
    // [enum _SE_IMAGE_VERIFICATION_CALLBACK_TYPE]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class image_verification_callback_type_t : int32_t   
    {                                                         
        se_image_verification_callback_informational = 0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                        
};
