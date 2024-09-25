#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extent_read_cache_info_buffer_t.start.hpp"
namespace win
{
    // [struct _EXTENT_READ_CACHE_INFO_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct extent_read_cache_info_buffer_t
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 int64_t allocated_cache;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AllocatedCache
        _m01 int64_t populated_cache;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PopulatedCache
        _m02 int64_t in_error_cache;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InErrorCache
                                          
        SDK_NONVOL_PROPERTIES( "_EXTENT_READ_CACHE_INFO_BUFFER.$", 0x18, true, 0xca3346d890f7a836 );                
        SDK_FIXED_SIZE( extent_read_cache_info_buffer_t, 0x18 );                
    };                                    
};
#include "magic/extent_read_cache_info_buffer_t.end.hpp"
SDK_VERIFY( struct win::extent_read_cache_info_buffer_t, 0x18 );
