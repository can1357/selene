#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/thread_event_subprocesstag_t.start.hpp"
namespace etw
{
    // [struct _ETW_THREAD_EVENT_SUBPROCESSTAG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_event_subprocesstag_t                
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                             
        _m00 struct win::system_trace_header_t header;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                          old_tag;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OldTag
        _m02 uint32_t                          new_tag;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .NewTag
                                                       
        SDK_MAGIC_PROPERTIES( "_ETW_THREAD_EVENT_SUBPROCESSTAG.$", 0x28, true, 0xd5003cb686695a5f );        
        SDK_FIXED_SIZE( thread_event_subprocesstag_t, 0x28 );        
    };                                                 
};
#include "magic/thread_event_subprocesstag_t.end.hpp"
SDK_VERIFY( struct etw::thread_event_subprocesstag_t, 0x28 );
