#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/async_read_thread_stats_t.start.hpp"
namespace nt
{
    // [struct _ASYNC_READ_THREAD_STATS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_read_thread_stats_t                
    {                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                          
        _m00 sdk::array<uint32_t, 101> current_load;  //{ +0x0000    +0x0000    +0x0000    } | .CurrentLoad
                                                    
        SDK_MAGIC_PROPERTIES( "_ASYNC_READ_THREAD_STATS.$", 0x194, true, 0xb0cbebada4180e8 );             
        SDK_FIXED_SIZE( async_read_thread_stats_t, 0x194 );             
    };                                              
};
#include "magic/async_read_thread_stats_t.end.hpp"
SDK_VERIFY( struct nt::async_read_thread_stats_t, 0x194 );
