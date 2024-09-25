#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STORPORT_LIVEDUMP_DATA_TYPE]
    //  Windows 11
    //
    enum class storport_livedump_data_type_t : int32_t
    {                                                 
        undefined =            0x0,                     // Windows 11
        device_telemetry_log = 0x1,                     // Windows 11
    };                                                
};
