#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/createcontextallocationflags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_CREATECONTEXTALLOCATIONFLAGS]
    // => WDK 10 (NV)
    //
    struct createcontextallocationflags_t     
    {                                         
        // WDK 10                             
        //                                    
        _m00 uint1_t  shared_across_contexts;   //{ +0x0000@0  } | .SharedAcrossContexts
        _m01 uint1_t  map_gpu_virtual_address;  //{ +0x0000@1  } | .MapGpuVirtualAddress
        _m02 uint32_t value;                    //{ +0x0000    } | .Value
                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_CREATECONTEXTALLOCATIONFLAGS.$", 0x0, false, 0x78ad7e44a47b4e3 );                        
        SDK_FIXED_SIZE( createcontextallocationflags_t, 0x4 );                        
    };                                        
};
#include "magic/createcontextallocationflags_t.end.hpp"
SDK_VERIFY( struct dxgk::createcontextallocationflags_t, 0x4 );
