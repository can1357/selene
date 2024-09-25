#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/miniport_rss_parameters_cache_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_RSS_PARAMETERS_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_rss_parameters_cache_t     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                     
        _m00 sdk::array<uint8_t, 916> combined;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Combined
        _m01 sdk::array<uint8_t, 916> oid;       //{ +0x0394    +0x0394    +0x0454    +0x0394    } | .Oid
                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_RSS_PARAMETERS_CACHE.$", 0x728, true, 0x286168021ec5ad61 );         
        SDK_DYNAMIC_SIZE( miniport_rss_parameters_cache_t );         
    };                                         
};
#include "magic/miniport_rss_parameters_cache_t.end.hpp"
