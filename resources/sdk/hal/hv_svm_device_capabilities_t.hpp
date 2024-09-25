#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hv_svm_device_capabilities_t.start.hpp"
namespace hal
{
    // [struct _HAL_HV_SVM_DEVICE_CAPABILITIES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct hv_svm_device_capabilities_t 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                  
        //                              
        _m00 uint1_t  svm_supported;      //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .SvmSupported
        _m01 uint1_t  pci_execute;        //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .PciExecute
        _m02 uint1_t  no_execute;         //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .NoExecute
        _m03 uint1_t  overflow_possible;  //{ +0x0000@31 +0x0000@31 +0x0000@31 } | .OverflowPossible
        _m04 uint32_t pasid_count;        //{ +0x0004    +0x0004    +0x0004    } | .PasidCount
        _m05 uint32_t iommu_index;        //{ +0x0008    +0x0008    +0x0008    } | .IommuIndex
                                        
        SDK_MAGIC_PROPERTIES( "_HAL_HV_SVM_DEVICE_CAPABILITIES.$", 0xc, true, 0x5a947b0807adb53c );                  
        SDK_FIXED_SIZE( hv_svm_device_capabilities_t, 0xc );                  
    };                                  
};
#include "magic/hv_svm_device_capabilities_t.end.hpp"
SDK_VERIFY( struct hal::hv_svm_device_capabilities_t, 0xc );
