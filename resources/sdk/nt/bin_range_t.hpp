#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bin_range_t.start.hpp"
namespace nt
{
    // [struct _BIN_RANGE]
    // => WDK 10 (NV)
    //
    struct bin_range_t           
    {                            
        // WDK 10                
        //                       
        _m00 int64_t start_value;  //{ +0x0000    } | .StartValue
        _m01 int64_t length;       //{ +0x0008    } | .Length
                                 
        SDK_NONVOL_PROPERTIES( "_BIN_RANGE.$", 0x0, false, 0xced635f855961bef );            
        SDK_FIXED_SIZE( bin_range_t, 0x10 );            
    };                           
};
#include "magic/bin_range_t.end.hpp"
SDK_VERIFY( struct nt::bin_range_t, 0x10 );
