#pragma once
#include <sdkgen/support_library.hpp>
#include "delay_type_t.hpp"
#include "slot_number_t.hpp"
#include "bridge_resources_t.hpp"
#include "bridge_requirements_t.hpp"
#include "express_device_type_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../cm/partial_resource_descriptor_t.hpp"

namespace nt { struct interface_t; }

#include "magic/bridge_t.start.hpp"
namespace pci
{
    struct bus_t;
    struct npem_control_t;
    struct express_bridge_t;
    struct custom_settings_t;
    struct npem_control_interface_t;
    union express_device_control_register_t;

    // [struct _PCI_BRIDGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bridge_t                                                                             
    {                                                                                           
        struct u0_attributes_t                                                                  
        {                                                                                       
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                  
            _m10 uint1_t legacy_vga_bit_set;                                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .LegacyVgaBitSet
            _m11 uint1_t isa_bit_set;                                                             //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .IsaBitSet
            _m12 uint1_t subtractive;                                                             //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Subtractive
                                                                                                
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                     
            //                                                                                  
            _m13 uint1_t child_of_vga_enabled_bridge;                                             //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .ChildOfVgaEnabledBridge
                                                                                                
            SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE.Attributes.$", 0x4, true, 0x163e2910b19d15c );                                                                     
            SDK_FIXED_SIZE( u0_attributes_t, 0x4 );                                                                     
        };                                                                                      
                                                                                                
        using delay_passive_t =                 sdk::variant<sdk::function<void(void*, enum pci::delay_type_t)>*, sdk::function<void(void*, int64_t*)>*>;                                         
        using query_fpga_control_interface_t =  sdk::function<int32_t(void*, uint16_t, struct nt::interface_t*)>*;                                         
        using control_error_reporting_t =       sdk::function<void(void*, union pci::express_device_control_register_t*, uint8_t)>*;                                         
        using query_npem_control_interface_t =  sdk::variant<sdk::function<int32_t(void*, uint16_t, struct pci::npem_control_interface_t*, struct pci::npem_control_t**)>*, sdk::function<int32_t(void*, uint16_t, uint16_t, struct pci::npem_control_interface_t*, struct pci::npem_control_t**)>*>;                                         
        using get_delay_time_t =                sdk::function<int32_t(void*, enum pci::delay_type_t, int64_t*)>*;                                         
        using query_device_custom_settings_t =  sdk::function<void(void*, struct pci::custom_settings_t**)>*;                                         
        using log_bridge_d_state_transition_t = sdk::function<void(void*, uint8_t, enum nt::device_power_state_t)>*;                                         
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m000 struct pci::bus_t*                       bus;                                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Bus
        _m001 struct pci::slot_number_t                slot;                                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Slot
        _m002 uint8_t                                  header_type;                               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HeaderType
        _m003 struct pci::bridge_requirements_t        minimum_requirements;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumRequirements
        _m004 struct pci::bridge_requirements_t        preferred_requirements;                    //{ +0x0070    +0x00b0    +0x00b0    +0x00b0    } | .PreferredRequirements
        _m005 struct pci::bridge_requirements_t        fallback_requirements;                     //{ +0x00d0    +0x0150    +0x0150    +0x0150    } | .FallbackRequirements
        _m006 struct pci::bridge_requirements_t        subtractive_requirements;                  //{ +0x0130    +0x01f0    +0x01f0    +0x01f0    } | .SubtractiveRequirements
        _m007 union pci::bridge_resources_t            bios_configuration;                        //{ +0x0190    +0x0290    +0x0290    +0x0290    } | .BiosConfiguration
        _m008 union pci::bridge_resources_t            resources;                                 //{ +0x0208    +0x0308    +0x0308    +0x0308    } | .Resources
        _m009 struct cm::partial_resource_descriptor_t interrupt_resource;                        //{ +0x0280    +0x0380    +0x0380    +0x0380    } | .InterruptResource
        _m014 u0_attributes_t                          attributes;                                //{ +0x0294    +0x0394    +0x0394    +0x0394    } | .Attributes
        _m015 uint32_t                                 attributes_as_ulong;                       //{ +0x0294    +0x0394    +0x0394    +0x0394    } | .AttributesAsULONG
        _m016 uint1_t                                  got_requirements;                          //{ +0x0298@1  +0x0398@1  +0x0398@1  +0x0398@1  } | .GotRequirements
        _m017 uint1_t                                  io_window_on_boot_config;                  //{ +0x0298@2  +0x0398@2  +0x0398@2  +0x0398@2  } | .IoWindowOnBootConfig
        _m018 uint1_t                                  interrupt_connected;                       //{ +0x0298@3  +0x0398@3  +0x0398@3  +0x0398@3  } | .InterruptConnected
        _m019 uint1_t                                  hyper_transport_path;                      //{ +0x0298@4  +0x0398@4  +0x0398@4  +0x0398@4  } | .HyperTransportPath
        _m020 uint1_t                                  msi_ht_conversion_path;                    //{ +0x0298@5  +0x0398@5  +0x0398@5  +0x0398@5  } | .MsiHtConversionPath
        _m021 uint1_t                                  d3_causes66m_hz_b2;                        //{ +0x0298@6  +0x0398@6  +0x0398@6  +0x0398@6  } | .D3Causes66MHzB2
        _m022 uint1_t                                  avoid_child_d1d2_for_sld;                  //{ +0x0298@7  +0x0398@7  +0x0398@7  +0x0398@7  } | .AvoidChildD1D2ForSld
        _m023 uint1_t                                  disable_link_power_management;             //{ +0x0298@8  +0x0398@8  +0x0398@8  +0x0398@8  } | .DisableLinkPowerManagement
        _m024 uint1_t                                  express_base_version11_or_greater;         //{ +0x0298@9  +0x0398@9  +0x0398@9  +0x0398@9  } | .ExpressBaseVersion11OrGreater
        _m025 uint1_t                                  secondary_bus_reset_on_link_state_change;  //{ +0x0298@10 +0x0398@10 +0x0398@10 +0x0398@10 } | .SecondaryBusResetOnLinkStateChange
        _m026 uint1_t                                  link_disable_on_slot_power_down;           //{ +0x0298@11 +0x0398@11 +0x0398@11 +0x0398@11 } | .LinkDisableOnSlotPowerDown
        _m027 uint1_t                                  disable_child_power_management;            //{ +0x0298@12 +0x0398@12 +0x0398@12 +0x0398@12 } | .DisableChildPowerManagement
        _m028 uint1_t                                  downstream_device_not_removable;           //{ +0x0298@13 +0x0398@13 +0x0398@13 +0x0398@13 } | .DownstreamDeviceNotRemovable
        _m029 uint1_t                                  enable_all_bridge_interrupts;              //{ +0x0298@14 +0x0398@14 +0x0398@14 +0x0398@14 } | .EnableAllBridgeInterrupts
        _m030 uint1_t                                  path_is_express;                           //{ +0x0298@15 +0x0398@15 +0x0398@15 +0x0398@15 } | .PathIsExpress
        _m031 uint1_t                                  e2etlp_prefix_supported;                   //{ +0x0298@17 +0x0398@17 +0x0398@16 +0x0398@17 } | .E2ETLPPrefixSupported
        _m032 uint1_t                                  atomics_routing_supported;                 //{ +0x0298@18 +0x0398@18 +0x0398@17 +0x0398@18 } | .AtomicsRoutingSupported
        _m033 uint1_t                                  atomics32_bit_completer_supported;         //{ +0x0298@19 +0x0398@19 +0x0398@18 +0x0398@19 } | .Atomics32BitCompleterSupported
        _m034 uint1_t                                  atomics64_bit_completer_supported;         //{ +0x0298@20 +0x0398@20 +0x0398@19 +0x0398@20 } | .Atomics64BitCompleterSupported
        _m035 uint1_t                                  atomics128_bit_completer_supported;        //{ +0x0298@21 +0x0398@21 +0x0398@20 +0x0398@21 } | .Atomics128BitCompleterSupported
        _m036 uint1_t                                  acs_cap_incorrect_format;                  //{ +0x0298@22 +0x0398@22 +0x0398@21 +0x0398@22 } | .AcsCapIncorrectFormat
        _m037 uint8_t                                  pci_x_capability;                          //{ +0x029c    +0x039c    +0x039c    +0x039c    } | .PciXCapability
        _m038 uint8_t                                  express_capability;                        //{ +0x029d    +0x039d    +0x039d    +0x039d    } | .ExpressCapability
        _m039 struct pci::express_bridge_t*            express_bridge;                            //{ +0x02a0    +0x03a0    +0x03a8    +0x03a0    } | .ExpressBridge
        _m040 delay_passive_t                          delay_passive;                             //{ +0x02a8    +0x03a8    +0x03b8    +0x03a8    } | .DelayPassive
        _m041 sdk::function<void(void*, uint32_t)>*    stall_dispatch;                            //{ +0x02b0    +0x03b0    +0x03c0    +0x03b0    } | .StallDispatch
        _m042 void*                                    interface_context;                         //{ +0x02b8    +0x03b8    +0x03c8    +0x03b8    } | .InterfaceContext
                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                      
        _m043 uint1_t                                  under_thunderbolt_hierarchy;               //{ +0x0398@23 +0x0398@22 +0x0398@23 } | .UnderThunderboltHierarchy
        _m044 uint1_t                                  thunderbolt_bridge_no_d3;                  //{ +0x0398@24 +0x0398@23 +0x0398@24 } | .ThunderboltBridgeNoD3
        _m045 sdk::function<void(void*)>*              set_external_facing_port;                  //{ +0x03c0    +0x03d0    +0x03c0    } | .SetExternalFacingPort
        _m046 query_fpga_control_interface_t           query_fpga_control_interface;              //{ +0x03c8    +0x03d8    +0x03c8    } | .QueryFpgaControlInterface
        _m047 control_error_reporting_t                control_error_reporting;                   //{ +0x03d0    +0x03e0    +0x03d0    } | .ControlErrorReporting
        _m048 query_npem_control_interface_t           query_npem_control_interface;              //{ +0x03d8    +0x03e8    +0x03d8    } | .QueryNpemControlInterface
                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                         
        //                                                                                      
        _m049 uint1_t                                  root_port_domain;                          //{ +0x0298@16 +0x0398@16 +0x0398@16 } | .RootPortDomain
                                                                                                
        // Windows 11                                                                           
        //                                                                                      
        _m050 enum pci::express_device_type_t          bridge_type;                               //{ +0x03a0    } | .BridgeType
        _m051 get_delay_time_t                         get_delay_time;                            //{ +0x03b0    } | .GetDelayTime
        _m052 query_device_custom_settings_t           query_device_custom_settings;              //{ +0x03f0    } | .QueryDeviceCustomSettings
        _m053 log_bridge_d_state_transition_t          log_bridge_d_state_transition;             //{ +0x03f8    } | .LogBridgeDStateTransition
                                                                                                
        SDK_MAGIC_PROPERTIES( "_PCI_BRIDGE.$", 0x3e0, true, 0x280809fae75a5443 );                                         
        SDK_DYNAMIC_SIZE( bridge_t );                                                           
    };                                                                                          
};
#include "magic/bridge_t.end.hpp"
SDK_VERIFY( struct pci::bridge_t::u0_attributes_t, 0x4 );
