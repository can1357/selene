#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_lost_query_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_LOST_QUERY_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_lost_query_parameters_t
    {                                        
        // WDK 10                 
        //                        
        _m00 uint32_t version;                 //{ +0x0000    } | .Version
        _m01 uint64_t granularity;             //{ +0x0008    } | .Granularity
                                             
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_LOST_QUERY_PARAMETERS.$", 0x0, false, 0x886b3ad689e6eeca );            
        SDK_FIXED_SIZE( device_dsm_lost_query_parameters_t, 0x10 );            
    };                                       
};
#include "magic/device_dsm_lost_query_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_lost_query_parameters_t, 0x10 );
