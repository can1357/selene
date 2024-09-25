#pragma once
#include <sdkgen/support_library.hpp>

namespace os
{
    // [enum _NT_IORING_SQE_FLAGS]
    //  Windows 11
    //
    enum class ioring_sqe_flags_t : int32_t
    {                                      
        none =                0x0,           // Windows 11
        drain_preceding_ops = 0x1,           // Windows 11
    };                                     
};
