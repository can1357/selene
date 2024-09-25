#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_verifier_vidmm_restrict_budget_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET]
    // => WDK 10 (NV)
    //
    struct process_verifier_vidmm_restrict_budget_t
    {                                              
        // WDK 10                      
        //                             
        _m00 uint64_t local_budget;                  //{ +0x0000    } | .LocalBudget
        _m01 uint64_t non_local_budget;              //{ +0x0008    } | .NonLocalBudget
                                                   
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PROCESS_VERIFIER_VIDMM_RESTRICT_BUDGET.$", 0x0, false, 0xe8d946119a00f509 );                 
        SDK_FIXED_SIZE( process_verifier_vidmm_restrict_budget_t, 0x10 );                 
    };                                             
};
#include "magic/process_verifier_vidmm_restrict_budget_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::process_verifier_vidmm_restrict_budget_t, 0x10 );
