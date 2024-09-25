#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_range_t.hpp"

#include "magic/mbcb_t.start.hpp"
namespace nt
{
    // [struct _MBCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mbcb_t                                                 
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                        
        _m00 int16_t                   node_type_code;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NodeTypeCode
        _m01 int16_t                   node_is_in_zone;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .NodeIsInZone
        _m02 uint32_t                  pages_to_write;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PagesToWrite
        _m03 uint32_t                  dirty_pages;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DirtyPages
        _m04 nt::list_entry_t          bitmap_ranges;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BitmapRanges
        _m05 int64_t                   resume_write_page;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ResumeWritePage
        _m06 int64_t                   most_recently_dirtied_page;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MostRecentlyDirtiedPage
        _m07 struct nt::bitmap_range_t bitmap_range1;               //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .BitmapRange1
        _m08 struct nt::bitmap_range_t bitmap_range2;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BitmapRange2
        _m09 struct nt::bitmap_range_t bitmap_range3;               //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .BitmapRange3
                                                                  
        SDK_MAGIC_PROPERTIES( "_MBCB.$", 0xc0, true, 0xdaa8921ea36c366c );                           
        SDK_FIXED_SIZE( mbcb_t, 0xc0 );                           
    };                                                            
};
#include "magic/mbcb_t.end.hpp"
SDK_VERIFY( struct nt::mbcb_t, 0xc0 );
