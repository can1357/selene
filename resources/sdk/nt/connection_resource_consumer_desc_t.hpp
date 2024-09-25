#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _ConnectionResourceConsumerDesc]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class connection_resource_consumer_desc_t : int32_t
    {                                                       
        is_undefined = 0x0,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_device =    0x1,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        is_opregion =  0x2,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =          0x3,                                   // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
