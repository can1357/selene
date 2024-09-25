#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hview_map_entry_t.start.hpp"
namespace nt
{
    // [struct _HVIEW_MAP_ENTRY]
    // => Windows 10 v1607
    //
    struct hview_map_entry_t       
    {                              
        // Windows 10 v1607             
        //                         
        _m00 void*    view_start;    //{ +0x0000    } | .ViewStart
        _m01 uint1_t  is_pinned;     //{ +0x0000@0  } | .IsPinned
        _m02 void*    bcb;           //{ +0x0008    } | .Bcb
        _m03 uint64_t pinned_pages;  //{ +0x0010    } | .PinnedPages
        _m04 uint32_t size;          //{ +0x0018    } | .Size
                                   
        SDK_MAGIC_PROPERTIES( "_HVIEW_MAP_ENTRY.$", 0x0, false, 0x6db4a76717834edb );             
        SDK_FIXED_SIZE( hview_map_entry_t, 0x20 );             
    };                             
};
#include "magic/hview_map_entry_t.end.hpp"
SDK_VERIFY( struct nt::hview_map_entry_t, 0x20 );
