#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/async_lazywrite_thread_stats_t.start.hpp"
namespace nt
{
    // [struct _ASYNC_LAZYWRITE_THREAD_STATS]
    // => Windows 11
    //
    struct async_lazywrite_thread_stats_t          
    {                                              
        // Windows 11                              
        //                                         
        _m00 sdk::array<uint32_t, 11> current_load;  //{ +0x0000    } | .CurrentLoad
                                                   
        SDK_MAGIC_PROPERTIES( "_ASYNC_LAZYWRITE_THREAD_STATS.$", 0x0, false, 0xb41b19bff329c677 );             
        SDK_FIXED_SIZE( async_lazywrite_thread_stats_t, 0x2c );             
    };                                             
};
#include "magic/async_lazywrite_thread_stats_t.end.hpp"
SDK_VERIFY( struct nt::async_lazywrite_thread_stats_t, 0x2c );
