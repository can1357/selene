#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/kevent_t.hpp"
#include "../nt/ktimer_t.hpp"
#include "express_link_t.hpp"
#include "whea_context_t.hpp"
#include "express_device_type_t.hpp"
#include "upstream_switchport_t.hpp"
#include "express_error_packet_t.hpp"
#include "acs_hierarchy_support_t.hpp"
#include "downstream_switchport_t.hpp"
#include "express_dpc_work_item_t.hpp"
#include "express_pme_event_type_t.hpp"
#include "express_ptm_capability_t.hpp"
#include "express_error_source_id_t.hpp"
#include "pme_requestor_id_buffer_t.hpp"
#include "express_pme_requestor_id_t.hpp"
#include "express_port_obff_control_t.hpp"
#include "express_root_error_status_t.hpp"
#include "hotplug_worker_parameters_t.hpp"
#include "express_root_error_command_t.hpp"
#include "express_capabilities_register_t.hpp"
#include "express_root_control_register_t.hpp"
#include "../whea/error_source_descriptor_t.hpp"
#include "express_acs_capability_register_t.hpp"
#include "express_ltr_max_latency_register_t.hpp"

namespace io { struct workitem_t; }

#include "magic/express_bridge_t.start.hpp"
namespace pci
{
    struct bridge_t;
    struct root_complex_t;
    struct express_bridge_t;
    struct hotplug_controller_t;

    // [struct _EXPRESS_BRIDGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct express_bridge_t                                                                                                                               
    {                                                                                                                                                     
        struct u0_downstream_t                                                                                                                            
        {                                                                                                                                                 
            struct u4_root_port_t                                                                                                                         
            {                                                                                                                                             
                // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                          
                //                                                                                                                                        
                _m36 uint16_t                                   max_payload_size;                                                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MaxPayloadSize
                _m37 uint16_t                                   read_completion_boundary;                                                                   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ReadCompletionBoundary
                _m38 union pci::express_root_control_register_t root_control;                                                                               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RootControl
                _m39 void*                                      connection_context;                                                                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConnectionContext
                _m40 uint64_t                                   message_routine_spin_lock;                                                                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MessageRoutineSpinLock
                _m41 uint8_t                                    enable_interrupts_on_s0_callback;                                                           //{ +0x0018    +0x0030    +0x0030    +0x0030    } | .EnableInterruptsOnS0Callback
                _m42 uint8_t                                    on_pme_list;                                                                                //{ +0x0019    +0x0031    +0x0031    +0x0031    } | .OnPmeList
                _m43 nt::list_entry_t                           pme_list_entry;                                                                             //{ +0x0020    +0x0038    +0x0038    +0x0038    } | .PmeListEntry
                _m44 enum pci::express_pme_event_type_t         pme_event_type;                                                                             //{ +0x0030    +0x0048    +0x0048    +0x0048    } | .PmeEventType
                _m45 union pci::express_root_error_command_t    root_error_command;                                                                         //{ +0x0038    +0x00a0    +0x00a0    +0x00a0    } | .RootErrorCommand
                _m46 union pci::express_root_error_status_t     root_error_status;                                                                          //{ +0x003c    +0x00a4    +0x00a4    +0x00a4    } | .RootErrorStatus
                _m47 union pci::express_error_source_id_t       error_source_id;                                                                            //{ +0x0040    +0x00a8    +0x00a8    +0x00a8    } | .ErrorSourceId
                                                                                                                                                          
                // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                          
                //                                                                                                                                        
                _m48 struct nt::kevent_t                        ptm_lock;                                                                                   //{ +0x0018    +0x0018    +0x0018    } | .PtmLock
                _m49 struct pci::pme_requestor_id_buffer_t      pme_requestors;                                                                             //{ +0x0050    +0x0050    +0x0050    } | .PmeRequestors
                                                                                                                                                          
                // Windows 10 v1607                                                                                                                       
                //                                                                                                                                        
                _m50 union pci::express_pme_requestor_id_t      pme_requestor_id;                                                                           //{ +0x0034    } | .PmeRequestorId
                                                                                                                                                          
                SDK_MAGIC_PROPERTIES( "_EXPRESS_BRIDGE.Downstream.RootPort.$", 0xb0, true, 0xd19c8ca044514896 );                                                                                          
                SDK_DYNAMIC_SIZE( u4_root_port_t );                                                                                                       
            };                                                                                                                                            
                                                                                                                                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
            //                                                                                                                                            
            _m23 struct pci::express_link_t                                                      express_link;                                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExpressLink
            _m24 uint8_t                                                                         hot_plug_capable;                                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HotPlugCapable
            _m25 struct pci::hotplug_controller_t*                                               hot_plug_controller;                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .HotPlugController
            _m26 int32_t                                                                         interrupts_enabled;                                        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .InterruptsEnabled
            _m27 uint64_t                                                                        interrupt_state_lock;                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .InterruptStateLock
            _m28 int32_t                                                                         delegated_work_items;                                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DelegatedWorkItems
            _m29 uint32_t                                                                        registrants_for_aspm_callback;                             //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .RegistrantsForAspmCallback
            _m30 void*                                                                           aspm_policy_handle;                                        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AspmPolicyHandle
            _m31 uint8_t                                                                         aspm_l0s_override;                                         //{ +0x0058    +0x0060    +0x0060    +0x0060    } | .AspmL0sOverride
            _m32 uint8_t                                                                         aspm_l1_override;                                          //{ +0x0059    +0x0061    +0x0061    +0x0061    } | .AspmL1Override
            _m33 uint32_t                                                                        aspm_override_flags;                                       //{ +0x005c    +0x0064    +0x0064    +0x0064    } | .AspmOverrideFlags
            _m34 uint8_t                                                                         interrupt_connected;                                       //{ +0x0060    +0x0068    +0x0068    +0x0068    } | .InterruptConnected
            _m35 uint32_t                                                                        interrupt_connect_version;                                 //{ +0x0064    +0x006c    +0x006c    +0x006c    } | .InterruptConnectVersion
            _m51 u4_root_port_t                                                                  root_port;                                                 //{ +0x0068    +0x0098    +0x0098    +0x0098    } | .RootPort
            _m52 struct pci::downstream_switchport_t                                             switch_port;                                               //{ +0x0068    +0x0098    +0x0098    +0x0098    } | .SwitchPort
                                                                                                                                                          
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                             
            //                                                                                                                                            
            _m53 void*                                                                           aspm_override_handle;                                      //{ +0x0058    +0x0058    +0x0058    } | .AspmOverrideHandle
            _m54 struct pci::express_dpc_work_item_t                                             express_pc_work_item;                                      //{ +0x0070    +0x0070    +0x0070    } | .ExpressPcWorkItem
                                                                                                                                                          
            SDK_MAGIC_PROPERTIES( "_EXPRESS_BRIDGE.Downstream.$", 0x148, true, 0x225d0da5f4c1500a );                                                         
            SDK_DYNAMIC_SIZE( u0_downstream_t );                                                                                                          
        };                                                                                                                                                
                                                                                                                                                          
        using get_power_parameters_t =  sdk::function<void(void*, union pci::express_ltr_max_latency_register_t*, enum pci::express_port_obff_control_t*)>*;                           
        using ari_forwarding_enable_t = sdk::variant<sdk::function<void(void*, uint8_t)>*, sdk::function<uint8_t(void*, uint8_t)>*>;                           
        using obff_control_t =          sdk::function<void(void*, enum pci::express_port_obff_control_t)>*;                                               
                                                                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                               
        //                                                                                                                                                
        _m000 enum pci::express_device_type_t                                                                                  bridge_type;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BridgeType
        _m001 struct pci::bridge_t*                                                                                            pci_bridge;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PciBridge
        _m002 struct pci::root_complex_t*                                                                                      root_complex;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RootComplex
        _m003 struct pci::express_bridge_t*                                                                                    parent;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Parent
        _m004 sdk::function<void(void*)>*                                                                                      interface_dereference;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InterfaceDereference
        _m005 get_power_parameters_t                                                                                           get_power_parameters;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetPowerParameters
        _m006 ari_forwarding_enable_t                                                                                          ari_forwarding_enable;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .AriForwardingEnable
        _m007 obff_control_t                                                                                                   obff_control;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ObffControl
        _m008 struct pci::express_bridge_t*                                                                                    sibling;                     //{ +0x0040    +0x0048    +0x0048    +0x0048    } | .Sibling
        _m009 union pci::express_capabilities_register_t                                                                       express_capabilities;        //{ +0x0048    +0x0050    +0x0050    +0x0050    } | .ExpressCapabilities
        _m010 uint16_t                                                                                                         aer_capability;              //{ +0x004a    +0x0052    +0x0052    +0x0052    } | .AerCapability
        _m011 uint8_t                                                                                                          ari_forwarding_supported;    //{ +0x004e    +0x0056    +0x0056    +0x0056    } | .AriForwardingSupported
        _m012 uint8_t                                                                                                          ari_forwarding_enabled;      //{ +0x004f    +0x0057    +0x0057    +0x0057    } | .AriForwardingEnabled
        _m013 uint16_t                                                                                                         acs_capability;              //{ +0x0050    +0x0070    +0x0070    +0x0070    } | .AcsCapability
        _m014 struct whea::error_source_descriptor_t                                                                           error_source;                //{ +0x0068    +0x0088    +0x0098    +0x0088    } | .ErrorSource
        _m015 union pci::express_ltr_max_latency_register_t                                                                    upstream_latency;            //{ +0x0434    +0x05bc    +0x05cc    +0x05bc    } | .UpstreamLatency
        _m016 enum pci::express_port_obff_control_t                                                                            obff_configuration;          //{ +0x0438    +0x05c0    +0x05d0    +0x05c0    } | .ObffConfiguration
        _m017 uint16_t                                                                                                         thunderbolt_capability;      //{ +0x043c    +0x05c4    +0x05d4    +0x05c4    } | .ThunderboltCapability
        _m018 uint16_t                                                                                                         physical_slot_number;        //{ +0x043e    +0x05c6    +0x05d6    +0x05c6    } | .PhysicalSlotNumber
        _m019 struct nt::ktimer_t                                                                                              hot_plug_command_timer;      //{ +0x0440    +0x0600    +0x0610    +0x0600    } | .HotPlugCommandTimer
        _m020 struct nt::kdpc_t                                                                                                hot_plug_command_dpc;        //{ +0x0480    +0x0640    +0x0650    +0x0640    } | .HotPlugCommandDpc
        _m021 struct io::workitem_t*                                                                                           hot_plug_work_item;          //{ +0x04c0    +0x0680    +0x0690    +0x0680    } | .HotPlugWorkItem
        _m022 struct pci::hotplug_worker_parameters_t                                                                          hot_plug_worker_parameters;  //{ +0x04c8    +0x0688    +0x0698    +0x0688    } | .HotPlugWorkerParameters
        _m055 u0_downstream_t                                                                                                  downstream;                  //{ +0x04e0    +0x06a0    +0x06b0    +0x06a0    } | .Downstream
        _m056 struct pci::upstream_switchport_t                                                                                upstream_switch_port;        //{ +0x04e0    +0x06a0    +0x06b0    +0x06a0    } | .UpstreamSwitchPort
                                                                                                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                                                 
        //                                                                                                                                                
        _m057 sdk::function<void(void*, uint8_t)>*                                                                             set_ltr_enable;              //{ +0x0040    +0x0040    +0x0040    } | .SetLtrEnable
        _m058 uint16_t                                                                                                         express_pc_capability;       //{ +0x0054    +0x0054    +0x0054    } | .ExpressPcCapability
        _m059 struct nt::kevent_t                                                                                              ari_forwarding_enable_lock;  //{ +0x0058    +0x0058    +0x0058    } | .AriForwardingEnableLock
        _m060 struct pci::express_error_packet_t                                                                               whea_error_packet;           //{ +0x0454    +0x0464    +0x0454    } | .WheaErrorPacket
        _m061 uint16_t                                                                                                         ptm_capability;              //{ +0x05c8    +0x05d8    +0x05c8    } | .PtmCapability
        _m062 struct pci::express_ptm_capability_t                                                                             ptm_capability_block;        //{ +0x05cc    +0x05dc    +0x05cc    } | .PtmCapabilityBlock
        _m063 struct pci::express_bridge_t*                                                                                    ptm_context;                 //{ +0x05d8    +0x05e8    +0x05d8    } | .PtmContext
        _m064 uint32_t                                                                                                         ptm_ref_count;               //{ +0x05e0    +0x05f0    +0x05e0    } | .PtmRefCount
        _m065 uint8_t                                                                                                          force_low_power_links;       //{ +0x05e4    +0x05f4    +0x05e4    } | .ForceLowPowerLinks
        _m066 uint8_t                                                                                                          aspm_policy;                 //{ +0x05e5    +0x05f5    +0x05e5    } | .AspmPolicy
        _m067 struct nt::kevent_t                                                                                              aspm_lock;                   //{ +0x05e8    +0x05f8    +0x05e8    } | .AspmLock
                                                                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                                                           
        //                                                                                                                                                
        _m068 uint8_t                                                                                                          acs_not_needed;              //{ +0x0052    +0x0072    +0x0072    } | .AcsNotNeeded
        _m069 sdk::array<uint16_t, 7>                                                                                          acs_enable_count;            //{ +0x0054    +0x0074    +0x0074    } | .AcsEnableCount
        _m070 uint16_t                                                                                                         ats_capability;              //{ +0x0062    +0x0082    +0x0082    } | .AtsCapability
        _m071 uint32_t                                                                                                         whea_initialized;            //{ +0x0064    +0x0084    +0x0084    } | .WheaInitialized
                                                                                                                                                          
        // Windows 11                                                                                                                                     
        //                                                                                                                                                
        _m072 union pci::express_acs_capability_register_t                                                                     acs_capability_register;     //{ +0x0072    } | .AcsCapabilityRegister
        _m073 enum pci::acs_hierarchy_support_t                                                                                acs_hierarchy_support;       //{ +0x0074    } | .AcsHierarchySupport
        _m074 sdk::array<uint16_t, 3>                                                                                          acs_scenarios;               //{ +0x0078    } | .AcsScenarios
        _m075 struct pci::whea_context_t                                                                                       whea_context;                //{ +0x0080    } | .WheaContext
                                                                                                                                                          
        SDK_MAGIC_PROPERTIES( "_EXPRESS_BRIDGE.$", 0x7e8, true, 0xb74b884a09baa61a );                                                                     
        SDK_DYNAMIC_SIZE( express_bridge_t );                                                                                                             
    };                                                                                                                                                    
};
#include "magic/express_bridge_t.end.hpp"
