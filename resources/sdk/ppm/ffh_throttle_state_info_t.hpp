#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ffh_throttle_state_info_t.start.hpp"
namespace ppm
{
    // [struct _PPM_FFH_THROTTLE_STATE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ffh_throttle_state_info_t      
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint8_t  enable_logging;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EnableLogging
        _m01 uint32_t mismatch_count;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MismatchCount
        _m02 uint8_t  initialized;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Initialized
        _m03 uint64_t last_value;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .LastValue
        _m04 int64_t  last_log_tick_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastLogTickCount
                                          
        SDK_MAGIC_PROPERTIES( "_PPM_FFH_THROTTLE_STATE_INFO.$", 0x20, true, 0x4047f4c655bd02e0 );                    
        SDK_FIXED_SIZE( ffh_throttle_state_info_t, 0x20 );                    
    };                                    
};
#include "magic/ffh_throttle_state_info_t.end.hpp"
SDK_VERIFY( struct ppm::ffh_throttle_state_info_t, 0x20 );
