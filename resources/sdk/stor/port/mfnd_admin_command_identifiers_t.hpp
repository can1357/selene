#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum MFND_ADMIN_COMMAND_IDENTIFIERS]
    //  Windows 11
    //
    enum class mfnd_admin_command_identifiers_t : int32_t
    {                                                    
        identify_mfnd =             0x1,                   // Windows 11
        identify_child_controller = 0x2,                   // Windows 11
        management =                0x3,                   // Windows 11
        cc_control =                0x4,                   // Windows 11
        get_cc_log_page =           0x5,                   // Windows 11
        get_cc_command_permission = 0x6,                   // Windows 11
        set_cc_command_permission = 0x7,                   // Windows 11
    };                                                   
};
