#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::mdt
{
    // [enum _DXGKMDT_OPM_INTERLEAVE_FORMAT]
    //  WDK 10
    //
    enum class opm_interleave_format_t : int32_t
    {                                           
        force_ulong =            -0x1,            // WDK 10
        other =                  0x0,             // WDK 10
        progressive =            0x2,             // WDK 10
        interleaved_even_first = 0x3,             // WDK 10
        interleaved_odd_first =  0x4,             // WDK 10
    };                                          
};
