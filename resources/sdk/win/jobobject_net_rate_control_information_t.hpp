#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/job_object_net_rate_control_flags_t.hpp"

#include "magic/jobobject_net_rate_control_information_t.start.hpp"
namespace win
{
    // [struct JOBOBJECT_NET_RATE_CONTROL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_net_rate_control_information_t                     
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                              
        _m00 uint64_t                                     max_bandwidth;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxBandwidth
        _m01 enum nt::job_object_net_rate_control_flags_t control_flags;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ControlFlags
        _m02 uint8_t                                      dscp_tag;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .DscpTag
                                                                        
        SDK_MAGIC_PROPERTIES( "JOBOBJECT_NET_RATE_CONTROL_INFORMATION.$", 0x10, true, 0xebbb389637e23c09 );              
        SDK_FIXED_SIZE( jobobject_net_rate_control_information_t, 0x10 );              
    };                                                                  
};
#include "magic/jobobject_net_rate_control_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_net_rate_control_information_t, 0x10 );
