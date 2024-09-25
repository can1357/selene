#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "kevent_t.hpp"
#include "../power/state_t.hpp"
#include "interface_type_t.hpp"
#include "profile_status_t.hpp"
#include "../po/irp_manager_t.hpp"
#include "../po/device_notify_t.hpp"
#include "../pnp/devnode_state_t.hpp"
#include "../po/directed_drips_state_t.hpp"
#include "../pnp/problem_code_log_entry_t.hpp"

namespace cm  { struct resource_list_t;              }
namespace io  { struct resource_requirements_list_t; }
namespace pnp { struct rebalance_trace_context_t;    }
namespace pop { struct fx_device_t;                  }
namespace pop { struct fx_plugin_t;                  }

#include "magic/device_node_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_node_t;
    struct device_object_t;
    struct device_relations_t;
    struct device_node_iommu_extension_t;
    struct pending_relations_list_entry_t;

    // [struct _DEVICE_NODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_node_t                                                                             
    {                                                                                                
        union u0_over_used1_t                                                                        
        {                                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                     
            //                                                                                       
            _m47 struct nt::device_node_t*      legacy_device_node;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LegacyDeviceNode
            _m48 struct nt::device_relations_t* pending_device_relations;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PendingDeviceRelations
            _m49 void*                          information;                                           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Information
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_DEVICE_NODE.OverUsed1.$", 0x8, true, 0x2567fb41f4d53ffe );                                                     
            SDK_FIXED_SIZE( u0_over_used1_t, 0x8 );                                                     
        };                                                                                           
                                                                                                     
        union u4_over_used2_t                                                                        
        {                                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
            //                                                                                       
            _m51 struct nt::device_node_t* next_resource_device_node;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextResourceDeviceNode
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_DEVICE_NODE.OverUsed2.$", 0x8, true, 0xfde3a992714acafc );                                                      
            SDK_FIXED_SIZE( u4_over_used2_t, 0x8 );                                                      
        };                                                                                           
                                                                                                     
        struct u8_dock_info_t                                                                        
        {                                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
            //                                                                                       
            _m56 enum nt::profile_status_t dock_status;                                                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DockStatus
            _m57 nt::list_entry_t          list_entry;                                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListEntry
            _m58 wchar_t*                  serial_number;                                              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SerialNumber
                                                                                                     
            SDK_MAGIC_PROPERTIES( "_DEVICE_NODE.DockInfo.$", 0x20, true, 0x1acc5eb15ed98d4b );                                          
            SDK_FIXED_SIZE( u8_dock_info_t, 0x20 );                                                  
        };                                                                                           
                                                                                                     
        using problem_code_log_t = sdk::array<struct pnp::problem_code_log_entry_t, 4>;                            
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                                           
        _m000 struct nt::device_node_t*                                  sibling;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Sibling
        _m001 struct nt::device_node_t*                                  child;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Child
        _m002 struct nt::device_node_t*                                  parent;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Parent
        _m003 struct nt::device_node_t*                                  last_child;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LastChild
        _m004 struct nt::device_object_t*                                physical_device_object;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PhysicalDeviceObject
        _m005 nt::unicode_view                                           instance_path;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .InstancePath
        _m006 nt::unicode_view                                           service_name;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ServiceName
        _m007 struct nt::irp_t*                                          pending_irp;                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .PendingIrp
        _m008 struct pop::fx_device_t*                                   fx_device;                    //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .FxDevice
        _m009 volatile int32_t                                           fx_device_lock;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .FxDeviceLock
        _m010 struct nt::kevent_t                                        fx_remove_event;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FxRemoveEvent
        _m011 volatile int32_t                                           fx_activation_count;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .FxActivationCount
        _m012 volatile int32_t                                           fx_sleep_count;               //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .FxSleepCount
        _m013 nt::unicode_view                                           unique_id;                    //{ +0x0118    +0x0080    +0x0080    +0x0080    } | .UniqueId
        _m014 struct pop::fx_plugin_t*                                   plugin;                       //{ +0x0080    +0x0090    +0x0090    +0x0090    } | .Plugin
        _m015 uint32_t                                                   level;                        //{ +0x0088    +0x0098    +0x0098    +0x0098    } | .Level
        _m016 union power::state_t                                       current_power_state;          //{ +0x008c    +0x009c    +0x009c    +0x009c    } | .CurrentPowerState
        _m017 struct po::device_notify_t                                 notify;                       //{ +0x0090    +0x00a0    +0x00a0    +0x00a0    } | .Notify
        _m018 struct po::irp_manager_t                                   po_irp_manager;               //{ +0x00f8    +0x0108    +0x0108    +0x0108    } | .PoIrpManager
        _m019 volatile int32_t                                           power_flags;                  //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .PowerFlags
        _m020 enum pnp::devnode_state_t                                  state;                        //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .State
        _m021 enum pnp::devnode_state_t                                  previous_state;               //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .PreviousState
        _m022 sdk::array<enum pnp::devnode_state_t, 20>                  state_history;                //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .StateHistory
        _m023 uint32_t                                                   state_history_entry;          //{ +0x0184    +0x0184    +0x0184    +0x0184    } | .StateHistoryEntry
        _m024 int32_t                                                    completion_status;            //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .CompletionStatus
        _m025 uint32_t                                                   flags;                        //{ +0x018c    +0x018c    +0x018c    +0x018c    } | .Flags
        _m026 uint32_t                                                   user_flags;                   //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .UserFlags
        _m027 uint32_t                                                   problem;                      //{ +0x0194    +0x0194    +0x0194    +0x0194    } | .Problem
        _m028 int32_t                                                    problem_status;               //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .ProblemStatus
        _m029 struct cm::resource_list_t*                                resource_list;                //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .ResourceList
        _m030 struct cm::resource_list_t*                                resource_list_translated;     //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .ResourceListTranslated
        _m031 struct nt::device_object_t*                                duplicate_pdo;                //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .DuplicatePDO
        _m032 struct io::resource_requirements_list_t*                   resource_requirements;        //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .ResourceRequirements
        _m033 enum nt::interface_type_t                                  interface_type;               //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .InterfaceType
        _m034 uint32_t                                                   bus_number;                   //{ +0x01c4    +0x01c4    +0x01c4    +0x01c4    } | .BusNumber
        _m035 enum nt::interface_type_t                                  child_interface_type;         //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .ChildInterfaceType
        _m036 uint32_t                                                   child_bus_number;             //{ +0x01cc    +0x01cc    +0x01cc    +0x01cc    } | .ChildBusNumber
        _m037 uint16_t                                                   child_bus_type_index;         //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .ChildBusTypeIndex
        _m038 uint8_t                                                    removal_policy;               //{ +0x01d2    +0x01d2    +0x01d2    +0x01d2    } | .RemovalPolicy
        _m039 uint8_t                                                    hardware_removal_policy;      //{ +0x01d3    +0x01d3    +0x01d3    +0x01d3    } | .HardwareRemovalPolicy
        _m040 nt::list_entry_t                                           target_device_notify;         //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .TargetDeviceNotify
        _m041 nt::list_entry_t                                           device_arbiter_list;          //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .DeviceArbiterList
        _m042 nt::list_entry_t                                           device_translator_list;       //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .DeviceTranslatorList
        _m043 uint16_t                                                   no_translator_mask;           //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .NoTranslatorMask
        _m044 uint16_t                                                   query_translator_mask;        //{ +0x020a    +0x020a    +0x020a    +0x020a    } | .QueryTranslatorMask
        _m045 uint16_t                                                   no_arbiter_mask;              //{ +0x020c    +0x020c    +0x020c    +0x020c    } | .NoArbiterMask
        _m046 uint16_t                                                   query_arbiter_mask;           //{ +0x020e    +0x020e    +0x020e    +0x020e    } | .QueryArbiterMask
        _m050 u0_over_used1_t                                            over_used1;                   //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .OverUsed1
        _m052 u4_over_used2_t                                            over_used2;                   //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .OverUsed2
        _m053 struct cm::resource_list_t*                                boot_resources;               //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .BootResources
        _m054 struct cm::resource_list_t*                                boot_resources_translated;    //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .BootResourcesTranslated
        _m055 uint32_t                                                   capability_flags;             //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .CapabilityFlags
        _m059 u8_dock_info_t                                             dock_info;                    //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .DockInfo
        _m060 uint32_t                                                   disableable_depends;          //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .DisableableDepends
        _m061 nt::list_entry_t                                           pended_set_interface_state;   //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .PendedSetInterfaceState
        _m062 nt::list_entry_t                                           legacy_bus_list_entry;        //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .LegacyBusListEntry
        _m063 uint32_t                                                   driver_unload_retry_count;    //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .DriverUnloadRetryCount
        _m064 struct nt::device_node_t*                                  previous_parent;              //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .PreviousParent
        _m065 int32_t                                                    deleted_children;             //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .DeletedChildren
        _m066 uint32_t                                                   numa_node_index;              //{ +0x0294    +0x0294    +0x0294    +0x0294    } | .NumaNodeIndex
        _m067 struct nt::guid_t                                          container_id;                 //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .ContainerID
        _m068 uint8_t                                                    override_flags;               //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | .OverrideFlags
        _m069 uint32_t                                                   device_ids_hash;              //{ +0x02ac    +0x02ac    +0x02ac    +0x02ac    } | .DeviceIdsHash
        _m070 uint8_t                                                    requires_unloaded_driver;     //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .RequiresUnloadedDriver
        _m071 struct nt::pending_relations_list_entry_t*                 pending_eject_relations;      //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .PendingEjectRelations
        _m072 uint32_t                                                   state_flags;                  //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .StateFlags
        _m073 struct pnp::rebalance_trace_context_t*                     rebalance_context;            //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .RebalanceContext
                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                           
        _m074 struct nt::device_node_iommu_extension_t*                  iommu_extension;              //{ +0x02d0    +0x02d0    +0x02d0    } | .IommuExtension
        _m075 struct po::directed_drips_state_t                          directed_drips_state;         //{ +0x02d8    +0x02d8    +0x02d8    } | .DirectedDripsState
                                                                                                     
        // Windows 11                                                                                
        //                                                                                           
        _m076 problem_code_log_t                                         problem_code_log;             //{ +0x0310    } | .ProblemCodeLog
        _m077 uint32_t                                                   problem_code_log_next_index;  //{ +0x0370    } | .ProblemCodeLogNextIndex
        _m078 int64_t                                                    state_timestamp;              //{ +0x0378    } | .StateTimestamp
        _m079 int64_t                                                    previous_state_timestamp;     //{ +0x0380    } | .PreviousStateTimestamp
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_DEVICE_NODE.$", 0x310, true, 0x7def4bea724eb6a9 );                            
        SDK_DYNAMIC_SIZE( device_node_t );                                                           
    };                                                                                               
};
#include "magic/device_node_t.end.hpp"
SDK_VERIFY( union nt::device_node_t::u0_over_used1_t, 0x8 );
SDK_VERIFY( union nt::device_node_t::u4_over_used2_t, 0x8 );
SDK_VERIFY( struct nt::device_node_t::u8_dock_info_t, 0x20 );
