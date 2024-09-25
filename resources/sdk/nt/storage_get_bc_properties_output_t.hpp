#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_get_bc_properties_output_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_GET_BC_PROPERTIES_OUTPUT]
    // => WDK 10 (NV)
    //
    struct storage_get_bc_properties_output_t     
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t maximum_requests_per_period;  //{ +0x0000    } | .MaximumRequestsPerPeriod
        _m01 uint32_t minimum_period;               //{ +0x0004    } | .MinimumPeriod
        _m02 uint64_t maximum_request_size;         //{ +0x0008    } | .MaximumRequestSize
        _m03 uint32_t estimated_time_per_request;   //{ +0x0010    } | .EstimatedTimePerRequest
        _m04 uint32_t num_out_standing_requests;    //{ +0x0014    } | .NumOutStandingRequests
        _m05 uint64_t request_size;                 //{ +0x0018    } | .RequestSize
                                                  
        SDK_NONVOL_PROPERTIES( "_STORAGE_GET_BC_PROPERTIES_OUTPUT.$", 0x0, false, 0x50def756345d380f );                            
        SDK_FIXED_SIZE( storage_get_bc_properties_output_t, 0x20 );                            
    };                                            
};
#include "magic/storage_get_bc_properties_output_t.end.hpp"
SDK_VERIFY( struct nt::storage_get_bc_properties_output_t, 0x20 );
