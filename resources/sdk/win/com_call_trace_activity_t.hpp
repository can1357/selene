#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/com_call_trace_activity_t.start.hpp"
namespace win
{
    // [class ComCallTraceActivity]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_call_trace_activity_t                        
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 const struct nt::guid_t guid_activity;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._guidActivity
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m01 const bool              created_from_existing;  //{ +0x0014    +0x0014    +0x0014    } | ._createdFromExisting
                                                           
        SDK_MAGIC_PROPERTIES( "ComCallTraceActivity.$", 0x18, true, 0x8f9069486a971d25 );                      
        SDK_DYNAMIC_SIZE( com_call_trace_activity_t );                      
    };                                                     
};
#include "magic/com_call_trace_activity_t.end.hpp"
