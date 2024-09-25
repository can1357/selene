#pragma once
#include <sdkgen/support_library.hpp>
#include "../dma/speed_t.hpp"
#include "../dma/width_t.hpp"
#include "../nt/interface_type_t.hpp"
#include "../nt/kinterrupt_mode_t.hpp"

namespace nt { struct emulator_access_entry_t; }

#include "magic/port_config_info_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PORT_CONFIG_INFO]
    // => WDK 10 (NV)
    //
    struct port_config_info_t                                                          
    {                                                                                  
        // WDK 10                                                                      
        //                                                                             
        _m000 uint32_t                               length;                             //{ +0x0000    } | .Length
        _m001 uint32_t                               system_io_bus_number;               //{ +0x0004    } | .SystemIoBusNumber
        _m002 enum nt::interface_type_t              adapter_interface_type;             //{ +0x0008    } | .AdapterInterfaceType
        _m003 uint32_t                               bus_interrupt_level;                //{ +0x000c    } | .BusInterruptLevel
        _m004 uint32_t                               bus_interrupt_vector;               //{ +0x0010    } | .BusInterruptVector
        _m005 enum nt::kinterrupt_mode_t             interrupt_mode;                     //{ +0x0014    } | .InterruptMode
        _m006 uint32_t                               num_emulator_access_entries;        //{ +0x0018    } | .NumEmulatorAccessEntries
        _m007 struct nt::emulator_access_entry_t*    emulator_access_entries;            //{ +0x0020    } | .EmulatorAccessEntries
        _m008 uint64_t                               emulator_access_entries_context;    //{ +0x0028    } | .EmulatorAccessEntriesContext
        _m009 int64_t                                vdm_physical_video_memory_address;  //{ +0x0030    } | .VdmPhysicalVideoMemoryAddress
        _m010 uint32_t                               vdm_physical_video_memory_length;   //{ +0x0038    } | .VdmPhysicalVideoMemoryLength
        _m011 uint32_t                               hardware_state_size;                //{ +0x003c    } | .HardwareStateSize
        _m012 uint32_t                               dma_channel;                        //{ +0x0040    } | .DmaChannel
        _m013 uint32_t                               dma_port;                           //{ +0x0044    } | .DmaPort
        _m014 uint8_t                                dma_shareable;                      //{ +0x0048    } | .DmaShareable
        _m015 uint8_t                                interrupt_shareable;                //{ +0x0049    } | .InterruptShareable
        _m016 uint8_t                                master;                             //{ +0x004a    } | .Master
        _m017 enum dma::width_t                      dma_width;                          //{ +0x004c    } | .DmaWidth
        _m018 enum dma::speed_t                      dma_speed;                          //{ +0x0050    } | .DmaSpeed
        _m019 uint8_t                                b_map_buffers;                      //{ +0x0054    } | .bMapBuffers
        _m020 uint8_t                                need_physical_addresses;            //{ +0x0055    } | .NeedPhysicalAddresses
        _m021 uint8_t                                demand_mode;                        //{ +0x0056    } | .DemandMode
        _m022 uint32_t                               maximum_transfer_length;            //{ +0x0058    } | .MaximumTransferLength
        _m023 uint32_t                               number_of_physical_breaks;          //{ +0x005c    } | .NumberOfPhysicalBreaks
        _m024 uint8_t                                scatter_gather;                     //{ +0x0060    } | .ScatterGather
        _m025 uint32_t                               maximum_scatter_gather_chunk_size;  //{ +0x0064    } | .MaximumScatterGatherChunkSize
        _m026 sdk::function<void*(void*, uint8_t*)>* video_port_get_proc_address;        //{ +0x0068    } | .VideoPortGetProcAddress
        _m027 wchar_t*                               driver_registry_path;               //{ +0x0070    } | .DriverRegistryPath
        _m028 uint64_t                               system_memory_size;                 //{ +0x0078    } | .SystemMemorySize
                                                                                       
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_CONFIG_INFO.$", 0x0, false, 0x894654183f1a3aff );                                  
        SDK_FIXED_SIZE( port_config_info_t, 0x80 );                                    
    };                                                                                 
};
#include "magic/port_config_info_t.end.hpp"
SDK_VERIFY( struct video::port_config_info_t, 0x80 );
