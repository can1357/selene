#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/shared_cache_map_list_cursor_t.start.hpp"
namespace nt
{
    // [struct _SHARED_CACHE_MAP_LIST_CURSOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct shared_cache_map_list_cursor_t            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                           
        _m00 nt::list_entry_t shared_cache_map_links;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SharedCacheMapLinks
        _m01 uint32_t         flags;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
                                                     
        SDK_MAGIC_PROPERTIES( "_SHARED_CACHE_MAP_LIST_CURSOR.$", 0x18, true, 0x508f87404274e2a );                       
        SDK_FIXED_SIZE( shared_cache_map_list_cursor_t, 0x18 );                       
    };                                               
};
#include "magic/shared_cache_map_list_cursor_t.end.hpp"
SDK_VERIFY( struct nt::shared_cache_map_list_cursor_t, 0x18 );
