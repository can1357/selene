#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resetengine_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESETENGINE]
    // => WDK 10 (NV)
    //
    struct resetengine_t                    
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint32_t node_ordinal;           //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t engine_ordinal;         //{ +0x0004    } | .EngineOrdinal
        _m02 uint32_t last_aborted_fence_id;  //{ +0x0008    } | .LastAbortedFenceId
                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESETENGINE.$", 0x0, false, 0xd48174f676706712 );                      
        SDK_FIXED_SIZE( resetengine_t, 0xc );                      
    };                                      
};
#include "magic/resetengine_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::resetengine_t, 0xc );
