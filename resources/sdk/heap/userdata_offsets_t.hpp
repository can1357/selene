#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/userdata_offsets_t.start.hpp"
namespace heap
{
    // [struct _HEAP_USERDATA_OFFSETS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct userdata_offsets_t                 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint16_t first_allocation_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FirstAllocationOffset
        _m01 uint16_t block_stride;             //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .BlockStride
        _m02 uint32_t stride_and_offset;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StrideAndOffset
                                              
        SDK_MAGIC_PROPERTIES( "_HEAP_USERDATA_OFFSETS.$", 0x4, true, 0x516506169937860c );                        
        SDK_FIXED_SIZE( userdata_offsets_t, 0x4 );                        
    };                                        
};
#include "magic/userdata_offsets_t.end.hpp"
SDK_VERIFY( struct heap::userdata_offsets_t, 0x4 );
