#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum ThreadingModel]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class threading_model_t : int32_t
    {                                     
        apartment_threaded = 0x0,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        free_threaded =      0x1,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        single_threaded =    0x2,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        both_threaded =      0x3,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        neutral_threaded =   0x4,           // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                    
};
