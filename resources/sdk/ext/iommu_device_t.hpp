#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/iommu_device_t.start.hpp"
namespace ext
{
    struct iommu_t;
    struct iommu_domain_t;

    // [struct _EXT_IOMMU_DEVICE]
    // => Windows 11
    //
    struct iommu_device_t                                        
    {                                                            
        // Windows 11                                            
        //                                                       
        _m00 void*                       context;                  //{ +0x0000    } | .Context
        _m01 struct ext::iommu_t*        iommu;                    //{ +0x0008    } | .Iommu
        _m02 struct ext::iommu_domain_t* domain;                   //{ +0x0010    } | .Domain
        _m03 uint64_t                    associated_domain_id;     //{ +0x0018    } | .AssociatedDomainId
        _m04 uint16_t                    firmware_domain_id;       //{ +0x0020    } | .FirmwareDomainId
        _m05 uint8_t                     fault_reporting_enabled;  //{ +0x0022    } | .FaultReportingEnabled
                                                                 
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_DEVICE.$", 0x0, false, 0x47ce0fe4d2c8d297 );                        
        SDK_FIXED_SIZE( iommu_device_t, 0x28 );                        
    };                                                           
};
#include "magic/iommu_device_t.end.hpp"
SDK_VERIFY( struct ext::iommu_device_t, 0x28 );
