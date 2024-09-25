#pragma once
#include <sdkgen/support_library.hpp>
#include "../openallocationflags_t.hpp"

namespace dxgk { struct openallocationinfo_t; }

#include "magic/openallocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_OPENALLOCATION]
    // => WDK 10 (NV)
    //
    struct openallocation_t                                           
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                           num_allocations;        //{ +0x0000    } | .NumAllocations
        _m01 struct dxgk::openallocationinfo_t* p_open_allocation;      //{ +0x0008    } | .pOpenAllocation
        _m02 void*                              p_private_driver_data;  //{ +0x0010    } | .pPrivateDriverData
        _m03 uint32_t                           private_driver_size;    //{ +0x0018    } | .PrivateDriverSize
        _m04 struct dxgk::openallocationflags_t flags;                  //{ +0x001c    } | .Flags
        _m05 uint32_t                           subresource_index;      //{ +0x0020    } | .SubresourceIndex
        _m06 uint64_t                           subresource_offset;     //{ +0x0028    } | .SubresourceOffset
        _m07 uint32_t                           pitch;                  //{ +0x0030    } | .Pitch
                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKARG_OPENALLOCATION.$", 0x0, false, 0x74cc06d2c37698e5 );                      
        SDK_FIXED_SIZE( openallocation_t, 0x38 );                      
    };                                                                
};
#include "magic/openallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::openallocation_t, 0x38 );
