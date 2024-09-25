#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sparse_bitmap_run_t.start.hpp"
namespace rtl
{
    // [struct _RTL_SPARSE_BITMAP_RUN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_bitmap_run_t            
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t starting_index_low;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartingIndexLow
        _m01 uint32_t starting_index_high;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .StartingIndexHigh
        _m02 uint32_t length;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m03 void*    metadata;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Metadata
                                          
        SDK_MAGIC_PROPERTIES( "_RTL_SPARSE_BITMAP_RUN.$", 0x18, true, 0x97399ef489cebf46 );                    
        SDK_FIXED_SIZE( sparse_bitmap_run_t, 0x18 );                    
    };                                    
};
#include "magic/sparse_bitmap_run_t.end.hpp"
SDK_VERIFY( struct rtl::sparse_bitmap_run_t, 0x18 );
