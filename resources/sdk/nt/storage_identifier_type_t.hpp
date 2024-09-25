#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [enum _STORAGE_IDENTIFIER_TYPE]
    //  WDK 10
    //
    enum class storage_identifier_type_t : int32_t
    {                                             
        vendor_specific =             0x0,          // WDK 10
        vendor_id =                   0x1,          // WDK 10
        eui64 =                       0x2,          // WDK 10
        fcph_name =                   0x3,          // WDK 10
        port_relative =               0x4,          // WDK 10
        target_port_group =           0x5,          // WDK 10
        logical_unit_group =          0x6,          // WDK 10
        md5_logical_unit_identifier = 0x7,          // WDK 10
        scsi_name_string =            0x8,          // WDK 10
    };                                            
};
