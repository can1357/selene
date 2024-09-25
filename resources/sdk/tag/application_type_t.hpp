#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagApplicationType]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class application_type_t : int32_t
    {                                      
        server_application =  0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        library_application = 0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
