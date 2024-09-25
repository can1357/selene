#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum DivisionState]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class division_state_t : int32_t
    {                                    
        ok =                0x0,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unsigned_signed =   0x1,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        signed_unsigned32 = 0x2,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        signed_unsigned64 = 0x3,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        signed_unsigned =   0x4,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
        signed_signed =     0x5,           // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
