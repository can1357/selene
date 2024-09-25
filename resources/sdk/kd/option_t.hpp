#pragma once
#include <sdkgen/support_library.hpp>

namespace kd
{
    // [enum _KD_OPTION]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class option_t : int32_t           
    {                                       
        kd_option_set_block_enable = 0x0,     // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                      
};
