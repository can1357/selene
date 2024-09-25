#pragma once
#include <sdkgen/support_library.hpp>

namespace fx
{
    // [enum FxRequestAllocationSource]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class request_allocation_source_t : int32_t
    {                                               
        from_io =  0x0,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        internal = 0x1,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver =   0x2,                               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                              
};
