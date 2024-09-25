#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _MFND_OPERATION_PRIVILEGE]
    //  Windows 11
    //
    enum class mfnd_operation_privilege_t : int32_t
    {                                              
        user =        0x0,                           // Windows 11
        super_admin = 0x1,                           // Windows 11
    };                                             
};
