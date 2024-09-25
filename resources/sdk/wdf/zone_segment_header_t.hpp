#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/single_list_entry_t.hpp"

#include "magic/zone_segment_header_t.start.hpp"
namespace wdf
{
    // [struct _ZONE_SEGMENT_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct zone_segment_header_t                         
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 struct nt::single_list_entry_t segment_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SegmentList
                                                         
        SDK_NONVOL_PROPERTIES( "_ZONE_SEGMENT_HEADER.$", 0x10, true, 0x4fb9cddf77145ed3 );             
        SDK_FIXED_SIZE( zone_segment_header_t, 0x10 );             
    };                                                   
};
#include "magic/zone_segment_header_t.end.hpp"
SDK_VERIFY( struct wdf::zone_segment_header_t, 0x10 );
