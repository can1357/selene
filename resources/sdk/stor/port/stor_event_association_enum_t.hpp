#pragma once
#include <sdkgen/support_library.hpp>

namespace stor::port
{
    // [enum _STOR_EVENT_ASSOCIATION_ENUM]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class stor_event_association_enum_t : int32_t
    {                                                 
        adapter_association = 0x0,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        lun_association =     0x1,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        target_association =  0x2,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        invalid_association = 0x3,                      // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                
};
