#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/primarydata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRIMARYDATA]
    // => WDK 10 (NV)
    //
    struct primarydata_t              
    {                                 
        // WDK 10                     
        //                            
        _m00 void*    h_allocation;     //{ +0x0000    } | .hAllocation
        _m01 uint16_t segment_id;       //{ +0x0008    } | .SegmentId
        _m02 int64_t  segment_address;  //{ +0x0010    } | .SegmentAddress
                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_PRIMARYDATA.$", 0x0, false, 0x889f7433cd7580cd );                
        SDK_FIXED_SIZE( primarydata_t, 0x18 );                
    };                                
};
#include "magic/primarydata_t.end.hpp"
SDK_VERIFY( struct dxgk::primarydata_t, 0x18 );
