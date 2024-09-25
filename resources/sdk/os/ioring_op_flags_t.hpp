#pragma once
#include <sdkgen/support_library.hpp>

namespace os
{
    // [enum _NT_IORING_OP_FLAGS]
    //  Windows 11
    //
    enum class ioring_op_flags_t : int32_t
    {                                     
        none =                0x0,          // Windows 11
        registered_file =     0x1,          // Windows 11
        registered_file_0 =   0x1,          // Windows 11
        registered_buffer =   0x2,          // Windows 11
        registered_buffer_0 = 0x2,          // Windows 11
    };                                    
};
