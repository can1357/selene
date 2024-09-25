#pragma once
#include <sdkgen/support_library.hpp>
#include "adapter_verifier_vidmm_flags_t.hpp"
#include "adapter_verifier_vidmm_trim_interval_t.hpp"

#include "magic/adapter_verifier_option_data_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_ADAPTER_VERIFIER_OPTION_DATA]
    // => WDK 10 (NV)
    //
    union adapter_verifier_option_data_t                                         
    {                                                                            
        using vid_mm_trim_interval_t = struct d3dk::mt::adapter_verifier_vidmm_trim_interval_t;                     
                                                                                 
        // WDK 10                                                                
        //                                                                       
        _m00 union d3dk::mt::adapter_verifier_vidmm_flags_t vid_mm_flags;          //{ +0x0000    } | .VidMmFlags
        _m01 vid_mm_trim_interval_t                         vid_mm_trim_interval;  //{ +0x0000    } | .VidMmTrimInterval
                                                                                 
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_VERIFIER_OPTION_DATA.$", 0x0, false, 0xd40583f4dbbe7be0 );                     
        SDK_FIXED_SIZE( adapter_verifier_option_data_t, 0x18 );                     
    };                                                                           
};
#include "magic/adapter_verifier_option_data_t.end.hpp"
SDK_VERIFY( union d3dk::mt::adapter_verifier_option_data_t, 0x18 );
