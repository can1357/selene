#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _UNWIND_OP_CODES]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class unwind_op_codes_t : int32_t
    {                                     
        push_nonvol =     0x0,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alloc_large =     0x1,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        alloc_small =     0x2,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        set_fpreg =       0x3,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_nonvol =     0x4,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_nonvol_far = 0x5,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        epilog =          0x6,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        spare_code =      0x7,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_xmm128 =     0x8,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        save_xmm128_far = 0x9,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        push_machframe =  0xa,              // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
