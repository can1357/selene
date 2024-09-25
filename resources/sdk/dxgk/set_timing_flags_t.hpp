#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_timing_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SET_TIMING_FLAGS]
    // => WDK 10 (NV)
    //
    struct set_timing_flags_t
    {                        
        // WDK 10           
        //                  
        _m00 uint32_t value;   //{ +0x0000    } | .Value
                             
        SDK_NONVOL_PROPERTIES( "_DXGK_SET_TIMING_FLAGS.$", 0x0, false, 0xdd3672d4cec4f00a );      
        SDK_FIXED_SIZE( set_timing_flags_t, 0x4 );      
    };                       
};
#include "magic/set_timing_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::set_timing_flags_t, 0x4 );
