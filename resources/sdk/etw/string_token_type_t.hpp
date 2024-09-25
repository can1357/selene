#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_STRING_TOKEN_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    enum class string_token_type_t : int32_t
    {                                       
        exe =         0x0,                    // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        package_id =  0x1,                    // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        pkg_app_id =  0x2,                    // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
        container =   0x3,                    // Windows 10 v2004, Windows 10 v20H2
        //max_count = 0x3,                    // Windows 10 v1607
        max_count =   0x4,                    // Windows 10 v2004, Windows 10 v20H2
    };                                      
};
