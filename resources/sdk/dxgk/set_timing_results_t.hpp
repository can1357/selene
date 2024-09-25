#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_timing_results_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SET_TIMING_RESULTS]
    // => WDK 10 (NV)
    //
    struct set_timing_results_t                 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint1_t  connection_status_changes;  //{ +0x0000@0  } | .ConnectionStatusChanges
        _m01 uint32_t value;                      //{ +0x0000    } | .Value
                                                
        SDK_NONVOL_PROPERTIES( "_DXGK_SET_TIMING_RESULTS.$", 0x0, false, 0xd7664e07131d6eee );                          
        SDK_FIXED_SIZE( set_timing_results_t, 0x4 );                          
    };                                          
};
#include "magic/set_timing_results_t.end.hpp"
SDK_VERIFY( struct dxgk::set_timing_results_t, 0x4 );
