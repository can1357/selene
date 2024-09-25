#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_tracker_big_pages_t.start.hpp"
namespace nt
{
    struct eprocess_t;

    // [struct _POOL_TRACKER_BIG_PAGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_tracker_big_pages_t                 
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 volatile uint64_t      va;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Va
        _m01 uint32_t               key;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Key
        _m02 uint8_t                pattern;          //{ +0x000c@0  +0x000c@0  +0x000c@0  +0x000c@0  } | .Pattern
        _m03 uint12_t               pool_type;        //{ +0x000c@8  +0x000c@8  +0x000c@8  +0x000c@8  } | .PoolType
        _m04 uint12_t               slush_size;       //{ +0x000c@20 +0x000c@20 +0x000c@20 +0x000c@20 } | .SlushSize
        _m05 uint64_t               number_of_bytes;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumberOfBytes
                                                    
        // Windows 11                               
        //                                          
        _m06 struct nt::eprocess_t* process_billed;   //{ +0x0018    } | .ProcessBilled
                                                    
        SDK_MAGIC_PROPERTIES( "_POOL_TRACKER_BIG_PAGES.$", 0x18, true, 0xbb76071d2dea3134 );                
        SDK_DYNAMIC_SIZE( pool_tracker_big_pages_t );                
    };                                              
};
#include "magic/pool_tracker_big_pages_t.end.hpp"
