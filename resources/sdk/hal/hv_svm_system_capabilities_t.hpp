#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hv_svm_system_capabilities_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_SVM_SYSTEM_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hv_svm_system_capabilities_t           
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint1_t  svm_supported;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SvmSupported
        _m01 uint1_t  gpa_always_valid;             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .GpaAlwaysValid
        _m02 uint32_t max_pasid_space_count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxPasidSpaceCount
        _m03 uint32_t max_pasid_space_pasid_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxPasidSpacePasidCount
        _m04 uint32_t max_prq_size;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MaxPrqSize
        _m05 uint32_t iommu_count;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IommuCount
        _m06 uint32_t min_iommu_pasid_count;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .MinIommuPasidCount
                                                  
        SDK_MAGIC_PROPERTIES( "_HAL_HV_SVM_SYSTEM_CAPABILITIES.$", 0x18, true, 0xfe1d7d41a0efb819 );                            
        SDK_FIXED_SIZE( hv_svm_system_capabilities_t, 0x18 );                            
    };                                            
};
#include "magic/hv_svm_system_capabilities_t.end.hpp"
SDK_VERIFY( struct hal::hv_svm_system_capabilities_t, 0x18 );
