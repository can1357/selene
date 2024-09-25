#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"
#include "reference_ex_t.hpp"
#include "../nt/kmutant_t.hpp"
#include "object_header_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "miniport_hook_driver_type_t.hpp"
#include "miniport_driver_characteristics_t.hpp"
#include "ndis51_miniport_characteristics_t.hpp"
#include "co_call_manager_optional_handlers_t.hpp"

namespace nt { struct driver_object_t; }
namespace nt { struct guid_t;          }
namespace nt { struct irp_t;           }

#include "magic/m_driver_block_t.start.hpp"
namespace ndis
{
    struct request_t;
    struct pd_buffer_t;
    struct ndk_adapter_t;
    struct oid_request_t;
    struct m_driver_block_t;
    struct miniport_block_t;
    struct protocol_block_t;
    struct wrapper_handle_t;
    struct net_buffer_list_t;
    struct memorydump_handle_t;
    struct co_call_parameters_t;
    struct pd_bm_domain_handle_t;
    struct pd_ext_client_param_t;
    struct pending_im_instance_t;
    struct wdf_cx_driver_block_t;
    struct pd_ext_client_context_t;
    struct pd_ext_client_dispatch_t;
    struct pd_bm_domain_parameters_t;
    struct pd_ext_provider_context_t;
    struct switch_port_destination_t;
    struct miniport_syspower_notify_t;
    struct pd_bm_domain_member_handle_t;
    struct miniport_hook_driver_handle_t;
    struct miniport_offload_block_list_t;
    struct open_ndk_adapter_parameters_t;
    struct pd_bm_domain_member_parameters_t;
    struct switch_forwarding_destination_array_t;
    struct switch_net_buffer_list_context_type_info_t;
    union switch_forwarding_detail_net_buffer_list_info_t;

    // [struct _NDIS_M_DRIVER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct m_driver_block_t                                                                                              
    {                                                                                                                    
        using unload_handler_t =                                      sdk::function<void(struct nt::driver_object_t*)>*;                                                    
        using co_activate_vc_handler_t =                              sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                                    
        using co_send_net_buffer_lists_handler_t =                    sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                                    
        using co_request_handler_t =                                  sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*;                                                    
        using co_oid_request_handler_t =                              sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*;                                                    
        using initiate_offload_handler_t =                            sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                    
        using terminate_offload_handler_t =                           sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                    
        using update_offload_handler_t =                              sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                    
        using invalidate_offload_handler_t =                          sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                    
        using query_offload_handler_t =                               sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                    
        using tcp_offload_send_handler_t =                            sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using tcp_offload_receive_handler_t =                         sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using tcp_offload_disconnect_handler_t =                      sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                                    
        using tcp_offload_forward_handler_t =                         sdk::function<int32_t(void*, void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using filter_resource_requirements_handler_t =                sdk::function<int32_t(void*, struct nt::irp_t*)>*;                                                    
        using start_device_handler_t =                                sdk::function<int32_t(void*, struct nt::irp_t*)>*;                                                    
        using open_ndk_adapter_handler_t =                            sdk::function<int32_t(void*, struct ndis::open_ndk_adapter_parameters_t*, struct ndis::ndk_adapter_t**)>*;                                                    
        using close_ndk_adapter_handler_t =                           sdk::function<void(void*, struct ndis::ndk_adapter_t*)>*;                                                    
        using sys_power_notify_handler_t =                            sdk::variant<sdk::function<void(void*, struct ndis::miniport_syspower_notify_t*)>*, sdk::function<void(void*, const struct ndis::miniport_syspower_notify_t*)>*>;                                                    
        using live_dump_callback_t =                                  sdk::variant<sdk::function<int32_t(void*, sdk::function<int32_t(void*, const struct nt::guid_t*, void*, uint32_t)>*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, void*)>*, sdk::function<int32_t(struct ndis::memorydump_handle_t*, sdk::function<int32_t(struct ndis::memorydump_handle_t*, const struct nt::guid_t*, void*, uint32_t)>*, uint32_t, uint64_t, uint64_t, uint64_t, uint64_t, void*)>*>;                                                    
        using allocate_net_buffer_list_forwarding_context_handler_t = sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using free_net_buffer_list_forwarding_context_handler_t =     sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using add_net_buffer_list_destination_handler_t =             sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_port_destination_t*)>*;                                                    
        using set_net_buffer_list_source_handler_t =                  sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, uint16_t)>*;                                                    
        using grow_net_buffer_list_destinations_handler_t =           sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t**)>*;                                                    
        using get_net_buffer_list_destinations_handler_t =            sdk::function<void(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_forwarding_destination_array_t**)>*;                                                    
        using update_net_buffer_list_destinations_handler_t =         sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t*)>*;                                                    
        using copy_net_buffer_list_info_handler_t =                   sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                                    
        using reference_switch_nic_handler_t =                        sdk::function<int32_t(void*, uint32_t, uint16_t)>*;                                                    
        using dereference_switch_nic_handler_t =                      sdk::function<int32_t(void*, uint32_t, uint16_t)>*;                                                    
        using report_filtered_net_buffer_lists_handler_t =            sdk::function<void(void*, nt::unicode_view*, nt::unicode_view*, uint32_t, uint32_t, uint32_t, struct ndis::net_buffer_list_t*, nt::unicode_view*)>*;                                                    
        using set_net_buffer_list_switch_context_handler_t =          sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_net_buffer_list_context_type_info_t*, void*)>*;                                                    
        using get_net_buffer_list_switch_context_handler_t =          sdk::function<void*(void*, struct ndis::net_buffer_list_t*, struct ndis::switch_net_buffer_list_context_type_info_t*)>*;                                                    
        using pd_ext_provider_register_client_t =                     sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_ext_client_context_t*, const struct nt::guid_t*, const nt::unicode_view*, const struct ndis::pd_ext_client_param_t*, const struct ndis::pd_ext_client_dispatch_t*)>*;                                                    
        using pd_ext_provider_deregister_client_t =                   sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_ext_client_context_t*)>*;                                                    
        using pd_ext_provider_get_free_pd_buffer_t =                  sdk::function<struct ndis::pd_buffer_t*(struct ndis::pd_ext_provider_context_t*, uint32_t, uint32_t, uint32_t)>*;                                                    
        using pd_ext_provider_return_pd_buffer_t =                    sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t)>*;                                                    
        using pd_ext_provider_inject_pd_buffer_t =                    sdk::function<void(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t*, uint32_t)>*;                                                    
        using pd_ext_provider_copy_pd_buffer_info_t =                 sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, const struct ndis::pd_buffer_t*, uint32_t)>*;                                                    
        using pd_ext_provider_get_pd_buffer_client_context_t =        sdk::function<void*(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t)>*;                                                    
        using pd_ext_provider_get_pd_buffer_destinations_t =          sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, struct ndis::switch_forwarding_destination_array_t**)>*;                                                    
        using pd_ext_provider_add_pd_buffer_destination_t =           sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, const struct ndis::switch_port_destination_t*)>*;                                                    
        using pd_ext_provider_update_pd_buffer_destinations_t =       sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t*)>*;                                                    
        using pd_ext_provider_get_pd_buffer_forwarding_detail_t =     sdk::function<union ndis::switch_forwarding_detail_net_buffer_list_info_t*(struct ndis::pd_buffer_t*)>*;                                                    
        using pd_ext_provider_setup_buffer_from_pd_buffer_t =         sdk::function<void(struct ndis::pd_buffer_t*, const struct ndis::pd_buffer_t*, uint32_t, uint32_t)>*;                                                    
        using pd_ext_provider_grow_pd_buffer_destinations_t =         sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, struct ndis::pd_buffer_t*, uint32_t, struct ndis::switch_forwarding_destination_array_t**)>*;                                                    
        using pd_ext_provider_get_switch_info_t =                     sdk::function<int32_t(struct ndis::pd_ext_provider_context_t*, uint32_t*)>*;                                                    
        using pdbm_create_domain_t =                                  sdk::function<int32_t(const struct ndis::pd_bm_domain_parameters_t*, struct ndis::pd_bm_domain_handle_t**)>*;                                                    
        using pdbm_add_member_to_domain_t =                           sdk::function<int32_t(struct ndis::pd_bm_domain_handle_t*, const struct ndis::pd_bm_domain_member_parameters_t*, struct ndis::pd_bm_domain_member_handle_t**)>*;                                                    
        using pdbm_remove_member_from_domain_t =                      sdk::function<void(struct ndis::pd_bm_domain_member_handle_t*)>*;                                                    
        using pdbm_delete_domain_t =                                  sdk::function<void(struct ndis::pd_bm_domain_handle_t*)>*;                                                    
        using pdbm_allocate_common_buffer_t =                         sdk::function<int32_t(struct ndis::pd_bm_domain_handle_t*, uint32_t, uint32_t, uint32_t, int64_t*, void**)>*;                                                    
        using pdbm_free_common_buffer_t =                             sdk::function<void(struct ndis::pd_bm_domain_handle_t*, uint32_t, int64_t, void*)>*;                                                    
        using tcp_offload_receive_return_handler_t =                  sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*;                                                    
        using device_power_notify_handler_t =                         sdk::function<int32_t(void*, enum nt::device_power_state_t)>*;                                                    
                                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                    
        //                                                                                                               
        _m000 struct ndis::object_header_t                           header;                                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 struct ndis::m_driver_block_t*                         next_driver;                                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextDriver
        _m002 struct ndis::miniport_block_t*                         miniport_queue;                                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniportQueue
        _m003 uint8_t                                                major_ndis_version;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MajorNdisVersion
        _m004 uint8_t                                                minor_ndis_version;                                   //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .MinorNdisVersion
        _m005 uint16_t                                               flags;                                                //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .Flags
        _m006 struct ndis::wrapper_handle_t*                         ndis_driver_info;                                     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .NdisDriverInfo
        _m007 struct nt::driver_object_t*                            driver_object;                                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DriverObject
        _m008 nt::unicode_view                                       service_reg_path;                                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ServiceRegPath
        _m009 void*                                                  miniport_driver_context;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MiniportDriverContext
        _m010 struct ndis::protocol_block_t*                         associated_protocol;                                  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AssociatedProtocol
        _m011 nt::list_entry_t                                       device_list;                                          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DeviceList
        _m012 struct ndis::pending_im_instance_t*                    pending_device_list;                                  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .PendingDeviceList
        _m013 unload_handler_t                                       unload_handler;                                       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .UnloadHandler
        _m014 struct ndis::miniport_driver_characteristics_t         miniport_driver_characteristics;                      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MiniportDriverCharacteristics
        _m015 struct ndis::ndis51_miniport_characteristics_t         miniport_characteristics;                             //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .MiniportCharacteristics
        _m016 struct ndis::wdf_cx_driver_block_t*                    cx_block;                                             //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .CxBlock
        _m017 struct nt::kevent_t                                    miniports_removed_event;                              //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .MiniportsRemovedEvent
        _m018 struct ndis::reference_ex_t                            ref;                                                  //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .Ref
        _m019 struct nt::kmutant_t                                   im_start_remove_mutex;                                //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .IMStartRemoveMutex
        _m020 void*                                                  im_start_remove_mutex_owner_thread;                   //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .IMStartRemoveMutexOwnerThread
        _m021 uint32_t                                               driver_version;                                       //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .DriverVersion
        _m022 nt::unicode_view                                       service_name;                                         //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .ServiceName
        _m023 sdk::function<int32_t(void*, void*, void**)>*          co_create_vc_handler;                                 //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .CoCreateVcHandler
        _m024 sdk::function<int32_t(void*)>*                         co_delete_vc_handler;                                 //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .CoDeleteVcHandler
        _m025 co_activate_vc_handler_t                               co_activate_vc_handler;                               //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .CoActivateVcHandler
        _m026 sdk::function<int32_t(void*)>*                         co_deactivate_vc_handler;                             //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .CoDeactivateVcHandler
        _m027 co_send_net_buffer_lists_handler_t                     co_send_net_buffer_lists_handler;                     //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .CoSendNetBufferListsHandler
        _m028 co_request_handler_t                                   co_request_handler;                                   //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .CoRequestHandler
        _m029 co_oid_request_handler_t                               co_oid_request_handler;                               //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .CoOidRequestHandler
        _m030 initiate_offload_handler_t                             initiate_offload_handler;                             //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .InitiateOffloadHandler
        _m031 terminate_offload_handler_t                            terminate_offload_handler;                            //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .TerminateOffloadHandler
        _m032 update_offload_handler_t                               update_offload_handler;                               //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .UpdateOffloadHandler
        _m033 invalidate_offload_handler_t                           invalidate_offload_handler;                           //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .InvalidateOffloadHandler
        _m034 query_offload_handler_t                                query_offload_handler;                                //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .QueryOffloadHandler
        _m035 tcp_offload_send_handler_t                             tcp_offload_send_handler;                             //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .TcpOffloadSendHandler
        _m036 tcp_offload_receive_handler_t                          tcp_offload_receive_handler;                          //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .TcpOffloadReceiveHandler
        _m037 tcp_offload_disconnect_handler_t                       tcp_offload_disconnect_handler;                       //{ +0x0268    +0x0268    +0x0268    +0x0268    } | .TcpOffloadDisconnectHandler
        _m038 tcp_offload_forward_handler_t                          tcp_offload_forward_handler;                          //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .TcpOffloadForwardHandler
        _m039 struct ndis::co_call_manager_optional_handlers_t       call_mgr_chars;                                       //{ +0x0280    +0x0280    +0x0278    +0x0280    } | .CallMgrChars
        _m040 sdk::function<int32_t(void*, void*)>*                  add_device_handler;                                   //{ +0x0310    +0x0310    +0x0308    +0x0310    } | .AddDeviceHandler
        _m041 sdk::function<void(void*)>*                            remove_device_handler;                                //{ +0x0318    +0x0318    +0x0310    +0x0318    } | .RemoveDeviceHandler
        _m042 filter_resource_requirements_handler_t                 filter_resource_requirements_handler;                 //{ +0x0320    +0x0320    +0x0318    +0x0320    } | .FilterResourceRequirementsHandler
        _m043 start_device_handler_t                                 start_device_handler;                                 //{ +0x0328    +0x0328    +0x0320    +0x0328    } | .StartDeviceHandler
        _m044 open_ndk_adapter_handler_t                             open_ndk_adapter_handler;                             //{ +0x0338    +0x0330    +0x0328    +0x0330    } | .OpenNDKAdapterHandler
        _m045 close_ndk_adapter_handler_t                            close_ndk_adapter_handler;                            //{ +0x0340    +0x0338    +0x0330    +0x0338    } | .CloseNDKAdapterHandler
        _m046 sys_power_notify_handler_t                             sys_power_notify_handler;                             //{ +0x0348    +0x0340    +0x0338    +0x0340    } | .SysPowerNotifyHandler
        _m047 sdk::function<int32_t(void*, uint8_t)>*                idle_notification_handler;                            //{ +0x0350    +0x0348    +0x0340    +0x0348    } | .IdleNotificationHandler
        _m048 sdk::function<void(void*)>*                            cancel_idle_notification_handler;                     //{ +0x0358    +0x0350    +0x0348    +0x0350    } | .CancelIdleNotificationHandler
        _m049 sdk::function<void(void*)>*                            reenumerate_failed_adapter_handler;                   //{ +0x0360    +0x0360    +0x0358    +0x0360    } | .ReenumerateFailedAdapterHandler
        _m050 live_dump_callback_t                                   live_dump_callback;                                   //{ +0x0368    +0x0368    +0x0360    +0x0368    } | .LiveDumpCallback
        _m051 nt::unicode_view                                       image_name;                                           //{ +0x0370    +0x0370    +0x0368    +0x0370    } | .ImageName
        _m052 struct ndis::miniport_hook_driver_handle_t*            hook_driver_handle;                                   //{ +0x0380    +0x0380    +0x0378    +0x0380    } | .HookDriverHandle
        _m053 enum ndis::miniport_hook_driver_type_t                 hook_type;                                            //{ +0x0388    +0x0388    +0x0380    +0x0388    } | .HookType
        _m054 bool                                                   hook_registered;                                      //{ +0x038c    +0x038c    +0x0384    +0x038c    } | .HookRegistered
        _m055 allocate_net_buffer_list_forwarding_context_handler_t  allocate_net_buffer_list_forwarding_context_handler;  //{ +0x0390    +0x0390    +0x0388    +0x0390    } | .AllocateNetBufferListForwardingContextHandler
        _m056 free_net_buffer_list_forwarding_context_handler_t      free_net_buffer_list_forwarding_context_handler;      //{ +0x0398    +0x0398    +0x0390    +0x0398    } | .FreeNetBufferListForwardingContextHandler
        _m057 add_net_buffer_list_destination_handler_t              add_net_buffer_list_destination_handler;              //{ +0x03a0    +0x03a0    +0x0398    +0x03a0    } | .AddNetBufferListDestinationHandler
        _m058 set_net_buffer_list_source_handler_t                   set_net_buffer_list_source_handler;                   //{ +0x03a8    +0x03a8    +0x03a0    +0x03a8    } | .SetNetBufferListSourceHandler
        _m059 grow_net_buffer_list_destinations_handler_t            grow_net_buffer_list_destinations_handler;            //{ +0x03b0    +0x03b0    +0x03a8    +0x03b0    } | .GrowNetBufferListDestinationsHandler
        _m060 get_net_buffer_list_destinations_handler_t             get_net_buffer_list_destinations_handler;             //{ +0x03b8    +0x03b8    +0x03b0    +0x03b8    } | .GetNetBufferListDestinationsHandler
        _m061 update_net_buffer_list_destinations_handler_t          update_net_buffer_list_destinations_handler;          //{ +0x03c0    +0x03c0    +0x03b8    +0x03c0    } | .UpdateNetBufferListDestinationsHandler
        _m062 copy_net_buffer_list_info_handler_t                    copy_net_buffer_list_info_handler;                    //{ +0x03c8    +0x03c8    +0x03c0    +0x03c8    } | .CopyNetBufferListInfoHandler
        _m063 reference_switch_nic_handler_t                         reference_switch_nic_handler;                         //{ +0x03d0    +0x03d0    +0x03c8    +0x03d0    } | .ReferenceSwitchNicHandler
        _m064 dereference_switch_nic_handler_t                       dereference_switch_nic_handler;                       //{ +0x03d8    +0x03d8    +0x03d0    +0x03d8    } | .DereferenceSwitchNicHandler
        _m065 sdk::function<int32_t(void*, uint32_t)>*               reference_switch_port_handler;                        //{ +0x03e0    +0x03e0    +0x03d8    +0x03e0    } | .ReferenceSwitchPortHandler
        _m066 sdk::function<int32_t(void*, uint32_t)>*               dereference_switch_port_handler;                      //{ +0x03e8    +0x03e8    +0x03e0    +0x03e8    } | .DereferenceSwitchPortHandler
        _m067 report_filtered_net_buffer_lists_handler_t             report_filtered_net_buffer_lists_handler;             //{ +0x03f0    +0x03f0    +0x03e8    +0x03f0    } | .ReportFilteredNetBufferListsHandler
        _m068 set_net_buffer_list_switch_context_handler_t           set_net_buffer_list_switch_context_handler;           //{ +0x03f8    +0x03f8    +0x03f0    +0x03f8    } | .SetNetBufferListSwitchContextHandler
        _m069 get_net_buffer_list_switch_context_handler_t           get_net_buffer_list_switch_context_handler;           //{ +0x0400    +0x0400    +0x03f8    +0x0400    } | .GetNetBufferListSwitchContextHandler
        _m070 pd_ext_provider_register_client_t                      pd_ext_provider_register_client;                      //{ +0x0408    +0x0408    +0x0400    +0x0408    } | .PDExtProviderRegisterClient
        _m071 pd_ext_provider_deregister_client_t                    pd_ext_provider_deregister_client;                    //{ +0x0410    +0x0410    +0x0408    +0x0410    } | .PDExtProviderDeregisterClient
        _m072 pd_ext_provider_get_free_pd_buffer_t                   pd_ext_provider_get_free_pd_buffer;                   //{ +0x0418    +0x0418    +0x0410    +0x0418    } | .PDExtProviderGetFreePDBuffer
        _m073 pd_ext_provider_return_pd_buffer_t                     pd_ext_provider_return_pd_buffer;                     //{ +0x0420    +0x0420    +0x0418    +0x0420    } | .PDExtProviderReturnPDBuffer
        _m074 pd_ext_provider_inject_pd_buffer_t                     pd_ext_provider_inject_pd_buffer;                     //{ +0x0428    +0x0428    +0x0420    +0x0428    } | .PDExtProviderInjectPDBuffer
        _m075 pd_ext_provider_copy_pd_buffer_info_t                  pd_ext_provider_copy_pd_buffer_info;                  //{ +0x0430    +0x0430    +0x0428    +0x0430    } | .PDExtProviderCopyPDBufferInfo
        _m076 pd_ext_provider_get_pd_buffer_client_context_t         pd_ext_provider_get_pd_buffer_client_context;         //{ +0x0438    +0x0438    +0x0430    +0x0438    } | .PDExtProviderGetPDBufferClientContext
        _m077 pd_ext_provider_get_pd_buffer_destinations_t           pd_ext_provider_get_pd_buffer_destinations;           //{ +0x0440    +0x0440    +0x0438    +0x0440    } | .PDExtProviderGetPDBufferDestinations
        _m078 pd_ext_provider_add_pd_buffer_destination_t            pd_ext_provider_add_pd_buffer_destination;            //{ +0x0448    +0x0448    +0x0440    +0x0448    } | .PDExtProviderAddPDBufferDestination
        _m079 pd_ext_provider_update_pd_buffer_destinations_t        pd_ext_provider_update_pd_buffer_destinations;        //{ +0x0450    +0x0450    +0x0448    +0x0450    } | .PDExtProviderUpdatePDBufferDestinations
        _m080 pd_ext_provider_get_pd_buffer_forwarding_detail_t      pd_ext_provider_get_pd_buffer_forwarding_detail;      //{ +0x0458    +0x0458    +0x0450    +0x0458    } | .PDExtProviderGetPDBufferForwardingDetail
        _m081 pd_ext_provider_setup_buffer_from_pd_buffer_t          pd_ext_provider_setup_buffer_from_pd_buffer;          //{ +0x0460    +0x0460    +0x0458    +0x0460    } | .PDExtProviderSetupBufferFromPDBuffer
        _m082 pd_ext_provider_grow_pd_buffer_destinations_t          pd_ext_provider_grow_pd_buffer_destinations;          //{ +0x0468    +0x0468    +0x0460    +0x0468    } | .PDExtProviderGrowPDBufferDestinations
        _m083 pd_ext_provider_get_switch_info_t                      pd_ext_provider_get_switch_info;                      //{ +0x0470    +0x0470    +0x0468    +0x0470    } | .PDExtProviderGetSwitchInfo
        _m084 pdbm_create_domain_t                                   pdbm_create_domain;                                   //{ +0x0478    +0x0478    +0x0470    +0x0478    } | .PDBMCreateDomain
        _m085 pdbm_add_member_to_domain_t                            pdbm_add_member_to_domain;                            //{ +0x0480    +0x0480    +0x0478    +0x0480    } | .PDBMAddMemberToDomain
        _m086 pdbm_remove_member_from_domain_t                       pdbm_remove_member_from_domain;                       //{ +0x0488    +0x0488    +0x0480    +0x0488    } | .PDBMRemoveMemberFromDomain
        _m087 pdbm_delete_domain_t                                   pdbm_delete_domain;                                   //{ +0x0490    +0x0490    +0x0488    +0x0490    } | .PDBMDeleteDomain
        _m088 pdbm_allocate_common_buffer_t                          pdbm_allocate_common_buffer;                          //{ +0x0498    +0x0498    +0x0490    +0x0498    } | .PDBMAllocateCommonBuffer
        _m089 pdbm_free_common_buffer_t                              pdbm_free_common_buffer;                              //{ +0x04a0    +0x04a0    +0x0498    +0x04a0    } | .PDBMFreeCommonBuffer
                                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                          
        //                                                                                                               
        _m090 tcp_offload_receive_return_handler_t                   tcp_offload_receive_return_handler;                   //{ +0x0278    +0x0278    +0x0278    } | .TcpOffloadReceiveReturnHandler
                                                                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                
        //                                                                                                               
        _m091 device_power_notify_handler_t                          device_power_notify_handler;                          //{ +0x0358    +0x0350    +0x0358    } | .DevicePowerNotifyHandler
                                                                                                                         
        // Windows 10 v1607                                                                                              
        //                                                                                                               
        _m092 struct ndis::miniport_block_t*                         composite_bus_default_miniport;                       //{ +0x0330    } | .CompositeBusDefaultMiniport
                                                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_M_DRIVER_BLOCK.$", 0x4a8, true, 0x9cf64a7dd1b032ab );                                                    
        SDK_DYNAMIC_SIZE( m_driver_block_t );                                                                            
    };                                                                                                                   
};
#include "magic/m_driver_block_t.end.hpp"
