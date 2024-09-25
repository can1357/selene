#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum PCW_REGISTRATION_FLAGS]
    //  Windows 11
    //
    enum class pcw_registration_flags_t : int32_t
    {                                            
        none =         0x0,                        // Windows 11
        silo_neutral = 0x1,                        // Windows 11
    };                                           
};
