#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_object_t.hpp"
#include "../ex/push_lock_t.hpp"
#include "flt_filter_flags_t.hpp"
#include "flt_filesystem_type_t.hpp"
#include "flt_mutex_list_head_t.hpp"
#include "flt_resource_list_head_t.hpp"
#include "flt_preop_callback_status_t.hpp"
#include "flt_postop_callback_status_t.hpp"
#include "../ex/push_lock_auto_expand_t.hpp"

namespace nt { struct driver_object_t; }
namespace nt { struct file_object_t;   }

#include "magic/flt_filter_t.start.hpp"
namespace fltmgr
{
    struct fltp_frame_t;
    struct flt_instance_t;
    struct flt_name_control_t;
    struct flt_callback_data_t;
    struct flt_related_objects_t;
    struct file_names_information_t;
    struct flt_verifier_extension_t;
    struct allocate_context_header_t;
    struct flt_operation_registration_t;

    // [struct _FLT_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_filter_t                                                                 
    {                                                                                   
        using instance_setup_t =              sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t, uint32_t, enum fltmgr::flt_filesystem_type_t)>*;                             
        using instance_query_teardown_t =     sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                             
        using instance_teardown_start_t =     sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                             
        using instance_teardown_complete_t =  sdk::function<void(const struct fltmgr::flt_related_objects_t*, uint32_t)>*;                             
        using supported_contexts_t =          sdk::array<struct fltmgr::allocate_context_header_t*, 7>;                             
        using pre_volume_mount_t =            sdk::function<enum fltmgr::flt_preop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void**)>*;                             
        using post_volume_mount_t =           sdk::function<enum fltmgr::flt_postop_callback_status_t(struct fltmgr::flt_callback_data_t*, const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;                             
        using generate_file_name_t =          sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, struct fltmgr::flt_callback_data_t*, uint32_t, uint8_t*, struct fltmgr::flt_name_control_t*)>*;                             
        using normalize_name_component_t =    sdk::function<int32_t(struct fltmgr::flt_instance_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                             
        using normalize_name_component_ex_t = sdk::function<int32_t(struct fltmgr::flt_instance_t*, struct nt::file_object_t*, const nt::unicode_view*, uint16_t, const nt::unicode_view*, struct fltmgr::file_names_information_t*, uint32_t, uint32_t, void**)>*;                             
        using ktm_notification_t =            sdk::function<int32_t(const struct fltmgr::flt_related_objects_t*, void*, uint32_t)>*;                             
        using section_notification_t =        sdk::function<int32_t(struct fltmgr::flt_instance_t*, void*, struct fltmgr::flt_callback_data_t*)>*;                             
        using old_driver_unload_t =           sdk::function<void(struct nt::driver_object_t*)>*;                             
        using port_lock_t =                   sdk::variant<struct ex::push_lock_t, struct ex::push_lock_auto_expand_t>;                             
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                              
        _m000 struct fltmgr::flt_object_t                  base;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Base
        _m001 struct fltmgr::fltp_frame_t*                 frame;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Frame
        _m002 nt::unicode_view                             name;                          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Name
        _m003 nt::unicode_view                             default_altitude;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DefaultAltitude
        _m004 enum fltmgr::flt_filter_flags_t              flags;                         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Flags
        _m005 struct nt::driver_object_t*                  driver_object;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .DriverObject
        _m006 struct fltmgr::flt_resource_list_head_t      instance_list;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .InstanceList
        _m007 struct fltmgr::flt_verifier_extension_t*     verifier_extension;            //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .VerifierExtension
        _m008 nt::list_entry_t                             verified_filters_link;         //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .VerifiedFiltersLink
        _m009 sdk::function<int32_t(uint32_t)>*            filter_unload;                 //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .FilterUnload
        _m010 instance_setup_t                             instance_setup;                //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .InstanceSetup
        _m011 instance_query_teardown_t                    instance_query_teardown;       //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .InstanceQueryTeardown
        _m012 instance_teardown_start_t                    instance_teardown_start;       //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .InstanceTeardownStart
        _m013 instance_teardown_complete_t                 instance_teardown_complete;    //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .InstanceTeardownComplete
        _m014 struct fltmgr::allocate_context_header_t*    supported_contexts_list_head;  //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .SupportedContextsListHead
        _m015 supported_contexts_t                         supported_contexts;            //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .SupportedContexts
        _m016 pre_volume_mount_t                           pre_volume_mount;              //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .PreVolumeMount
        _m017 post_volume_mount_t                          post_volume_mount;             //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .PostVolumeMount
        _m018 generate_file_name_t                         generate_file_name;            //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .GenerateFileName
        _m019 normalize_name_component_t                   normalize_name_component;      //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .NormalizeNameComponent
        _m020 normalize_name_component_ex_t                normalize_name_component_ex;   //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .NormalizeNameComponentEx
        _m021 sdk::function<void(void**)>*                 normalize_context_cleanup;     //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .NormalizeContextCleanup
        _m022 ktm_notification_t                           ktm_notification;              //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .KtmNotification
        _m023 section_notification_t                       section_notification;          //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .SectionNotification
        _m024 struct fltmgr::flt_operation_registration_t* operations;                    //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .Operations
        _m025 old_driver_unload_t                          old_driver_unload;             //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .OldDriverUnload
        _m026 struct fltmgr::flt_mutex_list_head_t         active_opens;                  //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .ActiveOpens
        _m027 struct fltmgr::flt_mutex_list_head_t         connection_list;               //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .ConnectionList
        _m028 struct fltmgr::flt_mutex_list_head_t         port_list;                     //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .PortList
        _m029 port_lock_t                                  port_lock;                     //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | .PortLock
                                                                                        
        SDK_MAGIC_PROPERTIES( "_FLT_FILTER.$", 0x2b0, true, 0x801e08e64be7f626 );                             
        SDK_DYNAMIC_SIZE( flt_filter_t );                                               
    };                                                                                  
};
#include "magic/flt_filter_t.end.hpp"
