#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ddi_rational_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_DDI_RATIONAL]
    // => WDK 10 (NV)
    //
    struct ddi_rational_t         
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t numerator;    //{ +0x0000    } | .Numerator
        _m01 uint32_t denominator;  //{ +0x0004    } | .Denominator
                                  
        SDK_NONVOL_PROPERTIES( "DXGI_DDI_RATIONAL.$", 0x0, false, 0x7ac952bfd58b8c0 );            
        SDK_FIXED_SIZE( ddi_rational_t, 0x8 );            
    };                            
};
#include "magic/ddi_rational_t.end.hpp"
SDK_VERIFY( struct dxgi::ddi_rational_t, 0x8 );
