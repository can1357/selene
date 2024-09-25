#pragma once
#include <sdkgen/support_library.hpp>

namespace kuser
{
    // [enum INPUT_DESTINATION_IDENTITY]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class input_destination_identity_t : int32_t
    {                                                
        none =             0x0,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        luid =             0x1,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        inputroutinginfo = 0x2,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        window =           0x4,                        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                               
};
