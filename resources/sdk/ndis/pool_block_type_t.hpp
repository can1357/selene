#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _POOL_BLOCK_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class pool_block_type_t : int32_t
    {                                     
        free =  0x0,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        used =  0x1,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        aging = 0x2,                        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
