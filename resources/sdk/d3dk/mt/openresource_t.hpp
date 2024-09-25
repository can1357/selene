#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi { struct openallocationinfo2_t; }
namespace d3d::ddi { struct openallocationinfo_t;  }

#include "magic/openresource_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENRESOURCE]
    // => WDK 10 (NV)
    //
    struct openresource_t                                                                  
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 uint32_t                                h_device;                               //{ +0x0000    } | .hDevice
        _m01 uint32_t                                h_global_share;                         //{ +0x0004    } | .hGlobalShare
        _m02 uint32_t                                num_allocations;                        //{ +0x0008    } | .NumAllocations
        _m03 struct d3d::ddi::openallocationinfo_t*  p_open_allocation_info;                 //{ +0x0010    } | .pOpenAllocationInfo
        _m04 struct d3d::ddi::openallocationinfo2_t* p_open_allocation_info2;                //{ +0x0010    } | .pOpenAllocationInfo2
        _m05 void*                                   p_private_runtime_data;                 //{ +0x0018    } | .pPrivateRuntimeData
        _m06 uint32_t                                private_runtime_data_size;              //{ +0x0020    } | .PrivateRuntimeDataSize
        _m07 void*                                   p_resource_private_driver_data;         //{ +0x0028    } | .pResourcePrivateDriverData
        _m08 uint32_t                                resource_private_driver_data_size;      //{ +0x0030    } | .ResourcePrivateDriverDataSize
        _m09 void*                                   p_total_private_driver_data_buffer;     //{ +0x0038    } | .pTotalPrivateDriverDataBuffer
        _m10 uint32_t                                total_private_driver_data_buffer_size;  //{ +0x0040    } | .TotalPrivateDriverDataBufferSize
        _m11 uint32_t                                h_resource;                             //{ +0x0044    } | .hResource
                                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENRESOURCE.$", 0x0, false, 0x4aba18a597752aa4 );                                      
        SDK_FIXED_SIZE( openresource_t, 0x48 );                                            
    };                                                                                     
};
#include "magic/openresource_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openresource_t, 0x48 );
