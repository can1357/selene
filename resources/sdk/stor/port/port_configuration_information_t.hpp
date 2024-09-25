#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_region_t.hpp"
#include "../../dma/speed_t.hpp"
#include "../../dma/width_t.hpp"
#include "../../nt/interface_type_t.hpp"
#include "../../nt/kinterrupt_mode_t.hpp"
#include "stor_synchronization_model_t.hpp"
#include "interrupt_synchronization_mode_t.hpp"

#include "magic/port_configuration_information_t.start.hpp"
namespace stor::port
{
    struct access_range_t;

    // [struct _PORT_CONFIGURATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct port_configuration_information_t                                                     
    {                                                                                           
        using interrupt_synchronization_mode_t = enum stor::port::interrupt_synchronization_mode_t;                                   
                                                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                      
        _m000 uint32_t                                       length;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m001 uint32_t                                       system_io_bus_number;                //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SystemIoBusNumber
        _m002 enum nt::interface_type_t                      adapter_interface_type;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AdapterInterfaceType
        _m003 uint32_t                                       bus_interrupt_level;                 //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .BusInterruptLevel
        _m004 uint32_t                                       bus_interrupt_vector;                //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .BusInterruptVector
        _m005 enum nt::kinterrupt_mode_t                     interrupt_mode;                      //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .InterruptMode
        _m006 uint32_t                                       maximum_transfer_length;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .MaximumTransferLength
        _m007 uint32_t                                       number_of_physical_breaks;           //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .NumberOfPhysicalBreaks
        _m008 uint32_t                                       dma_channel;                         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DmaChannel
        _m009 uint32_t                                       dma_port;                            //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .DmaPort
        _m010 enum dma::width_t                              dma_width;                           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .DmaWidth
        _m011 enum dma::speed_t                              dma_speed;                           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .DmaSpeed
        _m012 uint32_t                                       alignment_mask;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .AlignmentMask
        _m013 uint32_t                                       number_of_access_ranges;             //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .NumberOfAccessRanges
        _m014 sdk::array<struct stor::port::access_range_t>* access_ranges;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .AccessRanges
        _m015 uint8_t                                        number_of_buses;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .NumberOfBuses
        _m016 sdk::array<uint8_t, 8>                         initiator_bus_id;                    //{ +0x0049    +0x0049    +0x0049    +0x0049    +0x0049    } | .InitiatorBusId
        _m017 uint8_t                                        scatter_gather;                      //{ +0x0051    +0x0051    +0x0051    +0x0051    +0x0051    } | .ScatterGather
        _m018 uint8_t                                        master;                              //{ +0x0052    +0x0052    +0x0052    +0x0052    +0x0052    } | .Master
        _m019 uint8_t                                        caches_data;                         //{ +0x0053    +0x0053    +0x0053    +0x0053    +0x0053    } | .CachesData
        _m020 uint8_t                                        adapter_scans_down;                  //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .AdapterScansDown
        _m021 uint8_t                                        atdisk_primary_claimed;              //{ +0x0055    +0x0055    +0x0055    +0x0055    +0x0055    } | .AtdiskPrimaryClaimed
        _m022 uint8_t                                        atdisk_secondary_claimed;            //{ +0x0056    +0x0056    +0x0056    +0x0056    +0x0056    } | .AtdiskSecondaryClaimed
        _m023 uint8_t                                        dma32_bit_addresses;                 //{ +0x0057    +0x0057    +0x0057    +0x0057    +0x0057    } | .Dma32BitAddresses
        _m024 uint8_t                                        demand_mode;                         //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .DemandMode
        _m025 uint8_t                                        map_buffers;                         //{ +0x0059    +0x0059    +0x0059    +0x0059    +0x0059    } | .MapBuffers
        _m026 uint8_t                                        need_physical_addresses;             //{ +0x005a    +0x005a    +0x005a    +0x005a    +0x005a    } | .NeedPhysicalAddresses
        _m027 uint8_t                                        tagged_queuing;                      //{ +0x005b    +0x005b    +0x005b    +0x005b    +0x005b    } | .TaggedQueuing
        _m028 uint8_t                                        auto_request_sense;                  //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .AutoRequestSense
        _m029 uint8_t                                        multiple_request_per_lu;             //{ +0x005d    +0x005d    +0x005d    +0x005d    +0x005d    } | .MultipleRequestPerLu
        _m030 uint8_t                                        receive_event;                       //{ +0x005e    +0x005e    +0x005e    +0x005e    +0x005e    } | .ReceiveEvent
        _m031 uint8_t                                        real_mode_initialized;               //{ +0x005f    +0x005f    +0x005f    +0x005f    +0x005f    } | .RealModeInitialized
        _m032 uint8_t                                        buffer_access_scsi_port_controlled;  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .BufferAccessScsiPortControlled
        _m033 uint8_t                                        maximum_number_of_targets;           //{ +0x0061    +0x0061    +0x0061    +0x0061    +0x0061    } | .MaximumNumberOfTargets
        _m034 uint32_t                                       slot_number;                         //{ +0x0064    +0x0064    +0x0064    +0x0064    +0x0064    } | .SlotNumber
        _m035 uint32_t                                       bus_interrupt_level2;                //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .BusInterruptLevel2
        _m036 uint32_t                                       bus_interrupt_vector2;               //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .BusInterruptVector2
        _m037 enum nt::kinterrupt_mode_t                     interrupt_mode2;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .InterruptMode2
        _m038 uint32_t                                       dma_channel2;                        //{ +0x0074    +0x0074    +0x0074    +0x0074    +0x0074    } | .DmaChannel2
        _m039 uint32_t                                       dma_port2;                           //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .DmaPort2
        _m040 enum dma::width_t                              dma_width2;                          //{ +0x007c    +0x007c    +0x007c    +0x007c    +0x007c    } | .DmaWidth2
        _m041 enum dma::speed_t                              dma_speed2;                          //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .DmaSpeed2
        _m042 uint32_t                                       device_extension_size;               //{ +0x0084    +0x0084    +0x0084    +0x0084    +0x0084    } | .DeviceExtensionSize
        _m043 uint32_t                                       specific_lu_extension_size;          //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .SpecificLuExtensionSize
        _m044 uint32_t                                       srb_extension_size;                  //{ +0x008c    +0x008c    +0x008c    +0x008c    +0x008c    } | .SrbExtensionSize
        _m045 uint8_t                                        dma64_bit_addresses;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .Dma64BitAddresses
        _m046 uint8_t                                        reset_target_supported;              //{ +0x0091    +0x0091    +0x0091    +0x0091    +0x0091    } | .ResetTargetSupported
        _m047 uint8_t                                        maximum_number_of_logical_units;     //{ +0x0092    +0x0092    +0x0092    +0x0092    +0x0092    } | .MaximumNumberOfLogicalUnits
        _m048 uint8_t                                        wmi_data_provider;                   //{ +0x0093    +0x0093    +0x0093    +0x0093    +0x0093    } | .WmiDataProvider
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                                      
        _m049 void*                                          miniport_dump_data;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MiniportDumpData
        _m050 uint8_t                                        srb_type;                            //{ +0x0062    +0x0062    +0x0062    +0x0062    } | .SrbType
        _m051 uint8_t                                        address_type;                        //{ +0x0063    +0x0063    +0x0063    +0x0063    } | .AddressType
        _m052 enum stor::port::stor_synchronization_model_t  synchronization_model;               //{ +0x0094    +0x0094    +0x0094    +0x0094    } | .SynchronizationModel
        _m053 sdk::function<uint8_t(void*, uint32_t)>*       hw_ms_interrupt_routine;             //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .HwMSInterruptRoutine
        _m054 interrupt_synchronization_mode_t               interrupt_synchronization_mode;      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .InterruptSynchronizationMode
        _m055 struct stor::port::memory_region_t             dump_region;                         //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .DumpRegion
        _m056 uint32_t                                       requested_dump_buffer_size;          //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .RequestedDumpBufferSize
        _m057 uint8_t                                        virtual_device;                      //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .VirtualDevice
        _m058 uint8_t                                        dump_mode;                           //{ +0x00c5    +0x00c5    +0x00c5    +0x00c5    } | .DumpMode
        _m059 uint32_t                                       extended_flags1;                     //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ExtendedFlags1
        _m060 uint32_t                                       max_number_of_io;                    //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .MaxNumberOfIO
        _m061 uint32_t                                       max_i_os_per_lun;                    //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .MaxIOsPerLun
        _m062 uint32_t                                       initial_lun_queue_depth;             //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .InitialLunQueueDepth
        _m063 uint32_t                                       bus_reset_hold_time;                 //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .BusResetHoldTime
        _m064 uint32_t                                       feature_support;                     //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .FeatureSupport
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                      
        _m065 uint8_t                                        dma_address_width;                   //{ +0x00c6    +0x00c6    +0x00c6    } | .DmaAddressWidth
                                                                                                
        // WDK 10                                                                               
        //                                                                                      
        _m066 sdk::array<uint8_t, 2>                         reserved_uchars;                     //{ +0x0062    } | .ReservedUchars
                                                                                                
        SDK_NONVOL_PROPERTIES( "_PORT_CONFIGURATION_INFORMATION.$", 0xe0, true, 0x1cdb9ad9c9840cf6 );                                   
        SDK_DYNAMIC_SIZE( port_configuration_information_t );                                   
    };                                                                                          
};
#include "magic/port_configuration_information_t.end.hpp"
