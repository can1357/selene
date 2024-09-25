#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxIoIteratorList]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class io_iterator_list_t : int32_t
    {                                      
        invalid =   0x0,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_on =  0x1,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        power_off = 0x2,                     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
