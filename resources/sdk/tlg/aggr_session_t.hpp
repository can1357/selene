#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"
#include "agg_internal_stats_t.hpp"
#include "../win/event_entry_lookup_table_t.hpp"

namespace nt { struct event_filter_descriptor_t; }
namespace nt { struct guid_t;                    }
namespace tp { struct timer_t;                   }

#include "magic/aggr_session_t.start.hpp"
namespace tlg
{
    struct provider_t;
    struct aggr_session_t;

    // [struct TLG_AGGR_SESSION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct aggr_session_t                                                  
    {                                                                      
        using p_enable_callback_t = sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*;                       
                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 struct win::event_entry_lookup_table_t tlg_hash_table;          //{ +0x0000    +0x0000    +0x0000    } | .TlgHashTable
        _m01 struct rtl::srwlock_t                  shared_lock;             //{ +0x0108    +0x0108    +0x0108    } | .SharedLock
        _m02 struct tlg::agg_internal_stats_t       internal_stats;          //{ +0x0110    +0x0110    +0x0110    } | .InternalStats
        _m03 p_enable_callback_t                    p_enable_callback;       //{ +0x0138    +0x0138    +0x0138    } | .pEnableCallback
        _m04 void*                                  p_callback_context;      //{ +0x0140    +0x0140    +0x0140    } | .pCallbackContext
        _m05 const struct tlg::provider_t*          h_provider;              //{ +0x0148    +0x0148    +0x0148    } | .hProvider
        _m06 struct tlg::aggr_session_t*            next_session;            //{ +0x0150    +0x0150    +0x0150    } | .NextSession
        _m07 struct tp::timer_t*                    timer;                   //{ +0x0158    +0x0158    +0x0158    } | .Timer
        _m08 uint32_t                               flush_period_ms;         //{ +0x0160    +0x0160    +0x0160    } | .FlushPeriod_ms
        _m09 uint8_t                                complete_flush_pending;  //{ +0x0164    +0x0164    +0x0164    } | .CompleteFlushPending
                                                                           
        SDK_MAGIC_PROPERTIES( "TLG_AGGR_SESSION.$", 0x168, true, 0x8ebf4bd984aeee00 );                       
        SDK_FIXED_SIZE( aggr_session_t, 0x168 );                           
    };                                                                     
};
#include "magic/aggr_session_t.end.hpp"
SDK_VERIFY( struct tlg::aggr_session_t, 0x168 );
