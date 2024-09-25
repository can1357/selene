#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/queryresourceinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_QUERYRESOURCEINFO]
    // => WDK 10 (NV)
    //
    struct queryresourceinfo_t                          
    {                                                   
        // WDK 10                                       
        //                                              
        _m00 uint32_t h_device;                           //{ +0x0000    } | .hDevice
        _m01 uint32_t h_global_share;                     //{ +0x0004    } | .hGlobalShare
        _m02 void*    p_private_runtime_data;             //{ +0x0008    } | .pPrivateRuntimeData
        _m03 uint32_t private_runtime_data_size;          //{ +0x0010    } | .PrivateRuntimeDataSize
        _m04 uint32_t total_private_driver_data_size;     //{ +0x0014    } | .TotalPrivateDriverDataSize
        _m05 uint32_t resource_private_driver_data_size;  //{ +0x0018    } | .ResourcePrivateDriverDataSize
        _m06 uint32_t num_allocations;                    //{ +0x001c    } | .NumAllocations
                                                        
        SDK_NONVOL_PROPERTIES( "_D3DKMT_QUERYRESOURCEINFO.$", 0x0, false, 0x8ca0aa24902650a7 );                                  
        SDK_FIXED_SIZE( queryresourceinfo_t, 0x20 );                                  
    };                                                  
};
#include "magic/queryresourceinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::queryresourceinfo_t, 0x20 );
