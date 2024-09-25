#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/iommu_dma_domain_type_t.hpp"

namespace nt { struct device_fault_configuration_t;                     }
namespace nt { struct device_object_t;                                  }
namespace nt { struct domain_configuration_t;                           }
namespace nt { struct input_mapping_element_t;                          }
namespace nt { struct iommu_device_creation_configuration_t;            }
namespace nt { struct iommu_dma_device_t;                               }
namespace nt { struct iommu_dma_domain_t;                               }
namespace nt { struct iommu_dma_logical_address_token_mapped_segment_t; }
namespace nt { struct iommu_dma_logical_address_token_t;                }
namespace nt { struct iommu_dma_logical_allocator_config_t;             }
namespace nt { struct iommu_dma_reserved_region_t;                      }
namespace nt { struct iommu_interface_state_change_t;                   }
namespace nt { struct iommu_map_physical_address_t;                     }
namespace nt { union iommu_dma_domain_creation_flags_t;                 }
namespace nt { union iommu_interface_state_change_fields_t;             }

#include "magic/iommu_interface_v2_t.start.hpp"
namespace dma
{
    // [struct _DMA_IOMMU_INTERFACE_V2]
    // => Windows 11
    //
    struct iommu_interface_v2_t                                                                       
    {                                                                                                 
        using create_domain_ex_t =                           sdk::function<int32_t(enum nt::iommu_dma_domain_type_t, union nt::iommu_dma_domain_creation_flags_t, struct nt::iommu_dma_logical_allocator_config_t*, struct nt::iommu_dma_reserved_region_t*, struct nt::iommu_dma_domain_t**)>*;                                           
        using delete_domain_t =                              sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                                           
        using attach_device_ex_t =                           sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::iommu_dma_device_t*)>*;                                           
        using detach_device_ex_t =                           sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*;                                           
        using flush_domain_t =                               sdk::function<int32_t(struct nt::iommu_dma_domain_t*)>*;                                           
        using flush_domain_by_va_list_t =                    sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint8_t, uint32_t, void*)>*;                                           
        using query_input_mappings_t =                       sdk::function<int32_t(struct nt::device_object_t*, struct nt::input_mapping_element_t*, uint32_t, uint32_t*)>*;                                           
        using map_logical_range_ex_t =                       sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::iommu_map_physical_address_t*, uint64_t*, uint64_t*, uint64_t*, uint64_t*)>*;                                           
        using unmap_logical_range_t =                        sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t)>*;                                           
        using map_identity_range_ex_t =                      sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint32_t, struct nt::iommu_map_physical_address_t*)>*;                                           
        using unmap_identity_range_ex_t =                    sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::iommu_map_physical_address_t*)>*;                                           
        using set_device_fault_reporting_ex_t =              sdk::function<int32_t(struct nt::iommu_dma_device_t*, uint32_t, uint8_t, struct nt::device_fault_configuration_t*)>*;                                           
        using configure_domain_t =                           sdk::function<int32_t(struct nt::iommu_dma_domain_t*, struct nt::domain_configuration_t*)>*;                                           
        using query_available_domain_types_t =               sdk::function<void(struct nt::iommu_dma_device_t*, uint32_t*)>*;                                           
        using register_interface_state_change_callback_t =   sdk::function<int32_t(sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*, void*, struct nt::iommu_dma_device_t*, union nt::iommu_interface_state_change_fields_t*)>*;                                           
        using unregister_interface_state_change_callback_t = sdk::function<int32_t(sdk::function<void(struct nt::iommu_interface_state_change_t*, void*)>*, struct nt::iommu_dma_device_t*)>*;                                           
        using reserve_logical_address_range_t =              sdk::function<int32_t(struct nt::iommu_dma_domain_t*, uint64_t, uint64_t*, uint64_t*, uint64_t*, struct nt::iommu_dma_logical_address_token_t**)>*;                                           
        using free_reserved_logical_address_range_t =        sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_t*)>*;                                           
        using map_reserved_logical_range_t =                 sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_t*, uint64_t, uint32_t, struct nt::iommu_map_physical_address_t*, struct nt::iommu_dma_logical_address_token_mapped_segment_t*)>*;                                           
        using unmap_reserved_logical_range_t =               sdk::function<int32_t(struct nt::iommu_dma_logical_address_token_mapped_segment_t*)>*;                                           
        using create_device_t =                              sdk::function<int32_t(struct nt::device_object_t*, struct nt::iommu_device_creation_configuration_t*, struct nt::iommu_dma_device_t**)>*;                                           
        using delete_device_t =                              sdk::function<int32_t(struct nt::iommu_dma_device_t*)>*;                                           
                                                                                                      
        // Windows 11                                                                                 
        //                                                                                            
        _m00 create_domain_ex_t                            create_domain_ex;                            //{ +0x0000    } | .CreateDomainEx
        _m01 delete_domain_t                               delete_domain;                               //{ +0x0008    } | .DeleteDomain
        _m02 attach_device_ex_t                            attach_device_ex;                            //{ +0x0010    } | .AttachDeviceEx
        _m03 detach_device_ex_t                            detach_device_ex;                            //{ +0x0018    } | .DetachDeviceEx
        _m04 flush_domain_t                                flush_domain;                                //{ +0x0020    } | .FlushDomain
        _m05 flush_domain_by_va_list_t                     flush_domain_by_va_list;                     //{ +0x0028    } | .FlushDomainByVaList
        _m06 query_input_mappings_t                        query_input_mappings;                        //{ +0x0030    } | .QueryInputMappings
        _m07 map_logical_range_ex_t                        map_logical_range_ex;                        //{ +0x0038    } | .MapLogicalRangeEx
        _m08 unmap_logical_range_t                         unmap_logical_range;                         //{ +0x0040    } | .UnmapLogicalRange
        _m09 map_identity_range_ex_t                       map_identity_range_ex;                       //{ +0x0048    } | .MapIdentityRangeEx
        _m10 unmap_identity_range_ex_t                     unmap_identity_range_ex;                     //{ +0x0050    } | .UnmapIdentityRangeEx
        _m11 set_device_fault_reporting_ex_t               set_device_fault_reporting_ex;               //{ +0x0058    } | .SetDeviceFaultReportingEx
        _m12 configure_domain_t                            configure_domain;                            //{ +0x0060    } | .ConfigureDomain
        _m13 query_available_domain_types_t                query_available_domain_types;                //{ +0x0068    } | .QueryAvailableDomainTypes
        _m14 register_interface_state_change_callback_t    register_interface_state_change_callback;    //{ +0x0070    } | .RegisterInterfaceStateChangeCallback
        _m15 unregister_interface_state_change_callback_t  unregister_interface_state_change_callback;  //{ +0x0078    } | .UnregisterInterfaceStateChangeCallback
        _m16 reserve_logical_address_range_t               reserve_logical_address_range;               //{ +0x0080    } | .ReserveLogicalAddressRange
        _m17 free_reserved_logical_address_range_t         free_reserved_logical_address_range;         //{ +0x0088    } | .FreeReservedLogicalAddressRange
        _m18 map_reserved_logical_range_t                  map_reserved_logical_range;                  //{ +0x0090    } | .MapReservedLogicalRange
        _m19 unmap_reserved_logical_range_t                unmap_reserved_logical_range;                //{ +0x0098    } | .UnmapReservedLogicalRange
        _m20 create_device_t                               create_device;                               //{ +0x00a0    } | .CreateDevice
        _m21 delete_device_t                               delete_device;                               //{ +0x00a8    } | .DeleteDevice
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_DMA_IOMMU_INTERFACE_V2.$", 0x0, false, 0x117409d2f23eac65 );                                           
        SDK_FIXED_SIZE( iommu_interface_v2_t, 0xb0 );                                                 
    };                                                                                                
};
#include "magic/iommu_interface_v2_t.end.hpp"
SDK_VERIFY( struct dma::iommu_interface_v2_t, 0xb0 );
