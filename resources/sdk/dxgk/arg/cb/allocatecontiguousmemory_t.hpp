#pragma once
#include <sdkgen/support_library.hpp>
#include "../../memory_caching_type_t.hpp"

#include "magic/allocatecontiguousmemory_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_ALLOCATECONTIGUOUSMEMORY]
    // => WDK 10 (NV)
    //
    struct allocatecontiguousmemory_t                                    
    {                                                                    
        // WDK 10                                                        
        //                                                               
        _m00 uint64_t                         number_of_bytes;             //{ +0x0000    } | .NumberOfBytes
        _m01 int64_t                          lowest_acceptable_address;   //{ +0x0008    } | .LowestAcceptableAddress
        _m02 int64_t                          highest_acceptable_address;  //{ +0x0010    } | .HighestAcceptableAddress
        _m03 int64_t                          boundary_address_multiple;   //{ +0x0018    } | .BoundaryAddressMultiple
        _m04 enum dxgk::memory_caching_type_t cache_type;                  //{ +0x0020    } | .CacheType
        _m05 void*                            h_memory_handle;             //{ +0x0028    } | .hMemoryHandle
        _m06 void*                            p_memory;                    //{ +0x0030    } | .pMemory
                                                                         
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_ALLOCATECONTIGUOUSMEMORY.$", 0x0, false, 0x7eddcc18d3c24126 );                           
        SDK_FIXED_SIZE( allocatecontiguousmemory_t, 0x38 );                           
    };                                                                   
};
#include "magic/allocatecontiguousmemory_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::allocatecontiguousmemory_t, 0x38 );
