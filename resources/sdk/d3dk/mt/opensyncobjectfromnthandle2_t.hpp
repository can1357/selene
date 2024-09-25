#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/synchronizationobject_flags_t.hpp"

#include "magic/opensyncobjectfromnthandle2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2]
    // => WDK 10 (NV)
    //
    struct opensyncobjectfromnthandle2_t                                    
    {                                                                       
        struct u0_monitored_fence_t                                         
        {                                                                   
            // WDK 10                                                       
            //                                                              
            _m04 void*    fence_value_cpu_virtual_address;                    //{ +0x0000    } | .FenceValueCPUVirtualAddress
            _m05 uint64_t fence_value_gpu_virtual_address;                    //{ +0x0008    } | .FenceValueGPUVirtualAddress
            _m06 uint32_t engine_affinity;                                    //{ +0x0010    } | .EngineAffinity
                                                                            
            SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.MonitoredFence.$", 0x0, false, 0xb4bba7dcaf32254c );                                                
            SDK_FIXED_SIZE( u0_monitored_fence_t, 0x18 );                                                
        };                                                                  
                                                                            
        // WDK 10                                                           
        //                                                                  
        _m00 void*                                          h_nt_handle;      //{ +0x0000    } | .hNtHandle
        _m01 uint32_t                                       h_device;         //{ +0x0008    } | .hDevice
        _m02 struct d3d::ddi::synchronizationobject_flags_t flags;            //{ +0x000c    } | .Flags
        _m03 uint32_t                                       h_sync_object;    //{ +0x0010    } | .hSyncObject
        _m07 u0_monitored_fence_t                           monitored_fence;  //{ +0x0018    } | .MonitoredFence
                                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OPENSYNCOBJECTFROMNTHANDLE2.$", 0x0, false, 0xa49daee8b7b10275 );                
        SDK_FIXED_SIZE( opensyncobjectfromnthandle2_t, 0x58 );                
    };                                                                      
};
#include "magic/opensyncobjectfromnthandle2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::opensyncobjectfromnthandle2_t::u0_monitored_fence_t, 0x18 );
SDK_VERIFY( struct d3dk::mt::opensyncobjectfromnthandle2_t, 0x58 );
