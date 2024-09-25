#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct _NDIS_RSS_DPC_WORKER_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rss_dpc_worker_context_t
    {                              
                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_RSS_DPC_WORKER_CONTEXT.$", 0x0, true, 0x71821b06894288fc );
        SDK_FIXED_SIZE( rss_dpc_worker_context_t, 0x0 );
    };                             
};
SDK_VERIFY( struct ndis::rss_dpc_worker_context_t, 0x0 );
