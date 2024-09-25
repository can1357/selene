#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum MFND_MANAGEMENT_TYPE]
    //  Windows 11
    //
    enum class mfnd_management_type_t : int32_t
    {                                          
        update =   0x0,                          // Windows 11
        reset =    0x1,                          // Windows 11
        reserved = 0x2,                          // Windows 11
    };                                         
};
