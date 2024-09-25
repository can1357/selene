#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/dirty_page_statistics_t.hpp"

#include "magic/external_cache_info_t.start.hpp"
namespace cc
{
    // [struct _CC_EXTERNAL_CACHE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct external_cache_info_t                                                   
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                      
        //                                                                         
        _m00 sdk::function<void(void*, uint64_t, uint32_t)>* callback;               //{ +0x0000    +0x0000    +0x0000    } | .Callback
        _m01 struct nt::dirty_page_statistics_t              dirty_page_statistics;  //{ +0x0008    +0x0008    +0x0008    } | .DirtyPageStatistics
        _m02 nt::list_entry_t                                links;                  //{ +0x0020    +0x0020    +0x0020    } | .Links
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CC_EXTERNAL_CACHE_INFO.$", 0x30, true, 0x8a8bbf688beb940b );                      
        SDK_FIXED_SIZE( external_cache_info_t, 0x30 );                             
    };                                                                             
};
#include "magic/external_cache_info_t.end.hpp"
SDK_VERIFY( struct cc::external_cache_info_t, 0x30 );
