#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

#include "magic/filter_pause_restart_context_t.start.hpp"
namespace ndis
{
    struct filter_block_t;

    // [struct _FILTER_PAUSE_RESTART_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_pause_restart_context_t        
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                       
        _m00 struct ndis::filter_block_t* filter;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Filter
        _m01 int32_t                      status;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Status
        _m02 struct nt::kevent_t          event;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Event
                                                 
        SDK_MAGIC_PROPERTIES( "_FILTER_PAUSE_RESTART_CONTEXT.$", 0x28, true, 0x174e80ed81e7ea5d );       
        SDK_FIXED_SIZE( filter_pause_restart_context_t, 0x28 );       
    };                                           
};
#include "magic/filter_pause_restart_context_t.end.hpp"
SDK_VERIFY( struct ndis::filter_pause_restart_context_t, 0x28 );
