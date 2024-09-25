#pragma once
#include <sdkgen/support_library.hpp>
#include "scsi_unit_control_type_t.hpp"
#include "../../nt/interface_type_t.hpp"
#include "scsi_unit_control_status_t.hpp"
#include "scsi_adapter_control_type_t.hpp"
#include "scsi_adapter_control_status_t.hpp"

namespace nt { struct scsi_request_block_t; }

#include "magic/hw_initialization_data_t.start.hpp"
namespace stor::port
{
    struct port_configuration_information_t;

    // [struct _HW_INITIALIZATION_DATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct hw_initialization_data_t                                                      
    {                                                                                    
        using phw_startio_t =         sdk::function<uint8_t(void*, struct nt::scsi_request_block_t*)>*;                            
        using hw_find_adapter_t =     sdk::variant<sdk::function<uint32_t(void*, void*, void*, char*, struct stor::port::port_configuration_information_t*, uint8_t*)>*, void*>;                            
        using phw_adapter_control_t = sdk::function<enum stor::port::scsi_adapter_control_status_t(void*, enum stor::port::scsi_adapter_control_type_t, void*)>*;                            
        using hw_build_io_t =         sdk::function<uint8_t(void*, struct nt::scsi_request_block_t*)>*;                            
        using hw_unit_control_t =     sdk::function<enum stor::port::scsi_unit_control_status_t(void*, enum stor::port::scsi_unit_control_type_t, void*)>*;                            
                                                                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                               
        _m000 uint32_t                                       hw_initialization_data_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .HwInitializationDataSize
        _m001 enum nt::interface_type_t                      adapter_interface_type;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AdapterInterfaceType
        _m002 sdk::function<uint8_t(void*)>*                 hw_initialize;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .HwInitialize
        _m003 phw_startio_t                                  hw_start_io;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .HwStartIo
        _m004 sdk::function<uint8_t(void*)>*                 hw_interrupt;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .HwInterrupt
        _m005 hw_find_adapter_t                              hw_find_adapter;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .HwFindAdapter
        _m006 sdk::function<uint8_t(void*, uint32_t)>*       hw_reset_bus;                 //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HwResetBus
        _m007 sdk::function<void(void*)>*                    hw_dma_started;               //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .HwDmaStarted
        _m008 sdk::function<uint8_t(void*, void*, uint8_t)>* hw_adapter_state;             //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .HwAdapterState
        _m009 uint32_t                                       device_extension_size;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DeviceExtensionSize
        _m010 uint32_t                                       specific_lu_extension_size;   //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .SpecificLuExtensionSize
        _m011 uint32_t                                       srb_extension_size;           //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .SrbExtensionSize
        _m012 uint32_t                                       number_of_access_ranges;      //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .NumberOfAccessRanges
        _m013 uint8_t                                        map_buffers;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .MapBuffers
        _m014 uint8_t                                        need_physical_addresses;      //{ +0x0059    +0x0059    +0x0059    +0x0059    +0x0059    } | .NeedPhysicalAddresses
        _m015 uint8_t                                        tagged_queuing;               //{ +0x005a    +0x005a    +0x005a    +0x005a    +0x005a    } | .TaggedQueuing
        _m016 uint8_t                                        auto_request_sense;           //{ +0x005b    +0x005b    +0x005b    +0x005b    +0x005b    } | .AutoRequestSense
        _m017 uint8_t                                        multiple_request_per_lu;      //{ +0x005c    +0x005c    +0x005c    +0x005c    +0x005c    } | .MultipleRequestPerLu
        _m018 uint8_t                                        receive_event;                //{ +0x005d    +0x005d    +0x005d    +0x005d    +0x005d    } | .ReceiveEvent
        _m019 uint16_t                                       vendor_id_length;             //{ +0x005e    +0x005e    +0x005e    +0x005e    +0x005e    } | .VendorIdLength
        _m020 void*                                          vendor_id;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .VendorId
        _m021 uint16_t                                       reserved_ushort;              //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .ReservedUshort
        _m022 uint16_t                                       port_version_flags;           //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .PortVersionFlags
        _m023 uint16_t                                       device_id_length;             //{ +0x006a    +0x006a    +0x006a    +0x006a    +0x006a    } | .DeviceIdLength
        _m024 void*                                          device_id;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .DeviceId
        _m025 phw_adapter_control_t                          hw_adapter_control;           //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .HwAdapterControl
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                               
        _m026 hw_build_io_t                                  hw_build_io;                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .HwBuildIo
        _m027 sdk::function<void(void*)>*                    hw_free_adapter_resources;    //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .HwFreeAdapterResources
        _m028 sdk::function<void(void*, void*)>*             hw_process_service_request;   //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .HwProcessServiceRequest
        _m029 sdk::function<void(void*)>*                    hw_complete_service_irp;      //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .HwCompleteServiceIrp
        _m030 sdk::function<void(void*, void*)>*             hw_initialize_tracing;        //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .HwInitializeTracing
        _m031 sdk::function<void(void*)>*                    hw_cleanup_tracing;           //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .HwCleanupTracing
        _m032 sdk::function<void(void*, uint8_t)>*           hw_tracing_enabled;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .HwTracingEnabled
        _m033 uint32_t                                       feature_support;              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .FeatureSupport
        _m034 uint32_t                                       srb_type_flags;               //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .SrbTypeFlags
        _m035 uint32_t                                       address_type_flags;           //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .AddressTypeFlags
        _m036 hw_unit_control_t                              hw_unit_control;              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .HwUnitControl
                                                                                         
        SDK_NONVOL_PROPERTIES( "_HW_INITIALIZATION_DATA.$", 0xd0, true, 0x4fd86c69a468edc );                            
        SDK_DYNAMIC_SIZE( hw_initialization_data_t );                                    
    };                                                                                   
};
#include "magic/hw_initialization_data_t.end.hpp"
