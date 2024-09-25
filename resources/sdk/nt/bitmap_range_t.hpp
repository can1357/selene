#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bitmap_range_t.start.hpp"
namespace nt
{
    // [struct _BITMAP_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bitmap_range_t                      
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 nt::list_entry_t links;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 int64_t          base_page;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BasePage
        _m02 uint32_t         first_dirty_page;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FirstDirtyPage
        _m03 uint32_t         last_dirty_page;   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .LastDirtyPage
        _m04 uint32_t         dirty_pages;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirtyPages
        _m05 uint32_t*        bitmap;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Bitmap
                                               
        SDK_MAGIC_PROPERTIES( "_BITMAP_RANGE.$", 0x30, true, 0x167bcd7ae46d89f5 );                 
        SDK_FIXED_SIZE( bitmap_range_t, 0x30 );                 
    };                                         
};
#include "magic/bitmap_range_t.end.hpp"
SDK_VERIFY( struct nt::bitmap_range_t, 0x30 );
