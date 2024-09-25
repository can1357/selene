#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/frequency_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_Frequency]
    // => WDK 10 (NV)
    //
    struct frequency_t            
    {                             
        // WDK 10                 
        //                        
        _m00 uint32_t numerator;    //{ +0x0000    } | .Numerator
        _m01 uint32_t denominator;  //{ +0x0004    } | .Denominator
                                  
        SDK_NONVOL_PROPERTIES( "_DXVA_Frequency.$", 0x0, false, 0x168395617f5dcf79 );            
        SDK_FIXED_SIZE( frequency_t, 0x8 );            
    };                            
};
#include "magic/frequency_t.end.hpp"
SDK_VERIFY( struct dxva::frequency_t, 0x8 );
