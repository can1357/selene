#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/user_memory_cache_entry_t.start.hpp"
namespace ntdll
{
    // [struct _USER_MEMORY_CACHE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_memory_cache_entry_t                        
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 union nt::slist_header_t user_blocks;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .UserBlocks
        _m01 volatile uint32_t        available_blocks;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AvailableBlocks
        _m02 volatile uint32_t        minimum_depth;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MinimumDepth
        _m03 volatile uint32_t        cache_shift_threshold;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CacheShiftThreshold
        _m04 volatile uint16_t        allocations;            //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Allocations
        _m05 volatile uint16_t        frees;                  //{ +0x001e    +0x001e    +0x001e    +0x001e    } | .Frees
        _m06 volatile uint16_t        cache_hits;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CacheHits
                                                            
        SDK_MAGIC_PROPERTIES( "_USER_MEMORY_CACHE_ENTRY.$", 0x30, true, 0xeedae161f42df16a );                      
        SDK_FIXED_SIZE( user_memory_cache_entry_t, 0x30 );                      
    };                                                      
};
#include "magic/user_memory_cache_entry_t.end.hpp"
SDK_VERIFY( struct ntdll::user_memory_cache_entry_t, 0x30 );
