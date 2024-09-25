#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offer_flags_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OFFER_FLAGS]
    // => WDK 10 (NV)
    //
    struct offer_flags_t                
    {                                   
        // WDK 10                       
        //                              
        _m00 uint1_t  offer_immediately;  //{ +0x0000@0  } | .OfferImmediately
        _m01 uint1_t  allow_decommit;     //{ +0x0000@1  } | .AllowDecommit
        _m02 uint32_t value;              //{ +0x0000    } | .Value
                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OFFER_FLAGS.$", 0x0, false, 0xc55af56f809f203c );                  
        SDK_FIXED_SIZE( offer_flags_t, 0x4 );                  
    };                                  
};
#include "magic/offer_flags_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::offer_flags_t, 0x4 );
