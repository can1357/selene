#pragma once
#include <sdkgen/support_library.hpp>
#include "medium_t.hpp"
#include "../nt/guid_t.hpp"
#include "filter_state_t.hpp"
#include "reference_ex_t.hpp"
#include "object_header_t.hpp"
#include "pm_parameters_t.hpp"
#include "physical_medium_t.hpp"
#include "pktmon_edge_context_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "pktmon_component_context_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "supported_pause_functions_t.hpp"
#include "net_if_media_connect_state_t.hpp"
#include "filter_partial_characteristics_t.hpp"
#include "pending_stack_expansion_fallback_work_t.hpp"

#include "magic/filter_block_t.start.hpp"
namespace ndis
{
    struct if_block_t;
    struct oid_request_t;
    struct filter_block_t;
    struct miniport_block_t;
    struct net_buffer_list_t;
    struct bind_filter_link_t;
    struct nbl_tracker_handle_t;
    struct filter_driver_block_t;
    struct filter_task_offload_t;
    struct timestamp_capabilities_t;
    struct miniport_offload_block_list_t;
    struct protocol_offload_block_list_t;
    struct filter_pause_restart_context_t;
    struct iterative_data_path_tracker_entry_t;

    // [struct _NDIS_FILTER_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct filter_block_t                                                                                          
    {                                                                                                              
        struct u0_stack_expansion_fallback_t                                                                       
        {                                                                                                          
            using pending_work_t = struct ndis::pending_stack_expansion_fallback_work_t;                                                                  
                                                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                                                     
            _m20 struct nt::work_queue_item_t work_item;                                                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItem
            _m21 uint8_t                      work_item_queued;                                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .WorkItemQueued
            _m22 pending_work_t               pending_work;                                                          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PendingWork
                                                                                                                   
            SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_BLOCK.StackExpansionFallback.$", 0x60, true, 0xec469a2e0e0b44c );                                                                  
            SDK_FIXED_SIZE( u0_stack_expansion_fallback_t, 0x60 );                                                                  
        };                                                                                                         
                                                                                                                   
        using iterative_data_path_tracker_t =                      sdk::array<struct ndis::iterative_data_path_tracker_entry_t, 4>*;                                                 
        using next_send_net_buffer_lists_handler_t =               sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                                 
        using next_send_net_buffer_lists_complete_handler_t =      sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                                 
        using next_indicate_receive_net_buffer_lists_handler_t =   sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                                 
        using next_return_net_buffer_lists_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                                 
        using filter_send_net_buffer_lists_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                                 
        using filter_indicate_receive_net_buffer_lists_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                                 
        using tcp_offload_receive_return_handler_t =               sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*)>*;                                                 
        using initiate_offload_complete_handler_t =                sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                                 
        using terminate_offload_complete_handler_t =               sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                                 
        using update_offload_complete_handler_t =                  sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                                 
        using invalidate_offload_complete_handler_t =              sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                                 
        using query_offload_complete_handler_t =                   sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*)>*;                                                 
        using indicate_offload_event_handler_t =                   sdk::function<void(void*, struct ndis::protocol_offload_block_list_t*, uint32_t)>*;                                                 
        using tcp_offload_send_complete_handler_t =                sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                                 
        using tcp_offload_receive_complete_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                                 
        using tcp_offload_disconnect_complete_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                                 
        using tcp_offload_forward_complete_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*)>*;                                                 
        using tcp_offload_receive_indicate_handler_t =             sdk::function<int32_t(void*, struct ndis::net_buffer_list_t*, int32_t, uint32_t*)>*;                                                 
        using initiate_offload_handler_t =                         sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                 
        using terminate_offload_handler_t =                        sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                 
        using update_offload_handler_t =                           sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                 
        using invalidate_offload_handler_t =                       sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                 
        using query_offload_handler_t =                            sdk::function<void(void*, struct ndis::miniport_offload_block_list_t*)>*;                                                 
                                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
        //                                                                                                         
        _m000 struct ndis::object_header_t                        header;                                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 struct ndis::filter_block_t*                        next_filter;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextFilter
        _m002 struct ndis::filter_driver_block_t*                 filter_driver;                                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FilterDriver
        _m003 void*                                               filter_module_context;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FilterModuleContext
        _m004 struct ndis::miniport_block_t*                      miniport;                                          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Miniport
        _m005 nt::unicode_view*                                   filter_friendly_name;                              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FilterFriendlyName
        _m006 uint32_t                                            flags;                                             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Flags
        _m007 uint32_t                                            stack_flags;                                       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .StackFlags
        _m008 enum ndis::filter_state_t                           state;                                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .State
        _m009 struct ndis::reference_ex_t                         ref;                                               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Ref
        _m010 int32_t                                             fake_status;                                       //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .FakeStatus
        _m011 struct ndis::filter_block_t*                        next_global_filter;                                //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .NextGlobalFilter
        _m012 struct ndis::filter_block_t*                        lower_filter;                                      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .LowerFilter
        _m013 struct ndis::filter_block_t*                        higher_filter;                                     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .HigherFilter
        _m014 struct ndis::filter_pause_restart_context_t*        async_op_context;                                  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .AsyncOpContext
        _m015 int32_t                                             num_of_pause_restart_requests;                     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .NumOfPauseRestartRequests
        _m016 uint64_t                                            lock;                                              //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .Lock
        _m017 void*                                               lock_thread;                                       //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .LockThread
        _m018 nt::list_entry_t                                    oid_request_list;                                  //{ +0x00a8    +0x00a0    +0x00a0    +0x00a0    } | .OidRequestList
        _m019 struct ndis::oid_request_t*                         pending_oid_request;                               //{ +0x00b8    +0x00b0    +0x00b0    +0x00b0    } | .PendingOidRequest
        _m023 u0_stack_expansion_fallback_t                       stack_expansion_fallback;                          //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .StackExpansionFallback
        _m024 volatile uint8_t                                    status_indications_queued;                         //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .StatusIndicationsQueued
        _m025 volatile int32_t                                    dropped_receive_nbls;                              //{ +0x0124    +0x0124    +0x0124    +0x0124    } | .DroppedReceiveNbls
        _m026 volatile int32_t                                    dropped_send_nbls;                                 //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .DroppedSendNbls
        _m027 uint32_t                                            dropped_status_indications;                        //{ +0x012c    +0x012c    +0x012c    +0x012c    } | .DroppedStatusIndications
        _m028 uint32_t                                            dropped_uncloneable_status_indications;            //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .DroppedUncloneableStatusIndications
        _m029 struct ndis::reference_ex_t                         pn_p_ref;                                          //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .PnPRef
        _m030 enum ndis::medium_t                                 media_type;                                        //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .MediaType
        _m031 enum ndis::physical_medium_t                        physical_media_type;                               //{ +0x0154    +0x0154    +0x0154    +0x0154    } | .PhysicalMediaType
        _m032 enum ndis::net_if_media_connect_state_t             media_connect_state;                               //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .MediaConnectState
        _m033 enum ndis::net_if_media_duplex_state_t              media_duplex_state;                                //{ +0x015c    +0x015c    +0x015c    +0x015c    } | .MediaDuplexState
        _m034 uint64_t                                            xmit_link_speed;                                   //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .XmitLinkSpeed
        _m035 uint64_t                                            rcv_link_speed;                                    //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .RcvLinkSpeed
        _m036 enum ndis::supported_pause_functions_t              pause_functions;                                   //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .PauseFunctions
        _m037 uint32_t                                            auto_negotiation_flags;                            //{ +0x0174    +0x0174    +0x0174    +0x0174    } | .AutoNegotiationFlags
        _m038 uint8_t                                             x_state;                                           //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .XState
        _m039 enum ndis::net_if_media_connect_state_t             media_connect_state_indicate_up;                   //{ +0x017c    +0x017c    +0x017c    +0x017c    } | .MediaConnectStateIndicateUp
        _m040 enum ndis::net_if_media_duplex_state_t              media_duplex_state_indicate_up;                    //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .MediaDuplexStateIndicateUp
        _m041 uint64_t                                            xmit_link_speed_indicate_up;                       //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .XmitLinkSpeedIndicateUp
        _m042 uint64_t                                            rcv_link_speed_indicate_up;                        //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .RcvLinkSpeedIndicateUp
        _m043 enum ndis::supported_pause_functions_t              pause_functions_indicate_up;                       //{ +0x0198    +0x0198    +0x0198    +0x0198    } | .PauseFunctionsIndicateUp
        _m044 uint32_t                                            auto_negotiation_flags_indicate_up;                //{ +0x019c    +0x019c    +0x019c    +0x019c    } | .AutoNegotiationFlagsIndicateUp
        _m045 void*                                               next_request_handle;                               //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .NextRequestHandle
        _m046 iterative_data_path_tracker_t                       iterative_data_path_tracker;                       //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .IterativeDataPathTracker
        _m047 next_send_net_buffer_lists_handler_t                next_send_net_buffer_lists_handler;                //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .NextSendNetBufferListsHandler
        _m048 void*                                               next_send_net_buffer_lists_context;                //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .NextSendNetBufferListsContext
        _m049 struct ndis::nbl_tracker_handle_t*                  next_send_net_buffer_lists_tracker;                //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .NextSendNetBufferListsTracker
        _m050 struct ndis::object_header_t*                       next_send_net_buffer_lists_object;                 //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .NextSendNetBufferListsObject
        _m051 next_send_net_buffer_lists_complete_handler_t       next_send_net_buffer_lists_complete_handler;       //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .NextSendNetBufferListsCompleteHandler
        _m052 void*                                               next_send_net_buffer_lists_complete_context;       //{ +0x01d8    +0x01d8    +0x01d8    +0x01d8    } | .NextSendNetBufferListsCompleteContext
        _m053 struct ndis::nbl_tracker_handle_t*                  next_send_net_buffer_lists_complete_tracker;       //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .NextSendNetBufferListsCompleteTracker
        _m054 struct ndis::object_header_t*                       next_send_net_buffer_lists_complete_object;        //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .NextSendNetBufferListsCompleteObject
        _m055 next_indicate_receive_net_buffer_lists_handler_t    next_indicate_receive_net_buffer_lists_handler;    //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .NextIndicateReceiveNetBufferListsHandler
        _m056 void*                                               next_indicate_receive_net_buffer_lists_context;    //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .NextIndicateReceiveNetBufferListsContext
        _m057 struct ndis::nbl_tracker_handle_t*                  next_indicate_receive_net_buffer_lists_tracker;    //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .NextIndicateReceiveNetBufferListsTracker
        _m058 struct ndis::object_header_t*                       next_indicate_receive_net_buffer_lists_object;     //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .NextIndicateReceiveNetBufferListsObject
        _m059 next_return_net_buffer_lists_handler_t              next_return_net_buffer_lists_handler;              //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .NextReturnNetBufferListsHandler
        _m060 void*                                               next_return_net_buffer_lists_context;              //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .NextReturnNetBufferListsContext
        _m061 struct ndis::nbl_tracker_handle_t*                  next_return_net_buffer_lists_tracker;              //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .NextReturnNetBufferListsTracker
        _m062 struct ndis::object_header_t*                       next_return_net_buffer_lists_object;               //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .NextReturnNetBufferListsObject
        _m063 sdk::function<void(void*, void*)>*                  next_cancel_send_net_buffer_lists_handler;         //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .NextCancelSendNetBufferListsHandler
        _m064 void*                                               next_cancel_send_net_buffer_lists_context;         //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .NextCancelSendNetBufferListsContext
        _m065 struct ndis::filter_partial_characteristics_t       characteristics;                                   //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .Characteristics
        _m066 filter_send_net_buffer_lists_handler_t              filter_send_net_buffer_lists_handler;              //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .FilterSendNetBufferListsHandler
        _m067 filter_indicate_receive_net_buffer_lists_handler_t  filter_indicate_receive_net_buffer_lists_handler;  //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .FilterIndicateReceiveNetBufferListsHandler
        _m068 sdk::function<void(void*, void*)>*                  filter_cancel_send_net_buffer_lists_handler;       //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .FilterCancelSendNetBufferListsHandler
        _m069 struct ndis::nbl_tracker_handle_t*                  nbl_tracker;                                       //{ +0x0318    +0x0290    +0x0288    +0x0290    } | .NblTracker
        _m070 struct ndis::filter_task_offload_t*                 offload;                                           //{ +0x0320    +0x0298    +0x0290    +0x0298    } | .Offload
        _m071 struct nt::guid_t                                   interface_guid;                                    //{ +0x0328    +0x02a0    +0x0298    +0x02a0    } | .InterfaceGuid
        _m072 uint32_t                                            if_index;                                          //{ +0x0338    +0x02b0    +0x02a8    +0x02b0    } | .IfIndex
        _m073 struct ndis::if_block_t*                            if_block;                                          //{ +0x0340    +0x02b8    +0x02b0    +0x02b8    } | .IfBlock
        _m074 void*                                               next_direct_request_handle;                        //{ +0x0348    +0x02c0    +0x02b8    +0x02c0    } | .NextDirectRequestHandle
        _m075 uint32_t                                            direct_oid_request_count;                          //{ +0x0350    +0x02c8    +0x02c0    +0x02c8    } | .DirectOidRequestCount
        _m076 struct nt::single_list_entry_t                      wol_pattern_list;                                  //{ +0x0358    +0x02d0    +0x02c8    +0x02d0    } | .WOLPatternList
        _m077 struct nt::single_list_entry_t                      pm_protocol_offload_list;                          //{ +0x0360    +0x02d8    +0x02d0    +0x02d8    } | .PMProtocolOffloadList
        _m078 struct ndis::pm_parameters_t                        pm_current_parameters;                             //{ +0x0368    +0x02e0    +0x02d8    +0x02e0    } | .PMCurrentParameters
        _m079 struct ndis::bind_filter_link_t*                    bind;                                              //{ +0x0380    +0x02f8    +0x02f0    +0x02f8    } | .Bind
        _m080 void*                                               verifier_context;                                  //{ +0x0388    +0x0310    +0x0308    +0x0310    } | .VerifierContext
                                                                                                                   
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                          
        //                                                                                                         
        _m081 struct ndis::timestamp_capabilities_t*              hw_timestamp_capabilities;                         //{ +0x0300    +0x02f8    +0x0300    } | .HwTimestampCapabilities
        _m082 struct ndis::timestamp_capabilities_t*              hw_timestamp_current_config;                       //{ +0x0308    +0x0300    +0x0308    } | .HwTimestampCurrentConfig
        _m083 struct ndis::pktmon_component_context_t             pkt_mon_comp;                                      //{ +0x0318    +0x0310    +0x0318    } | .PktMonComp
        _m084 struct ndis::pktmon_edge_context_t                  pkt_mon_edge_lower;                                //{ +0x0328    +0x0320    +0x0328    } | .PktMonEdgeLower
        _m085 struct ndis::pktmon_edge_context_t                  pkt_mon_edge_upper;                                //{ +0x0340    +0x0338    +0x0340    } | .PktMonEdgeUpper
                                                                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                                    
        //                                                                                                         
        _m086 tcp_offload_receive_return_handler_t                tcp_offload_receive_return_handler;                //{ +0x0310    +0x0288    +0x0288    } | .TcpOffloadReceiveReturnHandler
                                                                                                                   
        // Windows 10 v1607                                                                                        
        //                                                                                                         
        _m087 uint32_t                                            lock_dbg;                                          //{ +0x00a0    } | .LockDbg
        _m088 initiate_offload_complete_handler_t                 initiate_offload_complete_handler;                 //{ +0x0288    } | .InitiateOffloadCompleteHandler
        _m089 terminate_offload_complete_handler_t                terminate_offload_complete_handler;                //{ +0x0290    } | .TerminateOffloadCompleteHandler
        _m090 update_offload_complete_handler_t                   update_offload_complete_handler;                   //{ +0x0298    } | .UpdateOffloadCompleteHandler
        _m091 invalidate_offload_complete_handler_t               invalidate_offload_complete_handler;               //{ +0x02a0    } | .InvalidateOffloadCompleteHandler
        _m092 query_offload_complete_handler_t                    query_offload_complete_handler;                    //{ +0x02a8    } | .QueryOffloadCompleteHandler
        _m093 indicate_offload_event_handler_t                    indicate_offload_event_handler;                    //{ +0x02b0    } | .IndicateOffloadEventHandler
        _m094 tcp_offload_send_complete_handler_t                 tcp_offload_send_complete_handler;                 //{ +0x02b8    } | .TcpOffloadSendCompleteHandler
        _m095 tcp_offload_receive_complete_handler_t              tcp_offload_receive_complete_handler;              //{ +0x02c0    } | .TcpOffloadReceiveCompleteHandler
        _m096 tcp_offload_disconnect_complete_handler_t           tcp_offload_disconnect_complete_handler;           //{ +0x02c8    } | .TcpOffloadDisconnectCompleteHandler
        _m097 tcp_offload_forward_complete_handler_t              tcp_offload_forward_complete_handler;              //{ +0x02d0    } | .TcpOffloadForwardCompleteHandler
        _m098 sdk::function<void(void*, uint32_t, uint32_t)>*     tcp_offload_event_handler;                         //{ +0x02d8    } | .TcpOffloadEventHandler
        _m099 tcp_offload_receive_indicate_handler_t              tcp_offload_receive_indicate_handler;              //{ +0x02e0    } | .TcpOffloadReceiveIndicateHandler
        _m100 initiate_offload_handler_t                          initiate_offload_handler;                          //{ +0x02e8    } | .InitiateOffloadHandler
        _m101 terminate_offload_handler_t                         terminate_offload_handler;                         //{ +0x02f0    } | .TerminateOffloadHandler
        _m102 update_offload_handler_t                            update_offload_handler;                            //{ +0x02f8    } | .UpdateOffloadHandler
        _m103 invalidate_offload_handler_t                        invalidate_offload_handler;                        //{ +0x0300    } | .InvalidateOffloadHandler
        _m104 query_offload_handler_t                             query_offload_handler;                             //{ +0x0308    } | .QueryOffloadHandler
                                                                                                                   
        SDK_MAGIC_PROPERTIES( "_NDIS_FILTER_BLOCK.$", 0x358, true, 0xed5e7dc8d58c7081 );                                                 
        SDK_DYNAMIC_SIZE( filter_block_t );                                                                        
    };                                                                                                             
};
#include "magic/filter_block_t.end.hpp"
SDK_VERIFY( struct ndis::filter_block_t::u0_stack_expansion_fallback_t, 0x60 );
