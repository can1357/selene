#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _EXQUEUEINDEX]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class exqueueindex_t : int32_t
    {                                  
        ex_pool_untrusted = 0x0,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        io_pool_untrusted = 0x1,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        ex_pool_trusted =   0x2,         // Windows 10 v1607
        ex_pool_max =       0x8,         // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                 
};
