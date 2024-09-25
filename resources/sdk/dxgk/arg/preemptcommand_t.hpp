#pragma once
#include <sdkgen/support_library.hpp>
#include "../preemptcommandflags_t.hpp"

#include "magic/preemptcommand_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_PREEMPTCOMMAND]
    // => WDK 10 (NV)
    //
    struct preemptcommand_t                                         
    {                                                               
        // WDK 10                                                   
        //                                                          
        _m00 uint32_t                           preemption_fence_id;  //{ +0x0000    } | .PreemptionFenceId
        _m01 uint32_t                           node_ordinal;         //{ +0x0004    } | .NodeOrdinal
        _m02 uint32_t                           engine_ordinal;       //{ +0x0008    } | .EngineOrdinal
        _m03 struct dxgk::preemptcommandflags_t flags;                //{ +0x000c    } | .Flags
                                                                    
        SDK_NONVOL_PROPERTIES( "_DXGKARG_PREEMPTCOMMAND.$", 0x0, false, 0x5a8a9c0a299050a7 );                    
        SDK_FIXED_SIZE( preemptcommand_t, 0x10 );                    
    };                                                              
};
#include "magic/preemptcommand_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::preemptcommand_t, 0x10 );
