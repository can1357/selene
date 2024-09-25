#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/paging_file_space_bitmaps_t.start.hpp"
namespace mi
{
    struct paging_file_space_bitmaps_t;

    // [struct _MI_PAGING_FILE_SPACE_BITMAPS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct paging_file_space_bitmaps_t                                  
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                              
        _m00 uint32_t                                ref_count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 struct mi::paging_file_space_bitmaps_t* anchor;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Anchor
        _m02 struct rtl::bitmap_t                    allocation_bitmap;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocationBitmap
        _m03 struct rtl::bitmap_t                    reservation_bitmap;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReservationBitmap
        _m04 struct rtl::bitmap_t                    evicted_bitmap;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EvictedBitmap
                                                                        
        SDK_MAGIC_PROPERTIES( "_MI_PAGING_FILE_SPACE_BITMAPS.$", 0x28, true, 0x5b9b5150f3858d28 );                   
        SDK_FIXED_SIZE( paging_file_space_bitmaps_t, 0x28 );                   
    };                                                                  
};
#include "magic/paging_file_space_bitmaps_t.end.hpp"
SDK_VERIFY( struct mi::paging_file_space_bitmaps_t, 0x28 );
