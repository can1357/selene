#pragma once
#include <sdkgen/support_library.hpp>
#include "../createallocationflags_t.hpp"

namespace dxgk { struct allocationinfo_t; }

#include "magic/createallocation_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEALLOCATION]
    // => WDK 10 (NV)
    //
    struct createallocation_t                                              
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 const void*                          p_private_driver_data;     //{ +0x0000    } | .pPrivateDriverData
        _m01 uint32_t                             private_driver_data_size;  //{ +0x0008    } | .PrivateDriverDataSize
        _m02 uint32_t                             num_allocations;           //{ +0x000c    } | .NumAllocations
        _m03 struct dxgk::allocationinfo_t*       p_allocation_info;         //{ +0x0010    } | .pAllocationInfo
        _m04 void*                                h_resource;                //{ +0x0018    } | .hResource
        _m05 struct dxgk::createallocationflags_t flags;                     //{ +0x0020    } | .Flags
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEALLOCATION.$", 0x0, false, 0xbd7e7f7a9b39749 );                         
        SDK_FIXED_SIZE( createallocation_t, 0x28 );                         
    };                                                                     
};
#include "magic/createallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createallocation_t, 0x28 );
