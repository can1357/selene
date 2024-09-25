#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/releaseswizzlingrange_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RELEASESWIZZLINGRANGE]
    // => WDK 10 (NV)
    //
    struct releaseswizzlingrange_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 void*    h_allocation;         //{ +0x0000    } | .hAllocation
        _m01 uint32_t private_driver_data;  //{ +0x0008    } | .PrivateDriverData
        _m02 uint32_t range_id;             //{ +0x000c    } | .RangeId
                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RELEASESWIZZLINGRANGE.$", 0x0, false, 0xa472e062b96d9c42 );                    
        SDK_FIXED_SIZE( releaseswizzlingrange_t, 0x10 );                    
    };                                    
};
#include "magic/releaseswizzlingrange_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::releaseswizzlingrange_t, 0x10 );
