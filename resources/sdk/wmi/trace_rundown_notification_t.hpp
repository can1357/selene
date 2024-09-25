#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct ejob_t; }

#include "magic/trace_rundown_notification_t.start.hpp"
namespace wmi
{
    // [struct _WMI_TRACE_RUNDOWN_NOTIFICATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct trace_rundown_notification_t   
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                
        _m00 uint32_t           version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t           logger_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LoggerId
        _m02 uint32_t           flags;      //{ +0x0008    +0x0010    +0x0010    +0x0010    } | .Flags
                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                
        _m03 struct nt::ejob_t* silo;       //{ +0x0008    +0x0008    +0x0008    } | .Silo
                                          
        SDK_MAGIC_PROPERTIES( "_WMI_TRACE_RUNDOWN_NOTIFICATION.$", 0x18, true, 0x61fa3b5c92b55013 );          
        SDK_DYNAMIC_SIZE( trace_rundown_notification_t );          
    };                                    
};
#include "magic/trace_rundown_notification_t.end.hpp"
