#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/version_info_t.start.hpp"
namespace trace
{
    // [struct _TRACE_VERSION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct version_info_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t etw_trace_processing_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EtwTraceProcessingVersion
                                                   
        SDK_MAGIC_PROPERTIES( "_TRACE_VERSION_INFO.$", 0x8, true, 0xdd38decccfa80d2 );                             
        SDK_FIXED_SIZE( version_info_t, 0x8 );                             
    };                                             
};
#include "magic/version_info_t.end.hpp"
SDK_VERIFY( struct trace::version_info_t, 0x8 );
