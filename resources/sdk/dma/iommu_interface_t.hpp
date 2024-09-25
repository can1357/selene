#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_fault_configuration_t; }
namespace nt { struct device_object_t;              }
namespace nt { struct domain_configuration_t;       }
namespace nt { struct input_mapping_element_t;      }
namespace nt { struct iommu_dma_domain_t;           }
namespace nt { struct mdl_t;                        }

#include "magic/iommu_interface_t.start.hpp"
namespace dma
{
    // [struct _DMA_IOMMU_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct iommu_interface_t                                                 
    {                                                                        
        using piommu_domain_create_t =              sdk::function<int32_t(uint8_t, struct nt::iommu_dma_domain_t**)>*;                           
        using delete_domain_t =                     sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                           
        using piommu_domain_attach_device_t =       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t, uint32_t)>*;                           
        using piommu_domain_detach_device_t =       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::device_object_t*, uint32_t)>*;                           
        using flush_domain_t =                      sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                           
        using piommu_flush_domain_va_list_t =       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint8_t, uint32_t, void*)>*;                           
        using piommu_query_input_mappings_t =       sdk::function<int32_t(struct nt::device_object_t*, struct nt::input_mapping_element_t*, uint32_t, uint32_t*)>*;                           
        using piommu_map_logical_range_t =          sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*, uint64_t)>*;                           
        using piommu_unmap_logical_range_t =        sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t)>*;                           
        using piommu_map_identity_range_t =         sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::mdl_t*)>*;                           
        using piommu_unmap_identity_range_t =       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::mdl_t*)>*;                           
        using piommu_set_device_fault_reporting_t = sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint8_t, struct nt::device_fault_configuration_t*)>*;                           
        using piommu_domain_configure_t =           sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::domain_configuration_t*)>*;                           
                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m00 uint32_t                             version;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 piommu_domain_create_t               create_domain;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CreateDomain
        _m02 delete_domain_t                      delete_domain;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeleteDomain
        _m03 piommu_domain_attach_device_t        attach_device;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AttachDevice
        _m04 piommu_domain_detach_device_t        detach_device;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DetachDevice
        _m05 flush_domain_t                       flush_domain;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FlushDomain
        _m06 piommu_flush_domain_va_list_t        flush_domain_by_va_list;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FlushDomainByVaList
        _m07 piommu_query_input_mappings_t        query_input_mappings;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .QueryInputMappings
        _m08 piommu_map_logical_range_t           map_logical_range;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MapLogicalRange
        _m09 piommu_unmap_logical_range_t         unmap_logical_range;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .UnmapLogicalRange
        _m10 piommu_map_identity_range_t          map_identity_range;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MapIdentityRange
        _m11 piommu_unmap_identity_range_t        unmap_identity_range;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .UnmapIdentityRange
        _m12 piommu_set_device_fault_reporting_t  set_device_fault_reporting;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SetDeviceFaultReporting
        _m13 piommu_domain_configure_t            configure_domain;            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .ConfigureDomain
                                                                             
        SDK_NONVOL_PROPERTIES( "_DMA_IOMMU_INTERFACE.$", 0x70, true, 0x210293462be133ca );                           
        SDK_FIXED_SIZE( iommu_interface_t, 0x70 );                           
    };                                                                       
};
#include "magic/iommu_interface_t.end.hpp"
SDK_VERIFY( struct dma::iommu_interface_t, 0x70 );
