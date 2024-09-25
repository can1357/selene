#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/decay_timer_linkage_t.start.hpp"
namespace mi
{
    // [struct _MI_DECAY_TIMER_LINKAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct decay_timer_linkage_t         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint31_t previous_decay_pfn;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .PreviousDecayPfn
        _m01 uint31_t next_decay_pfn;      //{ +0x0000@33 +0x0000@33 +0x0000@33 +0x0000@33 } | .NextDecayPfn
                                         
        // Windows 11                    
        //                               
        _m02 uint1_t  timer_removed;       //{ +0x0000@32 } | .TimerRemoved
                                         
        SDK_MAGIC_PROPERTIES( "_MI_DECAY_TIMER_LINKAGE.$", 0x8, true, 0xe0238989ff9238ca );                   
        SDK_FIXED_SIZE( decay_timer_linkage_t, 0x8 );                   
    };                                   
};
#include "magic/decay_timer_linkage_t.end.hpp"
SDK_VERIFY( struct mi::decay_timer_linkage_t, 0x8 );
