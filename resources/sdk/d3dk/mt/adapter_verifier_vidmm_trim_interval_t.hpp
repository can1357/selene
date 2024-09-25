#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_verifier_vidmm_trim_interval_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL]
    // => WDK 10 (NV)
    //
    struct adapter_verifier_vidmm_trim_interval_t
    {                                            
        // WDK 10                           
        //                                  
        _m00 uint64_t minimum_trim_interval;       //{ +0x0000    } | .MinimumTrimInterval
        _m01 uint64_t maximum_trim_interval;       //{ +0x0008    } | .MaximumTrimInterval
        _m02 uint64_t idle_trim_interval;          //{ +0x0010    } | .IdleTrimInterval
                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_VERIFIER_VIDMM_TRIM_INTERVAL.$", 0x0, false, 0xc56821d71473e83 );                      
        SDK_FIXED_SIZE( adapter_verifier_vidmm_trim_interval_t, 0x18 );                      
    };                                           
};
#include "magic/adapter_verifier_vidmm_trim_interval_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::adapter_verifier_vidmm_trim_interval_t, 0x18 );
