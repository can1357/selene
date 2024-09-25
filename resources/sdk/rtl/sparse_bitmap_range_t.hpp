#pragma once
#include <sdkgen/support_library.hpp>
#include "bitmap_t.hpp"
#include "../nt/single_list_entry_t.hpp"

#include "magic/sparse_bitmap_range_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SPARSE_BITMAP_RANGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_bitmap_range_t                         
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 uint64_t                       lock;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::bitmap_t           range_bitmap;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RangeBitmap
        _m02 struct nt::single_list_entry_t next;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_SPARSE_BITMAP_RANGE.$", 0x18, true, 0xaa6c7b7801f6b21f );             
        SDK_FIXED_SIZE( sparse_bitmap_range_t, 0x18 );             
    };                                                   
};
#include "magic/sparse_bitmap_range_t.end.hpp"
SDK_VERIFY( struct rtl::sparse_bitmap_range_t, 0x18 );
