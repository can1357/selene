#pragma once
#include <sdkgen/support_library.hpp>
#include "fast_mutex_t.hpp"

namespace rtl { struct splay_links_t; }

#include "magic/tunnel_t.start.hpp"
namespace nt
{
    // [struct TUNNEL]
    // => WDK 10 (NV)
    //
    struct tunnel_t                                 
    {                                               
        // WDK 10                                   
        //                                          
        _m00 struct nt::fast_mutex_t    mutex;        //{ +0x0000    } | .Mutex
        _m01 struct rtl::splay_links_t* cache;        //{ +0x0038    } | .Cache
        _m02 nt::list_entry_t           timer_queue;  //{ +0x0040    } | .TimerQueue
        _m03 uint16_t                   num_entries;  //{ +0x0050    } | .NumEntries
                                                    
        SDK_NONVOL_PROPERTIES( "TUNNEL.$", 0x0, false, 0x6a1b77d08a727fac );            
        SDK_FIXED_SIZE( tunnel_t, 0x58 );            
    };                                              
};
#include "magic/tunnel_t.end.hpp"
SDK_VERIFY( struct nt::tunnel_t, 0x58 );
