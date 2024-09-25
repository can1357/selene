#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/performance_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PERFORMANCE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct performance_information_t                                      
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 int64_t                        logfile_bytes_written;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LogfileBytesWritten
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PERFORMANCE_INFORMATION.$", 0x10, true, 0x81321e406ec9aecd );                              
        SDK_FIXED_SIZE( performance_information_t, 0x10 );                              
    };                                                                    
};
#include "magic/performance_information_t.end.hpp"
SDK_VERIFY( struct etwi::performance_information_t, 0x10 );
