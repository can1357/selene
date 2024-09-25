#pragma once
#include <sdkgen/support_library.hpp>
#include "event_t.hpp"
#include "spin_lock_t.hpp"
#include "queued_close_t.hpp"
#include "object_header_t.hpp"
#include "pm_parameters_t.hpp"
#include "ndis5_driver_state_t.hpp"
#include "pktmon_edge_context_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "pktmon_component_context_t.hpp"

namespace nt { struct kevent_t; }

#include "magic/open_block_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct request_t;
    struct open_block_t;
    struct co_af_block_t;
    struct oid_request_t;
    struct open_offload_t;
    struct miniport_block_t;
    struct protocol_block_t;
    struct net_buffer_list_t;
    struct refcount_handle_t;
    struct status_indication_t;
    struct bind_protocol_link_t;
    struct co_call_parameters_t;
    struct nbl_tracker_handle_t;
    struct eth_multicast_wrapper_t;
    struct status_unbind_workitem_t;
    struct pndis_per_processor_slot_t;
    struct receive_scale_parameters_t;
    struct shared_memory_parameters_t;
    struct protocol_offload_block_list_t;

    // [struct _NDIS_OPEN_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct open_block_t                                                                               
    {                                                                                                 
        using next_send_handler_t =                       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                        
        using next_return_net_buffer_lists_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                        
        using send_handler_t =                            sdk::function<int32_t(void*, struct ndis::packet_t*)>*;                                        
        using transfer_data_handler_t =                   sdk::function<int32_t(void*, void*, uint32_t, uint32_t, struct ndis::packet_t*, uint32_t*)>*;                                        
        using send_complete_handler_t =                   sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*;                                        
        using transfer_data_complete_handler_t =          sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*;                                        
        using receive_handler_t =                         sdk::function<int32_t(void*, void*, void*, uint32_t, void*, uint32_t, uint32_t)>*;                                        
        using wan_receive_handler_t =                     sdk::function<int32_t(void*, uint8_t*, uint32_t)>*;                                        
        using request_complete_handler_t =                sdk::function<void(void*, struct ndis::request_t*, int32_t)>*;                                        
        using receive_packet_handler_t =                  sdk::function<int32_t(void*, struct ndis::packet_t*)>*;                                        
        using send_packets_handler_t =                    sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                        
        using request_handler_t =                         sdk::function<int32_t(void*, struct ndis::request_t*)>*;                                        
        using oid_request_handler_t =                     sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                        
        using status_handler_t =                          sdk::function<void(void*, int32_t, void*, uint32_t)>*;                                        
        using status_handler_ex_t =                       sdk::function<void(void*, struct ndis::status_indication_t*)>*;                                        
        using w_send_handler_t =                          sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*;                                        
        using w_transfer_data_handler_t =                 sdk::function<int32_t(struct ndis::packet_t*, uint32_t*, void*, void*, uint32_t, uint32_t)>*;                                        
        using w_send_packets_handler_t =                  sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                        
        using prot_send_net_buffer_lists_complete_t =     sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                        
        using receive_net_buffer_lists_t =                sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                        
        using saved_send_packets_handler_t =              sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                        
        using saved_send_handler_t =                      sdk::function<int32_t(void*, struct ndis::packet_t*)>*;                                        
        using prot_send_complete_handler_t =              sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*;                                        
        using oid_request_complete_handler_t =            sdk::function<void(void*, struct ndis::oid_request_t*, int32_t)>*;                                        
        using direct_oid_request_handler_t =              sdk::function<int32_t(void*, struct ndis::oid_request_t*)>*;                                        
        using allocate_shared_memory_handler_t =          sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*;                                        
        using miniport_co_request_handler_t =             sdk::function<int32_t(void*, void*, struct ndis::request_t*)>*;                                        
        using cm_activate_vc_complete_handler_t =         sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                        
        using co_request_complete_handler_t =             sdk::function<void(int32_t, void*, void*, void*, struct ndis::request_t*)>*;                                        
        using co_request_handler_t =                      sdk::function<int32_t(void*, void*, void*, struct ndis::request_t*)>*;                                        
        using miniport_co_oid_request_handler_t =         sdk::function<int32_t(void*, void*, struct ndis::oid_request_t*)>*;                                        
        using co_oid_request_complete_handler_t =         sdk::function<void(void*, void*, void*, struct ndis::oid_request_t*, int32_t)>*;                                        
        using co_oid_request_handler_t =                  sdk::function<int32_t(void*, void*, void*, struct ndis::oid_request_t*)>*;                                        
        using initiate_offload_complete_handler_t =       sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using terminate_offload_complete_handler_t =      sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using update_offload_complete_handler_t =         sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using invalidate_offload_complete_handler_t =     sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using query_offload_complete_handler_t =          sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                        
        using indicate_offload_event_handler_t =          sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*;                                        
        using tcp_offload_send_complete_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_disconnect_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_forward_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                        
        using tcp_offload_receive_indicate_handler_t =    sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                        
                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
        //                                                                                            
        _m000 void*                                           mac_handle;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MacHandle
        _m001 struct ndis::object_header_t                    header;                                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m002 void*                                           binding_handle;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .BindingHandle
        _m003 struct ndis::miniport_block_t*                  miniport_handle;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MiniportHandle
        _m004 struct ndis::protocol_block_t*                  protocol_handle;                          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProtocolHandle
        _m005 void*                                           protocol_binding_context;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ProtocolBindingContext
        _m006 next_send_handler_t                             next_send_handler;                        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NextSendHandler
        _m007 void*                                           next_send_context;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NextSendContext
        _m008 void*                                           miniport_adapter_context;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MiniportAdapterContext
        _m009 uint8_t                                         calling_from_ndis6_protocol;              //{ +0x0041    +0x0041    +0x0041    +0x0041    } | .CallingFromNdis6Protocol
        _m010 next_return_net_buffer_lists_handler_t          next_return_net_buffer_lists_handler;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NextReturnNetBufferListsHandler
        _m011 void*                                           next_return_net_buffer_lists_context;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .NextReturnNetBufferListsContext
        _m012 send_handler_t                                  send_handler;                             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SendHandler
        _m013 sdk::function<int32_t(void*, void*, void*)>*    wan_send_handler;                         //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WanSendHandler
        _m014 transfer_data_handler_t                         transfer_data_handler;                    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .TransferDataHandler
        _m015 send_complete_handler_t                         send_complete_handler;                    //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .SendCompleteHandler
        _m016 transfer_data_complete_handler_t                transfer_data_complete_handler;           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .TransferDataCompleteHandler
        _m017 receive_handler_t                               receive_handler;                          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ReceiveHandler
        _m018 sdk::function<void(void*)>*                     receive_complete_handler;                 //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .ReceiveCompleteHandler
        _m019 wan_receive_handler_t                           wan_receive_handler;                      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .WanReceiveHandler
        _m020 request_complete_handler_t                      request_complete_handler;                 //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .RequestCompleteHandler
        _m021 receive_packet_handler_t                        receive_packet_handler;                   //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .ReceivePacketHandler
        _m022 send_packets_handler_t                          send_packets_handler;                     //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SendPacketsHandler
        _m023 sdk::function<int32_t(void*)>*                  reset_handler;                            //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .ResetHandler
        _m024 request_handler_t                               request_handler;                          //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .RequestHandler
        _m025 oid_request_handler_t                           oid_request_handler;                      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .OidRequestHandler
        _m026 sdk::function<void(void*, int32_t)>*            reset_complete_handler;                   //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .ResetCompleteHandler
        _m027 status_handler_t                                status_handler;                           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .StatusHandler
        _m028 status_handler_ex_t                             status_handler_ex;                        //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .StatusHandlerEx
        _m029 sdk::function<void(void*)>*                     status_complete_handler;                  //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .StatusCompleteHandler
        _m030 volatile uint32_t                               open_flags;                               //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .OpenFlags
        _m031 int32_t                                         references;                               //{ +0x00e4    +0x00e4    +0x00e4    +0x00e4    } | .References
        _m032 uint64_t                                        spin_lock;                                //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .SpinLock
        _m033 void*                                           filter_handle;                            //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .FilterHandle
        _m034 uint32_t                                        frame_type_array_size;                    //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .FrameTypeArraySize
        _m035 sdk::array<uint16_t, 4>                         frame_type_array;                         //{ +0x00fc    +0x00fc    +0x00fc    +0x00fc    } | .FrameTypeArray
        _m036 uint32_t                                        protocol_options;                         //{ +0x0104    +0x0104    +0x0104    +0x0104    } | .ProtocolOptions
        _m037 uint32_t                                        current_lookahead;                        //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .CurrentLookahead
        _m038 w_send_handler_t                                w_send_handler;                           //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .WSendHandler
        _m039 w_transfer_data_handler_t                       w_transfer_data_handler;                  //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .WTransferDataHandler
        _m040 w_send_packets_handler_t                        w_send_packets_handler;                   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .WSendPacketsHandler
        _m041 sdk::function<void(void*, void*)>*              cancel_send_packets_handler;              //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .CancelSendPacketsHandler
        _m042 uint32_t                                        wake_up_enable;                           //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .WakeUpEnable
        _m043 struct ndis::pm_parameters_t                    pm_current_parameters;                    //{ +0x0134    +0x0134    +0x0134    +0x0134    } | .PMCurrentParameters
        _m044 struct nt::kevent_t*                            close_complete_event;                     //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .CloseCompleteEvent
        _m045 int32_t                                         af_references;                            //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .AfReferences
        _m046 struct ndis::open_block_t*                      next_global_open;                         //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .NextGlobalOpen
        _m047 struct ndis::open_block_t*                      miniport_next_open;                       //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .MiniportNextOpen
        _m048 struct ndis::open_block_t*                      protocol_next_open;                       //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .ProtocolNextOpen
        _m049 nt::unicode_view*                               bind_device_name;                         //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .BindDeviceName
        _m050 nt::unicode_view*                               root_device_name;                         //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .RootDeviceName
        _m051 struct ndis::open_block_t*                      filter_next_open;                         //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .FilterNextOpen
        _m052 uint32_t                                        packet_filters;                           //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .PacketFilters
        _m053 uint32_t                                        old_packet_filters;                       //{ +0x01b4    +0x01b4    +0x01b4    +0x01b4    } | .OldPacketFilters
        _m054 uint32_t                                        max_multicast_addresses;                  //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .MaxMulticastAddresses
        _m055 struct ndis::eth_multicast_wrapper_t*           m_cast_address_buf;                       //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .MCastAddressBuf
        _m056 uint32_t                                        num_addresses;                            //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .NumAddresses
        _m057 struct ndis::eth_multicast_wrapper_t*           old_m_cast_address_buf;                   //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .OldMCastAddressBuf
        _m058 uint32_t                                        old_num_addresses;                        //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .OldNumAddresses
        _m059 uint8_t*                                        rss_parameters_buffer;                    //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .RssParametersBuffer
        _m060 struct ndis::receive_scale_parameters_t*        ndis_rss_parameters;                      //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .NdisRSSParameters
        _m061 struct nt::single_list_entry_t                  pattern_list;                             //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .PatternList
        _m062 struct nt::single_list_entry_t                  wol_pattern_list;                         //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .WOLPatternList
        _m063 struct nt::single_list_entry_t                  pm_protocol_offload_list;                 //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .PMProtocolOffloadList
        _m064 prot_send_net_buffer_lists_complete_t           prot_send_net_buffer_lists_complete;      //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .ProtSendNetBufferListsComplete
        _m065 void*                                           send_complete_ndis_packet_context;        //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .SendCompleteNdisPacketContext
        _m066 void*                                           send_complete_net_buffer_lists_context;   //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .SendCompleteNetBufferListsContext
        _m067 receive_net_buffer_lists_t                      receive_net_buffer_lists;                 //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .ReceiveNetBufferLists
        _m068 void*                                           receive_net_buffer_lists_context;         //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .ReceiveNetBufferListsContext
        _m069 saved_send_packets_handler_t                    saved_send_packets_handler;               //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .SavedSendPacketsHandler
        _m070 sdk::function<void(void*, void*)>*              saved_cancel_send_packets_handler;        //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .SavedCancelSendPacketsHandler
        _m071 saved_send_handler_t                            saved_send_handler;                       //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .SavedSendHandler
        _m072 struct ndis::nbl_tracker_handle_t*              nbl_tracker;                              //{ +0x02a8    +0x0248    +0x0248    +0x0248    } | .NblTracker
        _m073 struct ndis::refcount_handle_t*                 ref_count_tracker;                        //{ +0x02b0    +0x0250    +0x0250    +0x0250    } | .RefCountTracker
        _m074 uint64_t                                        ref_count_lock;                           //{ +0x02b8    +0x0258    +0x0258    +0x0258    } | .RefCountLock
        _m075 uint32_t                                        protocol_major_version;                   //{ +0x02c0    +0x0260    +0x0260    +0x0260    } | .ProtocolMajorVersion
        _m076 void**                                          if_block;                                 //{ +0x02c8    +0x0268    +0x0268    +0x0268    } | .IfBlock
        _m077 struct ndis::spin_lock_t                        pn_p_state_lock;                          //{ +0x02d0    +0x0270    +0x0270    +0x0270    } | .PnPStateLock
        _m078 enum ndis::ndis5_driver_state_t                 pn_p_state;                               //{ +0x02e0    +0x0280    +0x0280    +0x0280    } | .PnPState
        _m079 int32_t                                         outstanding_sends;                        //{ +0x02e4    +0x0284    +0x0284    +0x0284    } | .OutstandingSends
        _m080 struct ndis::event_t                            pause_event;                              //{ +0x02e8    +0x0288    +0x0288    +0x0288    } | .PauseEvent
        _m081 sdk::function<int32_t(void*, void*, void*)>*    ndis5_wan_send_handler;                   //{ +0x0300    +0x02a0    +0x02a0    +0x02a0    } | .Ndis5WanSendHandler
        _m082 prot_send_complete_handler_t                    prot_send_complete_handler;               //{ +0x0308    +0x02a8    +0x02a8    +0x02a8    } | .ProtSendCompleteHandler
        _m083 oid_request_complete_handler_t                  oid_request_complete_handler;             //{ +0x0310    +0x02b0    +0x02b0    +0x02b0    } | .OidRequestCompleteHandler
        _m084 struct ndis::open_offload_t*                    offload;                                  //{ +0x0318    +0x02b8    +0x02b8    +0x02b8    } | .Offload
        _m085 struct ndis::status_unbind_workitem_t*          status_unbind_work_item;                  //{ +0x0320    +0x02c0    +0x02c0    +0x02c0    } | .StatusUnbindWorkItem
        _m086 uint64_t                                        dpc_start_cycle;                          //{ +0x0328    +0x02c8    +0x02c8    +0x02c8    } | .DpcStartCycle
        _m087 struct ndis::pndis_per_processor_slot_t*        received_a_packet_slot;                   //{ +0x0330    +0x02d0    +0x02d0    +0x02d0    } | .ReceivedAPacketSlot
        _m088 direct_oid_request_handler_t                    direct_oid_request_handler;               //{ +0x0338    +0x02d8    +0x02d8    +0x02d8    } | .DirectOidRequestHandler
        _m089 nt::list_entry_t                                receive_queue_list;                       //{ +0x0340    +0x02e0    +0x02e0    +0x02e0    } | .ReceiveQueueList
        _m090 uint32_t                                        num_receive_queues;                       //{ +0x0350    +0x02f0    +0x02f0    +0x02f0    } | .NumReceiveQueues
        _m091 nt::list_entry_t                                shared_memory_block_list;                 //{ +0x0358    +0x02f8    +0x02f8    +0x02f8    } | .SharedMemoryBlockList
        _m092 allocate_shared_memory_handler_t                allocate_shared_memory_handler;           //{ +0x0368    +0x0308    +0x0308    +0x0308    } | .AllocateSharedMemoryHandler
        _m093 sdk::function<void(void*, void*)>*              free_shared_memory_handler;               //{ +0x0370    +0x0310    +0x0310    +0x0310    } | .FreeSharedMemoryHandler
        _m094 void*                                           allocate_shared_memory_context;           //{ +0x0378    +0x0318    +0x0318    +0x0318    } | .AllocateSharedMemoryContext
        _m095 uint32_t                                        num_allocated_v_fs;                       //{ +0x0380    +0x0320    +0x0320    +0x0320    } | .NumAllocatedVFs
        _m096 nt::list_entry_t                                vf_list;                                  //{ +0x0388    +0x0328    +0x0328    +0x0328    } | .VFList
        _m097 uint32_t                                        num_active_v_ports;                       //{ +0x0398    +0x0338    +0x0338    +0x0338    } | .NumActiveVPorts
        _m098 nt::list_entry_t                                v_port_list;                              //{ +0x03a0    +0x0340    +0x0340    +0x0340    } | .VPortList
        _m099 uint32_t                                        ao_ac_references;                         //{ +0x03b0    +0x0350    +0x0350    +0x0350    } | .AoAcReferences
        _m100 struct ndis::bind_protocol_link_t*              bind;                                     //{ +0x03b8    +0x0358    +0x0358    +0x0358    } | .Bind
        _m101 struct nt::work_queue_item_t                    unsolicited_unbind_complete;              //{ +0x03c0    +0x0360    +0x0360    +0x0360    } | .UnsolicitedUnbindComplete
        _m102 struct nt::kevent_t*                            unsolicited_unbind_event;                 //{ +0x03e0    +0x0380    +0x0380    +0x0380    } | .UnsolicitedUnbindEvent
        _m103 bool                                            pending_legacy_unbind;                    //{ +0x03e8    +0x0388    +0x0388    +0x0388    } | .PendingLegacyUnbind
        _m104 struct nt::kevent_t*                            wait_net_pnp_event;                       //{ +0x03f0    +0x0390    +0x0390    +0x0390    } | .WaitNetPnpEvent
        _m105 struct ndis::co_af_block_t*                     next_af;                                  //{ +0x03f8    +0x03c0    +0x03c0    +0x03c0    } | .NextAf
        _m106 sdk::function<int32_t(void*, void*, void**)>*   miniport_co_create_vc_handler;            //{ +0x0400    +0x03c8    +0x03c8    +0x03c8    } | .MiniportCoCreateVcHandler
        _m107 miniport_co_request_handler_t                   miniport_co_request_handler;              //{ +0x0408    +0x03d0    +0x03d0    +0x03d0    } | .MiniportCoRequestHandler
        _m108 sdk::function<int32_t(void*, void*, void**)>*   co_create_vc_handler;                     //{ +0x0410    +0x03d8    +0x03d8    +0x03d8    } | .CoCreateVcHandler
        _m109 sdk::function<int32_t(void*)>*                  co_delete_vc_handler;                     //{ +0x0418    +0x03e0    +0x03e0    +0x03e0    } | .CoDeleteVcHandler
        _m110 cm_activate_vc_complete_handler_t               cm_activate_vc_complete_handler;          //{ +0x0420    +0x03e8    +0x03e8    +0x03e8    } | .CmActivateVcCompleteHandler
        _m111 sdk::function<void(int32_t, void*)>*            cm_deactivate_vc_complete_handler;        //{ +0x0428    +0x03f0    +0x03f0    +0x03f0    } | .CmDeactivateVcCompleteHandler
        _m112 co_request_complete_handler_t                   co_request_complete_handler;              //{ +0x0430    +0x03f8    +0x03f8    +0x03f8    } | .CoRequestCompleteHandler
        _m113 co_request_handler_t                            co_request_handler;                       //{ +0x0438    +0x0400    +0x0400    +0x0400    } | .CoRequestHandler
        _m114 nt::list_entry_t                                active_vc_head;                           //{ +0x0440    +0x0408    +0x0408    +0x0408    } | .ActiveVcHead
        _m115 nt::list_entry_t                                inactive_vc_head;                         //{ +0x0450    +0x0418    +0x0418    +0x0418    } | .InactiveVcHead
        _m116 int32_t                                         pending_af_notifications;                 //{ +0x0460    +0x0428    +0x0428    +0x0428    } | .PendingAfNotifications
        _m117 struct nt::kevent_t*                            af_notify_complete_event;                 //{ +0x0468    +0x0430    +0x0430    +0x0430    } | .AfNotifyCompleteEvent
        _m118 miniport_co_oid_request_handler_t               miniport_co_oid_request_handler;          //{ +0x0470    +0x0438    +0x0438    +0x0438    } | .MiniportCoOidRequestHandler
        _m119 co_oid_request_complete_handler_t               co_oid_request_complete_handler;          //{ +0x0478    +0x0440    +0x0440    +0x0440    } | .CoOidRequestCompleteHandler
        _m120 co_oid_request_handler_t                        co_oid_request_handler;                   //{ +0x0480    +0x0448    +0x0448    +0x0448    } | .CoOidRequestHandler
                                                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                            
        _m121 struct ndis::pktmon_component_context_t         pkt_mon_comp;                             //{ +0x0398    +0x0398    +0x0398    } | .PktMonComp
        _m122 struct ndis::pktmon_edge_context_t              pkt_mon_edge;                             //{ +0x03a8    +0x03a8    +0x03a8    } | .PktMonEdge
                                                                                                      
        // Windows 10 v1607                                                                           
        //                                                                                            
        _m123 struct ndis::queued_close_t                     qc;                                       //{ +0x0150    } | .QC
        _m124 initiate_offload_complete_handler_t             initiate_offload_complete_handler;        //{ +0x0248    } | .InitiateOffloadCompleteHandler
        _m125 terminate_offload_complete_handler_t            terminate_offload_complete_handler;       //{ +0x0250    } | .TerminateOffloadCompleteHandler
        _m126 update_offload_complete_handler_t               update_offload_complete_handler;          //{ +0x0258    } | .UpdateOffloadCompleteHandler
        _m127 invalidate_offload_complete_handler_t           invalidate_offload_complete_handler;      //{ +0x0260    } | .InvalidateOffloadCompleteHandler
        _m128 query_offload_complete_handler_t                query_offload_complete_handler;           //{ +0x0268    } | .QueryOffloadCompleteHandler
        _m129 indicate_offload_event_handler_t                indicate_offload_event_handler;           //{ +0x0270    } | .IndicateOffloadEventHandler
        _m130 tcp_offload_send_complete_handler_t             tcp_offload_send_complete_handler;        //{ +0x0278    } | .TcpOffloadSendCompleteHandler
        _m131 tcp_offload_receive_complete_handler_t          tcp_offload_receive_complete_handler;     //{ +0x0280    } | .TcpOffloadReceiveCompleteHandler
        _m132 tcp_offload_disconnect_complete_handler_t       tcp_offload_disconnect_complete_handler;  //{ +0x0288    } | .TcpOffloadDisconnectCompleteHandler
        _m133 tcp_offload_forward_complete_handler_t          tcp_offload_forward_complete_handler;     //{ +0x0290    } | .TcpOffloadForwardCompleteHandler
        _m134 sdk::function<void(void*, uint32_t, uint32_t)>* tcp_offload_event_handler;                //{ +0x0298    } | .TcpOffloadEventHandler
        _m135 tcp_offload_receive_indicate_handler_t          tcp_offload_receive_indicate_handler;     //{ +0x02a0    } | .TcpOffloadReceiveIndicateHandler
                                                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_OPEN_BLOCK.$", 0x450, true, 0x5c115d97dbe5287 );                                        
        SDK_DYNAMIC_SIZE( open_block_t );                                                             
    };                                                                                                
};
#include "magic/open_block_t.end.hpp"
