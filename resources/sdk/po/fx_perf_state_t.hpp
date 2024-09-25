#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fx_perf_state_t.start.hpp"
namespace po
{
    // [struct _PO_FX_PERF_STATE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_perf_state_t    
    {                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t value;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m01 void*    context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
                              
        SDK_NONVOL_PROPERTIES( "_PO_FX_PERF_STATE.$", 0x10, true, 0x5f43680d4c3f065 );        
        SDK_FIXED_SIZE( fx_perf_state_t, 0x10 );        
    };                        
};
#include "magic/fx_perf_state_t.end.hpp"
SDK_VERIFY( struct po::fx_perf_state_t, 0x10 );
