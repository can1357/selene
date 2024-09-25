#pragma once
#include <sdkgen/support_library.hpp>

namespace d3d::ddi { struct openallocationinfo2_t; }

#include "magic/openresourcefromnthandle_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENRESOURCEFROMNTHANDLE]
    // => WDK 10 (NV)
    //
    struct openresourcefromnthandle_t                                                      
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 uint32_t                                h_device;                               //{ +0x0000    } | .hDevice
        _m01 void*                                   h_nt_handle;                            //{ +0x0008    } | .hNtHandle
        _m02 uint32_t                                num_allocations;                        //{ +0x0010    } | .NumAllocations
        _m03 struct d3d::ddi::openallocationinfo2_t* p_open_allocation_info2;                //{ +0x0018    } | .pOpenAllocationInfo2
        _m04 uint32_t                                private_runtime_data_size;              //{ +0x0020    } | .PrivateRuntimeDataSize
        _m05 void*                                   p_private_runtime_data;                 //{ +0x0028    } | .pPrivateRuntimeData
        _m06 uint32_t                                resource_private_driver_data_size;      //{ +0x0030    } | .ResourcePrivateDriverDataSize
        _m07 void*                                   p_resource_private_driver_data;         //{ +0x0038    } | .pResourcePrivateDriverData
        _m08 uint32_t                                total_private_driver_data_buffer_size;  //{ +0x0040    } | .TotalPrivateDriverDataBufferSize
        _m09 void*                                   p_total_private_driver_data_buffer;     //{ +0x0048    } | .pTotalPrivateDriverDataBuffer
        _m10 uint32_t                                h_resource;                             //{ +0x0050    } | .hResource
        _m11 uint32_t                                h_keyed_mutex;                          //{ +0x0054    } | .hKeyedMutex
        _m12 void*                                   p_keyed_mutex_private_runtime_data;     //{ +0x0058    } | .pKeyedMutexPrivateRuntimeData
        _m13 uint32_t                                keyed_mutex_private_runtime_data_size;  //{ +0x0060    } | .KeyedMutexPrivateRuntimeDataSize
        _m14 uint32_t                                h_sync_object;                          //{ +0x0064    } | .hSyncObject
                                                                                           
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENRESOURCEFROMNTHANDLE.$", 0x0, false, 0x2fd11e413296bcdd );                                      
        SDK_FIXED_SIZE( openresourcefromnthandle_t, 0x68 );                                      
    };                                                                                     
};
#include "magic/openresourcefromnthandle_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::openresourcefromnthandle_t, 0x68 );
