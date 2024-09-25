#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offer_flags_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_OFFER_FLAGS]
    // => WDK 10 (NV)
    //
    struct offer_flags_t             
    {                                
        // WDK 10                    
        //                           
        _m00 uint1_t  allow_decommit;  //{ +0x0000@0  } | .AllowDecommit
        _m01 uint32_t value;           //{ +0x0000    } | .Value
                                     
        SDK_NONVOL_PROPERTIES( "D3DDDI_OFFER_FLAGS.$", 0x0, false, 0x4da2ed7077a6807a );               
        SDK_FIXED_SIZE( offer_flags_t, 0x4 );               
    };                               
};
#include "magic/offer_flags_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::offer_flags_t, 0x4 );
