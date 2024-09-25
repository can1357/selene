#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_fault_configuration_t; }
namespace nt { struct device_object_t;              }
namespace nt { struct domain_configuration_t;       }
namespace nt { struct input_mapping_element_t;      }
namespace nt { struct iommu_dma_domain_t;           }
namespace nt { struct mdl_t;                        }

#include "magic/iommu_interface_v1_t.start.hpp"
namespace dma
{
    // [struct _DMA_IOMMU_INTERFACE_V1]
    // => Windows 11
    //
    struct iommu_interface_v1_t                                       
    {                                                                 
        using create_domain_t =              sdk::function<int32_t(uint8_t, struct nt::iommu_dma_domain_t**)>*;                           
        using delete_domain_t =              sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                           
        using attach_device_t =              sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t, uint32_t)>*;                           
        using detach_device_t =              sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t)>*;                           
        using flush_domain_t =               sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                           
        using flush_domain_by_va_list_t =    sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint8_t, uint32_t, void*)>*;                           
        using query_input_mappings_t =       sdk::function<int32_t(struct nt::device_object_t*, struct nt::input_mapping_element_t*, uint32_t, uint32_t*)>*;                           
        using map_logical_range_t =          sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*, uint64_t)>*;                           
        using unmap_logical_range_t =        sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t)>*;                           
        using map_identity_range_t =         sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*)>*;                           
        using unmap_identity_range_t =       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::mdl_t*)>*;                           
        using set_device_fault_reporting_t = sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint8_t, struct nt::device_fault_configuration_t*)>*;                           
        using configure_domain_t =           sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::domain_configuration_t*)>*;                           
                                                                      
        // Windows 11                                                 
        //                                                            
        _m00 create_domain_t               create_domain;               //{ +0x0000    } | .CreateDomain
        _m01 delete_domain_t               delete_domain;               //{ +0x0008    } | .DeleteDomain
        _m02 attach_device_t               attach_device;               //{ +0x0010    } | .AttachDevice
        _m03 detach_device_t               detach_device;               //{ +0x0018    } | .DetachDevice
        _m04 flush_domain_t                flush_domain;                //{ +0x0020    } | .FlushDomain
        _m05 flush_domain_by_va_list_t     flush_domain_by_va_list;     //{ +0x0028    } | .FlushDomainByVaList
        _m06 query_input_mappings_t        query_input_mappings;        //{ +0x0030    } | .QueryInputMappings
        _m07 map_logical_range_t           map_logical_range;           //{ +0x0038    } | .MapLogicalRange
        _m08 unmap_logical_range_t         unmap_logical_range;         //{ +0x0040    } | .UnmapLogicalRange
        _m09 map_identity_range_t          map_identity_range;          //{ +0x0048    } | .MapIdentityRange
        _m10 unmap_identity_range_t        unmap_identity_range;        //{ +0x0050    } | .UnmapIdentityRange
        _m11 set_device_fault_reporting_t  set_device_fault_reporting;  //{ +0x0058    } | .SetDeviceFaultReporting
        _m12 configure_domain_t            configure_domain;            //{ +0x0060    } | .ConfigureDomain
                                                                      
        SDK_MAGIC_PROPERTIES( "_DMA_IOMMU_INTERFACE_V1.$", 0x0, false, 0x44f83ace8bb2a6d6 );                           
        SDK_FIXED_SIZE( iommu_interface_v1_t, 0x68 );                           
    };                                                                
};
#include "magic/iommu_interface_v1_t.end.hpp"
SDK_VERIFY( struct dma::iommu_interface_v1_t, 0x68 );
