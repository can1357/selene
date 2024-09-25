#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"

#include "magic/ipt_configuration_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_IPT_CONFIGURATION_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ipt_configuration_information_t                                
    {                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                
        _m00 enum etwi::information_class_t event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 uint64_t                       trace_handle;                   //{ +0x0008    +0x0008    +0x0008    } | .TraceHandle
        _m02 uint64_t                       configuration_options;          //{ +0x0010    +0x0010    +0x0010    } | .ConfigurationOptions
                                                                          
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_IPT_CONFIGURATION_INFORMATION.$", 0x18, true, 0x2e6516231ebc1107 );                              
        SDK_FIXED_SIZE( ipt_configuration_information_t, 0x18 );                              
    };                                                                    
};
#include "magic/ipt_configuration_information_t.end.hpp"
SDK_VERIFY( struct etwi::ipt_configuration_information_t, 0x18 );
