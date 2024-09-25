#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ApartmentType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class apartment_type_t : int32_t
    {                                    
        sta =  0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        asta = 0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        mta =  0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        na =   0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        bsta = 0x4,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
