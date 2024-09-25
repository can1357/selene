#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_QUERY_CONFIGURATION_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class storport_query_configuration_type_t : int32_t
    {                                                       
        d3 =  0x0,                                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max = 0x1,                                            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
