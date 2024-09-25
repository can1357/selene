#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum WudfBreakPointType]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class wudf_break_point_type_t : int32_t
    {                                           
        user_breakin =           0x1,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        kernel_breakin =         0x2,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
        user_or_kernel_breakin = 0x3,             // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
