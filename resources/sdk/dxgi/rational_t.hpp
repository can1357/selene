#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rational_t.start.hpp"
namespace dxgi
{
    // [struct DXGI_RATIONAL]
    // => WDK 10 (NV)
    //
    struct rational_t             
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t numerator;    //{ +0x0000    } | .Numerator
        _m01 uint32_t denominator;  //{ +0x0004    } | .Denominator
                                  
        SDK_NONVOL_PROPERTIES( "DXGI_RATIONAL.$", 0x0, false, 0x9ad4bf91e1f76081 );            
        SDK_FIXED_SIZE( rational_t, 0x8 );            
    };                            
};
#include "magic/rational_t.end.hpp"
SDK_VERIFY( struct dxgi::rational_t, 0x8 );
