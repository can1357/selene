#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"

#include "magic/pool_type_or_pool_flags_t.start.hpp"
namespace fx
{
    // [struct FxPoolTypeOrPoolFlags]
    // => Windows 11
    //
    struct pool_type_or_pool_flags_t            
    {                                           
        // Windows 11                           
        //                                      
        _m00 uint8_t              use_pool_type;  //{ +0x0000    } | .UsePoolType
        _m01 enum nt::pool_type_t pool_type;      //{ +0x0008    } | .PoolType
        _m02 uint64_t             pool_flags;     //{ +0x0008    } | .PoolFlags
                                                
        SDK_MAGIC_PROPERTIES( "FxPoolTypeOrPoolFlags.$", 0x0, false, 0x18c8432744e6eaa1 );              
        SDK_FIXED_SIZE( pool_type_or_pool_flags_t, 0x10 );              
    };                                          
};
#include "magic/pool_type_or_pool_flags_t.end.hpp"
SDK_VERIFY( struct fx::pool_type_or_pool_flags_t, 0x10 );
