#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_svm_capabilities_t.start.hpp"
namespace nt
{
    // [union _IOMMU_SVM_CAPABILITIES]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union iommu_svm_capabilities_t                                   
    {                                                                
        struct u0_cap_reg_t                                          
        {                                                            
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                       
            _m03 uint5_t pasid_max_width;                              //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PasidMaxWidth
            _m04 uint1_t pasid_exe_perm;                               //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .PasidExePerm
            _m05 uint1_t pasid_priv_mode;                              //{ +0x0000@6  +0x0000@6  +0x0000@6  } | .PasidPrivMode
            _m06 uint1_t ats_page_aligned_request;                     //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .AtsPageAlignedRequest
            _m07 uint1_t ats_global_invalidate;                        //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .AtsGlobalInvalidate
            _m08 uint5_t ats_invalidate_queue_depth;                   //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .AtsInvalidateQueueDepth
                                                                     
            SDK_MAGIC_PROPERTIES( "_IOMMU_SVM_CAPABILITIES.CapReg.$", 0x4, true, 0xa9e76bb1f5fde5ce );                                            
            SDK_FIXED_SIZE( u0_cap_reg_t, 0x4 );                                            
        };                                                           
                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                           
        _m00 uint1_t                                ats_capability;    //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .AtsCapability
        _m01 uint1_t                                pri_capability;    //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .PriCapability
        _m02 uint1_t                                pasid_capability;  //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .PasidCapability
        _m09 u0_cap_reg_t                           cap_reg;           //{ +0x0004    +0x0004    +0x0004    } | .CapReg
        _m10 uint15_t                               rsvd;              //{ +0x0008@0  +0x0008@0  +0x0008@0  } | .Rsvd
        _m11 uint32_t                               as_ulong;          //{ +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                                     
        SDK_MAGIC_PROPERTIES( "_IOMMU_SVM_CAPABILITIES.$", 0xc, true, 0xb192b2f583870acd );                 
        SDK_FIXED_SIZE( iommu_svm_capabilities_t, 0xc );                 
    };                                                               
};
#include "magic/iommu_svm_capabilities_t.end.hpp"
SDK_VERIFY( struct nt::iommu_svm_capabilities_t::u0_cap_reg_t, 0x4 );
SDK_VERIFY( union nt::iommu_svm_capabilities_t, 0xc );
