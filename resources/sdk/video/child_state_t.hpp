#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/child_state_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CHILD_STATE]
    // => WDK 10 (NV)
    //
    struct child_state_t    
    {                       
        // WDK 10           
        //                  
        _m00 uint32_t id;     //{ +0x0000    } | .Id
        _m01 uint32_t state;  //{ +0x0004    } | .State
                            
        SDK_NONVOL_PROPERTIES( "_VIDEO_CHILD_STATE.$", 0x0, false, 0xb602f937c3a6ea3f );      
        SDK_FIXED_SIZE( child_state_t, 0x8 );      
    };                      
};
#include "magic/child_state_t.end.hpp"
SDK_VERIFY( struct video::child_state_t, 0x8 );
