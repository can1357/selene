#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _PSM_BROKER_TOKEN_SCOPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class psm_broker_token_scope_t : int32_t
    {                                            
        package =     0x0,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        application = 0x1,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
        count =       0x2,                         // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                           
};
