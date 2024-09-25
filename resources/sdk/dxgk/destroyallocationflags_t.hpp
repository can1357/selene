#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroyallocationflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DESTROYALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct destroyallocationflags_t    
    {                                  
        // WDK 10                      
        //                             
        _m00 uint1_t  destroy_resource;  //{ +0x0000@0  } | .DestroyResource
        _m01 uint32_t value;             //{ +0x0000    } | .Value
                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_DESTROYALLOCATIONFLAGS.$", 0x0, false, 0x6972c2b1789da0b8 );                 
        SDK_FIXED_SIZE( destroyallocationflags_t, 0x4 );                 
    };                                 
};
#include "magic/destroyallocationflags_t.end.hpp"
SDK_VERIFY( struct dxgk::destroyallocationflags_t, 0x4 );
