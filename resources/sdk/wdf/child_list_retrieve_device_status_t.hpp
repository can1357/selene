#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [enum _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS]
    //  WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class child_list_retrieve_device_status_t : int32_t
    {                                                       
        undefined =       0x0,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        success =         0x1,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        not_yet_created = 0x2,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        no_such_device =  0x3,                                // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                      
};
