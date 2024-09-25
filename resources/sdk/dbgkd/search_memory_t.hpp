#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/search_memory_t.start.hpp"
namespace dbgkd
{
    // [struct _DBGKD_SEARCH_MEMORY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct search_memory_t           
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint64_t search_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SearchAddress
        _m01 uint64_t found_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FoundAddress
        _m02 uint64_t search_length;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SearchLength
        _m03 uint32_t pattern_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PatternLength
                                     
        SDK_MAGIC_PROPERTIES( "_DBGKD_SEARCH_MEMORY.$", 0x18, true, 0x5a022e5939db15ff );               
        SDK_FIXED_SIZE( search_memory_t, 0x18 );               
    };                               
};
#include "magic/search_memory_t.end.hpp"
SDK_VERIFY( struct dbgkd::search_memory_t, 0x18 );
