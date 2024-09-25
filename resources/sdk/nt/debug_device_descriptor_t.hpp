#pragma once
#include <sdkgen/support_library.hpp>
#include "../kd/namespace_enum_t.hpp"
#include "debug_device_address_t.hpp"
#include "debug_iommu_efi_data_t.hpp"
#include "debug_transport_data_t.hpp"
#include "debug_memory_requirements_t.hpp"

#include "magic/debug_device_descriptor_t.start.hpp"
namespace nt
{
    // [struct _DEBUG_DEVICE_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct debug_device_descriptor_t                                                     
    {                                                                                    
        enum class u0_name_space_t : int32_t                                             
        {                                                                                
            pci =  0x0,                                                                    // WDK 10
            acpi = 0x1,                                                                    // WDK 10
            any =  0x2,                                                                    // WDK 10
            none = 0x3,                                                                    // WDK 10
            max =  0x4,                                                                    // WDK 10
        };                                                                               
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                               
        _m000 uint32_t                                         bus;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Bus
        _m001 uint32_t                                         slot;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Slot
        _m002 uint16_t                                         segment;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Segment
        _m003 uint16_t                                         vendor_id;                  //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .VendorID
        _m004 uint16_t                                         device_id;                  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .DeviceID
        _m005 uint8_t                                          base_class;                 //{ +0x000e    +0x000e    +0x000e    +0x000e    +0x000e    } | .BaseClass
        _m006 uint8_t                                          sub_class;                  //{ +0x000f    +0x000f    +0x000f    +0x000f    +0x000f    } | .SubClass
        _m007 uint8_t                                          prog_if;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ProgIf
        _m008 uint8_t                                          flags;                      //{ +0x0011    +0x0011    +0x0011    +0x0011    +0x0011    } | .Flags
        _m009 uint1_t                                          dbg_hal_scratch_allocated;  //{ +0x0011@0  +0x0011@0  +0x0011@0  +0x0011@0  +0x0011@0  } | .DbgHalScratchAllocated
        _m010 uint1_t                                          dbg_bars_mapped;            //{ +0x0011@1  +0x0011@1  +0x0011@1  +0x0011@1  +0x0011@1  } | .DbgBarsMapped
        _m011 uint1_t                                          dbg_scratch_allocated;      //{ +0x0011@2  +0x0011@2  +0x0011@2  +0x0011@2  +0x0011@2  } | .DbgScratchAllocated
        _m012 uint8_t                                          initialized;                //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .Initialized
        _m013 uint8_t                                          configured;                 //{ +0x0013    +0x0013    +0x0013    +0x0013    +0x0013    } | .Configured
        _m014 sdk::array<struct nt::debug_device_address_t, 6> base_address;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseAddress
        _m015 struct nt::debug_memory_requirements_t           memory;                     //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .Memory
        _m016 uint16_t                                         port_type;                  //{ +0x00cc    +0x00c8    +0x00cc    +0x00cc    +0x00cc    } | .PortType
        _m017 uint16_t                                         port_subtype;               //{ +0x00ce    +0x00ca    +0x00ce    +0x00ce    +0x00ce    } | .PortSubtype
        _m018 void*                                            oem_data;                   //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .OemData
        _m019 uint32_t                                         oem_data_length;            //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .OemDataLength
        _m020 int32_t                                          name_space;                 //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .NameSpace
        _m021 wchar_t*                                         name_space_path;            //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .NameSpacePath
        _m022 uint32_t                                         name_space_path_length;     //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .NameSpacePathLength
        _m023 uint32_t                                         transport_type;             //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .TransportType
        _m024 struct nt::debug_transport_data_t                transport_data;             //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .TransportData
                                                                                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                               
        _m025 uint32_t                                         dbg2_table_index;           //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .Dbg2TableIndex
                                                                                         
        // Windows 11                                                                    
        //                                                                               
        _m026 uint1_t                                          dbg_uncached_memory;        //{ +0x0011@3  } | .DbgUncachedMemory
        _m027 uint1_t                                          dbg_synthetic;              //{ +0x0011@4  } | .DbgSynthetic
        _m028 struct nt::debug_iommu_efi_data_t                efi_io_mmu_data;            //{ +0x0100    } | .EfiIoMmuData
                                                                                         
        SDK_MAGIC_PROPERTIES( "_DEBUG_DEVICE_DESCRIPTOR.$", 0xf8, true, 0x646d9504f4fbdbe4 );                          
        SDK_DYNAMIC_SIZE( debug_device_descriptor_t );                                   
    };                                                                                   
};
#include "magic/debug_device_descriptor_t.end.hpp"
