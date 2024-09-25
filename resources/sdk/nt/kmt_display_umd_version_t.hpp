#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KMT_DISPLAY_UMD_VERSION]
    //  WDK 10
    //
    enum class kmt_display_umd_version_t : int32_t
    {                                             
        kmt_display_umdversion_1 =    0x0,          // WDK 10
        num_kmt_display_umdversions = 0x1,          // WDK 10
    };                                            
};
