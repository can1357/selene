#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hw_trace_ext_interface_t.start.hpp"
namespace etw
{
    // [struct _ETW_HW_TRACE_EXT_INTERFACE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hw_trace_ext_interface_t                                                        
    {                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                 
        _m00 sdk::function<int32_t(uint64_t, void**)>* start_processor_trace_on_each_core;   //{ +0x0000    +0x0000    +0x0000    } | .StartProcessorTraceOnEachCore
        _m01 sdk::function<int32_t(void*)>*            stop_processor_trace_on_each_core;    //{ +0x0008    +0x0008    +0x0008    } | .StopProcessorTraceOnEachCore
        _m02 sdk::function<int32_t(void*, void*)>*     log_processor_trace_on_current_core;  //{ +0x0010    +0x0010    +0x0010    } | .LogProcessorTraceOnCurrentCore
                                                                                           
        SDK_MAGIC_PROPERTIES( "_ETW_HW_TRACE_EXT_INTERFACE.$", 0x18, true, 0x49e740b05aed475c );                                    
        SDK_FIXED_SIZE( hw_trace_ext_interface_t, 0x18 );                                    
    };                                                                                     
};
#include "magic/hw_trace_ext_interface_t.end.hpp"
SDK_VERIFY( struct etw::hw_trace_ext_interface_t, 0x18 );
