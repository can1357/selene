#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct iommu_pasid_table_object_t; }
namespace nt { struct iommu_reserved_device_t;    }
namespace nt { struct ktb_flush_va_t;             }

#include "magic/iommu_function_table_extended_t.start.hpp"
namespace ext
{
    struct iommu_device_id_t;
    struct iommu_output_mapping_t;

    // [struct _EXT_IOMMU_FUNCTION_TABLE_EXTENDED]
    // => Windows 11
    //
    struct iommu_function_table_extended_t                                                 
    {                                                                                      
        using find_device_t =                   sdk::function<uint8_t(void*, struct ext::iommu_device_id_t*, uint8_t, struct ext::iommu_output_mapping_t*)>*;                              
        using set_device_svm_capabilities_t =   sdk::function<int32_t(void*, uint64_t, uint8_t)>*;                              
        using set_device_pasid_table_t =        sdk::function<void(void*, uint64_t, struct nt::iommu_pasid_table_object_t*)>*;                              
        using grow_pasid_table_t =              sdk::function<int32_t(void*, struct nt::iommu_pasid_table_object_t*, uint32_t)>*;                              
        using set_pasid_address_space_t =       sdk::function<int32_t(void*, struct nt::iommu_pasid_table_object_t*, uint32_t, uint64_t, uint8_t*)>*;                              
        using flush_tb_t =                      sdk::function<void(void*, uint32_t, void*, nt::list_entry_t*, uint32_t, struct nt::ktb_flush_va_t*)>*;                              
        using dismiss_page_fault_t =            sdk::function<void(void*, uint32_t, uint64_t, uint16_t, int32_t)>*;                              
        using get_page_fault_t =                sdk::function<uint32_t(void*, uint32_t*, uint64_t*, uint16_t*, void**, uint64_t*)>*;                              
        using set_message_interrupt_routing_t = sdk::function<int32_t(void*, uint8_t, int64_t, uint32_t)>*;                              
        using check_for_reserved_region_t =     sdk::function<uint8_t(struct ext::iommu_device_id_t*)>*;                              
        using mark_hiber_regions_t =            sdk::function<void(void*, void*, nt::list_entry_t*)>*;                              
        using enumerate_reserved_devices_t =    sdk::function<int32_t(void*, uint32_t*, struct nt::iommu_reserved_device_t**)>*;                              
        using process_reserved_domains_t =      sdk::function<int32_t(void*, uint32_t, struct nt::iommu_reserved_device_t**)>*;                              
        using query_acpi_device_mapping_t =     sdk::function<int32_t(void*, struct ext::iommu_device_id_t*, struct ext::iommu_device_id_t*)>*;                              
        using get_rid_acpi_map_count_t =        sdk::function<uint32_t(void*, struct ext::iommu_device_id_t*)>*;                              
        using free_pasid_table_t =              sdk::function<void(void*, struct nt::iommu_pasid_table_object_t*, void*)>*;                              
        using configure_ats_t =                 sdk::function<int32_t(void*, uint64_t, uint8_t)>*;                              
                                                                                           
        // Windows 11                                                                      
        //                                                                                 
        _m00 find_device_t                                   find_device;                    //{ +0x0000    } | .FindDevice
        _m01 set_device_svm_capabilities_t                   set_device_svm_capabilities;    //{ +0x0008    } | .SetDeviceSvmCapabilities
        _m02 set_device_pasid_table_t                        set_device_pasid_table;         //{ +0x0010    } | .SetDevicePasidTable
        _m03 grow_pasid_table_t                              grow_pasid_table;               //{ +0x0018    } | .GrowPasidTable
        _m04 set_pasid_address_space_t                       set_pasid_address_space;        //{ +0x0020    } | .SetPasidAddressSpace
        _m05 flush_tb_t                                      flush_tb;                       //{ +0x0028    } | .FlushTb
        _m06 sdk::function<void(void*, uint64_t, uint32_t)>* flush_device_tb_only;           //{ +0x0030    } | .FlushDeviceTbOnly
        _m07 dismiss_page_fault_t                            dismiss_page_fault;             //{ +0x0038    } | .DismissPageFault
        _m08 get_page_fault_t                                get_page_fault;                 //{ +0x0040    } | .GetPageFault
        _m09 set_message_interrupt_routing_t                 set_message_interrupt_routing;  //{ +0x0048    } | .SetMessageInterruptRouting
        _m10 sdk::function<void(void*)>*                     enable_interrupt;               //{ +0x0050    } | .EnableInterrupt
        _m11 sdk::function<void(void*)>*                     disable_interrupt;              //{ +0x0058    } | .DisableInterrupt
        _m12 sdk::function<uint8_t(void*)>*                  handle_interrupt;               //{ +0x0060    } | .HandleInterrupt
        _m13 check_for_reserved_region_t                     check_for_reserved_region;      //{ +0x0068    } | .CheckForReservedRegion
        _m14 mark_hiber_regions_t                            mark_hiber_regions;             //{ +0x0070    } | .MarkHiberRegions
        _m15 sdk::function<void(void*, uint64_t, uint32_t)>* drain_svm_page_requests;        //{ +0x0078    } | .DrainSvmPageRequests
        _m16 sdk::function<void(void*, uint64_t, uint32_t)>* cancel_page_requests;           //{ +0x0080    } | .CancelPageRequests
        _m17 enumerate_reserved_devices_t                    enumerate_reserved_devices;     //{ +0x0088    } | .EnumerateReservedDevices
        _m18 process_reserved_domains_t                      process_reserved_domains;       //{ +0x0090    } | .ProcessReservedDomains
        _m19 query_acpi_device_mapping_t                     query_acpi_device_mapping;      //{ +0x0098    } | .QueryAcpiDeviceMapping
        _m20 get_rid_acpi_map_count_t                        get_rid_acpi_map_count;         //{ +0x00a0    } | .GetRidAcpiMapCount
        _m21 free_pasid_table_t                              free_pasid_table;               //{ +0x00a8    } | .FreePasidTable
        _m22 configure_ats_t                                 configure_ats;                  //{ +0x00b0    } | .ConfigureAts
                                                                                           
        SDK_MAGIC_PROPERTIES( "_EXT_IOMMU_FUNCTION_TABLE_EXTENDED.$", 0x0, false, 0xb9fdea1dab2082d9 );                              
        SDK_FIXED_SIZE( iommu_function_table_extended_t, 0xb8 );                              
    };                                                                                     
};
#include "magic/iommu_function_table_extended_t.end.hpp"
SDK_VERIFY( struct ext::iommu_function_table_extended_t, 0xb8 );
