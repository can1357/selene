#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/push_com_call_trace_activity_t.start.hpp"
namespace win
{
    // [class PushComCallTraceActivity]
    // => Windows 10 v1607
    //
    class push_com_call_trace_activity_t           
    {                                              
        // Windows 10 v1607                        
        //                                         
        _m00 struct nt::guid_t guid_saved_activity;  //{ +0x0000    } | ._guidSavedActivity
        _m01 bool              b_successfully_set;   //{ +0x0010    } | ._bSuccessfullySet
                                                   
        SDK_MAGIC_PROPERTIES( "PushComCallTraceActivity.$", 0x0, false, 0x581d47ca1e2eefb );                    
        SDK_FIXED_SIZE( push_com_call_trace_activity_t, 0x14 );                    
    };                                             
};
#include "magic/push_com_call_trace_activity_t.end.hpp"
SDK_VERIFY( class win::push_com_call_trace_activity_t, 0x14 );
