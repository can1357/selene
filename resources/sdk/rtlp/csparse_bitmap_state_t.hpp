#pragma once
#include <sdkgen/support_library.hpp>

namespace rtlp
{
    // [enum RTLP_CSPARSE_BITMAP_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class csparse_bitmap_state_t : int32_t
    {                                          
        commit_bitmap_invalid = 0x0,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_bitmap_invalid =   0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_bitmap_valid =     0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                         
};
