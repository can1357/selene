#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sparse_overallocate_data_t.start.hpp"
namespace win
{
    // [struct _SPARSE_OVERALLOCATE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sparse_overallocate_data_t           
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t sparse_over_allocate_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SparseOverAllocateSize
                                                
        SDK_MAGIC_PROPERTIES( "_SPARSE_OVERALLOCATE_DATA.$", 0x4, true, 0x721d5dbf2d10c5c4 );                          
        SDK_FIXED_SIZE( sparse_overallocate_data_t, 0x4 );                          
    };                                          
};
#include "magic/sparse_overallocate_data_t.end.hpp"
SDK_VERIFY( struct win::sparse_overallocate_data_t, 0x4 );
