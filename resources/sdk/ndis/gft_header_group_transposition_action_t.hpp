#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [enum _NDIS_GFT_HEADER_GROUP_TRANSPOSITION_ACTION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class gft_header_group_transposition_action_t : int32_t
    {                                                           
        undefined = 0x0,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        modify =    0x1,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        ignore =    0x2,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        push =      0x3,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        pop =       0x4,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        max =       0x5,                                          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                          
};
