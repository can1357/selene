#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum AbsMethod]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class abs_method_t : int32_t
    {                                
        _int =  0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        int64 = 0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        noop =  0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                               
};
