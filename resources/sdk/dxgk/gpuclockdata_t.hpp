#pragma once
#include <sdkgen/support_library.hpp>
#include "gpuclockdata_flags_t.hpp"

#include "magic/gpuclockdata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_GPUCLOCKDATA]
    // => WDK 10 (NV)
    //
    struct gpuclockdata_t                                        
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint64_t                          gpu_frequency;      //{ +0x0000    } | .GpuFrequency
        _m01 uint64_t                          gpu_clock_counter;  //{ +0x0008    } | .GpuClockCounter
        _m02 uint64_t                          cpu_clock_counter;  //{ +0x0010    } | .CpuClockCounter
        _m03 struct dxgk::gpuclockdata_flags_t flags;              //{ +0x0018    } | .Flags
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_GPUCLOCKDATA.$", 0x0, false, 0x44764d9c88f3e169 );                  
        SDK_FIXED_SIZE( gpuclockdata_t, 0x1c );                  
    };                                                           
};
#include "magic/gpuclockdata_t.end.hpp"
SDK_VERIFY( struct dxgk::gpuclockdata_t, 0x1c );
