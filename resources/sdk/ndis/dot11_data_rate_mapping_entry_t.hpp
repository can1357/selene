#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dot11_data_rate_mapping_entry_t.start.hpp"
namespace ndis
{
    // [struct DOT11_DATA_RATE_MAPPING_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dot11_data_rate_mapping_entry_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint8_t  uc_data_rate_index;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ucDataRateIndex
        _m01 uint8_t  uc_data_rate_flag;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ucDataRateFlag
        _m02 uint16_t us_data_rate_value;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .usDataRateValue
                                          
        SDK_MAGIC_PROPERTIES( "DOT11_DATA_RATE_MAPPING_ENTRY.$", 0x4, true, 0x701d1be0f41648cd );                   
        SDK_FIXED_SIZE( dot11_data_rate_mapping_entry_t, 0x4 );                   
    };                                    
};
#include "magic/dot11_data_rate_mapping_entry_t.end.hpp"
SDK_VERIFY( struct ndis::dot11_data_rate_mapping_entry_t, 0x4 );
