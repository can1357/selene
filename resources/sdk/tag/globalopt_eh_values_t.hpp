#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagGLOBALOPT_EH_VALUES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class globalopt_eh_values_t : int32_t
    {                                         
        handle =             0x0,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        donot_handle =       0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        donot_handle_fatal = 0x1,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        donot_handle_any =   0x2,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                        
};
