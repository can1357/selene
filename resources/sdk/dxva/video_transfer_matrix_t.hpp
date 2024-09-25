#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoTransferMatrix]
    //  WDK 10
    //
    enum class video_transfer_matrix_t : int32_t
    {                                           
        matrix_unknown =   0x0,                   // WDK 10
        matrix_bt709 =     0x1,                   // WDK 10
        matrix_bt601 =     0x2,                   // WDK 10
        matrix_smpte240m = 0x3,                   // WDK 10
        matrix_shift =     0xf,                   // WDK 10
        matrix_mask =      0x38000,               // WDK 10
    };                                          
};
