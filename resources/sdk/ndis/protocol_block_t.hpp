#pragma once
#include <sdkgen/support_library.hpp>
#include "reference_ex_t.hpp"
#include "../nt/kmutant_t.hpp"
#include "object_header_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "co_client_optional_handlers_t.hpp"
#include "co_call_manager_optional_handlers_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/protocol_block_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct request_t;
    struct open_block_t;
    struct wan_packet_t;
    struct oid_request_t;
    struct net_pnp_event_t;
    struct m_driver_block_t;
    struct miniport_block_t;
    struct protocol_block_t;
    struct bind_parameters_t;
    struct net_buffer_list_t;
    struct co_address_family_t;
    struct status_indication_t;
    struct shared_memory_parameters_t;
    struct net_pnp_event_notification_t;
    struct protocol_offload_block_list_t;

    // [struct _NDIS_PROTOCOL_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_block_t                                                                              
    {                                                                                                    
        using bind_adapter_handler_ex_t =                   sdk::function<int32_t(void*, void*, struct ndis::bind_parameters_t*)>*;                                          
        using pn_p_event_handler_t =                        sdk::function<int32_t(void*, struct ndis::net_pnp_event_t*)>*;                                          
        using net_pn_p_event_handler_t =                    sdk::function<int32_t(void*, struct ndis::net_pnp_event_notification_t*)>*;                                          
        using request_complete_handler_t =                  sdk::function<void(void*, struct ndis::request_t*, int32_t)>*;                                          
        using status_handler_ex_t =                         sdk::function<void(void*, struct ndis::status_indication_t*)>*;                                          
        using status_handler_t =                            sdk::function<void(void*, int32_t, void*, uint32_t)>*;                                          
        using receive_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                          
        using send_net_buffer_lists_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                          
        using co_status_handler_ex_t =                      sdk::function<void(void*, void*, struct ndis::status_indication_t*)>*;                                          
        using co_status_handler_t =                         sdk::function<void(void*, void*, int32_t, void*, uint32_t)>*;                                          
        using co_af_register_notify_handler_t =             sdk::function<void(void*, struct ndis::co_address_family_t*)>*;                                          
        using co_receive_net_buffer_lists_handler_t =       sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                          
        using co_send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                          
        using send_complete_handler_t =                     sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*;                                          
        using wan_send_complete_handler_t =                 sdk::function<void(void*, struct ndis::wan_packet_t*, int32_t)>*;                                          
        using transfer_data_complete_handler_t =            sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*;                                          
        using receive_handler_t =                           sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*;                                          
        using wan_receive_handler_t =                       sdk::function<int32_t(void*, uint8_t*, uint32_t)>*;                                          
        using receive_packet_handler_t =                    sdk::function<int32_t(void*, struct ndis::packet_t*)>*;                                          
        using bind_adapter_handler_t =                      sdk::function<void(int32_t*, void*, nt::unicode_view*, void*, void*)>*;                                          
        using co_send_complete_handler_t =                  sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*;                                          
        using co_receive_packet_handler_t =                 sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*;                                          
        using oid_request_complete_handler_t =              sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                          
        using direct_oid_request_complete_handler_t =       sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                          
        using allocate_shared_memory_handler_t =            sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*;                                          
        using initiate_offload_complete_handler_t =         sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                          
        using terminate_offload_complete_handler_t =        sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                          
        using update_offload_complete_handler_t =           sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                          
        using invalidate_offload_complete_handler_t =       sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                          
        using query_offload_complete_handler_t =            sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                          
        using indicate_offload_event_handler_t =            sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*;                                          
        using tcp_offload_send_complete_handler_t =         sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                          
        using tcp_offload_receive_complete_handler_t =      sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                          
        using tcp_offload_disconnect_complete_handler_t =   sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                          
        using tcp_offload_forward_complete_handler_t =      sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                          
        using tcp_offload_receive_indicate_handler_t =      sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                          
                                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                               
        _m000 struct ndis::object_header_t                     header;                                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 void*                                            protocol_driver_context;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProtocolDriverContext
        _m002 struct ndis::protocol_block_t*                   next_protocol;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextProtocol
        _m003 struct ndis::open_block_t*                       open_queue;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OpenQueue
        _m004 struct ndis::reference_ex_t                      ref;                                        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Ref
        _m005 uint8_t                                          major_ndis_version;                         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MajorNdisVersion
        _m006 uint8_t                                          minor_ndis_version;                         //{ +0x0039    +0x0039    +0x0039    +0x0039    } | .MinorNdisVersion
        _m007 uint8_t                                          major_driver_version;                       //{ +0x003a    +0x003a    +0x003a    +0x003a    } | .MajorDriverVersion
        _m008 uint8_t                                          minor_driver_version;                       //{ +0x003b    +0x003b    +0x003b    +0x003b    } | .MinorDriverVersion
        _m009 uint32_t                                         flags;                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Flags
        _m010 nt::unicode_view                                 name;                                       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Name
        _m011 uint8_t                                          is_i_pv4;                                   //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .IsIPv4
        _m012 uint8_t                                          is_i_pv6;                                   //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .IsIPv6
        _m013 uint8_t                                          is_ndis_test6;                              //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .IsNdisTest6
        _m014 bind_adapter_handler_ex_t                        bind_adapter_handler_ex;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .BindAdapterHandlerEx
        _m015 sdk::function<int32_t(void*, void*)>*            unbind_adapter_handler_ex;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .UnbindAdapterHandlerEx
        _m016 sdk::function<void(void*, int32_t)>*             open_adapter_complete_handler_ex;           //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .OpenAdapterCompleteHandlerEx
        _m017 sdk::function<void(void*)>*                      close_adapter_complete_handler_ex;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .CloseAdapterCompleteHandlerEx
        _m018 pn_p_event_handler_t                             pn_p_event_handler;                         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PnPEventHandler
        _m019 net_pn_p_event_handler_t                         net_pn_p_event_handler;                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .NetPnPEventHandler
        _m020 sdk::function<void()>*                           unload_handler;                             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .UnloadHandler
        _m021 sdk::function<void()>*                           uninstall_handler;                          //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .UninstallHandler
        _m022 request_complete_handler_t                       request_complete_handler;                   //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .RequestCompleteHandler
        _m023 status_handler_ex_t                              status_handler_ex;                          //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .StatusHandlerEx
        _m024 status_handler_t                                 status_handler;                             //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .StatusHandler
        _m025 sdk::function<void(void*)>*                      status_complete_handler;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .StatusCompleteHandler
        _m026 receive_net_buffer_lists_handler_t               receive_net_buffer_lists_handler;           //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ReceiveNetBufferListsHandler
        _m027 send_net_buffer_lists_complete_handler_t         send_net_buffer_lists_complete_handler;     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .SendNetBufferListsCompleteHandler
        _m028 co_status_handler_ex_t                           co_status_handler_ex;                       //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .CoStatusHandlerEx
        _m029 co_status_handler_t                              co_status_handler;                          //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .CoStatusHandler
        _m030 co_af_register_notify_handler_t                  co_af_register_notify_handler;              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .CoAfRegisterNotifyHandler
        _m031 co_receive_net_buffer_lists_handler_t            co_receive_net_buffer_lists_handler;        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .CoReceiveNetBufferListsHandler
        _m032 co_send_net_buffer_lists_complete_handler_t      co_send_net_buffer_lists_complete_handler;  //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .CoSendNetBufferListsCompleteHandler
        _m033 sdk::function<void(void*, int32_t, int32_t)>*    open_adapter_complete_handler;              //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .OpenAdapterCompleteHandler
        _m034 sdk::function<void(void*, int32_t)>*             close_adapter_complete_handler;             //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .CloseAdapterCompleteHandler
        _m035 send_complete_handler_t                          send_complete_handler;                      //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .SendCompleteHandler
        _m036 wan_send_complete_handler_t                      wan_send_complete_handler;                  //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .WanSendCompleteHandler
        _m037 transfer_data_complete_handler_t                 transfer_data_complete_handler;             //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .TransferDataCompleteHandler
        _m038 sdk::function<void()>*                           wan_transfer_data_complete_handler;         //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .WanTransferDataCompleteHandler
        _m039 sdk::function<void(void*, int32_t)>*             reset_complete_handler;                     //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .ResetCompleteHandler
        _m040 receive_handler_t                                receive_handler;                            //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .ReceiveHandler
        _m041 wan_receive_handler_t                            wan_receive_handler;                        //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .WanReceiveHandler
        _m042 sdk::function<void(void*)>*                      receive_complete_handler;                   //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .ReceiveCompleteHandler
        _m043 receive_packet_handler_t                         receive_packet_handler;                     //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .ReceivePacketHandler
        _m044 bind_adapter_handler_t                           bind_adapter_handler;                       //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .BindAdapterHandler
        _m045 sdk::function<void(int32_t*, void*, void*)>*     unbind_adapter_handler;                     //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .UnbindAdapterHandler
        _m046 co_send_complete_handler_t                       co_send_complete_handler;                   //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .CoSendCompleteHandler
        _m047 co_receive_packet_handler_t                      co_receive_packet_handler;                  //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .CoReceivePacketHandler
        _m048 oid_request_complete_handler_t                   oid_request_complete_handler;               //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .OidRequestCompleteHandler
        _m049 struct nt::work_queue_item_t                     work_item;                                  //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .WorkItem
        _m050 struct nt::kmutant_t                             mutex;                                      //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .Mutex
        _m051 void*                                            mutex_owner_thread;                         //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .MutexOwnerThread
        _m052 uint32_t                                         mutex_owner_count;                          //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .MutexOwnerCount
        _m053 nt::unicode_view*                                bind_device_name;                           //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .BindDeviceName
        _m054 nt::unicode_view*                                root_device_name;                           //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .RootDeviceName
        _m055 struct ndis::m_driver_block_t*                   associated_mini_driver;                     //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .AssociatedMiniDriver
        _m056 struct ndis::miniport_block_t*                   binding_adapter;                            //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .BindingAdapter
        _m057 struct nt::kevent_t*                             dereg_event;                                //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .DeregEvent
        _m058 struct ndis::co_client_optional_handlers_t       client_chars;                               //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .ClientChars
        _m059 struct ndis::co_call_manager_optional_handlers_t call_mgr_chars;                             //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .CallMgrChars
        _m060 direct_oid_request_complete_handler_t            direct_oid_request_complete_handler;        //{ +0x0368    +0x0308    +0x0308    +0x0308    } | .DirectOidRequestCompleteHandler
        _m061 allocate_shared_memory_handler_t                 allocate_shared_memory_handler;             //{ +0x0370    +0x0310    +0x0310    +0x0310    } | .AllocateSharedMemoryHandler
        _m062 sdk::function<void(void*, void*)>*               free_shared_memory_handler;                 //{ +0x0378    +0x0318    +0x0318    +0x0318    } | .FreeSharedMemoryHandler
        _m063 void*                                            allocate_shared_memory_context;             //{ +0x0380    +0x0320    +0x0320    +0x0320    } | .AllocateSharedMemoryContext
        _m064 nt::unicode_view                                 image_name;                                 //{ +0x0388    +0x0328    +0x0328    +0x0328    } | .ImageName
                                                                                                         
        // Windows 10 v1607                                                                              
        //                                                                                               
        _m065 uint32_t                                         mutex_owner;                                //{ +0x01ac    } | .MutexOwner
        _m066 initiate_offload_complete_handler_t              initiate_offload_complete_handler;          //{ +0x0308    } | .InitiateOffloadCompleteHandler
        _m067 terminate_offload_complete_handler_t             terminate_offload_complete_handler;         //{ +0x0310    } | .TerminateOffloadCompleteHandler
        _m068 update_offload_complete_handler_t                update_offload_complete_handler;            //{ +0x0318    } | .UpdateOffloadCompleteHandler
        _m069 invalidate_offload_complete_handler_t            invalidate_offload_complete_handler;        //{ +0x0320    } | .InvalidateOffloadCompleteHandler
        _m070 query_offload_complete_handler_t                 query_offload_complete_handler;             //{ +0x0328    } | .QueryOffloadCompleteHandler
        _m071 indicate_offload_event_handler_t                 indicate_offload_event_handler;             //{ +0x0330    } | .IndicateOffloadEventHandler
        _m072 tcp_offload_send_complete_handler_t              tcp_offload_send_complete_handler;          //{ +0x0338    } | .TcpOffloadSendCompleteHandler
        _m073 tcp_offload_receive_complete_handler_t           tcp_offload_receive_complete_handler;       //{ +0x0340    } | .TcpOffloadReceiveCompleteHandler
        _m074 tcp_offload_disconnect_complete_handler_t        tcp_offload_disconnect_complete_handler;    //{ +0x0348    } | .TcpOffloadDisconnectCompleteHandler
        _m075 tcp_offload_forward_complete_handler_t           tcp_offload_forward_complete_handler;       //{ +0x0350    } | .TcpOffloadForwardCompleteHandler
        _m076 sdk::function<void(void*, uint32_t, uint32_t)>*  tcp_offload_event_handler;                  //{ +0x0358    } | .TcpOffloadEventHandler
        _m077 tcp_offload_receive_indicate_handler_t           tcp_offload_receive_indicate_handler;       //{ +0x0360    } | .TcpOffloadReceiveIndicateHandler
                                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_PROTOCOL_BLOCK.$", 0x378, true, 0xd717d390aa65ebc1 );                                          
        SDK_DYNAMIC_SIZE( protocol_block_t );                                                            
    };                                                                                                   
};
#include "magic/protocol_block_t.end.hpp"
