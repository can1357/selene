#pragma once
#include <sdkgen/support_library.hpp>
#include "child_state_t.hpp"

#include "magic/child_state_configuration_t.start.hpp"
namespace video
{
    // [struct _VIDEO_CHILD_STATE_CONFIGURATION]
    // => WDK 10 (NV)
    //
    struct child_state_configuration_t                                    
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                                   count;              //{ +0x0000    } | .Count
        _m01 sdk::array<struct video::child_state_t, 1> child_state_array;  //{ +0x0004    } | .ChildStateArray
                                                                          
        SDK_NONVOL_PROPERTIES( "_VIDEO_CHILD_STATE_CONFIGURATION.$", 0x0, false, 0x71f131f17fbd2e45 );                  
        SDK_FIXED_SIZE( child_state_configuration_t, 0xc );                  
    };                                                                    
};
#include "magic/child_state_configuration_t.end.hpp"
SDK_VERIFY( struct video::child_state_configuration_t, 0xc );
