#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _KCONTINUE_TYPE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class kcontinue_type_t : int32_t
    {                                    
        unwind =   0x0,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        resume =   0x1,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        longjump = 0x2,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        set =      0x3,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid =  0x4,                    // Windows 11
        last =     0x4,                    // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                   
};
