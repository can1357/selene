#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/io_cache_stats_t.start.hpp"
namespace mi
{
    // [struct _MI_IO_CACHE_STATS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_cache_stats_t                           
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t unmapped_cache_flush;             //{ +0x0010    +0x0010    +0x0000    +0x0010    } | .UnmappedCacheFlush
        _m01 uint32_t unmapped_cache_conflict;          //{ +0x0018    +0x0018    +0x0004    +0x0018    } | .UnmappedCacheConflict
        _m02 uint32_t permanent_io_attribute_conflict;  //{ +0x001c    +0x001c    +0x0008    +0x001c    } | .PermanentIoAttributeConflict
        _m03 uint32_t permanent_io_node_conflict;       //{ +0x0020    +0x0020    +0x000c    +0x0020    } | .PermanentIoNodeConflict
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                
        //                                            
        _m04 uint64_t unused_blocks;                    //{ +0x0000    +0x0000    +0x0000    } | .UnusedBlocks
        _m05 uint32_t active_cache_match;               //{ +0x0008    +0x0008    +0x0008    } | .ActiveCacheMatch
        _m06 uint32_t active_cache_override;            //{ +0x000c    +0x000c    +0x000c    } | .ActiveCacheOverride
        _m07 uint32_t unmapped_cache_match;             //{ +0x0014    +0x0014    +0x0014    } | .UnmappedCacheMatch
                                                      
        SDK_MAGIC_PROPERTIES( "_MI_IO_CACHE_STATS.$", 0x28, true, 0x6c746b76d9bbd5c8 );                                
        SDK_DYNAMIC_SIZE( io_cache_stats_t );                                
    };                                                
};
#include "magic/io_cache_stats_t.end.hpp"
