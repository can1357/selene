#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_sampled_profile_config_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_SAMPLED_PROFILE_CONFIG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_sampled_profile_config_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t source;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Source
        _m01 uint32_t new_interval;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NewInterval
        _m02 uint32_t old_interval;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OldInterval
                                            
        SDK_MAGIC_PROPERTIES( "_PERFINFO_SAMPLED_PROFILE_CONFIG.$", 0xc, true, 0x24bc081fc8258d8c );             
        SDK_FIXED_SIZE( perfinfo_sampled_profile_config_t, 0xc );             
    };                                      
};
#include "magic/perfinfo_sampled_profile_config_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_sampled_profile_config_t, 0xc );
