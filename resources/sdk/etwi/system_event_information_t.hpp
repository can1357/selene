#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/system_event_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_SYSTEM_EVENT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_event_information_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 sdk::array<uint32_t, 1>        hook_id;                        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HookId
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_SYSTEM_EVENT_INFORMATION.$", 0x18, true, 0xc7891767dff6ab41 );                              
        SDK_FIXED_SIZE( system_event_information_t, 0x18 );                              
    };                                                                    
};
#include "magic/system_event_information_t.end.hpp"
SDK_VERIFY( struct etwi::system_event_information_t, 0x18 );
