#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_PROTOCOL_TYPE]
    //  WDK 10
    //
    enum class storage_protocol_type_t : int32_t
    {                                           
        unknown =      0x0,                       // WDK 10
        scsi =         0x1,                       // WDK 10
        ata =          0x2,                       // WDK 10
        nvme =         0x3,                       // WDK 10
        sd =           0x4,                       // WDK 10
        ufs =          0x5,                       // WDK 10
        proprietary =  0x7e,                      // WDK 10
        max_reserved = 0x7f,                      // WDK 10
    };                                          
};
