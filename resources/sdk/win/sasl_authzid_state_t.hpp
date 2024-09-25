#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _SASL_AUTHZID_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sasl_authzid_state_t : int32_t
    {                                        
        zid_forbidden = 0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        zid_processed = 0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
