#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _SleepstudyHelper_Namespace]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sleepstudy_helper_namespace_t : int32_t
    {                                                 
        pdo =                 0x0,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        sleepstudy_handle =   0x1,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        fdo =                 0x2,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pid =                 0x3,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        general_handle =      0x4,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        connection_device =   0x5,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        connection_opregion = 0x6,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =                0x7,                      // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
