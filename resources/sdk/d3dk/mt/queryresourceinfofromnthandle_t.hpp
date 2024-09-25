#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryresourceinfofromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct queryresourceinfofromnthandle_t              
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t h_device;                           //{ +0x0000    } | .hDevice
        _m01 void*    h_nt_handle;                        //{ +0x0008    } | .hNtHandle
        _m02 void*    p_private_runtime_data;             //{ +0x0010    } | .pPrivateRuntimeData
        _m03 uint32_t private_runtime_data_size;          //{ +0x0018    } | .PrivateRuntimeDataSize
        _m04 uint32_t total_private_driver_data_size;     //{ +0x001c    } | .TotalPrivateDriverDataSize
        _m05 uint32_t resource_private_driver_data_size;  //{ +0x0020    } | .ResourcePrivateDriverDataSize
        _m06 uint32_t num_allocations;                    //{ +0x0024    } | .NumAllocations
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYRESOURCEINFOFROMNTHANDLE.$", 0x0, false, 0x4a43a43ab129b62c );                                  
        SDK_FIXED_SIZE( queryresourceinfofromnthandle_t, 0x28 );                                  
    };                                                  
};
#include "magic/queryresourceinfofromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryresourceinfofromnthandle_t, 0x28 );
