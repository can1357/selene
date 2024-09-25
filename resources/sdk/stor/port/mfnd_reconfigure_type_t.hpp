#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _MFND_RECONFIGURE_TYPE]
    //  Windows 11
    //
    enum class mfnd_reconfigure_type_t : int32_t
    {                                           
        mfnd_reserved = 0x0,                      // Windows 11
        mfnd_reset =    0x1,                      // Windows 11
        mfnd_max =      0x2,                      // Windows 11
    };                                          
};
