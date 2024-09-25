#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_verifier_vidmm_flags_t.start.hpp"
namespace d3dk::mt
{
    // [union _D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS]
    // => WDK 10 (NV)
    //
    union adapter_verifier_vidmm_flags_t                    
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint1_t  always_repatch;                         //{ +0x0000@0  } | .AlwaysRepatch
        _m01 uint1_t  fail_shared_primary;                    //{ +0x0000@1  } | .FailSharedPrimary
        _m02 uint1_t  fail_probe_and_lock;                    //{ +0x0000@2  } | .FailProbeAndLock
        _m03 uint1_t  always_discard_offer;                   //{ +0x0000@3  } | .AlwaysDiscardOffer
        _m04 uint1_t  never_discard_offer;                    //{ +0x0000@4  } | .NeverDiscardOffer
        _m05 uint1_t  force_complex_lock;                     //{ +0x0000@5  } | .ForceComplexLock
        _m06 uint1_t  never_prepatch;                         //{ +0x0000@6  } | .NeverPrepatch
        _m07 uint1_t  expect_preparation_failure;             //{ +0x0000@7  } | .ExpectPreparationFailure
        _m08 uint1_t  take_split_point;                       //{ +0x0000@8  } | .TakeSplitPoint
        _m09 uint1_t  fail_acquire_swizzling_range;           //{ +0x0000@9  } | .FailAcquireSwizzlingRange
        _m10 uint1_t  paging_path_lock_subrange;              //{ +0x0000@10 } | .PagingPathLockSubrange
        _m11 uint1_t  paging_path_lock_minrange;              //{ +0x0000@11 } | .PagingPathLockMinrange
        _m12 uint1_t  fail_va_rotation;                       //{ +0x0000@12 } | .FailVaRotation
        _m13 uint1_t  no_demotion;                            //{ +0x0000@13 } | .NoDemotion
        _m14 uint1_t  fail_defrag_pass;                       //{ +0x0000@14 } | .FailDefragPass
        _m15 uint1_t  always_process_offer_list;              //{ +0x0000@15 } | .AlwaysProcessOfferList
        _m16 uint1_t  always_decommit_offer;                  //{ +0x0000@16 } | .AlwaysDecommitOffer
        _m17 uint1_t  never_move_defrag;                      //{ +0x0000@17 } | .NeverMoveDefrag
        _m18 uint1_t  always_relocate_displayable_resources;  //{ +0x0000@18 } | .AlwaysRelocateDisplayableResources
        _m19 uint32_t value;                                  //{ +0x0000    } | .Value
                                                            
        SDK_NONVOL_PROPERTIES( "_D3DKMT_ADAPTER_VERIFIER_VIDMM_FLAGS.$", 0x0, false, 0xcc6d820c440d7702 );                                      
        SDK_FIXED_SIZE( adapter_verifier_vidmm_flags_t, 0x4 );                                      
    };                                                      
};
#include "magic/adapter_verifier_vidmm_flags_t.end.hpp"
SDK_VERIFY( union d3dk::mt::adapter_verifier_vidmm_flags_t, 0x4 );
