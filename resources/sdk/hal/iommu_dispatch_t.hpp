#pragma once
#include <sdkgen/support_library.hpp>

namespace ext { struct iommu_device_id_t;       }
namespace nt  { struct device_object_t;         }
namespace nt  { struct ktb_flush_va_t;          }
namespace nt  { union iommu_ats_settings_t;     }
namespace nt  { union iommu_svm_capabilities_t; }

#include "magic/iommu_dispatch_t.start.hpp"
namespace hal
{
    // [struct _HAL_IOMMU_DISPATCH]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct iommu_dispatch_t                                                                         
    {                                                                                               
        using hal_iommu_get_configuration_t =             sdk::function<int32_t(uint32_t, uint32_t*, uint32_t*, void**)>*;                                        
        using hal_iommu_get_library_context_t =           sdk::function<int32_t(uint32_t, uint32_t, void**)>*;                                        
        using hal_iommu_map_device_t =                    sdk::variant<sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, union nt::iommu_svm_capabilities_t*, void**)>*, sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, struct nt::device_object_t*, union nt::iommu_svm_capabilities_t*, void**)>*>;                                        
        using hal_iommu_flush_tb_t =                      sdk::function<void(void*, uint32_t, struct nt::ktb_flush_va_t*)>*;                                        
        using hal_iommu_flush_all_pasid_t =               sdk::function<void(void*, uint32_t, struct nt::ktb_flush_va_t*)>*;                                        
        using hal_iommu_service_page_fault_t =            sdk::function<int32_t(uint64_t, void*, uint32_t)>*;                                        
        using hal_iommu_get_ats_settings_t =              sdk::function<int32_t(struct ext::iommu_device_id_t*, union nt::iommu_ats_settings_t*)>*;                                        
        using hal_iommu_create_ats_device_t =             sdk::function<int32_t(struct ext::iommu_device_id_t*, struct nt::device_object_t*, union nt::iommu_svm_capabilities_t*, void**)>*;                                        
        using hal_iommu_get_domain_transition_support_t = sdk::function<int32_t(struct ext::iommu_device_id_t*, uint8_t*)>*;                                        
                                                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                           
        //                                                                                          
        _m00 sdk::function<uint8_t()>*                      hal_iommu_support_enabled;                //{ +0x0000    +0x0000    +0x0000    } | .HalIommuSupportEnabled
        _m01 hal_iommu_get_configuration_t                  hal_iommu_get_configuration;              //{ +0x0008    +0x0008    +0x0008    } | .HalIommuGetConfiguration
        _m02 hal_iommu_get_library_context_t                hal_iommu_get_library_context;            //{ +0x0010    +0x0010    +0x0010    } | .HalIommuGetLibraryContext
        _m03 hal_iommu_map_device_t                         hal_iommu_map_device;                     //{ +0x0018    +0x0018    +0x0018    } | .HalIommuMapDevice
        _m04 sdk::function<int32_t(void*, void*)>*          hal_iommu_enable_device_pasid;            //{ +0x0020    +0x0020    +0x0020    } | .HalIommuEnableDevicePasid
        _m05 sdk::function<int32_t(void*, uint64_t)>*       hal_iommu_set_address_space;              //{ +0x0028    +0x0028    +0x0028    } | .HalIommuSetAddressSpace
        _m06 sdk::function<int32_t(void*, void*)>*          hal_iommu_disable_device_pasid;           //{ +0x0030    +0x0030    +0x0030    } | .HalIommuDisableDevicePasid
        _m07 sdk::function<int32_t(void*, void*)>*          hal_iommu_unmap_device;                   //{ +0x0038    +0x0038    +0x0038    } | .HalIommuUnmapDevice
        _m08 sdk::function<int32_t(void*)>*                 hal_iommu_free_library_context;           //{ +0x0040    +0x0040    +0x0040    } | .HalIommuFreeLibraryContext
        _m09 hal_iommu_flush_tb_t                           hal_iommu_flush_tb;                       //{ +0x0048    +0x0048    +0x0048    } | .HalIommuFlushTb
        _m10 hal_iommu_flush_all_pasid_t                    hal_iommu_flush_all_pasid;                //{ +0x0050    +0x0050    +0x0050    } | .HalIommuFlushAllPasid
        _m11 sdk::function<uint8_t(uint32_t)>*              hal_iommu_process_page_request_queue;     //{ +0x0058    +0x0058    +0x0058    } | .HalIommuProcessPageRequestQueue
        _m12 sdk::function<void(uint32_t)>*                 hal_iommu_fault_routine;                  //{ +0x0060    +0x0060    +0x0060    } | .HalIommuFaultRoutine
        _m13 sdk::function<void*(uint32_t)>*                hal_iommu_reference_asid;                 //{ +0x0068    +0x0068    +0x0068    } | .HalIommuReferenceAsid
        _m14 sdk::function<void(uint32_t)>*                 hal_iommu_dereference_asid;               //{ +0x0070    +0x0070    +0x0070    } | .HalIommuDereferenceAsid
        _m15 hal_iommu_service_page_fault_t                 hal_iommu_service_page_fault;             //{ +0x0078    +0x0078    +0x0078    } | .HalIommuServicePageFault
        _m16 sdk::function<int32_t(void*, void*, uint8_t)>* hal_iommu_device_power_change;            //{ +0x0080    +0x0080    +0x0080    } | .HalIommuDevicePowerChange
        _m17 sdk::function<int32_t(void*, uint32_t*)>*      hal_iommu_begin_device_reset;             //{ +0x0088    +0x0088    +0x0088    } | .HalIommuBeginDeviceReset
        _m18 sdk::function<int32_t(void*)>*                 hal_iommu_finalize_device_reset;          //{ +0x0090    +0x0090    +0x0090    } | .HalIommuFinalizeDeviceReset
                                                                                                    
        // Windows 11                                                                               
        //                                                                                          
        _m19 hal_iommu_get_ats_settings_t                   hal_iommu_get_ats_settings;               //{ +0x0098    } | .HalIommuGetAtsSettings
        _m20 hal_iommu_create_ats_device_t                  hal_iommu_create_ats_device;              //{ +0x00a0    } | .HalIommuCreateAtsDevice
        _m21 sdk::function<void(void*)>*                    hal_iommu_delete_ats_device;              //{ +0x00a8    } | .HalIommuDeleteAtsDevice
        _m22 hal_iommu_get_domain_transition_support_t      hal_iommu_get_domain_transition_support;  //{ +0x00b0    } | .HalIommuGetDomainTransitionSupport
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_HAL_IOMMU_DISPATCH.$", 0x98, true, 0xfc5ea512b8a364fc );                                        
        SDK_DYNAMIC_SIZE( iommu_dispatch_t );                                                       
    };                                                                                              
};
#include "magic/iommu_dispatch_t.end.hpp"
