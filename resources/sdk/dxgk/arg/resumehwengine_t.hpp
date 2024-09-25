#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resumehwengine_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESUMEHWENGINE]
    // => WDK 10 (NV)
    //
    struct resumehwengine_t          
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t node_ordinal;    //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t engine_ordinal;  //{ +0x0004    } | .EngineOrdinal
                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESUMEHWENGINE.$", 0x0, false, 0xef24b440f9e5ab36 );               
        SDK_FIXED_SIZE( resumehwengine_t, 0x8 );               
    };                               
};
#include "magic/resumehwengine_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resumehwengine_t, 0x8 );
