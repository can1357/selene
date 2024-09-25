#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_zone_descriptor_t.hpp"
#include "storage_zones_attributes_t.hpp"

#include "magic/device_dsm_report_zones_data_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_REPORT_ZONES_DATA]
    // => WDK 10 (NV)
    //
    struct device_dsm_report_zones_data_t                         
    {                                                             
        using zone_descriptors_t = sdk::array<struct nt::storage_zone_descriptor_t, 1>;                 
                                                                  
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                            size;              //{ +0x0000    } | .Size
        _m01 uint32_t                            zone_count;        //{ +0x0004    } | .ZoneCount
        _m02 enum nt::storage_zones_attributes_t attributes;        //{ +0x0008    } | .Attributes
        _m03 zone_descriptors_t                  zone_descriptors;  //{ +0x0010    } | .ZoneDescriptors
                                                                  
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_REPORT_ZONES_DATA.$", 0x0, false, 0xebbcce7a71dabfd9 );                 
        SDK_FIXED_SIZE( device_dsm_report_zones_data_t, 0x30 );                 
    };                                                            
};
#include "magic/device_dsm_report_zones_data_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_report_zones_data_t, 0x30 );
