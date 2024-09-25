#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/lookaside_t.start.hpp"
namespace rtl
{
    // [struct _RTL_LOOKASIDE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct lookaside_t                                     
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                 
        _m00 union nt::slist_header_t list_head;             //{ +0x0000    +0x0000    +0x0000    } | .ListHead
        _m01 uint16_t                 depth;                 //{ +0x0010    +0x0010    +0x0010    } | .Depth
        _m02 uint16_t                 maximum_depth;         //{ +0x0012    +0x0012    +0x0012    } | .MaximumDepth
        _m03 uint32_t                 total_allocates;       //{ +0x0014    +0x0014    +0x0014    } | .TotalAllocates
        _m04 uint32_t                 allocate_misses;       //{ +0x0018    +0x0018    +0x0018    } | .AllocateMisses
        _m05 uint32_t                 total_frees;           //{ +0x001c    +0x001c    +0x001c    } | .TotalFrees
        _m06 uint32_t                 free_misses;           //{ +0x0020    +0x0020    +0x0020    } | .FreeMisses
        _m07 uint32_t                 last_total_allocates;  //{ +0x0024    +0x0024    +0x0024    } | .LastTotalAllocates
        _m08 uint32_t                 last_allocate_misses;  //{ +0x0028    +0x0028    +0x0028    } | .LastAllocateMisses
        _m09 uint32_t                 last_total_frees;      //{ +0x002c    +0x002c    +0x002c    } | .LastTotalFrees
                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_LOOKASIDE.$", 0x40, true, 0x8b57f941ee83c2d5 );                     
        SDK_FIXED_SIZE( lookaside_t, 0x40 );                     
    };                                                     
};
#include "magic/lookaside_t.end.hpp"
SDK_VERIFY( struct rtl::lookaside_t, 0x40 );
