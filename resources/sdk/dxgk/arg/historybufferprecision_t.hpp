#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/historybufferprecision_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_HISTORYBUFFERPRECISION]
    // => WDK 10 (NV)
    //
    struct historybufferprecision_t  
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t precision_bits;  //{ +0x0000    } | .PrecisionBits
                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_HISTORYBUFFERPRECISION.$", 0x0, false, 0xf01b173aa519d279 );               
        SDK_FIXED_SIZE( historybufferprecision_t, 0x4 );               
    };                               
};
#include "magic/historybufferprecision_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::historybufferprecision_t, 0x4 );
