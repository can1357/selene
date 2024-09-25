#pragma once
#include <sdkgen/support_library.hpp>
#include "createallocationflags_t.hpp"

namespace d3d::ddi { struct allocationinfo2_t; }
namespace d3d::ddi { struct allocationinfo_t;  }

#include "magic/createallocation_t.start.hpp"
namespace d3dk::mt
{
    struct createstandardallocation_t;

    // [struct _D3DKMT_CREATEALLOCATION]
    // => WDK 10 (NV)
    //
    struct createallocation_t                                                               
    {                                                                                       
        // WDK 10                                                                           
        //                                                                                  
        _m00 uint32_t                                     h_device;                           //{ +0x0000    } | .hDevice
        _m01 uint32_t                                     h_resource;                         //{ +0x0004    } | .hResource
        _m02 uint32_t                                     h_global_share;                     //{ +0x0008    } | .hGlobalShare
        _m03 const void*                                  p_private_runtime_data;             //{ +0x0010    } | .pPrivateRuntimeData
        _m04 uint32_t                                     private_runtime_data_size;          //{ +0x0018    } | .PrivateRuntimeDataSize
        _m05 struct d3dk::mt::createstandardallocation_t* p_standard_allocation;              //{ +0x0020    } | .pStandardAllocation
        _m06 const void*                                  p_private_driver_data;              //{ +0x0020    } | .pPrivateDriverData
        _m07 uint32_t                                     private_driver_data_size;           //{ +0x0028    } | .PrivateDriverDataSize
        _m08 uint32_t                                     num_allocations;                    //{ +0x002c    } | .NumAllocations
        _m09 struct d3d::ddi::allocationinfo_t*           p_allocation_info;                  //{ +0x0030    } | .pAllocationInfo
        _m10 struct d3d::ddi::allocationinfo2_t*          p_allocation_info2;                 //{ +0x0030    } | .pAllocationInfo2
        _m11 struct d3dk::mt::createallocationflags_t     flags;                              //{ +0x0038    } | .Flags
        _m12 void*                                        h_private_runtime_resource_handle;  //{ +0x0040    } | .hPrivateRuntimeResourceHandle
                                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEALLOCATION.$", 0x0, false, 0xe812eb74c4eed93b );                                  
        SDK_FIXED_SIZE( createallocation_t, 0x48 );                                         
    };                                                                                      
};
#include "magic/createallocation_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createallocation_t, 0x48 );
