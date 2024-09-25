#pragma once
#include <sdkgen/support_library.hpp>

namespace whea
{
    // [enum _WHEA_PSHED_PLUGIN_ENABLE_NOTIFY_ERRORS]
    //  Windows 11
    //
    enum class pshed_plugin_enable_notify_errors_t : int32_t
    {                                                       
        create_notify_event =  0x1,                           // Windows 11
        create_system_thread = 0x2,                           // Windows 11
        max =                  0x3,                           // Windows 11
    };                                                      
};
