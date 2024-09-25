#pragma once
#include <sdkgen/support_library.hpp>
#include "../contextinfo_t.hpp"
#include "../createcontextflags_t.hpp"

#include "magic/createcontext_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_CREATECONTEXT]
    // => WDK 10 (NV)
    //
    struct createcontext_t                                              
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 void*                             h_context;                 //{ +0x0000    } | .hContext
        _m01 uint32_t                          node_ordinal;              //{ +0x0008    } | .NodeOrdinal
        _m02 uint32_t                          engine_affinity;           //{ +0x000c    } | .EngineAffinity
        _m03 struct dxgk::createcontextflags_t flags;                     //{ +0x0010    } | .Flags
        _m04 void*                             p_private_driver_data;     //{ +0x0018    } | .pPrivateDriverData
        _m05 uint32_t                          private_driver_data_size;  //{ +0x0020    } | .PrivateDriverDataSize
        _m06 struct dxgk::contextinfo_t        context_info;              //{ +0x0024    } | .ContextInfo
                                                                        
        SDK_NONVOL_PROPERTIES( "_DXGKARG_CREATECONTEXT.$", 0x0, false, 0x23e0161372ccb4e4 );                         
        SDK_FIXED_SIZE( createcontext_t, 0x48 );                         
    };                                                                  
};
#include "magic/createcontext_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::createcontext_t, 0x48 );
