#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ErrorInformationExtentVersion]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class error_information_extent_version_t : int32_t
    {                                                      
        current =  0x1,                                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        earliest = 0x1,                                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                     
};
