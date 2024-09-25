#pragma once
#include <sdkgen/support_library.hpp>
#include "fx_component_perf_set_t.hpp"

#include "magic/fx_component_perf_info_t.start.hpp"
namespace po
{
    // [struct _PO_FX_COMPONENT_PERF_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fx_component_perf_info_t                   
    {                                                 
        using perf_state_sets_t = sdk::array<struct po::fx_component_perf_set_t, 1>;                      
                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                            
        _m00 uint32_t           perf_state_sets_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PerfStateSetsCount
        _m01 perf_state_sets_t  perf_state_sets;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .PerfStateSets
                                                      
        SDK_NONVOL_PROPERTIES( "_PO_FX_COMPONENT_PERF_INFO.$", 0x38, true, 0xeb21dcdc895356a9 );                      
        SDK_FIXED_SIZE( fx_component_perf_info_t, 0x38 );                      
    };                                                
};
#include "magic/fx_component_perf_info_t.end.hpp"
SDK_VERIFY( struct po::fx_component_perf_info_t, 0x38 );
