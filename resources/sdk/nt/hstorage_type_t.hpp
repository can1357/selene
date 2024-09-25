#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum HSTORAGE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hstorage_type_t : int32_t
    {                                   
        stable =          0x0,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        _volatile =       0x1,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_storage = 0x2,            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                  
};
