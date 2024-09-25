#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/base_mcb_t.start.hpp"
namespace nt
{
    // [struct _BASE_MCB]
    // => WDK 10 (NV)
    //
    struct base_mcb_t                    
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t maximum_pair_count;  //{ +0x0000    } | .MaximumPairCount
        _m01 uint32_t pair_count;          //{ +0x0004    } | .PairCount
        _m02 uint16_t pool_type;           //{ +0x0008    } | .PoolType
        _m03 uint16_t flags;               //{ +0x000a    } | .Flags
        _m04 void*    mapping;             //{ +0x0010    } | .Mapping
                                         
        SDK_NONVOL_PROPERTIES( "_BASE_MCB.$", 0x0, false, 0x18442908cd793a5a );                   
        SDK_FIXED_SIZE( base_mcb_t, 0x18 );                   
    };                                   
};
#include "magic/base_mcb_t.end.hpp"
SDK_VERIFY( struct nt::base_mcb_t, 0x18 );
