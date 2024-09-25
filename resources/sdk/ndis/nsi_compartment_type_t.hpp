#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_NSI_COMPARTMENT_TYPE]
    //  Windows 10 v1607
    //
    enum class nsi_compartment_type_t : int32_t
    {                                          
        unspecified =    0x0,                    // Windows 10 v1607
        native =         0x1,                    // Windows 10 v1607
        routing_domain = 0x2,                    // Windows 10 v1607
        container =      0x3,                    // Windows 10 v1607
    };                                         
};
