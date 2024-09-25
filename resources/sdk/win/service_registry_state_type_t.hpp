#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum SERVICE_REGISTRY_STATE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class service_registry_state_type_t : int32_t
    {                                                 
        service_registry_state_parameters = 0x0,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        service_registry_state_persistent = 0x1,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_service_registry_state_type =   0x2,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
