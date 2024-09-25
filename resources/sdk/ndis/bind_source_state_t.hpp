#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum BIND_SOURCE_STATE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class bind_source_state_t : int32_t
    {                                       
        add_bind_source =    0x0,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_bind_source = 0x1,             // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
