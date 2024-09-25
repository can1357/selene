#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_perf_state_change_t.start.hpp"
namespace po
{
    // [struct _PO_FX_PERF_STATE_CHANGE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_perf_state_change_t 
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t set;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Set
        _m01 uint32_t state_index;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StateIndex
        _m02 uint64_t state_value;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .StateValue
                                  
        SDK_NONVOL_PROPERTIES( "_PO_FX_PERF_STATE_CHANGE.$", 0x10, true, 0xb70a684c87960a18 );            
        SDK_FIXED_SIZE( fx_perf_state_change_t, 0x10 );            
    };                            
};
#include "magic/fx_perf_state_change_t.end.hpp"
SDK_VERIFY( struct po::fx_perf_state_change_t, 0x10 );
