#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _SLEEPSTUDY_BLOCKER_TYPE]
    //  Windows 11
    //
    enum class sleepstudy_blocker_type_t : int32_t
    {                                             
        device =      0x0,                          // Windows 11
        connection =  0x1,                          // Windows 11
        shell =       0x2,                          // Windows 11
        plm =         0x3,                          // Windows 11
        maintenance = 0x4,                          // Windows 11
        dam =         0x5,                          // Windows 11
        resiliency =  0x6,                          // Windows 11
        idle_phase =  0x7,                          // Windows 11
        max =         0x8,                          // Windows 11
    };                                            
};
