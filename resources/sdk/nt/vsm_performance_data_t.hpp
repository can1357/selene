#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vsm_performance_data_t.start.hpp"
namespace nt
{
    // [struct _VSM_PERFORMANCE_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vsm_performance_data_t                    
    {                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 sdk::array<uint64_t, 8> launch_vsm_mark;  //{ +0x0000    +0x0000    +0x0000    } | .LaunchVsmMark
                                                     
        SDK_MAGIC_PROPERTIES( "_VSM_PERFORMANCE_DATA.$", 0x40, true, 0x1f3de5be7bb6aa76 );                
        SDK_FIXED_SIZE( vsm_performance_data_t, 0x40 );                
    };                                               
};
#include "magic/vsm_performance_data_t.end.hpp"
SDK_VERIFY( struct nt::vsm_performance_data_t, 0x40 );
