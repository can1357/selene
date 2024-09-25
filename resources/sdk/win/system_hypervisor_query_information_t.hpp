#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_hypervisor_query_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HYPERVISOR_QUERY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hypervisor_query_information_t   
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint8_t  hypervisor_connected;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .HypervisorConnected
        _m01 uint8_t  hypervisor_debugging_enabled;  //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .HypervisorDebuggingEnabled
        _m02 uint8_t  hypervisor_present;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HypervisorPresent
        _m03 uint64_t enabled_enlightenments;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EnabledEnlightenments
                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m04 uint8_t  hypervisor_scheduler_type;     //{ +0x0003    +0x0003    +0x0003    } | .HypervisorSchedulerType
                                                   
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HYPERVISOR_QUERY_INFORMATION.$", 0x10, true, 0xf4533779516582f2 );                             
        SDK_FIXED_SIZE( system_hypervisor_query_information_t, 0x10 );                             
    };                                             
};
#include "magic/system_hypervisor_query_information_t.end.hpp"
SDK_VERIFY( struct win::system_hypervisor_query_information_t, 0x10 );
