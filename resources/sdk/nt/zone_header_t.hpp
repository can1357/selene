#pragma once
#include <sdkgen/support_library.hpp>
#include "single_list_entry_t.hpp"

#include "magic/zone_header_t.start.hpp"
namespace nt
{
    // [struct _ZONE_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct zone_header_t                                       
    {                                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 struct nt::single_list_entry_t free_list;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FreeList
        _m01 struct nt::single_list_entry_t segment_list;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SegmentList
        _m02 uint32_t                       block_size;          //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BlockSize
        _m03 uint32_t                       total_segment_size;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .TotalSegmentSize
                                                               
        SDK_NONVOL_PROPERTIES( "_ZONE_HEADER.$", 0x18, true, 0x2d4a09d12437c5d8 );                   
        SDK_FIXED_SIZE( zone_header_t, 0x18 );                   
    };                                                         
};
#include "magic/zone_header_t.end.hpp"
SDK_VERIFY( struct nt::zone_header_t, 0x18 );
