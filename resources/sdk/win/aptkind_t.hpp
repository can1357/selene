#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum APTKIND]
    //  Windows 10 v1607
    //
    enum class aptkind_t : int32_t 
    {                              
        neutralthreaded =   0x1,     // Windows 10 v1607
        multithreaded =     0x2,     // Windows 10 v1607
        apartmentthreaded = 0x4,     // Windows 10 v1607
        application_sta =   0x8,     // Windows 10 v1607
    };                             
};
