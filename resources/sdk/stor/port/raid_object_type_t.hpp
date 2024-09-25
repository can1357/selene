#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _RAID_OBJECT_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class raid_object_type_t : int32_t
    {                                      
        adapter_object = 0x0,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unit_object =    0x1,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        driver_object =  0x2,                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        unknown_object = 0xff,               // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                     
};
