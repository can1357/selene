#pragma once
#include <sdkgen/support_library.hpp>

namespace tag
{
    // [enum tagWMI_CLOCK_TYPE]
    //  Windows 10 v1607
    //
    enum class wmi_clock_type_t : int32_t
    {                                    
        _default =    0x0,                 // Windows 10 v1607
        systemtime =  0x1,                 // Windows 10 v1607
        perfcounter = 0x2,                 // Windows 10 v1607
        process =     0x3,                 // Windows 10 v1607
        thread =      0x4,                 // Windows 10 v1607
        cpucycle =    0x5,                 // Windows 10 v1607
    };                                   
};
