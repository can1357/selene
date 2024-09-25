#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/named_pipe_create_parameters_t.start.hpp"
namespace nt
{
    // [struct _NAMED_PIPE_CREATE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct named_pipe_create_parameters_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t named_pipe_type;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NamedPipeType
        _m01 uint32_t read_mode;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReadMode
        _m02 uint32_t completion_mode;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CompletionMode
        _m03 uint32_t maximum_instances;   //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .MaximumInstances
        _m04 uint32_t inbound_quota;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InboundQuota
        _m05 uint32_t outbound_quota;      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .OutboundQuota
        _m06 int64_t  default_timeout;     //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .DefaultTimeout
        _m07 uint8_t  timeout_specified;   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .TimeoutSpecified
                                         
        SDK_NONVOL_PROPERTIES( "_NAMED_PIPE_CREATE_PARAMETERS.$", 0x28, true, 0xbd9a2138b56e721f );                  
        SDK_FIXED_SIZE( named_pipe_create_parameters_t, 0x28 );                  
    };                                   
};
#include "magic/named_pipe_create_parameters_t.end.hpp"
SDK_VERIFY( struct nt::named_pipe_create_parameters_t, 0x28 );
