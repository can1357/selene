#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/d3dkm_transparentbltflags_t.start.hpp"
namespace nt
{
    // [struct _D3DKM_TRANSPARENTBLTFLAGS]
    // => WDK 10 (NV)
    //
    struct d3dkm_transparentbltflags_t
    {                                 
        // WDK 10                 
        //                        
        _m00 uint1_t  honor_alpha;      //{ +0x0000@0  } | .HonorAlpha
        _m01 uint32_t value;            //{ +0x0000    } | .Value
                                      
        SDK_NONVOL_PROPERTIES( "_D3DKM_TRANSPARENTBLTFLAGS.$", 0x0, false, 0x5e2678347bbffc97 );            
        SDK_FIXED_SIZE( d3dkm_transparentbltflags_t, 0x4 );            
    };                                
};
#include "magic/d3dkm_transparentbltflags_t.end.hpp"
SDK_VERIFY( struct nt::d3dkm_transparentbltflags_t, 0x4 );
