#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resethwengine_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESETHWENGINE]
    // => WDK 10 (NV)
    //
    struct resethwengine_t           
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t node_ordinal;    //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t engine_ordinal;  //{ +0x0004    } | .EngineOrdinal
                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESETHWENGINE.$", 0x0, false, 0x710fbe1ad4666750 );               
        SDK_FIXED_SIZE( resethwengine_t, 0x8 );               
    };                               
};
#include "magic/resethwengine_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resethwengine_t, 0x8 );
