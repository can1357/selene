#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hybrid_dirty_thresholds_t.start.hpp"
namespace nt
{
    // [struct _HYBRID_DIRTY_THRESHOLDS]
    // => WDK 10 (NV)
    //
    struct hybrid_dirty_thresholds_t       
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint32_t version;               //{ +0x0000    } | .Version
        _m01 uint32_t size;                  //{ +0x0004    } | .Size
        _m02 uint32_t dirty_low_threshold;   //{ +0x0008    } | .DirtyLowThreshold
        _m03 uint32_t dirty_high_threshold;  //{ +0x000c    } | .DirtyHighThreshold
                                           
        SDK_NONVOL_PROPERTIES( "_HYBRID_DIRTY_THRESHOLDS.$", 0x0, false, 0xd42c7e9dca24708e );                     
        SDK_FIXED_SIZE( hybrid_dirty_thresholds_t, 0x10 );                     
    };                                     
};
#include "magic/hybrid_dirty_thresholds_t.end.hpp"
SDK_VERIFY( struct nt::hybrid_dirty_thresholds_t, 0x10 );
