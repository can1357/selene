#pragma once
#include <sdkgen/support_library.hpp>
#include "process_verifier_vidmm_flags_t.hpp"
#include "process_verifier_vidmm_restrict_budget_t.hpp"

#include "magic/process_verifier_option_data_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_PROCESS_VERIFIER_OPTION_DATA]
    // => WDK 10 (NV)
    //
    union process_verifier_option_data_t                                           
    {                                                                              
        using vid_mm_restrict_budget_t = struct d3dk::mt::process_verifier_vidmm_restrict_budget_t;                       
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 union d3dk::mt::process_verifier_vidmm_flags_t vid_mm_flags;            //{ +0x0000    } | .VidMmFlags
        _m01 vid_mm_restrict_budget_t                       vid_mm_restrict_budget;  //{ +0x0000    } | .VidMmRestrictBudget
                                                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PROCESS_VERIFIER_OPTION_DATA.$", 0x0, false, 0x7ec09faad3b773d9 );                       
        SDK_FIXED_SIZE( process_verifier_option_data_t, 0x10 );                       
    };                                                                             
};
#include "magic/process_verifier_option_data_t.end.hpp"
SDK_VERIFY( union d3dk::mt::process_verifier_option_data_t, 0x10 );
