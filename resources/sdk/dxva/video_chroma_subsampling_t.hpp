#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_VideoChromaSubsampling]
    //  WDK 10
    //
    enum class video_chroma_subsampling_t : int32_t 
    {                                               
        unknown =                          0x0,       // WDK 10
        mpeg1 =                            0x1,       // WDK 10
        vertically_aligned_chroma_planes = 0x1,       // WDK 10
        vertically_cosited =               0x2,       // WDK 10
        horizontally_cosited =             0x4,       // WDK 10
        mpeg2 =                            0x5,       // WDK 10
        dv_pal =                           0x6,       // WDK 10
        cosited =                          0x7,       // WDK 10
        shift =                            0x8,       // WDK 10
        progressive_chroma =               0x8,       // WDK 10
        mask =                             0xf00,     // WDK 10
    };                                              
};
