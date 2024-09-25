#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querycurrentfence_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYCURRENTFENCE]
    // => WDK 10 (NV)
    //
    struct querycurrentfence_t       
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t current_fence;   //{ +0x0000    } | .CurrentFence
        _m01 uint32_t node_ordinal;    //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t engine_ordinal;  //{ +0x0008    } | .EngineOrdinal
                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYCURRENTFENCE.$", 0x0, false, 0x6922a3db04443371 );               
        SDK_FIXED_SIZE( querycurrentfence_t, 0xc );               
    };                               
};
#include "magic/querycurrentfence_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querycurrentfence_t, 0xc );
