#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/device_dsm_tiering_query_input_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_TIERING_QUERY_INPUT]
    // => WDK 10 (NV)
    //
    struct device_dsm_tiering_query_input_t                      
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                         version;             //{ +0x0000    } | .Version
        _m01 uint32_t                         size;                //{ +0x0004    } | .Size
        _m02 uint32_t                         flags;               //{ +0x0008    } | .Flags
        _m03 uint32_t                         number_of_tier_ids;  //{ +0x000c    } | .NumberOfTierIds
        _m04 sdk::array<struct nt::guid_t, 1> tier_ids;            //{ +0x0010    } | .TierIds
                                                                 
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_TIERING_QUERY_INPUT.$", 0x0, false, 0x69455ad40f6db700 );                   
        SDK_FIXED_SIZE( device_dsm_tiering_query_input_t, 0x20 );                   
    };                                                           
};
#include "magic/device_dsm_tiering_query_input_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_tiering_query_input_t, 0x20 );
