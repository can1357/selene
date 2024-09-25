#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SC_ENUM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sc_enum_type_t : int32_t
    {                                  
        sc_enum_process_info = 0x0,      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
