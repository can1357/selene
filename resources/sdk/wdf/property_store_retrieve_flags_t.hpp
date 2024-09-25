#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_PROPERTY_STORE_RETRIEVE_FLAGS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class property_store_retrieve_flags_t : int32_t
    {                                                   
        normal =              0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_if_missing =   0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        create_volatile =     0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        retrieve_flags_mask = 0x3,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                  
};
