#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _JOBOBJECT_IO_PRIORITY_LIMIT_FLAGS]
    //  Windows 11
    //
    enum class jobobject_io_priority_limit_flags_t : int32_t
    {                                                       
        enable =      0x1,                                    // Windows 11
        valid_flags = 0x1,                                    // Windows 11
    };                                                      
};
