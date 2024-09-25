#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buildpagingbuffer_updatecontextallocation_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_updatecontextallocation_t
    {                                                 
        // WDK 10                              
        //                                     
        _m00 uint64_t context_allocation;               //{ +0x0000    } | .ContextAllocation
        _m01 uint64_t context_allocation_size;          //{ +0x0008    } | .ContextAllocationSize
        _m02 void*    p_driver_private_data;            //{ +0x0010    } | .pDriverPrivateData
        _m03 uint32_t driver_private_data_size;         //{ +0x0018    } | .DriverPrivateDataSize
                                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_UPDATECONTEXTALLOCATION.$", 0x0, false, 0xcbbf632db7989222 );                         
        SDK_FIXED_SIZE( buildpagingbuffer_updatecontextallocation_t, 0x20 );                         
    };                                                
};
#include "magic/buildpagingbuffer_updatecontextallocation_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_updatecontextallocation_t, 0x20 );
