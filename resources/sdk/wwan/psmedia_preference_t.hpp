#pragma once
#include <sdkgen/support_library.hpp>

namespace wwan
{
    // [enum _WWAN_PSMEDIA_PREFERENCE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class psmedia_preference_t : int32_t
    {                                        
        none =               0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cellular_only =      0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cellular_preferred = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wi_fi_only =         0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        wi_fi_preferred =    0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =                0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
