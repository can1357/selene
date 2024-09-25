#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_DMA_VERSION]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_dma_version_t : int32_t
    {                                      
        version_unknown = 0x0,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        version1 =        0x1,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        version2 =        0x2,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
        version3 =        0x3,               // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
