#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/user_process_extended_parameters_t.start.hpp"
namespace rtl
{
    // [struct _RTL_USER_PROCESS_EXTENDED_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_process_extended_parameters_t     
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint16_t version;                      //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t node_number;                  //{ +0x0002    +0x0002    +0x0002    } | .NodeNumber
        _m02 void*    process_security_descriptor;  //{ +0x0008    +0x0008    +0x0008    } | .ProcessSecurityDescriptor
        _m03 void*    thread_security_descriptor;   //{ +0x0010    +0x0010    +0x0010    } | .ThreadSecurityDescriptor
        _m04 void*    parent_process;               //{ +0x0018    +0x0018    +0x0018    } | .ParentProcess
        _m05 void*    debug_port;                   //{ +0x0020    +0x0020    +0x0020    } | .DebugPort
        _m06 void*    token_handle;                 //{ +0x0028    +0x0028    +0x0028    } | .TokenHandle
        _m07 void*    job_handle;                   //{ +0x0030    +0x0030    +0x0030    } | .JobHandle
                                                  
        SDK_MAGIC_PROPERTIES( "_RTL_USER_PROCESS_EXTENDED_PARAMETERS.$", 0x38, true, 0x2a298bb9a175b8da );                            
        SDK_FIXED_SIZE( user_process_extended_parameters_t, 0x38 );                            
    };                                            
};
#include "magic/user_process_extended_parameters_t.end.hpp"
SDK_VERIFY( struct rtl::user_process_extended_parameters_t, 0x38 );
