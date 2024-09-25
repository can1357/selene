#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_type_t.hpp"
#include "set_information_class_t.hpp"
#include "query_information_class_t.hpp"

namespace dma { struct adapter_t;                  }
namespace nt  { struct bus_handler_t;              }
namespace nt  { struct device_description_t;       }
namespace nt  { struct device_object_t;            }
namespace nt  { struct drive_layout_information_t; }
namespace pm  { struct dispatch_table_t;           }
namespace wdf { struct translator_interface_t;     }

#include "magic/dispatch_t.start.hpp"
namespace hal
{
    // [struct HAL_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dispatch_t                                                                           
    {                                                                                           
        using p_hal_query_system_information_t =     sdk::function<int32_t(enum hal::query_information_class_t, uint32_t, void*, uint32_t*)>*;                                   
        using p_hal_set_system_information_t =       sdk::function<int32_t(enum hal::set_information_class_t, uint32_t, void*)>*;                                   
        using p_hal_query_bus_slots_t =              sdk::function<int32_t(struct nt::bus_handler_t*, uint32_t, uint32_t*, uint32_t*)>*;                                   
        using p_hal_examine_mbr_t =                  sdk::function<void(struct nt::device_object_t*, uint32_t, uint32_t, void**)>*;                                   
        using p_hal_io_read_partition_table_t =      sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint8_t, struct nt::drive_layout_information_t**)>*;                                   
        using p_hal_io_set_partition_information_t = sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint32_t, uint32_t)>*;                                   
        using p_hal_io_write_partition_table_t =     sdk::function<int32_t(struct nt::device_object_t*, uint32_t, uint32_t, uint32_t, struct nt::drive_layout_information_t*)>*;                                   
        using p_hal_handler_for_bus_t =              sdk::function<struct nt::bus_handler_t*(enum nt::interface_type_t, uint32_t)>*;                                   
        using p_hal_init_power_management_t =        sdk::function<int32_t(struct pm::dispatch_table_t*, struct pm::dispatch_table_t**)>*;                                   
        using hal_get_dma_adapter_t =                sdk::function<struct dma::adapter_t*(void*, struct nt::device_description_t*, uint32_t*)>*;                                   
        using p_hal_get_interrupt_translator_t =     sdk::function<int32_t(enum nt::interface_type_t, uint32_t, enum nt::interface_type_t, uint16_t, uint16_t, struct wdf::translator_interface_t*, uint32_t*)>*;                                   
        using p_hal_get_acpi_table_t =               sdk::function<void*(uint32_t, const char*, const char*)>*;                                   
        using p_hal_get_prm_cache_t =                sdk::function<void(nt::list_entry_t**, nt::list_entry_t**)>*;                                   
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                      
        _m00 uint32_t                                        version;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 p_hal_query_system_information_t                hal_query_system_information;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HalQuerySystemInformation
        _m02 p_hal_set_system_information_t                  hal_set_system_information;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HalSetSystemInformation
        _m03 p_hal_query_bus_slots_t                         hal_query_bus_slots;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .HalQueryBusSlots
        _m04 p_hal_examine_mbr_t                             hal_examine_mbr;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HalExamineMBR
        _m05 p_hal_io_read_partition_table_t                 hal_io_read_partition_table;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HalIoReadPartitionTable
        _m06 p_hal_io_set_partition_information_t            hal_io_set_partition_information;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HalIoSetPartitionInformation
        _m07 p_hal_io_write_partition_table_t                hal_io_write_partition_table;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .HalIoWritePartitionTable
        _m08 p_hal_handler_for_bus_t                         hal_reference_handler_for_bus;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .HalReferenceHandlerForBus
        _m09 sdk::function<void(struct nt::bus_handler_t*)>* hal_reference_bus_handler;           //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .HalReferenceBusHandler
        _m10 sdk::function<void(struct nt::bus_handler_t*)>* hal_dereference_bus_handler;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .HalDereferenceBusHandler
        _m11 sdk::function<int32_t()>*                       hal_init_pnp_driver;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .HalInitPnpDriver
        _m12 p_hal_init_power_management_t                   hal_init_power_management;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .HalInitPowerManagement
        _m13 hal_get_dma_adapter_t                           hal_get_dma_adapter;                 //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .HalGetDmaAdapter
        _m14 p_hal_get_interrupt_translator_t                hal_get_interrupt_translator;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HalGetInterruptTranslator
        _m15 sdk::function<int32_t()>*                       hal_start_mirroring;                 //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .HalStartMirroring
        _m16 sdk::function<int32_t(uint32_t)>*               hal_end_mirroring;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .HalEndMirroring
        _m17 sdk::function<int32_t(int64_t, int64_t)>*       hal_mirror_physical_memory;          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .HalMirrorPhysicalMemory
        _m18 sdk::function<void()>*                          hal_end_of_boot;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .HalEndOfBoot
        _m19 sdk::function<int32_t(int64_t, int64_t)>*       hal_mirror_verify;                   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .HalMirrorVerify
        _m20 p_hal_get_acpi_table_t                          hal_get_cached_acpi_table;           //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .HalGetCachedAcpiTable
        _m21 sdk::function<void(sdk::function<void()>*)>*    hal_set_pci_error_handler_callback;  //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .HalSetPciErrorHandlerCallback
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m22 p_hal_get_prm_cache_t                           hal_get_prm_cache;                   //{ +0x00b8    } | .HalGetPrmCache
                                                                                                
        SDK_MAGIC_PROPERTIES( "HAL_DISPATCH.$", 0xb8, true, 0x44fcced1c64e21c6 );                                   
        SDK_DYNAMIC_SIZE( dispatch_t );                                                         
    };                                                                                          
};
#include "magic/dispatch_t.end.hpp"
