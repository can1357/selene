#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _DEVICE_RELATION_LEVEL]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_relation_level_t : int32_t
    {                                           
        remove_eject =      0x0,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        dependent =         0x1,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
        direct_descendant = 0x2,                  // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
