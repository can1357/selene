#pragma once
#include <sdkgen/support_library.hpp>

namespace po { struct fx_component_perf_set_t; }

#include "magic/fx_perf_set_t.start.hpp"
namespace pop
{
    // [struct _POP_FX_PERF_SET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fx_perf_set_t                                              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                            
        _m00 struct po::fx_component_perf_set_t* perf_set;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PerfSet
        _m01 uint64_t                            current_perf;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentPerf
        _m02 uint64_t                            current_perf_stamp;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentPerfStamp
        _m03 uint8_t                             current_perf_nominal;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CurrentPerfNominal
                                                                      
        SDK_MAGIC_PROPERTIES( "_POP_FX_PERF_SET.$", 0x20, true, 0xb5a471fb621bbbdc );                     
        SDK_FIXED_SIZE( fx_perf_set_t, 0x20 );                        
    };                                                                
};
#include "magic/fx_perf_set_t.end.hpp"
SDK_VERIFY( struct pop::fx_perf_set_t, 0x20 );
