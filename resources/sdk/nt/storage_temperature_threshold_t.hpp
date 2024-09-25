#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_temperature_threshold_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_TEMPERATURE_THRESHOLD]
    // => WDK 10 (NV)
    //
    struct storage_temperature_threshold_t
    {                                     
        // WDK 10                    
        //                           
        _m00 uint32_t version;              //{ +0x0000    } | .Version
        _m01 uint32_t size;                 //{ +0x0004    } | .Size
        _m02 uint16_t flags;                //{ +0x0008    } | .Flags
        _m03 uint16_t index;                //{ +0x000a    } | .Index
        _m04 int16_t  threshold;            //{ +0x000c    } | .Threshold
        _m05 uint8_t  over_threshold;       //{ +0x000e    } | .OverThreshold
                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_TEMPERATURE_THRESHOLD.$", 0x0, false, 0x9d31bac6911c5e6 );               
        SDK_FIXED_SIZE( storage_temperature_threshold_t, 0x10 );               
    };                                    
};
#include "magic/storage_temperature_threshold_t.end.hpp"
SDK_VERIFY( struct nt::storage_temperature_threshold_t, 0x10 );
