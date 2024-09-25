#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum MFND_ADMIN_COMMANDS]
    //  Windows 11
    //
    enum class mfnd_admin_commands_t : int32_t
    {                                         
        nodata =             0xd0,              // Windows 11
        host_to_controller = 0xd1,              // Windows 11
        controller_to_host = 0xd2,              // Windows 11
        bidirection =        0xd3,              // Windows 11
    };                                        
};
