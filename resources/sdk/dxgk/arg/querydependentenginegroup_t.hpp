#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querydependentenginegroup_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYDEPENDENTENGINEGROUP]
    // => WDK 10 (NV)
    //
    struct querydependentenginegroup_t            
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t node_ordinal;                 //{ +0x0000    } | .NodeOrdinal
        _m01 uint32_t engine_ordinal;               //{ +0x0004    } | .EngineOrdinal
        _m02 uint64_t dependent_node_ordinal_mask;  //{ +0x0008    } | .DependentNodeOrdinalMask
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYDEPENDENTENGINEGROUP.$", 0x0, false, 0xfe2a0124c42557c4 );                            
        SDK_FIXED_SIZE( querydependentenginegroup_t, 0x10 );                            
    };                                            
};
#include "magic/querydependentenginegroup_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querydependentenginegroup_t, 0x10 );
