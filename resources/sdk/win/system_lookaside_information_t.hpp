#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_lookaside_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_LOOKASIDE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_lookaside_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint16_t current_depth;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CurrentDepth
        _m01 uint16_t maximum_depth;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MaximumDepth
        _m02 uint32_t total_allocates;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalAllocates
        _m03 uint32_t allocate_misses;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocateMisses
        _m04 uint32_t total_frees;         //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TotalFrees
        _m05 uint32_t free_misses;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FreeMisses
        _m06 uint32_t type;                //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Type
        _m07 uint32_t tag;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Tag
        _m08 uint32_t size;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Size
                                         
        SDK_MAGIC_PROPERTIES( "_SYSTEM_LOOKASIDE_INFORMATION.$", 0x20, true, 0xe2fad22a119ccc96 );                
        SDK_FIXED_SIZE( system_lookaside_information_t, 0x20 );                
    };                                   
};
#include "magic/system_lookaside_information_t.end.hpp"
SDK_VERIFY( struct win::system_lookaside_information_t, 0x20 );
