#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/discardcontentflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISCARDCONTENTFLAGS]
    // => WDK 10 (NV)
    //
    struct discardcontentflags_t         
    {                                    
        // WDK 10                        
        //                               
        _m00 uint1_t  allocation_is_idle;  //{ +0x0000@0  } | .AllocationIsIdle
        _m01 uint32_t value;               //{ +0x0000    } | .Value
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_DISCARDCONTENTFLAGS.$", 0x0, false, 0xc11dad82cc915c79 );                   
        SDK_FIXED_SIZE( discardcontentflags_t, 0x4 );                   
    };                                   
};
#include "magic/discardcontentflags_t.end.hpp"
SDK_VERIFY( struct dxgk::discardcontentflags_t, 0x4 );
