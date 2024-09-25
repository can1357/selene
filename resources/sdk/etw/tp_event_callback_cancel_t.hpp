#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/system_trace_header_t.hpp"

#include "magic/tp_event_callback_cancel_t.start.hpp"
namespace etw
{
    // [struct _ETW_TP_EVENT_CALLBACK_CANCEL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tp_event_callback_cancel_t                          
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                     
        _m00 struct win::system_trace_header_t header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                             pool_id;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PoolId
        _m02 void*                             task_id;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TaskId
        _m03 void*                             callback;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Callback
        _m04 void*                             context;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Context
        _m05 void*                             sub_process_tag;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SubProcessTag
        _m06 uint32_t                          cancel_count;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CancelCount
                                                               
        SDK_MAGIC_PROPERTIES( "_ETW_TP_EVENT_CALLBACK_CANCEL.$", 0x50, true, 0xb60b76d99fb2f713 );                
        SDK_FIXED_SIZE( tp_event_callback_cancel_t, 0x50 );                
    };                                                         
};
#include "magic/tp_event_callback_cancel_t.end.hpp"
SDK_VERIFY( struct etw::tp_event_callback_cancel_t, 0x50 );
