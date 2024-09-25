#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum CorExceptionFlag]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class cor_exception_flag_t : int32_t
    {                                        
        deprecated = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        none =       0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        offsetlen =  0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        filter =     0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        finally =    0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        fault =      0x4,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        duplicated = 0x8,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                       
};
