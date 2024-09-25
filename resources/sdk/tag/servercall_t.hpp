#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagSERVERCALL]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class servercall_t : int32_t
    {                                
        ishandled =  0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        rejected =   0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        retrylater = 0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
