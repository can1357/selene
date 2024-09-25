#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _CONFIG_KNOB_NAMESPACE_TYPE]
    //  Windows 11
    //
    enum class config_knob_namespace_type_t : int32_t
    {                                                
        ndis_global =       0x0,                       // Windows 11
        network_interface = 0x1,                       // Windows 11
        execution_context = 0x2,                       // Windows 11
    };                                               
};
