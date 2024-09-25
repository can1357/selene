#pragma once
#include <sdkgen/support_library.hpp>
#include "zone_descriptior_t.hpp"

#include "magic/report_zones_data_t.start.hpp"
namespace nt
{
    // [struct _REPORT_ZONES_DATA]
    // => WDK 10 (NV)
    //
    struct report_zones_data_t                                             
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 sdk::array<uint8_t, 4>                       zone_list_length;  //{ +0x0000    } | .ZoneListLength
        _m01 uint4_t                                      same;              //{ +0x0004@0  } | .Same
        _m02 sdk::array<uint8_t, 8>                       max_lba;           //{ +0x0008    } | .MaxLBA
        _m03 sdk::array<struct nt::zone_descriptior_t, 1> zone_descriptors;  //{ +0x0040    } | .ZoneDescriptors
                                                                           
        SDK_NONVOL_PROPERTIES( "_REPORT_ZONES_DATA.$", 0x0, false, 0xbebedfa008eb6abf );                 
        SDK_FIXED_SIZE( report_zones_data_t, 0x80 );                       
    };                                                                     
};
#include "magic/report_zones_data_t.end.hpp"
SDK_VERIFY( struct nt::report_zones_data_t, 0x80 );
