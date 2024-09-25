#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum PSS_HANDLE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pss_handle_flags_t : int32_t     
    {                                           
        none =                           0x0,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        have_type =                      0x1,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        have_name =                      0x2,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        have_basic_information =         0x4,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
        have_type_specific_information = 0x8,     // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
