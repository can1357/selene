#pragma once
#include <sdkgen/support_library.hpp>

namespace asl
{
    // [enum ASL_ATTRIBUTE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class attribute_type_t : int32_t
    {                                    
        byte =   0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        word =   0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        dword =  0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        qword =  0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        string = 0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
