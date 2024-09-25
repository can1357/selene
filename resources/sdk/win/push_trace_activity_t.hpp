#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/push_trace_activity_t.start.hpp"
namespace win
{
    // [class PushTraceActivity]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class push_trace_activity_t                 
    {                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 struct nt::guid_t saved_activity;    //{ +0x0000    +0x0000    +0x0000    } | ._savedActivity
        _m01 bool              successfully_set;  //{ +0x0010    +0x0010    +0x0010    } | ._successfullySet
                                                
        SDK_MAGIC_PROPERTIES( "PushTraceActivity.$", 0x14, true, 0xfadbd17fbd2437e1 );                 
        SDK_FIXED_SIZE( push_trace_activity_t, 0x14 );                 
    };                                          
};
#include "magic/push_trace_activity_t.end.hpp"
SDK_VERIFY( class win::push_trace_activity_t, 0x14 );
