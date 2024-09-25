#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/createhwcontextflags_t.hpp"

#include "magic/createhwcontext_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_CREATEHWCONTEXT]
    // => WDK 10 (NV)
    //
    struct createhwcontext_t                                                  
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                h_device;                  //{ +0x0000    } | .hDevice
        _m01 uint32_t                                node_ordinal;              //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t                                engine_affinity;           //{ +0x0008    } | .EngineAffinity
        _m03 struct d3d::ddi::createhwcontextflags_t flags;                     //{ +0x000c    } | .Flags
        _m04 uint32_t                                private_driver_data_size;  //{ +0x0010    } | .PrivateDriverDataSize
        _m05 void*                                   p_private_driver_data;     //{ +0x0018    } | .pPrivateDriverData
        _m06 uint32_t                                h_hw_context;              //{ +0x0020    } | .hHwContext
                                                                              
        SDK_NONVOL_PROPERTIES( "_D3DKMT_CREATEHWCONTEXT.$", 0x0, false, 0xd192d27056eac71e );                         
        SDK_FIXED_SIZE( createhwcontext_t, 0x28 );                            
    };                                                                        
};
#include "magic/createhwcontext_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::createhwcontext_t, 0x28 );
