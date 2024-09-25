#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_RPMB_COMMAND_TYPE]
    //  WDK 10
    //
    enum class storage_rpmb_command_type_t : int32_t
    {                                               
        program_auth_key =                  0x1,      // WDK 10
        query_write_counter =               0x2,      // WDK 10
        authenticated_write =               0x3,      // WDK 10
        authenticated_read =                0x4,      // WDK 10
        read_result_request =               0x5,      // WDK 10
        authenticated_device_config_write = 0x6,      // WDK 10
        authenticated_device_config_read =  0x7,      // WDK 10
    };                                              
};
