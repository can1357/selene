#pragma once
#include <sdkgen/support_library.hpp>

namespace rtl
{
    // [enum _RTL_SPARSE_BITMAP_CTX_OPERATION]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class sparse_bitmap_ctx_operation_t : int32_t
    {                                                 
        clear = 0x0,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set =   0x1,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        any =   0x2,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =   0x3,                                    // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
