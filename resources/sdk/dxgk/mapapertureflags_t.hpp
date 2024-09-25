#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mapapertureflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MAPAPERTUREFLAGS]
    // => WDK 10 (NV)
    //
    struct mapapertureflags_t        
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t  cache_coherent;  //{ +0x0000@0  } | .CacheCoherent
        _m01 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_MAPAPERTUREFLAGS.$", 0x0, false, 0x6c678c4e00e40b6e );               
        SDK_FIXED_SIZE( mapapertureflags_t, 0x4 );               
    };                               
};
#include "magic/mapapertureflags_t.end.hpp"
SDK_VERIFY( struct dxgk::mapapertureflags_t, 0x4 );
