#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_wmi_querytraceinfo_args_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_WMI_QUERYTRACEINFO_ARGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_wmi_querytraceinfo_args_t       
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                      
        _m00 uint32_t  trace_information_class;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TraceInformationClass
        _m01 void*     trace_information;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TraceInformation
        _m02 uint32_t  trace_information_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TraceInformationLength
        _m03 uint32_t* required_length;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RequiredLength
        _m04 void*     buffer;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Buffer
        _m05 uint32_t  result;                    //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .result
                                                
        SDK_MAGIC_PROPERTIES( "_STOR_WMI_QUERYTRACEINFO_ARGS.$", 0x30, true, 0x169c52e959a1c9bf );                         
        SDK_FIXED_SIZE( stor_wmi_querytraceinfo_args_t, 0x30 );                         
    };                                          
};
#include "magic/stor_wmi_querytraceinfo_args_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_wmi_querytraceinfo_args_t, 0x30 );
