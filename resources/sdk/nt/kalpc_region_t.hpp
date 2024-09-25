#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kalpc_region_t.start.hpp"
namespace nt
{
    struct kalpc_view_t;
    struct kalpc_section_t;

    // [struct _KALPC_REGION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kalpc_region_t                                  
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m00 nt::list_entry_t            region_list_entry;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RegionListEntry
        _m01 struct nt::kalpc_section_t* section;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Section
        _m02 uint64_t                    offset;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Offset
        _m03 uint64_t                    size;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Size
        _m04 uint64_t                    view_size;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ViewSize
        _m05 uint1_t                     secure;             //{ +0x0030@0  +0x0030@0  +0x0030@0  +0x0030@0  } | .Secure
        _m06 uint32_t                    number_of_views;    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .NumberOfViews
        _m07 nt::list_entry_t            view_list_head;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ViewListHead
        _m08 struct nt::kalpc_view_t*    read_only_view;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ReadOnlyView
        _m09 struct nt::kalpc_view_t*    read_write_view;    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ReadWriteView
                                                           
        SDK_MAGIC_PROPERTIES( "_KALPC_REGION.$", 0x58, true, 0x5c31e4f36830f3b6 );                  
        SDK_FIXED_SIZE( kalpc_region_t, 0x58 );                  
    };                                                     
};
#include "magic/kalpc_region_t.end.hpp"
SDK_VERIFY( struct nt::kalpc_region_t, 0x58 );
