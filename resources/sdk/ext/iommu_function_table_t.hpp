#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct interrupt_line_state_t; }
namespace nt { struct ktb_flush_va_t;         }

#include "magic/iommu_function_table_t.start.hpp"
namespace ext
{
    struct iommu_t;
    struct iommu_device_t;
    struct iommu_domain_t;
    struct iommu_settings_t;
    struct iommu_device_id_t;
    struct iommu_flush_context_t;
    union iommu_create_device_flags_t;

    // [struct _EXT_IOMMU_FUNCTION_TABLE]
    // => Windows 11
    //
    struct iommu_function_table_t                                                   
    {                                                                               
        using configure_settings_t =               sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_settings_t*)>*;                                 
        using initialize_t =                       sdk::function<int32_t(struct ext::iommu_t*, uint32_t, uint8_t)>*;                                 
        using allocate_domain_t =                  sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_domain_t*, struct ext::iommu_domain_t*, void*)>*;                                 
        using free_domain_t =                      sdk::function<void(struct ext::iommu_t*, struct ext::iommu_domain_t*, void*)>*;                                 
        using create_device_t =                    sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_device_id_t*, union ext::iommu_create_device_flags_t, void*, struct ext::iommu_device_t**, void*)>*;                                 
        using delete_device_t =                    sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, void*)>*;                                 
        using own_device_t =                       sdk::function<uint8_t(struct ext::iommu_t*, struct ext::iommu_device_id_t*)>*;                                 
        using configure_device_fault_reporting_t = sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, uint8_t)>*;                                 
        using attach_device_domain_t =             sdk::function<int32_t(struct ext::iommu_t*, struct ext::iommu_device_t*, struct ext::iommu_domain_t*, void*)>*;                                 
        using detach_device_domain_t =             sdk::function<void(struct ext::iommu_t*, struct ext::iommu_device_t*, void*)>*;                                 
        using flush_domain_tb_t =                  sdk::function<void(struct ext::iommu_t*, struct ext::iommu_domain_t*, struct ext::iommu_flush_context_t*, uint32_t, struct nt::ktb_flush_va_t*)>*;                                 
        using sync_flush_t =                       sdk::function<void(struct ext::iommu_t*, struct ext::iommu_flush_context_t*)>*;                                 
        using complete_flush_t =                   sdk::function<void(struct ext::iommu_t*, struct ext::iommu_flush_context_t*)>*;                                 
        using allocate_remapping_table_entry_t =   sdk::function<int32_t(void*, uint32_t, uint32_t, uint32_t, uint16_t, uint8_t, uint8_t, uint32_t, struct ext::iommu_device_id_t*)>*;                                 
        using free_remapping_table_entry_t =       sdk::function<int32_t(void*, uint32_t, uint32_t)>*;                                 
        using update_remapping_table_entry_t =     sdk::function<uint8_t(void*, uint8_t, uint32_t, struct nt::interrupt_line_state_t*)>*;                                 
        using update_remapping_destination_t =     sdk::function<void(void*, uint8_t, uint32_t*, uint32_t*, uint32_t)>*;                                 
                                                                                    
        // Windows 11                                                               
        //                                                                          
        _m00 configure_settings_t                  configure_settings;                //{ +0x0000    } | .ConfigureSettings
        _m01 initialize_t                          initialize;                        //{ +0x0008    } | .Initialize
        _m02 allocate_domain_t                     allocate_domain;                   //{ +0x0010    } | .AllocateDomain
        _m03 free_domain_t                         free_domain;                       //{ +0x0018    } | .FreeDomain
        _m04 create_device_t                       create_device;                     //{ +0x0020    } | .CreateDevice
        _m05 delete_device_t                       delete_device;                     //{ +0x0028    } | .DeleteDevice
        _m06 own_device_t                          own_device;                        //{ +0x0030    } | .OwnDevice
        _m07 configure_device_fault_reporting_t    configure_device_fault_reporting;  //{ +0x0038    } | .ConfigureDeviceFaultReporting
        _m08 attach_device_domain_t                attach_device_domain;              //{ +0x0040    } | .AttachDeviceDomain
        _m09 detach_device_domain_t                detach_device_domain;              //{ +0x0048    } | .DetachDeviceDomain
        _m10 flush_domain_tb_t                     flush_domain_tb;                   //{ +0x0050    } | .FlushDomainTb
        _m11 sync_flush_t                          sync_flush;                        //{ +0x0058    } | .SyncFlush
        _m12 complete_flush_t                      complete_flush;                    //{ +0x0060    } | .CompleteFlush
        _m13 allocate_remapping_table_entry_t      allocate_remapping_table_entry;    //{ +0x0068    } | .AllocateRemappingTableEntry
        _m14 free_remapping_table_entry_t          free_remapping_table_entry;        //{ +0x0070    } | .FreeRemappingTableEntry
        _m15 update_remapping_table_entry_t        update_remapping_table_entry;      //{ +0x0078    } | .UpdateRemappingTableEntry
        _m16 sdk::function<void(void*, uint32_t)>* invalidate_remapping_table_entry;  //{ +0x0080    } | .InvalidateRemappingTableEntry
        _m17 update_remapping_destination_t        update_remapping_destination;      //{ +0x0088    } | .UpdateRemappingDestination
        _m18 sdk::function<void(void*)>*           capture_global_crashdump_state;    //{ +0x0090    } | .CaptureGlobalCrashdumpState
                                                                                    
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_FUNCTION_TABLE.$", 0x0, false, 0xc940a3d887b50337 );                                 
        SDK_FIXED_SIZE( iommu_function_table_t, 0x98 );                                 
    };                                                                              
};
#include "magic/iommu_function_table_t.end.hpp"
SDK_VERIFY( struct ext::iommu_function_table_t, 0x98 );
