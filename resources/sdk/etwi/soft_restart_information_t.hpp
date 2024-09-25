#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/soft_restart_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_SOFT_RESTART_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct soft_restart_information_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 uint8_t                        persist_trace_buffers;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PersistTraceBuffers
        _m03 sdk::array<wchar_t, 1>         file_name;                      //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .FileName
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_SOFT_RESTART_INFORMATION.$", 0x18, true, 0x109bc5c859421b5b );                              
        SDK_FIXED_SIZE( soft_restart_information_t, 0x18 );                              
    };                                                                    
};
#include "magic/soft_restart_information_t.end.hpp"
SDK_VERIFY( struct etwi::soft_restart_information_t, 0x18 );
