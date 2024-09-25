#pragma once
#include <sdkgen/support_library.hpp>

namespace etw
{
    // [enum _ETW_NOTIFICATION_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class notification_type_t : int32_t
    {                                       
        no_reply =                0x1,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        legacy_enable =           0x2,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        enable =                  0x3,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        private_logger =          0x4,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        perflib =                 0x5,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        audio =                   0x6,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        session =                 0x7,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        reserved =                0x8,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        credential_ui =           0x9,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        in_proc_session =         0xa,        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filtered_private_logger = 0xb,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
        //max =                   0xb,        // Windows 10 v1607
        max =                     0xc,        // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
