#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_IDENTIFIER_CODE_SET]
    //  WDK 10
    //
    enum class storage_identifier_code_set_t : int32_t
    {                                                 
        reserved = 0x0,                                 // WDK 10
        binary =   0x1,                                 // WDK 10
        ascii =    0x2,                                 // WDK 10
        utf8 =     0x3,                                 // WDK 10
    };                                                
};
