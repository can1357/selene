#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum IORING_OP_CODE]
    //  Windows 11
    //
    enum class ioring_op_code_t : int32_t
    {                                    
        nop =              0x0,            // Windows 11
        read =             0x1,            // Windows 11
        register_files =   0x2,            // Windows 11
        register_buffers = 0x3,            // Windows 11
        cancel =           0x4,            // Windows 11
        write =            0x5,            // Windows 11
        flush =            0x6,            // Windows 11
    };                                   
};
