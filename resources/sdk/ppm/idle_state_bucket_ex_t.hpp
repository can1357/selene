#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/idle_state_bucket_ex_t.start.hpp"
namespace ppm
{
    // [struct PPM_IDLE_STATE_BUCKET_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct idle_state_bucket_ex_t   
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t total_time_us;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalTimeUs
        _m01 uint32_t min_time_us;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MinTimeUs
        _m02 uint32_t max_time_us;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxTimeUs
        _m03 uint32_t count;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Count
                                    
        SDK_MAGIC_PROPERTIES( "PPM_IDLE_STATE_BUCKET_EX.$", 0x18, true, 0x7dc7102a335991aa );              
        SDK_FIXED_SIZE( idle_state_bucket_ex_t, 0x18 );              
    };                              
};
#include "magic/idle_state_bucket_ex_t.end.hpp"
SDK_VERIFY( struct ppm::idle_state_bucket_ex_t, 0x18 );
