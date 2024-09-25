#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/session_security_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_SESSION_SECURITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct session_security_information_t                                 
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint32_t                       security_information;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SecurityInformation
        _m02 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m03 sdk::array<uint8_t, 1>         security_descriptor;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SecurityDescriptor
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_SESSION_SECURITY_INFORMATION.$", 0x18, true, 0x22130dbacf0dc065 );                              
        SDK_FIXED_SIZE( session_security_information_t, 0x18 );                              
    };                                                                    
};
#include "magic/session_security_information_t.end.hpp"
SDK_VERIFY( struct etwi::session_security_information_t, 0x18 );
