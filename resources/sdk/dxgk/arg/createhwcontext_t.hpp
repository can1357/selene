#pragma once
#include <sdkgen/support_library.hpp>
#include "../hwcontext_caps_t.hpp"
#include "../../d3d/ddi/createhwcontextflags_t.hpp"

#include "magic/createhwcontext_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATEHWCONTEXT]
    // => WDK 10 (NV)
    //
    struct createhwcontext_t                                                  
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 void*                                   h_hw_context;              //{ +0x0000    } | .hHwContext
        _m01 uint32_t                                node_ordinal;              //{ +0x0008    } | .NodeOrdinal
        _m02 uint32_t                                engine_affinity;           //{ +0x000c    } | .EngineAffinity
        _m03 struct d3d::ddi::createhwcontextflags_t flags;                     //{ +0x0010    } | .Flags
        _m04 uint32_t                                private_driver_data_size;  //{ +0x0014    } | .PrivateDriverDataSize
        _m05 void*                                   p_private_driver_data;     //{ +0x0018    } | .pPrivateDriverData
        _m06 struct dxgk::hwcontext_caps_t           context_caps;              //{ +0x0020    } | .ContextCaps
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATEHWCONTEXT.$", 0x0, false, 0x19a70d338235663d );                         
        SDK_FIXED_SIZE( createhwcontext_t, 0x28 );                            
    };                                                                        
};
#include "magic/createhwcontext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createhwcontext_t, 0x28 );
