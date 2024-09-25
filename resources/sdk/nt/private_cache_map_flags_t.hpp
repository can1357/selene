#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/private_cache_map_flags_t.start.hpp"
namespace nt
{
    // [struct _PRIVATE_CACHE_MAP_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct private_cache_map_flags_t       
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t dont_use;              //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DontUse
        _m01 uint1_t  read_ahead_active;     //{ +0x0000@16 +0x0000@16 +0x0000@16 +0x0000@16 } | .ReadAheadActive
        _m02 uint1_t  read_ahead_enabled;    //{ +0x0000@17 +0x0000@17 +0x0000@17 +0x0000@17 } | .ReadAheadEnabled
        _m03 uint3_t  page_priority;         //{ +0x0000@18 +0x0000@18 +0x0000@18 +0x0000@18 } | .PagePriority
        _m04 uint1_t  pipeline_read_aheads;  //{ +0x0000@21 +0x0000@21 +0x0000@21 +0x0000@21 } | .PipelineReadAheads
        _m05 uint10_t available;             //{ +0x0000@22 +0x0000@22 +0x0000@22 +0x0000@22 } | .Available
                                           
        SDK_MAGIC_PROPERTIES( "_PRIVATE_CACHE_MAP_FLAGS.$", 0x4, true, 0x114a7e8e6d5fc962 );                     
        SDK_FIXED_SIZE( private_cache_map_flags_t, 0x4 );                     
    };                                     
};
#include "magic/private_cache_map_flags_t.end.hpp"
SDK_VERIFY( struct nt::private_cache_map_flags_t, 0x4 );
