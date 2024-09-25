#pragma once
#include <sdkgen/support_library.hpp>

namespace pnp
{
    // [enum _PNP_DEVICE_DELETE_TYPE]
    //  Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class device_delete_type_t : int32_t   
    {                                           
        query_remove_device =            0x0,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        cancel_remove_device =           0x1,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_device =                  0x2,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        surprise_remove_device =         0x3,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        eject_device =                   0x4,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_failed_device =           0x5,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        remove_unstarted_failed_device = 0x6,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        max_device_delete_type =         0x7,     // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                          
};
