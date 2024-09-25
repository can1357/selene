#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagGLOBALOPT_PROPERTIES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_properties_t : int32_t
    {                                          
        exception_handling =     0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        appid =                  0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rpc_threadpool_setting = 0x3,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ro_settings =            0x4,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unmarshaling_policy =    0x5,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        properties_reserved1 =   0x6,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        properties_reserved2 =   0x7,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
        properties_reserved3 =   0x8,            // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
