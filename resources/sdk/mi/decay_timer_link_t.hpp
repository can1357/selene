#pragma once
#include <sdkgen/support_library.hpp>
#include "decay_timer_linkage_t.hpp"

#include "magic/decay_timer_link_t.start.hpp"
namespace mi
{
    // [struct _MI_DECAY_TIMER_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct decay_timer_link_t                       
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m00 uint64_t                         _long;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Long
        _m01 struct mi::decay_timer_linkage_t e1;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .e1
                                                    
        SDK_MAGIC_PROPERTIES( "_MI_DECAY_TIMER_LINK.$", 0x8, true, 0x142e9baa0b0eb659 );      
        SDK_FIXED_SIZE( decay_timer_link_t, 0x8 );      
    };                                              
};
#include "magic/decay_timer_link_t.end.hpp"
SDK_VERIFY( struct mi::decay_timer_link_t, 0x8 );
