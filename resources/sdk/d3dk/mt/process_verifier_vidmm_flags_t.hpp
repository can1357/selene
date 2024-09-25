#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_verifier_vidmm_flags_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS]
    // => WDK 10 (NV)
    //
    union process_verifier_vidmm_flags_t            
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint1_t  force_synchronous_evict;        //{ +0x0000@0  } | .ForceSynchronousEvict
        _m01 uint1_t  never_defer_evictions;          //{ +0x0000@1  } | .NeverDeferEvictions
        _m02 uint1_t  always_fail_commit_on_reclaim;  //{ +0x0000@2  } | .AlwaysFailCommitOnReclaim
        _m03 uint32_t value;                          //{ +0x0000    } | .Value
                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PROCESS_VERIFIER_VIDMM_FLAGS.$", 0x0, false, 0x477eea634ca7a07c );                              
        SDK_FIXED_SIZE( process_verifier_vidmm_flags_t, 0x4 );                              
    };                                              
};
#include "magic/process_verifier_vidmm_flags_t.end.hpp"
SDK_VERIFY( union d3dk::mt::process_verifier_vidmm_flags_t, 0x4 );
