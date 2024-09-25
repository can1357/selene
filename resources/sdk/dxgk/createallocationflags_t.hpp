#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createallocationflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CREATEALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct createallocationflags_t
    {                             
        // WDK 10              
        //                     
        _m00 uint1_t  resource;     //{ +0x0000@0  } | .Resource
        _m01 uint32_t value;        //{ +0x0000    } | .Value
                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_CREATEALLOCATIONFLAGS.$", 0x0, false, 0x4d4dc64aef93978b );         
        SDK_FIXED_SIZE( createallocationflags_t, 0x4 );         
    };                            
};
#include "magic/createallocationflags_t.end.hpp"
SDK_VERIFY( struct dxgk::createallocationflags_t, 0x4 );
