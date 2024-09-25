#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/describeallocationflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DESCRIBEALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct describeallocationflags_t     
    {                                    
        // WDK 10                        
        //                               
        _m00 uint1_t  check_display_mode;  //{ +0x0000@0  } | .CheckDisplayMode
        _m01 uint32_t value;               //{ +0x0000    } | .Value
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_DESCRIBEALLOCATIONFLAGS.$", 0x0, false, 0xf759357648ab7fc0 );                   
        SDK_FIXED_SIZE( describeallocationflags_t, 0x4 );                   
    };                                   
};
#include "magic/describeallocationflags_t.end.hpp"
SDK_VERIFY( struct dxgk::describeallocationflags_t, 0x4 );
