#pragma once
#include <sdkgen/support_library.hpp>

namespace os
{
    // [enum _NT_WRITE_FLAGS]
    //  Windows 11
    //
    enum class write_flags_t : int32_t
    {                                 
        none =          0x0,            // Windows 11
        write_through = 0x1,            // Windows 11
    };                                
};
