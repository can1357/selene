#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_executive_resource_config_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_EXECUTIVE_RESOURCE_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_executive_resource_config_t    
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t release_sampling_rate;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ReleaseSamplingRate
        _m01 uint32_t contention_sampling_rate;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ContentionSamplingRate
        _m02 uint32_t number_of_excessive_timeouts;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfExcessiveTimeouts
                                                   
        SDK_MAGIC_PROPERTIES( "_PERFINFO_EXECUTIVE_RESOURCE_CONFIG.$", 0xc, true, 0x1b2d1e3aa49b65b9 );                             
        SDK_FIXED_SIZE( perfinfo_executive_resource_config_t, 0xc );                             
    };                                             
};
#include "magic/perfinfo_executive_resource_config_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_executive_resource_config_t, 0xc );
