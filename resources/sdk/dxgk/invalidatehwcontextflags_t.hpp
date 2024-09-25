#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/invalidatehwcontextflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_INVALIDATEHWCONTEXTFLAGS]
    // => WDK 10 (NV)
    //
    struct invalidatehwcontextflags_t   
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  collateral_damage;  //{ +0x0000@0  } | .CollateralDamage
        _m01 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_DXGK_INVALIDATEHWCONTEXTFLAGS.$", 0x0, false, 0x6f92e36c25ac78e0 );                  
        SDK_FIXED_SIZE( invalidatehwcontextflags_t, 0x4 );                  
    };                                  
};
#include "magic/invalidatehwcontextflags_t.end.hpp"
SDK_VERIFY( struct dxgk::invalidatehwcontextflags_t, 0x4 );
