#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_pipe_local_information_t.start.hpp"
namespace win
{
    // [struct _FILE_PIPE_LOCAL_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_pipe_local_information_t       
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t named_pipe_type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NamedPipeType
        _m01 uint32_t named_pipe_configuration;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NamedPipeConfiguration
        _m02 uint32_t maximum_instances;         //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumInstances
        _m03 uint32_t current_instances;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .CurrentInstances
        _m04 uint32_t inbound_quota;             //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InboundQuota
        _m05 uint32_t read_data_available;       //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ReadDataAvailable
        _m06 uint32_t outbound_quota;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .OutboundQuota
        _m07 uint32_t write_quota_available;     //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .WriteQuotaAvailable
        _m08 uint32_t named_pipe_state;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NamedPipeState
        _m09 uint32_t named_pipe_end;            //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .NamedPipeEnd
                                               
        SDK_NONVOL_PROPERTIES( "_FILE_PIPE_LOCAL_INFORMATION.$", 0x28, true, 0x202248ab4f94a5be );                         
        SDK_FIXED_SIZE( file_pipe_local_information_t, 0x28 );                         
    };                                         
};
#include "magic/file_pipe_local_information_t.end.hpp"
SDK_VERIFY( struct win::file_pipe_local_information_t, 0x28 );
