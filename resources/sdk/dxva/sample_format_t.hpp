#pragma once
#include <sdkgen/support_library.hpp>

namespace dxva
{
    // [enum _DXVA_SampleFormat]
    //  WDK 10
    //
    enum class sample_format_t : int32_t       
    {                                          
        unknown =                      0x0,      // WDK 10
        previous_frame =               0x1,      // WDK 10
        progressive_frame =            0x2,      // WDK 10
        field_interleaved_even_first = 0x3,      // WDK 10
        field_interleaved_odd_first =  0x4,      // WDK 10
        field_single_even =            0x5,      // WDK 10
        field_single_odd =             0x6,      // WDK 10
        sub_stream =                   0x7,      // WDK 10
        format_mask =                  0xff,     // WDK 10
    };                                         
};
