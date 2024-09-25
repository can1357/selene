#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/preemptcommandflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PREEMPTCOMMANDFLAGS]
    // => WDK 10 (NV)
    //
    struct preemptcommandflags_t
    {                           
        // WDK 10           
        //                  
        _m00 uint32_t value;      //{ +0x0000    } | .Value
                                
        SDK_NONVOL_PROPERTIES( "_DXGK_PREEMPTCOMMANDFLAGS.$", 0x0, false, 0x4184891c0c9f82f3 );      
        SDK_FIXED_SIZE( preemptcommandflags_t, 0x4 );      
    };                          
};
#include "magic/preemptcommandflags_t.end.hpp"
SDK_VERIFY( struct dxgk::preemptcommandflags_t, 0x4 );
