#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/displayconfig_rational_t.start.hpp"
namespace win
{
    // [struct DISPLAYCONFIG_RATIONAL]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct displayconfig_rational_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t numerator;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Numerator
        _m01 uint32_t denominator;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Denominator
                                   
        SDK_NONVOL_PROPERTIES( "DISPLAYCONFIG_RATIONAL.$", 0x8, true, 0x6a182bed5fa9660e );            
        SDK_FIXED_SIZE( displayconfig_rational_t, 0x8 );            
    };                             
};
#include "magic/displayconfig_rational_t.end.hpp"
SDK_VERIFY( struct win::displayconfig_rational_t, 0x8 );
