#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _INTERRUPT_LINE_SUBTYPE]
    //  Windows 11
    //
    enum class interrupt_line_subtype_t : int32_t
    {                                            
        none = 0x0,                                // Windows 11
        v2m =  0x1,                                // Windows 11
        lpi =  0x2,                                // Windows 11
    };                                           
};
