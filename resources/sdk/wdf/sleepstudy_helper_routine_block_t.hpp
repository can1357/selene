#pragma once
#include <sdkgen/support_library.hpp>
#include "sleepstudy_blocker_type_t.hpp"
#include "sleepstudy_helper_namespace_t.hpp"

namespace hid { struct ss_component_t;       }
namespace nt  { struct device_object_t;      }
namespace nt  { struct guid_t;               }
namespace pci { struct sleepstudy_blocker_t; }

#include "magic/sleepstudy_helper_routine_block_t.start.hpp"
namespace wdf
{
    struct ss_library_t;
    struct sleepstudy_library_t;
    struct sleepstudy_data_entry_t;
    union sleepstudy_blocker_guid_t;
    struct sleepstudy_blocker_data_t;
    struct sleepstudy_blocker_builder_t;

    // [struct _SLEEPSTUDY_HELPER_ROUTINE_BLOCK]
    // => Windows 11
    //
    struct sleepstudy_helper_routine_block_t                                                  
    {                                                                                         
        using blocker_active_dereference_t =      sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*;                                
        using blocker_active_reference_t =        sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*;                                
        using build_blocker_t =                   sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, struct pci::sleepstudy_blocker_t**)>*;                                
        using create_blocker_data_t =             sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, uint32_t, struct wdf::sleepstudy_data_entry_t*, struct wdf::sleepstudy_blocker_data_t**)>*;                                
        using create_blocker_from_component_t =   sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, struct nt::device_object_t*, uint32_t, struct wdf::sleepstudy_blocker_builder_t**)>*;                                
        using create_blocker_from_device_t =      sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, struct nt::device_object_t*, struct wdf::sleepstudy_blocker_builder_t**)>*;                                
        using create_blocker_from_guid_t =        sdk::function<int32_t(struct wdf::sleepstudy_library_t*, union wdf::sleepstudy_blocker_guid_t*, union wdf::sleepstudy_blocker_guid_t*, nt::unicode_view*, enum wdf::sleepstudy_blocker_type_t, struct wdf::sleepstudy_blocker_builder_t**)>*;                                
        using create_library_t =                  sdk::function<int32_t(uint32_t, struct wdf::sleepstudy_library_t**)>*;                                
        using destroy_blocker_t =                 sdk::function<int32_t(struct pci::sleepstudy_blocker_t*)>*;                                
        using destroy_blocker_builder_t =         sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*)>*;                                
        using destroy_blocker_data_t =            sdk::function<int32_t(struct wdf::sleepstudy_blocker_data_t*)>*;                                
        using destroy_library_t =                 sdk::function<int32_t(struct wdf::sleepstudy_library_t*)>*;                                
        using get_blocker_guid_t =                sdk::function<int32_t(struct pci::sleepstudy_blocker_t*, union wdf::sleepstudy_blocker_guid_t*)>*;                                
        using query_blocker_statistics_t =        sdk::function<int32_t(struct pci::sleepstudy_blocker_t*, uint8_t*, uint64_t*)>*;                                
        using set_blocker_friendly_name_t =       sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, nt::unicode_view*)>*;                                
        using set_blocker_parent_handle_t =       sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, struct pci::sleepstudy_blocker_t*)>*;                                
        using set_blocker_visible_t =             sdk::function<int32_t(struct wdf::sleepstudy_blocker_builder_t*, uint8_t)>*;                                
        using initialize_t =                      sdk::function<int32_t(struct wdf::ss_library_t**, void*)>*;                                
        using generate_guid_t =                   sdk::function<int32_t(enum wdf::sleepstudy_helper_namespace_t, uint64_t, struct nt::guid_t*)>*;                                
        using register_pdo_with_parent_pdo_t =    sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::device_object_t*, struct nt::device_object_t*, struct hid::ss_component_t**)>*;                                
        using register_pdo_with_parent_handle_t = sdk::function<int32_t(struct wdf::ss_library_t*, void*, struct nt::device_object_t*, struct hid::ss_component_t**)>*;                                
        using register_pdo_with_parent_guid_t =   sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::guid_t, struct nt::device_object_t*, struct hid::ss_component_t**)>*;                                
        using register_component_ex_t =           sdk::function<int32_t(struct wdf::ss_library_t*, struct nt::guid_t, struct nt::guid_t, nt::unicode_view*, struct hid::ss_component_t**)>*;                                
        using unregister_component_t =            sdk::function<int32_t(struct hid::ss_component_t*)>*;                                
        using component_active_t =                sdk::function<int32_t(struct hid::ss_component_t*)>*;                                
        using component_inactive_t =              sdk::function<int32_t(struct hid::ss_component_t*)>*;                                
        using component_active_locked_t =         sdk::function<int32_t(struct hid::ss_component_t*)>*;                                
        using reset_components_start_time_t =     sdk::function<int32_t(struct hid::ss_component_t*)>*;                                
        using acquire_component_lock_t =          sdk::function<int32_t(struct hid::ss_component_t*, uint8_t*)>*;                                
        using release_component_lock_t =          sdk::function<int32_t(struct hid::ss_component_t*, uint8_t)>*;                                
        using get_pdo_friendly_name_t =           sdk::function<int32_t(struct nt::device_object_t*, nt::unicode_view*)>*;                                
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m000 uint32_t                                        version;                          //{ +0x0000    } | .Version
        _m001 blocker_active_dereference_t                    blocker_active_dereference;       //{ +0x0008    } | .BlockerActiveDereference
        _m002 blocker_active_reference_t                      blocker_active_reference;         //{ +0x0010    } | .BlockerActiveReference
        _m003 build_blocker_t                                 build_blocker;                    //{ +0x0018    } | .BuildBlocker
        _m004 create_blocker_data_t                           create_blocker_data;              //{ +0x0020    } | .CreateBlockerData
        _m005 create_blocker_from_component_t                 create_blocker_from_component;    //{ +0x0028    } | .CreateBlockerFromComponent
        _m006 create_blocker_from_device_t                    create_blocker_from_device;       //{ +0x0030    } | .CreateBlockerFromDevice
        _m007 create_blocker_from_guid_t                      create_blocker_from_guid;         //{ +0x0038    } | .CreateBlockerFromGuid
        _m008 create_library_t                                create_library;                   //{ +0x0040    } | .CreateLibrary
        _m009 destroy_blocker_t                               destroy_blocker;                  //{ +0x0048    } | .DestroyBlocker
        _m010 destroy_blocker_builder_t                       destroy_blocker_builder;          //{ +0x0050    } | .DestroyBlockerBuilder
        _m011 destroy_blocker_data_t                          destroy_blocker_data;             //{ +0x0058    } | .DestroyBlockerData
        _m012 destroy_library_t                               destroy_library;                  //{ +0x0060    } | .DestroyLibrary
        _m013 get_blocker_guid_t                              get_blocker_guid;                 //{ +0x0068    } | .GetBlockerGuid
        _m014 query_blocker_statistics_t                      query_blocker_statistics;         //{ +0x0070    } | .QueryBlockerStatistics
        _m015 set_blocker_friendly_name_t                     set_blocker_friendly_name;        //{ +0x0078    } | .SetBlockerFriendlyName
        _m016 set_blocker_parent_handle_t                     set_blocker_parent_handle;        //{ +0x0080    } | .SetBlockerParentHandle
        _m017 set_blocker_visible_t                           set_blocker_visible;              //{ +0x0088    } | .SetBlockerVisible
        _m018 initialize_t                                    initialize;                       //{ +0x0090    } | .Initialize
        _m019 sdk::function<void(struct wdf::ss_library_t*)>* uninitialize;                     //{ +0x0098    } | .Uninitialize
        _m020 generate_guid_t                                 generate_guid;                    //{ +0x00a0    } | .GenerateGuid
        _m021 register_pdo_with_parent_pdo_t                  register_pdo_with_parent_pdo;     //{ +0x00a8    } | .RegisterPdoWithParentPdo
        _m022 register_pdo_with_parent_handle_t               register_pdo_with_parent_handle;  //{ +0x00b0    } | .RegisterPdoWithParentHandle
        _m023 register_pdo_with_parent_guid_t                 register_pdo_with_parent_guid;    //{ +0x00b8    } | .RegisterPdoWithParentGuid
        _m024 register_component_ex_t                         register_component_ex;            //{ +0x00c0    } | .RegisterComponentEx
        _m025 unregister_component_t                          unregister_component;             //{ +0x00c8    } | .UnregisterComponent
        _m026 component_active_t                              component_active;                 //{ +0x00d0    } | .ComponentActive
        _m027 component_inactive_t                            component_inactive;               //{ +0x00d8    } | .ComponentInactive
        _m028 component_active_locked_t                       component_active_locked;          //{ +0x00e0    } | .ComponentActiveLocked
        _m029 reset_components_start_time_t                   reset_components_start_time;      //{ +0x00e8    } | .ResetComponentsStartTime
        _m030 acquire_component_lock_t                        acquire_component_lock;           //{ +0x00f0    } | .AcquireComponentLock
        _m031 release_component_lock_t                        release_component_lock;           //{ +0x00f8    } | .ReleaseComponentLock
        _m032 get_pdo_friendly_name_t                         get_pdo_friendly_name;            //{ +0x0100    } | .GetPdoFriendlyName
                                                                                              
        SDK_MAGIC_PROPERTIES( "_SLEEPSTUDY_HELPER_ROUTINE_BLOCK.$", 0x0, false, 0x2206b542e642aaec );                                
        SDK_FIXED_SIZE( sleepstudy_helper_routine_block_t, 0x108 );                                
    };                                                                                        
};
#include "magic/sleepstudy_helper_routine_block_t.end.hpp"
SDK_VERIFY( struct wdf::sleepstudy_helper_routine_block_t, 0x108 );
