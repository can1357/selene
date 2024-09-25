#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_temperature_info_t.hpp"

#include "magic/storage_temperature_data_descriptor_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_TEMPERATURE_DATA_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct storage_temperature_data_descriptor_t      
    {                                                 
        using temperature_info_t = sdk::array<struct nt::storage_temperature_info_t, 1>;                     
                                                      
        // WDK 10                                     
        //                                            
        _m00 uint32_t            version;               //{ +0x0000    } | .Version
        _m01 uint32_t            size;                  //{ +0x0004    } | .Size
        _m02 int16_t             critical_temperature;  //{ +0x0008    } | .CriticalTemperature
        _m03 int16_t             warning_temperature;   //{ +0x000a    } | .WarningTemperature
        _m04 uint16_t            info_count;            //{ +0x000c    } | .InfoCount
        _m05 temperature_info_t  temperature_info;      //{ +0x0018    } | .TemperatureInfo
                                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_TEMPERATURE_DATA_DESCRIPTOR.$", 0x0, false, 0x9631791669f5a106 );                     
        SDK_FIXED_SIZE( storage_temperature_data_descriptor_t, 0x28 );                     
    };                                                
};
#include "magic/storage_temperature_data_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::storage_temperature_data_descriptor_t, 0x28 );
