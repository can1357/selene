#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memoryrange_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MEMORYRANGE]
    // => WDK 10 (NV)
    //
    struct memoryrange_t             
    {                                
        // WDK 10                    
        //                           
        _m00 uint64_t segment_offset;  //{ +0x0000    } | .SegmentOffset
        _m01 uint64_t size_in_bytes;   //{ +0x0008    } | .SizeInBytes
                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_MEMORYRANGE.$", 0x0, false, 0x598ea3642e9af0ba );               
        SDK_FIXED_SIZE( memoryrange_t, 0x10 );               
    };                               
};
#include "magic/memoryrange_t.end.hpp"
SDK_VERIFY( struct dxgk::memoryrange_t, 0x10 );
