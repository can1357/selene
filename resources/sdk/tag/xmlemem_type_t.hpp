#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagXMLEMEM_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class xmlemem_type_t : int32_t
    {                                  
        element =  0x0,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        text =     0x1,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        comment =  0x2,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        document = 0x3,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dtd =      0x4,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        pi =       0x5,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        other =    0x6,                  // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
