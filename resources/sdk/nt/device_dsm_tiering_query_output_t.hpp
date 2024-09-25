#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_tier_region_t.hpp"

#include "magic/device_dsm_tiering_query_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_TIERING_QUERY_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_dsm_tiering_query_output_t                                            
    {                                                                                   
        // WDK 10                                                                       
        //                                                                              
        _m00 uint32_t                                        version;                     //{ +0x0000    } | .Version
        _m01 uint32_t                                        size;                        //{ +0x0004    } | .Size
        _m02 uint32_t                                        flags;                       //{ +0x0008    } | .Flags
        _m03 uint64_t                                        alignment;                   //{ +0x0010    } | .Alignment
        _m04 uint32_t                                        total_number_of_regions;     //{ +0x0018    } | .TotalNumberOfRegions
        _m05 uint32_t                                        number_of_regions_returned;  //{ +0x001c    } | .NumberOfRegionsReturned
        _m06 sdk::array<struct nt::storage_tier_region_t, 1> regions;                     //{ +0x0020    } | .Regions
                                                                                        
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_TIERING_QUERY_OUTPUT.$", 0x0, false, 0x4f2c2f8e7ce89e88 );                           
        SDK_FIXED_SIZE( device_dsm_tiering_query_output_t, 0x40 );                           
    };                                                                                  
};
#include "magic/device_dsm_tiering_query_output_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_tiering_query_output_t, 0x40 );
