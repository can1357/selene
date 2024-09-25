#pragma once
#include <sdkgen/support_library.hpp>
#include "csparse_bitmap_t.hpp"

#include "magic/sparse_array_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SPARSE_ARRAY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_array_t                                    
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 uint64_t                     element_count;       //{ +0x0000    +0x0000    +0x0000    } | .ElementCount
        _m01 uint32_t                     element_size_shift;  //{ +0x0008    +0x0008    +0x0008    } | .ElementSizeShift
        _m02 struct rtl::csparse_bitmap_t bitmap;              //{ +0x0010    +0x0010    +0x0010    } | .Bitmap
                                                             
        SDK_MAGIC_PROPERTIES( "_RTL_SPARSE_ARRAY.$", 0x50, true, 0x98d04dc624575b97 );                   
        SDK_FIXED_SIZE( sparse_array_t, 0x50 );                   
    };                                                       
};
#include "magic/sparse_array_t.end.hpp"
SDK_VERIFY( struct rtl::sparse_array_t, 0x50 );
