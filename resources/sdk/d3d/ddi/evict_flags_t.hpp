#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/evict_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_EVICT_FLAGS]
    // => WDK 10 (NV)
    //
    struct evict_flags_t                      
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint1_t  evict_only_if_necessary;  //{ +0x0000@0  } | .EvictOnlyIfNecessary
        _m01 uint1_t  not_written_to;           //{ +0x0000@1  } | .NotWrittenTo
        _m02 uint32_t value;                    //{ +0x0000    } | .Value
                                              
        SDK_NONVOL_PROPERTIES( "D3DDDI_EVICT_FLAGS.$", 0x0, false, 0x5d3f49425a078711 );                        
        SDK_FIXED_SIZE( evict_flags_t, 0x4 );                        
    };                                        
};
#include "magic/evict_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::evict_flags_t, 0x4 );
