#pragma once
#include <sdkgen/support_library.hpp>
#include "perfinfo_debug_event_reason_t.hpp"

#include "magic/perfinfo_debug_event_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_DEBUG_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_debug_event_t                               
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                      
        _m00 uint32_t                                process_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ProcessId
        _m01 uint32_t                                thread_id;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ThreadId
        _m02 enum win::perfinfo_debug_event_reason_t reason;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Reason
                                                                
        SDK_MAGIC_PROPERTIES( "_PERFINFO_DEBUG_EVENT.$", 0xc, true, 0xcf9a6a7916873a6e );           
        SDK_FIXED_SIZE( perfinfo_debug_event_t, 0xc );           
    };                                                          
};
#include "magic/perfinfo_debug_event_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_debug_event_t, 0xc );
