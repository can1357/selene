#pragma once
#include <sdkgen/support_library.hpp>
#include "event_t.hpp"
#include "timer_t.hpp"
#include "medium_t.hpp"
#include "reference_t.hpp"
#include "work_item_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../nt/luid_t.hpp"
#include "net_luid_lh_t.hpp"
#include "rss_profile_t.hpp"
#include "../nt/kevent_t.hpp"
#include "object_header_t.hpp"
#include "pm_parameters_t.hpp"
#include "interface_type_t.hpp"
#include "knob_namespace_t.hpp"
#include "miniport_event_t.hpp"
#include "miniport_state_t.hpp"
#include "send_path_type_t.hpp"
#include "physical_medium_t.hpp"
#include "pm_admin_config_t.hpp"
#include "pm_capabilities_t.hpp"
#include "ulong_reference_t.hpp"
#include "../nt/ksemaphore_t.hpp"
#include "pnp_capabilities_t.hpp"
#include "pnp_device_state_t.hpp"
#include "../io/remove_lock_t.hpp"
#include "miniport_handlers_t.hpp"
#include "workitem_with_irp_t.hpp"
#include "../power/work_item_t.hpp"
#include "miniport_work_item_t.hpp"
#include "net_if_oper_status_t.hpp"
#include "port_control_state_t.hpp"
#include "d0_signal_work_item_t.hpp"
#include "m_periodic_receives_t.hpp"
#include "net_if_admin_status_t.hpp"
#include "pktmon_edge_context_t.hpp"
#include "pm_wake_reason_type_t.hpp"
#include "../nt/interface_type_t.hpp"
#include "miniport_offload_reg_t.hpp"
#include "net_setup_store_type_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "../pci/msi_capability_t.hpp"
#include "../nt/processor_number_t.hpp"
#include "../pci/msix_capability_t.hpp"
#include "if_physical_address_lh_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"
#include "pktmon_component_context_t.hpp"
#include "port_authorization_state_t.hpp"
#include "../nt/device_capabilities_t.hpp"
#include "net_if_media_duplex_state_t.hpp"
#include "supported_pause_functions_t.hpp"
#include "net_if_media_connect_state_t.hpp"
#include "receive_scale_capabilities_t.hpp"
#include "restart_general_attributes_t.hpp"
#include "pci_device_custom_properties_t.hpp"
#include "vpci_invalidate_block_output_t.hpp"
#include "../nt/kbugcheck_callback_record_t.hpp"
#include "execution_context_runtime_knobs_t.hpp"

namespace cm  { struct resource_list_t; }
namespace nt  { struct device_object_t; }
namespace nt  { struct irp_t;           }
namespace pci { struct recorder_log_t;  }

#include "magic/miniport_block_t.start.hpp"
namespace ndis
{
    struct log_t;
    struct guid_t;
    struct packet_t;
    struct af_list_t;
    struct request_t;
    struct if_block_t;
    struct oid_list_t;
    struct pd_block_t;
    struct pf_block_t;
    struct x_filter_t;
    struct bind_paths_t;
    struct open_block_t;
    struct wan_packet_t;
    struct oid_request_t;
    struct timer_entry_t;
    struct filter_block_t;
    struct sg_dma_block_t;
    struct miniport_aoac_t;
    struct m_driver_block_t;
    struct miniport_block_t;
    struct miniport_stats_t;
    struct miniport_timer_t;
    struct pcw_data_block_t;
    struct qos_parameters_t;
    struct interrupt_block_t;
    struct net_buffer_list_t;
    struct refcount_handle_t;
    struct event_log_handle_t;
    struct miniport_offload_t;
    struct qos_capabilities_t;
    struct selective_suspend_t;
    struct miniport_interrupt_t;
    struct nbl_tracker_handle_t;
    struct sriov_capabilities_t;
    struct receive_queue_block_t;
    struct rss_dpc_worker_context_t;
    struct timestamp_capabilities_t;
    struct hd_split_current_config_t;
    struct nic_switch_capabilities_t;
    struct pndis_per_processor_slot_t;
    struct receive_scale_parameters_t;
    struct shared_memory_parameters_t;
    struct receive_filter_capabilities_t;
    struct miniport_hook_adapter_handle_t;
    struct miniport_rss_parameters_cache_t;
    struct physical_performance_counters_t;
    struct device_reset_interface_standard_t;
    struct miniport_adapter_general_attributes_t;

    // [struct _NDIS_MINIPORT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_block_t                                                                                    
    {                                                                                                          
        using packet_indicate_handler_t =                        sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using send_complete_handler_t =                          sdk::function<void(void*, struct ndis::packet_t*, int32_t)>*;                                               
        using send_packets_handler_t =                           sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using deferred_send_handler_t =                          sdk::function<uint8_t(struct ndis::miniport_block_t*)>*;                                               
        using eth_rx_indicate_handler_t =                        sdk::function<void(struct ndis::x_filter_t*, void*, char*, void*, uint32_t, void*, uint32_t, uint32_t)>*;                                               
        using next_send_net_buffer_lists_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                               
        using saved_next_send_net_buffer_lists_handler_t =       sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                               
        using status_handler_t =                                 sdk::function<void(void*, int32_t, void*, uint32_t)>*;                                               
        using td_complete_handler_t =                            sdk::function<void(void*, struct ndis::packet_t*, int32_t, uint32_t)>*;                                               
        using wan_rcv_handler_t =                                sdk::function<void(int32_t*, void*, void*, uint8_t*, uint32_t)>*;                                               
        using send_net_buffer_lists_complete_handler_t =         sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                               
        using w_send_packets_handler_t =                         sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using saved_packet_indicate_handler_t =                  sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using next_send_packets_handler_t =                      sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using final_send_packets_handler_t =                     sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using top_indicate_net_buffer_lists_handler_t =          sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                               
        using top_indicate_loopback_net_buffer_lists_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t, uint32_t)>*;                                               
        using ndis5_packet_indicate_handler_t =                  sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using miniport_return_packet_handler_t =                 sdk::function<void(void*, struct ndis::packet_t*)>*;                                               
        using synchronous_return_packet_handler_t =              sdk::function<void(void*, struct ndis::packet_t*)>*;                                               
        using general_attributes_t =                             struct ndis::miniport_adapter_general_attributes_t*;                                               
        using top_ndis5_packet_indicate_handler_t =              sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                               
        using allocate_shared_memory_handler_t =                 sdk::function<int32_t(void*, struct ndis::shared_memory_parameters_t*, void**)>*;                                               
        using set_bus_data_t =                                   sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                                               
        using get_bus_data_t =                                   sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                                               
        using send_handler_t =                                   sdk::function<int32_t(void*, struct ndis::packet_t*, uint32_t)>*;                                               
        using wan_send_handler_t =                               sdk::function<int32_t(void*, void*, struct ndis::wan_packet_t*)>*;                                               
        using set_msix_table_entry_t =                           sdk::function<int32_t(void*, uint32_t, uint32_t)>*;                                               
        using set_virtual_function_data_t =                      sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*;                                               
        using get_virtual_function_data_t =                      sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*;                                               
        using enable_virtualization_t =                          sdk::function<int32_t(void*, uint16_t, uint8_t, uint8_t, uint8_t)>*;                                               
        using get_virtual_device_location_t =                    sdk::function<int32_t(void*, uint16_t, uint16_t*, uint8_t*, uint8_t*)>*;                                               
        using write_vf_config_block_t =                          sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*;                                               
        using read_vf_config_block_t =                           sdk::function<int32_t(void*, uint32_t, void*, uint32_t)>*;                                               
        using surprise_removal_work_item_t =                     sdk::variant<struct nt::work_queue_item_t, struct ndis::workitem_with_irp_t>;                                               
        using device_power_on_work_item_t =                      sdk::variant<struct power::work_item_t, struct ndis::workitem_with_irp_t>;                                               
        using device_power_down_work_item_t =                    sdk::variant<struct power::work_item_t, struct ndis::workitem_with_irp_t>;                                               
                                                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                                     
        _m000 struct ndis::object_header_t                      header;                                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 struct ndis::miniport_block_t*                    next_miniport;                                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextMiniport
        _m002 struct ndis::miniport_block_t*                    base_miniport;                                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BaseMiniport
        _m003 void*                                             miniport_adapter_context;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MiniportAdapterContext
        _m004 uint8_t                                           major_ndis_version;                              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .MajorNdisVersion
        _m005 uint8_t                                           minor_ndis_version;                              //{ +0x0021    +0x0021    +0x0021    +0x0021    } | .MinorNdisVersion
        _m006 struct ndis::pcw_data_block_t*                    pcw_data_block;                                  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PcwDataBlock
        _m007 int32_t                                           pcw_datapath_event_mask;                         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PcwDatapathEventMask
        _m008 struct ndis::open_block_t*                        open_queue;                                      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OpenQueue
        _m009 struct ndis::reference_t                          short_ref;                                       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ShortRef
        _m010 int32_t                                           pcw_datapath_cycle_mask;                         //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .PcwDatapathCycleMask
        _m011 uint8_t                                           link_state_indication_flags;                     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .LinkStateIndicationFlags
        _m012 uint8_t                                           lock_acquired;                                   //{ +0x0059    +0x0059    +0x0059    +0x0059    } | .LockAcquired
        _m013 uint8_t                                           pmode_opens;                                     //{ +0x005a    +0x005a    +0x005a    +0x005a    } | .PmodeOpens
        _m014 uint8_t                                           loopback_opens;                                  //{ +0x005b    +0x005b    +0x005b    +0x005b    } | .LoopbackOpens
        _m015 uint64_t                                          lock;                                            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Lock
        _m016 struct ndis::miniport_interrupt_t*                interrupt;                                       //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Interrupt
        _m017 uint32_t                                          flags;                                           //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Flags
        _m018 uint32_t                                          pn_p_flags;                                      //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .PnPFlags
        _m019 nt::list_entry_t                                  packet_list;                                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .PacketList
        _m020 struct ndis::packet_t*                            first_pending_packet;                            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .FirstPendingPacket
        _m021 struct ndis::packet_t*                            return_packets_queue;                            //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .ReturnPacketsQueue
        _m022 uint32_t                                          request_buffer;                                  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .RequestBuffer
        _m023 struct ndis::miniport_block_t*                    primary_miniport;                                //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .PrimaryMiniport
        _m024 sdk::function<void(void*, void*)>*                next_cancel_send_net_buffer_lists_handler;       //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .NextCancelSendNetBufferListsHandler
        _m025 void*                                             oid_context;                                     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .OidContext
        _m026 uint32_t                                          supported_oid_list_length;                       //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .SupportedOidListLength
        _m027 struct cm::resource_list_t*                       resources;                                       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .Resources
        _m028 struct ndis::timer_t                              wake_up_dpc_timer;                               //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .WakeUpDpcTimer
        _m029 enum ndis::net_if_media_connect_state_t           miniport_media_connect_state;                    //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .MiniportMediaConnectState
        _m030 enum ndis::net_if_media_duplex_state_t            miniport_media_duplex_state;                     //{ +0x015c    +0x015c    +0x015c    +0x015c    } | .MiniportMediaDuplexState
        _m031 nt::unicode_view                                  symbolic_link_name;                              //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .SymbolicLinkName
        _m032 uint32_t                                          check_for_hang_seconds;                          //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .CheckForHangSeconds
        _m033 uint16_t                                          cf_hang_ticks;                                   //{ +0x017c    +0x017c    +0x017c    +0x017c    } | .CFHangTicks
        _m034 uint16_t                                          cf_hang_current_tick;                            //{ +0x017e    +0x017e    +0x017e    +0x017e    } | .CFHangCurrentTick
        _m035 int32_t                                           reset_status;                                    //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .ResetStatus
        _m036 struct ndis::open_block_t*                        reset_open;                                      //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .ResetOpen
        _m037 struct ndis::x_filter_t*                          eth_db;                                          //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .EthDB
        _m038 struct ndis::x_filter_t*                          null_db;                                         //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .NullDB
        _m039 packet_indicate_handler_t                         packet_indicate_handler;                         //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .PacketIndicateHandler
        _m040 send_complete_handler_t                           send_complete_handler;                           //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .SendCompleteHandler
        _m041 sdk::function<void(void*)>*                       send_resources_handler;                          //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .SendResourcesHandler
        _m042 sdk::function<void(void*, int32_t, uint8_t)>*     reset_complete_handler;                          //{ +0x01c8    +0x01c8    +0x01c8    +0x01c8    } | .ResetCompleteHandler
        _m043 enum ndis::medium_t                               media_type;                                      //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .MediaType
        _m044 uint32_t                                          auto_negotiation_flags;                          //{ +0x01d4    +0x01d4    +0x01d4    +0x01d4    } | .AutoNegotiationFlags
        _m045 enum ndis::interface_type_t                       adapter_type;                                    //{ +0x01dc    +0x01dc    +0x01dc    +0x01dc    } | .AdapterType
        _m046 enum ndis::net_if_media_connect_state_t           media_connect_state;                             //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .MediaConnectState
        _m047 enum ndis::net_if_media_duplex_state_t            media_duplex_state;                              //{ +0x01e8    +0x01e8    +0x01e8    +0x01e8    } | .MediaDuplexState
        _m048 uint32_t*                                         supported_oid_list;                              //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .SupportedOidList
        _m049 struct ndis::sg_dma_block_t*                      miniport_sg_dma_block;                           //{ +0x01f8    +0x01f8    +0x01f8    +0x01f8    } | .MiniportSGDmaBlock
        _m050 struct ndis::af_list_t*                           call_mgr_af_list;                                //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .CallMgrAfList
        _m051 void*                                             miniport_thread;                                 //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .MiniportThread
        _m052 void*                                             set_info_buf;                                    //{ +0x0210    +0x0210    +0x0210    +0x0210    } | .SetInfoBuf
        _m053 uint16_t                                          set_info_buf_len;                                //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .SetInfoBufLen
        _m054 uint16_t                                          max_send_packets;                                //{ +0x021a    +0x021a    +0x021a    +0x021a    } | .MaxSendPackets
        _m055 int32_t                                           fake_status;                                     //{ +0x021c    +0x021c    +0x021c    +0x021c    } | .FakeStatus
        _m056 void*                                             global_triage_block;                             //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .GlobalTriageBlock
        _m057 struct ndis::receive_scale_parameters_t*          combined_ndis_rss_parameters;                    //{ +0x0228    +0x0228    +0x0228    +0x0228    } | .CombinedNdisRSSParameters
        _m058 struct ndis::miniport_timer_t*                    timer_queue;                                     //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .TimerQueue
        _m059 struct ndis::timer_entry_t*                       timer_object_queue;                              //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .TimerObjectQueue
        _m060 uint32_t                                          mac_options;                                     //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .MacOptions
        _m061 struct ndis::request_t*                           pending_request;                                 //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .PendingRequest
        _m062 uint32_t                                          maximum_long_addresses;                          //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .MaximumLongAddresses
        _m063 uint32_t                                          miniport_current_lookahead;                      //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .MiniportCurrentLookahead
        _m064 uint32_t                                          miniport_maximum_lookahead;                      //{ +0x0254    +0x0254    +0x0254    +0x0254    } | .MiniportMaximumLookahead
        _m065 struct ndis::x_filter_t*                          null_media_filter;                               //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .NullMediaFilter
        _m066 sdk::function<void(void*)>*                       disable_interrupt_handler;                       //{ +0x0260    +0x0260    +0x0260    +0x0260    } | .DisableInterruptHandler
        _m067 sdk::function<void(void*)>*                       enable_interrupt_handler;                        //{ +0x0268    +0x0268    +0x0268    +0x0268    } | .EnableInterruptHandler
        _m068 send_packets_handler_t                            send_packets_handler;                            //{ +0x0270    +0x0270    +0x0270    +0x0270    } | .SendPacketsHandler
        _m069 deferred_send_handler_t                           deferred_send_handler;                           //{ +0x0278    +0x0278    +0x0278    +0x0278    } | .DeferredSendHandler
        _m070 eth_rx_indicate_handler_t                         eth_rx_indicate_handler;                         //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .EthRxIndicateHandler
        _m071 next_send_net_buffer_lists_handler_t              next_send_net_buffer_lists_handler;              //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .NextSendNetBufferListsHandler
        _m072 sdk::function<void(struct ndis::x_filter_t*)>*    eth_rx_complete_handler;                         //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .EthRxCompleteHandler
        _m073 saved_next_send_net_buffer_lists_handler_t        saved_next_send_net_buffer_lists_handler;        //{ +0x02a8    +0x02a8    +0x02a8    +0x02a8    } | .SavedNextSendNetBufferListsHandler
        _m074 status_handler_t                                  status_handler;                                  //{ +0x02b0    +0x02b0    +0x02b0    +0x02b0    } | .StatusHandler
        _m075 sdk::function<void(void*)>*                       status_complete_handler;                         //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .StatusCompleteHandler
        _m076 td_complete_handler_t                             td_complete_handler;                             //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .TDCompleteHandler
        _m077 sdk::function<void(void*, int32_t)>*              query_complete_handler;                          //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .QueryCompleteHandler
        _m078 sdk::function<void(void*, int32_t)>*              set_complete_handler;                            //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .SetCompleteHandler
        _m079 sdk::function<void(void*, void*, int32_t)>*       wan_send_complete_handler;                       //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .WanSendCompleteHandler
        _m080 wan_rcv_handler_t                                 wan_rcv_handler;                                 //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .WanRcvHandler
        _m081 sdk::function<void(void*, void*)>*                wan_rcv_complete_handler;                        //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .WanRcvCompleteHandler
        _m082 send_net_buffer_lists_complete_handler_t          send_net_buffer_lists_complete_handler;          //{ +0x02f0    +0x02f0    +0x02f0    +0x02f0    } | .SendNetBufferListsCompleteHandler
        _m083 struct nt::kevent_t*                              pn_p_event_lock_event;                           //{ +0x02f8    +0x02f8    +0x02f8    +0x02f8    } | .PnPEventLockEvent
        _m084 struct ndis::object_header_t*                     media_specific_attributes;                       //{ +0x0300    +0x0300    +0x0300    +0x0300    } | .MediaSpecificAttributes
        _m085 struct nt::irp_t*                                 pending_query_power_irp;                         //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .PendingQueryPowerIrp
        _m086 struct ndis::interrupt_block_t*                   interrupt_ex;                                    //{ +0x0310    +0x0310    +0x0310    +0x0310    } | .InterruptEx
        _m087 uint64_t                                          xmit_link_speed;                                 //{ +0x0318    +0x0318    +0x0318    +0x0318    } | .XmitLinkSpeed
        _m088 uint64_t                                          rcv_link_speed;                                  //{ +0x0320    +0x0320    +0x0320    +0x0320    } | .RcvLinkSpeed
        _m089 enum ndis::supported_pause_functions_t            pause_functions;                                 //{ +0x0328    +0x0328    +0x0328    +0x0328    } | .PauseFunctions
        _m090 enum ndis::supported_pause_functions_t            miniport_pause_functions;                        //{ +0x032c    +0x032c    +0x032c    +0x032c    } | .MiniportPauseFunctions
        _m091 uint32_t                                          miniport_auto_negotiation_flags;                 //{ +0x0330    +0x0330    +0x0330    +0x0330    } | .MiniportAutoNegotiationFlags
        _m092 sdk::array<struct nt::single_list_entry_t, 7>     work_queue;                                      //{ +0x0338    +0x0338    +0x0338    +0x0338    } | .WorkQueue
        _m093 sdk::array<struct nt::single_list_entry_t, 6>     single_work_items;                               //{ +0x0370    +0x0370    +0x0370    +0x0370    } | .SingleWorkItems
        _m094 uint8_t                                           send_flags;                                      //{ +0x03a0    +0x03a0    +0x03a0    +0x03a0    } | .SendFlags
        _m095 uint8_t                                           mp6_support_pm;                                  //{ +0x03a1    +0x03a1    +0x03a1    +0x03a1    } | .MP6SupportPM
        _m096 uint8_t                                           x_state;                                         //{ +0x03a2    +0x03a2    +0x03a2    +0x03a2    } | .XState
        _m097 struct ndis::log_t*                               log;                                             //{ +0x03a8    +0x03a8    +0x03a8    +0x03a8    } | .Log
        _m098 struct cm::resource_list_t*                       allocated_resources;                             //{ +0x03b0    +0x03b0    +0x03b0    +0x03b0    } | .AllocatedResources
        _m099 struct cm::resource_list_t*                       allocated_resources_translated;                  //{ +0x03b8    +0x03b8    +0x03b8    +0x03b8    } | .AllocatedResourcesTranslated
        _m100 struct nt::single_list_entry_t                    pattern_list;                                    //{ +0x03c0    +0x03c0    +0x03c0    +0x03c0    } | .PatternList
        _m101 struct nt::single_list_entry_t                    wol_pattern_list;                                //{ +0x03c8    +0x03c8    +0x03c8    +0x03c8    } | .WOLPatternList
        _m102 struct nt::single_list_entry_t                    pm_protocol_offload_list;                        //{ +0x03d0    +0x03d0    +0x03d0    +0x03d0    } | .PMProtocolOffloadList
        _m103 struct ndis::pnp_capabilities_t                   pm_capabilities61;                               //{ +0x03d8    +0x03d8    +0x03d8    +0x03d8    } | .PMCapabilities61
        _m104 struct ndis::pm_capabilities_t                    pm_hardware_capabilities;                        //{ +0x03e8    +0x03e8    +0x03e8    +0x03e8    } | .PMHardwareCapabilities
        _m105 struct ndis::pm_capabilities_t                    pm_advertised_capabilities;                      //{ +0x0424    +0x0424    +0x0424    +0x0424    } | .PMAdvertisedCapabilities
        _m106 struct ndis::pm_parameters_t                      pm_current_parameters;                           //{ +0x0460    +0x0460    +0x0460    +0x0460    } | .PMCurrentParameters
        _m107 struct ndis::pm_parameters_t                      pm_wmi_parameters;                               //{ +0x0474    +0x0474    +0x0474    +0x0474    } | .PMWmiParameters
        _m108 struct nt::device_capabilities_t                  original_device_caps;                            //{ +0x0488    +0x0488    +0x0488    +0x0488    } | .OriginalDeviceCaps
        _m109 struct nt::device_capabilities_t                  device_caps;                                     //{ +0x04c8    +0x04c8    +0x04c8    +0x04c8    } | .DeviceCaps
        _m110 uint8_t                                           s0_wakeup_supported;                             //{ +0x0508    +0x0508    +0x0508    +0x0508    } | .S0WakeupSupported
        _m111 uint32_t                                          wake_up_enable;                                  //{ +0x050c    +0x050c    +0x050c    +0x050c    } | .WakeUpEnable
        _m112 struct nt::irp_t*                                 wait_wake_irp;                                   //{ +0x0510    +0x0510    +0x0510    +0x0510    } | .WaitWakeIrp
        _m113 struct nt::kevent_t                               wait_wake_irp_completed;                         //{ +0x0518    +0x0518    +0x0518    +0x0518    } | .WaitWakeIrpCompleted
        _m114 bool                                              wait_wake_io_completion_routine_ran;             //{ +0x0530    +0x0530    +0x0530    +0x0530    } | .WaitWakeIoCompletionRoutineRan
        _m115 bool                                              wait_wake_cancel_in_progress;                    //{ +0x0531    +0x0531    +0x0531    +0x0531    } | .WaitWakeCancelInProgress
        _m116 bool                                              wait_wake_cancel_attempted;                      //{ +0x0532    +0x0532    +0x0532    +0x0532    } | .WaitWakeCancelAttempted
        _m117 enum nt::system_power_state_t                     wait_wake_system_state;                          //{ +0x0534    +0x0534    +0x0534    +0x0534    } | .WaitWakeSystemState
        _m118 int64_t                                           vc_index;                                        //{ +0x0538    +0x0538    +0x0538    +0x0538    } | .VcIndex
        _m119 uint64_t                                          vc_count_lock;                                   //{ +0x0540    +0x0540    +0x0540    +0x0540    } | .VcCountLock
        _m120 nt::list_entry_t                                  wmi_enabled_vcs;                                 //{ +0x0548    +0x0548    +0x0548    +0x0548    } | .WmiEnabledVcs
        _m121 struct ndis::guid_t*                              p_ndis_guid_map;                                 //{ +0x0558    +0x0558    +0x0558    +0x0558    } | .pNdisGuidMap
        _m122 struct ndis::guid_t*                              p_custom_guid_map;                               //{ +0x0560    +0x0560    +0x0560    +0x0560    } | .pCustomGuidMap
        _m123 uint16_t                                          vc_count;                                        //{ +0x0568    +0x0568    +0x0568    +0x0568    } | .VcCount
        _m124 uint16_t                                          c_ndis_guid_map;                                 //{ +0x056a    +0x056a    +0x056a    +0x056a    } | .cNdisGuidMap
        _m125 uint16_t                                          c_custom_guid_map;                               //{ +0x056c    +0x056c    +0x056c    +0x056c    } | .cCustomGuidMap
        _m126 struct ndis::timer_t                              media_disconnect_timer;                          //{ +0x0570    +0x0570    +0x0570    +0x0570    } | .MediaDisconnectTimer
        _m127 enum ndis::pnp_device_state_t                     pn_p_device_state;                               //{ +0x05f0    +0x05f0    +0x05f0    +0x05f0    } | .PnPDeviceState
        _m128 enum ndis::pnp_device_state_t                     old_pn_p_device_state;                           //{ +0x05f4    +0x05f4    +0x05f4    +0x05f4    } | .OldPnPDeviceState
        _m129 struct nt::kdpc_t                                 deferred_dpc;                                    //{ +0x05f8    +0x05f8    +0x05f8    +0x05f8    } | .DeferredDpc
        _m130 int64_t                                           start_ticks;                                     //{ +0x0638    +0x0638    +0x0638    +0x0638    } | .StartTicks
        _m131 struct ndis::packet_t**                           indicated_packet;                                //{ +0x0640    +0x0640    +0x0640    +0x0640    } | .IndicatedPacket
        _m132 struct nt::kevent_t*                              remove_ready_event;                              //{ +0x0648    +0x0648    +0x0648    +0x0648    } | .RemoveReadyEvent
        _m133 struct nt::kevent_t*                              all_requests_completed_event;                    //{ +0x0650    +0x0650    +0x0650    +0x0650    } | .AllRequestsCompletedEvent
        _m134 uint32_t                                          init_time_ms;                                    //{ +0x0658    +0x0658    +0x0658    +0x0658    } | .InitTimeMs
        _m135 sdk::array<struct ndis::miniport_work_item_t, 6>  work_item_buffer;                                //{ +0x0660    +0x0660    +0x0660    +0x0660    } | .WorkItemBuffer
        _m136 struct ndis::oid_list_t*                          oid_list;                                        //{ +0x06f0    +0x06f0    +0x06f0    +0x06f0    } | .OidList
        _m137 uint16_t                                          internal_reset_count;                            //{ +0x06f8    +0x06f8    +0x06f8    +0x06f8    } | .InternalResetCount
        _m138 uint16_t                                          miniport_reset_count;                            //{ +0x06fa    +0x06fa    +0x06fa    +0x06fa    } | .MiniportResetCount
        _m139 uint16_t                                          media_sense_connect_count;                       //{ +0x06fc    +0x06fc    +0x06fc    +0x06fc    } | .MediaSenseConnectCount
        _m140 uint16_t                                          media_sense_disconnect_count;                    //{ +0x06fe    +0x06fe    +0x06fe    +0x06fe    } | .MediaSenseDisconnectCount
        _m141 struct ndis::packet_t**                           x_packets;                                       //{ +0x0700    +0x0700    +0x0700    +0x0700    } | .xPackets
        _m142 uint32_t                                          user_mode_open_references;                       //{ +0x0708    +0x0708    +0x0708    +0x0708    } | .UserModeOpenReferences
        _m143 w_send_packets_handler_t                          w_send_packets_handler;                          //{ +0x0710    +0x0710    +0x0710    +0x0710    } | .WSendPacketsHandler
        _m144 uint32_t                                          miniport_attributes;                             //{ +0x0718    +0x0718    +0x0718    +0x0718    } | .MiniportAttributes
        _m145 uint16_t                                          num_opens;                                       //{ +0x071c    +0x071c    +0x071c    +0x071c    } | .NumOpens
        _m146 uint16_t                                          cf_hang_x_ticks;                                 //{ +0x071e    +0x071e    +0x071e    +0x071e    } | .CFHangXTicks
        _m147 uint32_t                                          request_count;                                   //{ +0x0720    +0x0720    +0x0720    +0x0720    } | .RequestCount
        _m148 uint32_t                                          indicated_packets_count;                         //{ +0x0724    +0x0724    +0x0724    +0x0724    } | .IndicatedPacketsCount
        _m149 enum ndis::physical_medium_t                      physical_medium_type;                            //{ +0x0728    +0x0728    +0x0728    +0x0728    } | .PhysicalMediumType
        _m150 enum ndis::medium_t                               miniport_media_type;                             //{ +0x072c    +0x072c    +0x072c    +0x072c    } | .MiniportMediaType
        _m151 struct ndis::request_t*                           last_request;                                    //{ +0x0730    +0x0738    +0x0738    +0x0738    } | .LastRequest
        _m152 void*                                             fake_mac;                                        //{ +0x0738    +0x0740    +0x0740    +0x0740    } | .FakeMac
        _m153 void*                                             lock_thread;                                     //{ +0x0748    +0x0748    +0x0748    +0x0748    } | .LockThread
        _m154 uint32_t                                          info_flags;                                      //{ +0x0750    +0x0750    +0x0750    +0x0750    } | .InfoFlags
        _m155 uint64_t                                          timer_queue_lock;                                //{ +0x0758    +0x0758    +0x0758    +0x0758    } | .TimerQueueLock
        _m156 struct nt::kevent_t*                              reset_completed_event;                           //{ +0x0760    +0x0760    +0x0760    +0x0760    } | .ResetCompletedEvent
        _m157 saved_packet_indicate_handler_t                   saved_packet_indicate_handler;                   //{ +0x0768    +0x0768    +0x0768    +0x0768    } | .SavedPacketIndicateHandler
        _m158 int32_t                                           registered_interrupts;                           //{ +0x0770    +0x0770    +0x0770    +0x0770    } | .RegisteredInterrupts
        _m159 uint32_t                                          set_oid;                                         //{ +0x0774    +0x0774    +0x0774    +0x0774    } | .SetOid
        _m160 struct nt::kevent_t                               cfh_completed_event;                             //{ +0x0778    +0x0778    +0x0778    +0x0778    } | .CFHCompletedEvent
        _m161 struct nt::work_queue_item_t                      cfh_work_item;                                   //{ +0x0790    +0x0790    +0x0790    +0x0790    } | .CFHWorkItem
        _m162 volatile int32_t                                  cfh_work_item_queued;                            //{ +0x07b0    +0x07b0    +0x07b0    +0x07b0    } | .CFHWorkItemQueued
        _m163 void*                                             device_context;                                  //{ +0x07b8    +0x07b8    +0x07b8    +0x07b8    } | .DeviceContext
        _m164 struct ndis::miniport_rss_parameters_cache_t*     rss_parameters_buffer;                           //{ +0x07c0    +0x07c0    +0x07c0    +0x07c0    } | .RssParametersBuffer
        _m165 uint8_t                                           using_msix;                                      //{ +0x07c8    +0x07c8    +0x07c8    +0x07c8    } | .UsingMSIX
        _m166 uint8_t                                           miniport5_in_ndis6_mode;                         //{ +0x07c9    +0x07c9    +0x07c9    +0x07c9    } | .Miniport5InNdis6Mode
        _m167 uint8_t                                           miniport5_has_ndis6_component;                   //{ +0x07ca    +0x07ca    +0x07ca    +0x07ca    } | .Miniport5HasNdis6Component
        _m168 uint8_t                                           init_mode;                                       //{ +0x07cb    +0x07cb    +0x07cb    +0x07cb    } | .InitMode
        _m169 uint8_t                                           init_mode_not_needed_anymore;                    //{ +0x07cc    +0x07cc    +0x07cc    +0x07cc    } | .InitModeNotNeededAnymore
        _m170 char                                              media_change_filters;                            //{ +0x07cd    +0x07cd    +0x07cd    +0x07cd    } | .MediaChangeFilters
        _m171 uint8_t                                           check_packet_filters;                            //{ +0x07ce    +0x07ce    +0x07ce    +0x07ce    } | .CheckPacketFilters
        _m172 uint8_t                                           receive_filters;                                 //{ +0x07cf    +0x07cf    +0x07cf    +0x07cf    } | .ReceiveFilters
        _m173 uint64_t                                          recv_lock;                                       //{ +0x07d0    +0x07d0    +0x07d0    +0x07d0    } | .RecvLock
        _m174 enum ndis::miniport_state_t                       recv_state;                                      //{ +0x07d8    +0x07d8    +0x07d8    +0x07d8    } | .RecvState
        _m175 uint32_t                                          outstanding_receives;                            //{ +0x07dc    +0x07dc    +0x07dc    +0x07dc    } | .OutstandingReceives
        _m176 void*                                             miniport_recv_lock_thread;                       //{ +0x07e0    +0x07e0    +0x07e0    +0x07e0    } | .MiniportRecvLockThread
        _m177 next_send_packets_handler_t                       next_send_packets_handler;                       //{ +0x07f0    +0x07e8    +0x07e8    +0x07e8    } | .NextSendPacketsHandler
        _m178 final_send_packets_handler_t                      final_send_packets_handler;                      //{ +0x07f8    +0x07f0    +0x07f0    +0x07f0    } | .FinalSendPacketsHandler
        _m179 struct ndis::filter_block_t*                      lowest_filter;                                   //{ +0x0800    +0x07f8    +0x07f8    +0x07f8    } | .LowestFilter
        _m180 struct ndis::filter_block_t*                      highest_filter;                                  //{ +0x0808    +0x0800    +0x0800    +0x0800    } | .HighestFilter
        _m181 void*                                             shutdown_context;                                //{ +0x0810    +0x0808    +0x0808    +0x0808    } | .ShutdownContext
        _m182 sdk::function<void(void*)>*                       shutdown_handler;                                //{ +0x0818    +0x0810    +0x0810    +0x0810    } | .ShutdownHandler
        _m183 struct nt::kbugcheck_callback_record_t            bugcheck_callback_record;                        //{ +0x0820    +0x0818    +0x0818    +0x0818    } | .BugcheckCallbackRecord
        _m184 top_indicate_net_buffer_lists_handler_t           top_indicate_net_buffer_lists_handler;           //{ +0x0860    +0x0858    +0x0858    +0x0858    } | .TopIndicateNetBufferListsHandler
        _m185 top_indicate_loopback_net_buffer_lists_handler_t  top_indicate_loopback_net_buffer_lists_handler;  //{ +0x0868    +0x0860    +0x0860    +0x0860    } | .TopIndicateLoopbackNetBufferListsHandler
        _m186 ndis5_packet_indicate_handler_t                   ndis5_packet_indicate_handler;                   //{ +0x0870    +0x0868    +0x0868    +0x0868    } | .Ndis5PacketIndicateHandler
        _m187 miniport_return_packet_handler_t                  miniport_return_packet_handler;                  //{ +0x0878    +0x0870    +0x0870    +0x0870    } | .MiniportReturnPacketHandler
        _m188 void*                                             miniport_return_packet_context;                  //{ +0x0880    +0x0878    +0x0878    +0x0878    } | .MiniportReturnPacketContext
        _m189 synchronous_return_packet_handler_t               synchronous_return_packet_handler;               //{ +0x0888    +0x0880    +0x0880    +0x0880    } | .SynchronousReturnPacketHandler
        _m190 void*                                             synchronous_return_packet_context;               //{ +0x0890    +0x0888    +0x0888    +0x0888    } | .SynchronousReturnPacketContext
        _m191 nt::list_entry_t                                  oid_request_list;                                //{ +0x0898    +0x0890    +0x0890    +0x0890    } | .OidRequestList
        _m192 struct ndis::oid_request_t*                       pending_oid_request;                             //{ +0x08a8    +0x08a0    +0x08a0    +0x08a0    } | .PendingOidRequest
        _m193 struct ndis::oid_request_t*                       processed_oid_request;                           //{ +0x08b0    +0x08a8    +0x08a8    +0x08a8    } | .ProcessedOidRequest
        _m194 struct ndis::oid_request_t*                       hooked_oid_request;                              //{ +0x08b8    +0x08b0    +0x08b0    +0x08b0    } | .HookedOidRequest
        _m195 void*                                             next_co_oid_request_handle;                      //{ +0x08c0    +0x08b8    +0x08b8    +0x08b8    } | .NextCoOidRequestHandle
        _m196 uint32_t                                          ndis6_protocols_bound;                           //{ +0x08c8    +0x08c0    +0x08c0    +0x08c0    } | .Ndis6ProtocolsBound
        _m197 uint32_t                                          pmode_open6;                                     //{ +0x08cc    +0x08c4    +0x08c4    +0x08c4    } | .PmodeOpen6
        _m198 enum ndis::miniport_state_t                       state;                                           //{ +0x08d0    +0x08c8    +0x08c8    +0x08c8    } | .State
        _m199 struct nt::kevent_t*                              async_op_completion_event;                       //{ +0x08d8    +0x08d0    +0x08d0    +0x08d0    } | .AsyncOpCompletionEvent
        _m200 int32_t                                           async_op_completion_status;                      //{ +0x08e0    +0x08d8    +0x08d8    +0x08d8    } | .AsyncOpCompletionStatus
        _m201 uint64_t                                          max_xmit_link_speed;                             //{ +0x08e8    +0x08e0    +0x08e0    +0x08e0    } | .MaxXmitLinkSpeed
        _m202 uint64_t                                          max_rcv_link_speed;                              //{ +0x08f0    +0x08e8    +0x08e8    +0x08e8    } | .MaxRcvLinkSpeed
        _m203 uint32_t                                          supported_packet_filters;                        //{ +0x08f8    +0x08f0    +0x08f0    +0x08f0    } | .SupportedPacketFilters
        _m204 struct ndis::miniport_handlers_t                  no_filter;                                       //{ +0x0900    +0x08f8    +0x08f8    +0x08f8    } | .NoFilter
        _m205 struct ndis::miniport_handlers_t                  next;                                            //{ +0x09b8    +0x09b0    +0x09b0    +0x09b0    } | .Next
        _m206 uint8_t                                           receive_path_enabled;                            //{ +0x0a70    +0x0a68    +0x0a68    +0x0a68    } | .ReceivePathEnabled
        _m207 uint8_t                                           normal_top_receive;                              //{ +0x0a71    +0x0a69    +0x0a69    +0x0a69    } | .NormalTopReceive
        _m208 enum ndis::send_path_type_t                       send_path_type;                                  //{ +0x0a74    +0x0a6c    +0x0a6c    +0x0a6c    } | .SendPathType
        _m209 enum ndis::send_path_type_t                       saved_send_path_type;                            //{ +0x0a78    +0x0a70    +0x0a70    +0x0a70    } | .SavedSendPathType
        _m210 uint8_t                                           saved_receive_path_enabled;                      //{ +0x0a7c    +0x0a74    +0x0a74    +0x0a74    } | .SavedReceivePathEnabled
        _m211 uint32_t                                          filter_pn_p_flags;                               //{ +0x0a80    +0x0a7c    +0x0a7c    +0x0a7c    } | .FilterPnPFlags
        _m212 uint32_t                                          supported_statistics;                            //{ +0x0a84    +0x0a80    +0x0a80    +0x0a80    } | .SupportedStatistics
        _m213 struct ndis::receive_scale_capabilities_t         recv_scale_capabilities;                         //{ +0x0aa8    +0x0a84    +0x0a84    +0x0a84    } | .RecvScaleCapabilities
        _m214 general_attributes_t                              general_attributes;                              //{ +0x0ac0    +0x0a98    +0x0a98    +0x0a98    } | .GeneralAttributes
        _m215 nt::list_entry_t                                  port_list;                                       //{ +0x0ac8    +0x0aa0    +0x0aa0    +0x0aa0    } | .PortList
        _m216 uint8_t*                                          allocated_port_indices;                          //{ +0x0ad8    +0x0ab0    +0x0ab0    +0x0ab0    } | .AllocatedPortIndices
        _m217 uint32_t                                          allocated_port_indices_length;                   //{ +0x0ae0    +0x0ab8    +0x0ab8    +0x0ab8    } | .AllocatedPortIndicesLength
        _m218 uint32_t                                          number_of_ports;                                 //{ +0x0ae4    +0x0abc    +0x0abc    +0x0abc    } | .NumberOfPorts
        _m219 uint32_t                                          number_of_active_ports;                          //{ +0x0ae8    +0x0ac0    +0x0ac0    +0x0ac0    } | .NumberOfActivePorts
        _m220 uint64_t                                          miniport_xmit_link_speed;                        //{ +0x0af0    +0x0ac8    +0x0ac8    +0x0ac8    } | .MiniportXmitLinkSpeed
        _m221 uint64_t                                          miniport_rcv_link_speed;                         //{ +0x0af8    +0x0ad0    +0x0ad0    +0x0ad0    } | .MiniportRcvLinkSpeed
        _m222 struct ndis::timer_t                              init_mode_timeout_timer;                         //{ +0x0b00    +0x0ad8    +0x0ad8    +0x0ad8    } | .InitModeTimeoutTimer
        _m223 struct ndis::work_item_t                          init_mode_timeout_work_item;                     //{ +0x0b80    +0x0b58    +0x0b58    +0x0b58    } | .InitModeTimeoutWorkItem
        _m224 struct nt::kevent_t                               init_mode_timeout_timer_queued_event;            //{ +0x0bd0    +0x0ba8    +0x0ba8    +0x0ba8    } | .InitModeTimeoutTimerQueuedEvent
        _m225 uint32_t                                          data_back_fill_size;                             //{ +0x0be8    +0x0bc0    +0x0bc0    +0x0bc0    } | .DataBackFillSize
        _m226 uint32_t                                          context_back_fill_size;                          //{ +0x0bec    +0x0bc4    +0x0bc4    +0x0bc4    } | .ContextBackFillSize
        _m227 struct ndis::restart_general_attributes_t         top_filter_restart_attributes;                   //{ +0x0bf0    +0x0bc8    +0x0bc8    +0x0bc8    } | .TopFilterRestartAttributes
        _m228 struct ndis::receive_scale_capabilities_t         top_recv_scale_capabilities;                     //{ +0x0c48    +0x0c20    +0x0c20    +0x0c20    } | .TopRecvScaleCapabilities
        _m229 uint32_t                                          nsi_open_references;                             //{ +0x0c5c    +0x0c34    +0x0c34    +0x0c34    } | .NsiOpenReferences
        _m230 void*                                             processing_open;                                 //{ +0x0c60    +0x0c38    +0x0c38    +0x0c38    } | .ProcessingOpen
        _m231 struct nt::kevent_t*                              nsi_requests_completed_event;                    //{ +0x0c68    +0x0c40    +0x0c40    +0x0c40    } | .NsiRequestsCompletedEvent
        _m232 enum nt::device_power_state_t                     query_power_device_state;                        //{ +0x0c70    +0x0c48    +0x0c48    +0x0c48    } | .QueryPowerDeviceState
        _m233 uint8_t                                           minimum_ndis_major_version;                      //{ +0x0c74    +0x0c4c    +0x0c4c    +0x0c4c    } | .MinimumNdisMajorVersion
        _m234 uint8_t                                           minimum_ndis_minor_version;                      //{ +0x0c75    +0x0c4d    +0x0c4d    +0x0c4d    } | .MinimumNdisMinorVersion
        _m235 struct ndis::miniport_stats_t*                    bottom_if_stats;                                 //{ +0x0c78    +0x0c50    +0x0c50    +0x0c50    } | .BottomIfStats
        _m236 struct ndis::m_periodic_receives_t                periodic_receive_queue;                          //{ +0x0c80    +0x0c58    +0x0c58    +0x0c58    } | .PeriodicReceiveQueue
        _m237 struct ndis::pndis_per_processor_slot_t*          periodic_receives_nbl_count_index;               //{ +0x0d10    +0x0ce0    +0x0ce0    +0x0ce0    } | .PeriodicReceivesNblCountIndex
        _m238 enum ndis::port_control_state_t                   default_send_control_state;                      //{ +0x0d18    +0x0ce8    +0x0ce8    +0x0ce8    } | .DefaultSendControlState
        _m239 enum ndis::port_control_state_t                   default_rcv_control_state;                       //{ +0x0d1c    +0x0cec    +0x0cec    +0x0cec    } | .DefaultRcvControlState
        _m240 enum ndis::port_authorization_state_t             default_send_authorization_state;                //{ +0x0d20    +0x0cf0    +0x0cf0    +0x0cf0    } | .DefaultSendAuthorizationState
        _m241 enum ndis::port_authorization_state_t             default_rcv_authorization_state;                 //{ +0x0d24    +0x0cf4    +0x0cf4    +0x0cf4    } | .DefaultRcvAuthorizationState
        _m242 enum ndis::port_control_state_t                   default_port_send_control_state;                 //{ +0x0d28    +0x0cf8    +0x0cf8    +0x0cf8    } | .DefaultPortSendControlState
        _m243 enum ndis::port_control_state_t                   default_port_rcv_control_state;                  //{ +0x0d2c    +0x0cfc    +0x0cfc    +0x0cfc    } | .DefaultPortRcvControlState
        _m244 enum ndis::port_authorization_state_t             default_port_send_authorization_state;           //{ +0x0d30    +0x0d00    +0x0d00    +0x0d00    } | .DefaultPortSendAuthorizationState
        _m245 enum ndis::port_authorization_state_t             default_port_rcv_authorization_state;            //{ +0x0d34    +0x0d04    +0x0d04    +0x0d04    } | .DefaultPortRcvAuthorizationState
        _m246 struct ndis::pci_device_custom_properties_t       pci_device_custom_properties;                    //{ +0x0d38    +0x0d08    +0x0d08    +0x0d08    } | .PciDeviceCustomProperties
        _m247 top_ndis5_packet_indicate_handler_t               top_ndis5_packet_indicate_handler;               //{ +0x0d70    +0x0d40    +0x0d40    +0x0d40    } | .TopNdis5PacketIndicateHandler
        _m248 uint32_t*                                         ndis_supported_oid_list;                         //{ +0x0d78    +0x0d48    +0x0d48    +0x0d48    } | .ndisSupportedOidList
        _m249 uint32_t                                          ndis_supported_oid_list_length;                  //{ +0x0d80    +0x0d50    +0x0d50    +0x0d50    } | .ndisSupportedOidListLength
        _m250 uint32_t                                          msi_int_count;                                   //{ +0x0d84    +0x0d54    +0x0d54    +0x0d54    } | .MsiIntCount
        _m251 struct nt::work_queue_item_t                      miniport_dpc_work_item;                          //{ +0x0d88    +0x0d58    +0x0d58    +0x0d58    } | .MiniportDpcWorkItem
        _m252 uint64_t                                          invalid_frames;                                  //{ +0x0da8    +0x0d78    +0x0d78    +0x0d78    } | .InvalidFrames
        _m253 int32_t                                           paging_path_count;                               //{ +0x0db0    +0x0d80    +0x0d80    +0x0d80    } | .PagingPathCount
        _m254 nt::list_entry_t                                  receive_queue_list;                              //{ +0x0db8    +0x0d88    +0x0d88    +0x0d88    } | .ReceiveQueueList
        _m255 uint8_t*                                          allocated_queue_indices;                         //{ +0x0dc8    +0x0d98    +0x0d98    +0x0d98    } | .AllocatedQueueIndices
        _m256 uint32_t                                          allocated_queue_indices_length;                  //{ +0x0dd0    +0x0da0    +0x0da0    +0x0da0    } | .AllocatedQueueIndicesLength
        _m257 uint32_t                                          num_receive_queues;                              //{ +0x0dd4    +0x0da4    +0x0da4    +0x0da4    } | .NumReceiveQueues
        _m258 nt::list_entry_t                                  receive_filter_list;                             //{ +0x0dd8    +0x0da8    +0x0da8    +0x0da8    } | .ReceiveFilterList
        _m259 uint8_t*                                          allocated_receive_filter_indices;                //{ +0x0de8    +0x0db8    +0x0db8    +0x0db8    } | .AllocatedReceiveFilterIndices
        _m260 uint32_t                                          allocated_receive_filter_indices_length;         //{ +0x0df0    +0x0dc0    +0x0dc0    +0x0dc0    } | .AllocatedReceiveFilterIndicesLength
        _m261 uint32_t                                          num_receive_filters;                             //{ +0x0df4    +0x0dc4    +0x0dc4    +0x0dc4    } | .NumReceiveFilters
        _m262 uint32_t                                          enabled_receive_filter_types;                    //{ +0x0df8    +0x0dc8    +0x0dc8    +0x0dc8    } | .EnabledReceiveFilterTypes
        _m263 uint32_t                                          enabled_receive_queue_types;                     //{ +0x0dfc    +0x0dcc    +0x0dcc    +0x0dcc    } | .EnabledReceiveQueueTypes
        _m264 struct ndis::receive_filter_capabilities_t*       receive_filter_hw_capabilities;                  //{ +0x0e00    +0x0dd0    +0x0dd0    +0x0dd0    } | .ReceiveFilterHwCapabilities
        _m265 struct ndis::receive_filter_capabilities_t*       receive_filter_current_capabilities;             //{ +0x0e08    +0x0dd8    +0x0dd8    +0x0dd8    } | .ReceiveFilterCurrentCapabilities
        _m266 struct ndis::receive_filter_capabilities_t*       top_receive_filter_current_capabilities;         //{ +0x0e10    +0x0de0    +0x0de0    +0x0de0    } | .TopReceiveFilterCurrentCapabilities
        _m267 struct ndis::nic_switch_capabilities_t*           nic_switch_hw_capabilities;                      //{ +0x0e18    +0x0de8    +0x0de8    +0x0de8    } | .NicSwitchHwCapabilities
        _m268 struct ndis::nic_switch_capabilities_t*           nic_switch_current_capabilities;                 //{ +0x0e20    +0x0df0    +0x0df0    +0x0df0    } | .NicSwitchCurrentCapabilities
        _m269 struct ndis::nic_switch_capabilities_t*           top_nic_switch_current_capabilities;             //{ +0x0e28    +0x0df8    +0x0df8    +0x0df8    } | .TopNicSwitchCurrentCapabilities
        _m270 nt::list_entry_t                                  shared_memory_block_list;                        //{ +0x0e30    +0x0e00    +0x0e00    +0x0e00    } | .SharedMemoryBlockList
        _m271 allocate_shared_memory_handler_t                  allocate_shared_memory_handler;                  //{ +0x0e40    +0x0e10    +0x0e10    +0x0e10    } | .AllocateSharedMemoryHandler
        _m272 sdk::function<void(void*, void*)>*                free_shared_memory_handler;                      //{ +0x0e48    +0x0e18    +0x0e18    +0x0e18    } | .FreeSharedMemoryHandler
        _m273 void*                                             allocate_shared_memory_context;                  //{ +0x0e50    +0x0e20    +0x0e20    +0x0e20    } | .AllocateSharedMemoryContext
        _m274 struct pci::msi_capability_t                      msi_caps;                                        //{ +0x0e58    +0x0e28    +0x0e28    +0x0e28    } | .MsiCaps
        _m275 struct pci::msix_capability_t                     msi_x_caps;                                      //{ +0x0e70    +0x0e40    +0x0e40    +0x0e40    } | .MsiXCaps
        _m276 uint64_t                                          number_of_indirection_table_changes;             //{ +0x0e80    +0x0e50    +0x0e50    +0x0e50    } | .NumberOfIndirectionTableChanges
        _m277 uint32_t                                          pci_device_sriov_support;                        //{ +0x0e88    +0x0e58    +0x0e58    +0x0e58    } | .PciDeviceSriovSupport
        _m278 uint8_t                                           begin_saved_fields;                              //{ +0x0e8c    +0x0e5c    +0x0e5c    +0x0e5c    } | .BeginSavedFields
        _m279 uint32_t                                          num_user_opens;                                  //{ +0x0e8c    +0x0e5c    +0x0e5c    +0x0e5c    } | .NumUserOpens
        _m280 struct ndis::miniport_offload_reg_t               offload_registry;                                //{ +0x0e90    +0x0e60    +0x0e60    +0x0e60    } | .OffloadRegistry
        _m281 uint16_t                                          media_disconnect_time_out;                       //{ +0x0e94    +0x0e64    +0x0e64    +0x0e64    } | .MediaDisconnectTimeOut
        _m282 uint16_t                                          sg_map_registers_needed;                         //{ +0x0e96    +0x0e66    +0x0e66    +0x0e66    } | .SGMapRegistersNeeded
        _m283 uint32_t                                          driver_verify_flags;                             //{ +0x0e98    +0x0e68    +0x0e68    +0x0e68    } | .DriverVerifyFlags
        _m284 set_bus_data_t                                    set_bus_data;                                    //{ +0x0ea0    +0x0e70    +0x0e70    +0x0e70    } | .SetBusData
        _m285 get_bus_data_t                                    get_bus_data;                                    //{ +0x0ea8    +0x0e78    +0x0e78    +0x0e78    } | .GetBusData
        _m286 void*                                             bus_data_context;                                //{ +0x0eb0    +0x0e80    +0x0e80    +0x0e80    } | .BusDataContext
        _m287 enum nt::interface_type_t                         bus_type;                                        //{ +0x0eb8    +0x0e88    +0x0e88    +0x0e88    } | .BusType
        _m288 uint32_t                                          bus_number;                                      //{ +0x0ebc    +0x0e8c    +0x0e8c    +0x0e8c    } | .BusNumber
        _m289 struct ndis::event_t                              open_ready_event;                                //{ +0x0ec8    +0x0e90    +0x0e90    +0x0e90    } | .OpenReadyEvent
        _m290 uint32_t                                          num_admin_opens;                                 //{ +0x0ee0    +0x0ea8    +0x0ea8    +0x0ea8    } | .NumAdminOpens
        _m291 struct ndis::m_driver_block_t*                    driver_handle;                                   //{ +0x0ee8    +0x0eb0    +0x0eb0    +0x0eb0    } | .DriverHandle
        _m292 struct ndis::bind_paths_t*                        bind_paths;                                      //{ +0x0ef0    +0x0eb8    +0x0eb8    +0x0eb8    } | .BindPaths
        _m293 enum ndis::physical_medium_t                      miniport_physical_medium_type;                   //{ +0x0ef8    +0x0ec0    +0x0ec0    +0x0ec0    } | .MiniportPhysicalMediumType
        _m294 void*                                             security_descriptor;                             //{ +0x0f00    +0x0ec8    +0x0ec8    +0x0ec8    } | .SecurityDescriptor
        _m295 nt::unicode_view                                  base_name;                                       //{ +0x0f08    +0x0ed0    +0x0ed0    +0x0ed0    } | .BaseName
        _m296 nt::unicode_view                                  miniport_name;                                   //{ +0x0f18    +0x0ee0    +0x0ee0    +0x0ee0    } | .MiniportName
        _m297 struct nt::device_object_t*                       device_object;                                   //{ +0x0f28    +0x0ef0    +0x0ef0    +0x0ef0    } | .DeviceObject
        _m298 struct nt::device_object_t*                       physical_device_object;                          //{ +0x0f30    +0x0ef8    +0x0ef8    +0x0ef8    } | .PhysicalDeviceObject
        _m299 struct nt::device_object_t*                       next_device_object;                              //{ +0x0f38    +0x0f00    +0x0f00    +0x0f00    } | .NextDeviceObject
        _m300 struct ndis::miniport_block_t*                    next_global_miniport;                            //{ +0x0f40    +0x0f08    +0x0f08    +0x0f08    } | .NextGlobalMiniport
        _m301 nt::unicode_view*                                 p_adapter_instance_name;                         //{ +0x0f48    +0x0f10    +0x0f10    +0x0f10    } | .pAdapterInstanceName
        _m302 uint32_t                                          pn_p_capabilities;                               //{ +0x0f50    +0x0f18    +0x0f18    +0x0f18    } | .PnPCapabilities
        _m303 enum nt::device_power_state_t                     current_device_power_state;                      //{ +0x0f54    +0x0f1c    +0x0f1c    +0x0f1c    } | .CurrentDevicePowerState
        _m304 uint64_t                                          power_state_lock;                                //{ +0x0f58    +0x0f20    +0x0f20    +0x0f20    } | .PowerStateLock
        _m305 enum nt::device_power_state_t                     driver_power_state;                              //{ +0x0f60    +0x0f28    +0x0f28    +0x0f28    } | .DriverPowerState
        _m306 enum nt::device_power_state_t                     prev_driver_power_state;                         //{ +0x0f64    +0x0f2c    +0x0f2c    +0x0f2c    } | .PrevDriverPowerState
        _m307 struct ndis::net_buffer_list_t*                   low_power_rcv_return_nbls;                       //{ +0x0f68    +0x0f30    +0x0f30    +0x0f30    } | .LowPowerRcvReturnNbls
        _m308 uint32_t                                          pending_return_nbl_count;                        //{ +0x0f70    +0x0f38    +0x0f38    +0x0f38    } | .PendingReturnNBLCount
        _m309 uint8_t                                           surprise_remove_flushed_rcv_return_queue;        //{ +0x0f74    +0x0f3c    +0x0f3c    +0x0f3c    } | .SurpriseRemoveFlushedRcvReturnQueue
        _m310 struct ndis::nbl_tracker_handle_t*                low_power_rcv_return_nbl_tracker;                //{ +0x0f78    +0x0f40    +0x0f40    +0x0f40    } | .LowPowerRcvReturnNblTracker
        _m311 struct ndis::pm_admin_config_t                    pm_admin_config;                                 //{ +0x0f80    +0x0f48    +0x0f48    +0x0f48    } | .PMAdminConfig
        _m312 struct nt::ksemaphore_t                           pm_pattern_semaphore;                            //{ +0x0f88    +0x0f50    +0x0f50    +0x0f50    } | .PMPatternSemaphore
        _m313 struct nt::ksemaphore_t                           pm_offload_semaphore;                            //{ +0x0fa8    +0x0f70    +0x0f70    +0x0f70    } | .PMOffloadSemaphore
        _m314 void*                                             bus_interface;                                   //{ +0x0fc8    +0x0f90    +0x0f90    +0x0f90    } | .BusInterface
        _m315 uint16_t                                          instance_number;                                 //{ +0x0fd0    +0x0f98    +0x0f98    +0x0f98    } | .InstanceNumber
        _m316 void*                                             configuration_handle;                            //{ +0x0fd8    +0x0fa0    +0x0fa0    +0x0fa0    } | .ConfigurationHandle
        _m317 struct nt::guid_t                                 interface_guid;                                  //{ +0x0fe0    +0x0fa8    +0x0fa8    +0x0fa8    } | .InterfaceGuid
        _m318 union ndis::net_luid_lh_t                         net_luid;                                        //{ +0x0ff0    +0x0fb8    +0x0fb8    +0x0fb8    } | .NetLuid
        _m319 uint8_t                                           if_block_available;                              //{ +0x0ff8    +0x0fc0    +0x0fc0    +0x0fc0    } | .IfBlockAvailable
        _m320 struct ndis::if_block_t*                          if_block;                                        //{ +0x1000    +0x0fc8    +0x0fc8    +0x0fc8    } | .IfBlock
        _m321 struct nt::kevent_t*                              if_block_pointer_ref_zero_event;                 //{ +0x1008    +0x0fd0    +0x0fd0    +0x0fd0    } | .IfBlockPointerRefZeroEvent
        _m322 uint32_t                                          if_index;                                        //{ +0x1010    +0x0fd8    +0x0fd8    +0x0fd8    } | .IfIndex
        _m323 enum ndis::net_if_admin_status_t                  admin_status;                                    //{ +0x1014    +0x0fdc    +0x0fdc    +0x0fdc    } | .AdminStatus
        _m324 enum ndis::net_if_oper_status_t                   oper_status;                                     //{ +0x1018    +0x0fe0    +0x0fe0    +0x0fe0    } | .OperStatus
        _m325 uint32_t                                          oper_status_flags;                               //{ +0x101c    +0x0fe4    +0x0fe4    +0x0fe4    } | .OperStatusFlags
        _m326 send_handler_t                                    send_handler;                                    //{ +0x1020    +0x0fe8    +0x0fe8    +0x0fe8    } | .SendHandler
        _m327 wan_send_handler_t                                wan_send_handler;                                //{ +0x1020    +0x0fe8    +0x0fe8    +0x0fe8    } | .WanSendHandler
        _m328 struct ndis::nbl_tracker_handle_t*                nbl_tracker;                                     //{ +0x1028    +0x0ff0    +0x0ff0    +0x0ff0    } | .NblTracker
        _m329 struct ndis::device_reset_interface_standard_t*   reenumerate_self_interface;                      //{ +0x1030    +0x0ff8    +0x0ff8    +0x0ff8    } | .ReenumerateSelfInterface
        _m330 struct ndis::miniport_offload_t*                  offload;                                         //{ +0x1038    +0x1000    +0x1000    +0x1000    } | .Offload
        _m331 void*                                             ndk_block;                                       //{ +0x1040    +0x1008    +0x1008    +0x1008    } | .NDKBlock
        _m332 void*                                             add_device_context;                              //{ +0x1048    +0x1010    +0x1010    +0x1010    } | .AddDeviceContext
        _m333 struct io::remove_lock_t                          remove_lock;                                     //{ +0x1050    +0x1018    +0x1018    +0x1018    } | .RemoveLock
        _m334 nt::unicode_view                                  devinterface_net_symbolic_link_name;             //{ +0x1070    +0x1038    +0x1038    +0x1038    } | .DevinterfaceNetSymbolicLinkName
        _m335 uint32_t                                          physical_medium_in_inf;                          //{ +0x1080    +0x1048    +0x1048    +0x1048    } | .PhysicalMediumInInf
        _m336 void*                                             status_processing_thread;                        //{ +0x1098    +0x1060    +0x1060    +0x1060    } | .StatusProcessingThread
        _m337 nt::unicode_view                                  fdo_name;                                        //{ +0x10a8    +0x1068    +0x1068    +0x1068    } | .FdoName
        _m338 struct nt::kevent_t                               power_d0_complete_event;                         //{ +0x10b8    +0x1078    +0x1078    +0x1078    } | .PowerD0CompleteEvent
        _m339 int32_t                                           last_d0_complete_status;                         //{ +0x10d0    +0x1090    +0x1090    +0x1090    } | .LastD0CompleteStatus
        _m340 enum ndis::miniport_event_t                       last_d0_reason;                                  //{ +0x10d4    +0x1094    +0x1094    +0x1094    } | .LastD0Reason
        _m341 uint32_t                                          direct_oid_request_count;                        //{ +0x10d8    +0x1098    +0x1098    +0x1098    } | .DirectOidRequestCount
        _m342 struct nt::kevent_t*                              all_direct_requests_completed_event;             //{ +0x10e0    +0x10a0    +0x10a0    +0x10a0    } | .AllDirectRequestsCompletedEvent
        _m343 struct ndis::hd_split_current_config_t*           hd_split_current_config;                         //{ +0x10e8    +0x10a8    +0x10a8    +0x10a8    } | .HDSplitCurrentConfig
        _m344 void*                                             msix_config_context;                             //{ +0x10f0    +0x10b0    +0x10b0    +0x10b0    } | .MSIXConfigContext
        _m345 set_msix_table_entry_t                            set_msix_table_entry;                            //{ +0x10f8    +0x10b8    +0x10b8    +0x10b8    } | .SetMSIXTableEntry
        _m346 sdk::function<int32_t(void*, uint32_t)>*          mask_msix_table_entry;                           //{ +0x1100    +0x10c0    +0x10c0    +0x10c0    } | .MaskMSIXTableEntry
        _m347 sdk::function<int32_t(void*, uint32_t)>*          unmask_msix_table_entry;                         //{ +0x1108    +0x10c8    +0x10c8    +0x10c8    } | .UnmaskMSIXTableEntry
        _m348 struct nt::work_queue_item_t                      device_power_state_work_item;                    //{ +0x1110    +0x10d0    +0x10d0    +0x10d0    } | .DevicePowerStateWorkItem
        _m349 struct nt::work_queue_item_t                      system_power_state_work_item;                    //{ +0x1130    +0x10f0    +0x10f0    +0x10f0    } | .SystemPowerStateWorkItem
        _m350 struct ndis::receive_queue_block_t*               default_receive_queue;                           //{ +0x1150    +0x1110    +0x1110    +0x1110    } | .DefaultReceiveQueue
        _m351 uint32_t                                          max_num_rss_processors;                          //{ +0x1158    +0x1118    +0x1118    +0x1118    } | .MaxNumRssProcessors
        _m352 struct nt::processor_number_t                     rss_base_processor;                              //{ +0x115c    +0x111c    +0x111c    +0x111c    } | .RssBaseProcessor
        _m353 struct nt::processor_number_t                     rss_max_processor;                               //{ +0x1160    +0x1120    +0x1120    +0x1120    } | .RssMaxProcessor
        _m354 enum ndis::rss_profile_t                          rss_profile;                                     //{ +0x1164    +0x1124    +0x1124    +0x1124    } | .RssProfile
        _m355 uint16_t                                          numa_node_id;                                    //{ +0x1168    +0x1128    +0x1128    +0x1128    } | .NumaNodeId
        _m356 uint16_t*                                         numa_distances;                                  //{ +0x1170    +0x1130    +0x1130    +0x1130    } | .NumaDistances
        _m357 nt::unicode_view*                                 p_modified_instance_name;                        //{ +0x1178    +0x1138    +0x1138    +0x1138    } | .pModifiedInstanceName
        _m358 uint32_t                                          sync_flags;                                      //{ +0x1180    +0x1140    +0x1140    +0x1140    } | .SyncFlags
        _m359 uint32_t                                          w_sync_flags;                                    //{ +0x1184    +0x1144    +0x1144    +0x1144    } | .WSyncFlags
        _m360 uint32_t                                          interlocked_flags;                               //{ +0x1188    +0x1148    +0x1148    +0x1148    } | .InterlockedFlags
        _m361 struct ndis::ulong_reference_t                    ref;                                             //{ +0x1190    +0x1150    +0x1150    +0x1150    } | .Ref
        _m362 struct ndis::selective_suspend_t*                 selective_suspend;                               //{ +0x11a0    +0x1160    +0x1160    +0x1160    } | .SelectiveSuspend
        _m363 struct ndis::miniport_aoac_t*                     ao_ac;                                           //{ +0x11a8    +0x1168    +0x1168    +0x1168    } | .AoAc
        _m364 enum ndis::pm_wake_reason_type_t                  last_wake_reason;                                //{ +0x11b0    +0x1170    +0x1170    +0x1170    } | .LastWakeReason
        _m365 struct ndis::event_log_handle_t*                  pnp_event_log;                                   //{ +0x11b8    +0x1178    +0x1178    +0x1178    } | .PnpEventLog
        _m366 struct ndis::d0_signal_work_item_t                d0_complete_signal_work_item;                    //{ +0x11c0    +0x1180    +0x1180    +0x1180    } | .D0CompleteSignalWorkItem
        _m367 struct ndis::physical_performance_counters_t*     physical_performance_counters;                   //{ +0x1218    +0x11d8    +0x11d8    +0x11d8    } | .PhysicalPerformanceCounters
        _m368 int64_t                                           time_of_initialization;                          //{ +0x1220    +0x11e0    +0x11e0    +0x11e0    } | .TimeOfInitialization
        _m369 int64_t                                           last_system_sleep_time;                          //{ +0x1228    +0x11e8    +0x11e8    +0x11e8    } | .LastSystemSleepTime
        _m370 uint64_t                                          total_system_sleep_time_ms;                      //{ +0x1230    +0x11f0    +0x11f0    +0x11f0    } | .TotalSystemSleepTimeMs
        _m371 struct ndis::sriov_capabilities_t*                sriov_hw_capabilities;                           //{ +0x1238    +0x11f8    +0x11f8    +0x11f8    } | .SriovHwCapabilities
        _m372 struct ndis::sriov_capabilities_t*                sriov_current_capabilities;                      //{ +0x1240    +0x1200    +0x1200    +0x1200    } | .SriovCurrentCapabilities
        _m373 uint64_t                                          invalidate_block_mask;                           //{ +0x1248    +0x1208    +0x1208    +0x1208    } | .InvalidateBlockMask
        _m374 struct nt::irp_t*                                 invalidate_block_ioctl_pf;                       //{ +0x1250    +0x1210    +0x1210    +0x1210    } | .InvalidateBlockIoctlPf
        _m375 struct nt::irp_t*                                 invalidate_block_ioctl_vf;                       //{ +0x1258    +0x1218    +0x1218    +0x1218    } | .InvalidateBlockIoctlVf
        _m376 struct ndis::vpci_invalidate_block_output_t       invalidate_block_vf_params;                      //{ +0x1260    +0x1220    +0x1220    +0x1220    } | .InvalidateBlockVfParams
        _m377 struct nt::kevent_t                               invalidate_block_event;                          //{ +0x1268    +0x1228    +0x1228    +0x1228    } | .InvalidateBlockEvent
        _m378 uint16_t                                          invalidate_vf_id;                                //{ +0x1280    +0x1240    +0x1240    +0x1240    } | .InvalidateVfId
        _m379 uint8_t                                           invalidate_block_cancelling;                     //{ +0x1282    +0x1242    +0x1242    +0x1242    } | .InvalidateBlockCancelling
        _m380 struct ndis::pf_block_t*                          pf_block;                                        //{ +0x1288    +0x1248    +0x1248    +0x1248    } | .PFBlock
        _m381 uint32_t                                          num_switches;                                    //{ +0x1290    +0x1250    +0x1250    +0x1250    } | .NumSwitches
        _m382 nt::list_entry_t                                  nic_switch_list;                                 //{ +0x1298    +0x1258    +0x1258    +0x1258    } | .NicSwitchList
        _m383 uint32_t                                          num_allocated_v_fs;                              //{ +0x12a8    +0x1268    +0x1268    +0x1268    } | .NumAllocatedVFs
        _m384 nt::list_entry_t                                  vf_list;                                         //{ +0x12b0    +0x1270    +0x1270    +0x1270    } | .VFList
        _m385 uint32_t                                          num_active_v_ports;                              //{ +0x12c0    +0x1280    +0x1280    +0x1280    } | .NumActiveVPorts
        _m386 nt::list_entry_t                                  v_port_list;                                     //{ +0x12c8    +0x1288    +0x1288    +0x1288    } | .VPortList
        _m387 uint8_t*                                          allocated_v_port_indices;                        //{ +0x12d8    +0x1298    +0x1298    +0x1298    } | .AllocatedVPortIndices
        _m388 uint32_t                                          allocated_v_port_indices_length;                 //{ +0x12e0    +0x12a0    +0x12a0    +0x12a0    } | .AllocatedVPortIndicesLength
        _m389 set_virtual_function_data_t                       set_virtual_function_data;                       //{ +0x12e8    +0x12a8    +0x12a8    +0x12a8    } | .SetVirtualFunctionData
        _m390 get_virtual_function_data_t                       get_virtual_function_data;                       //{ +0x12f0    +0x12b0    +0x12b0    +0x12b0    } | .GetVirtualFunctionData
        _m391 enable_virtualization_t                           enable_virtualization;                           //{ +0x12f8    +0x12b8    +0x12b8    +0x12b8    } | .EnableVirtualization
        _m392 get_virtual_device_location_t                     get_virtual_device_location;                     //{ +0x1300    +0x12c0    +0x12c0    +0x12c0    } | .GetVirtualDeviceLocation
        _m393 sdk::function<int32_t(void*, uint32_t*)>*         get_virtual_function_probed_bars;                //{ +0x1308    +0x12c8    +0x12c8    +0x12c8    } | .GetVirtualFunctionProbedBars
        _m394 void*                                             virt_interface_context;                          //{ +0x1310    +0x12d0    +0x12d0    +0x12d0    } | .VirtInterfaceContext
        _m395 nt::unicode_view                                  devinterface_virt_symbolic_link_name;            //{ +0x1318    +0x12d8    +0x12d8    +0x12d8    } | .DevinterfaceVirtSymbolicLinkName
        _m396 sdk::function<void(void*)>*                       vpci_interface_dereference;                      //{ +0x1328    +0x12e8    +0x12e8    +0x12e8    } | .VpciInterfaceDereference
        _m397 write_vf_config_block_t                           write_vf_config_block;                           //{ +0x1330    +0x12f0    +0x12f0    +0x12f0    } | .WriteVfConfigBlock
        _m398 read_vf_config_block_t                            read_vf_config_block;                            //{ +0x1338    +0x12f8    +0x12f8    +0x12f8    } | .ReadVfConfigBlock
        _m399 void*                                             vpci_interface_context;                          //{ +0x1340    +0x1300    +0x1300    +0x1300    } | .VpciInterfaceContext
        _m400 uint32_t                                          vf_serial_number;                                //{ +0x1348    +0x1308    +0x1308    +0x1308    } | .VfSerialNumber
        _m401 struct nt::luid_t                                 sriov_luid;                                      //{ +0x134c    +0x130c    +0x130c    +0x130c    } | .SriovLuid
        _m402 struct ndis::refcount_handle_t*                   ref_count_tracker;                               //{ +0x1358    +0x1318    +0x1318    +0x1318    } | .RefCountTracker
        _m403 struct ndis::refcount_handle_t*                   nsi_ref_count_tracker;                           //{ +0x1360    +0x1320    +0x1320    +0x1320    } | .NsiRefCountTracker
        _m404 struct ndis::qos_capabilities_t*                  qos_hw_capabilities;                             //{ +0x1368    +0x1328    +0x1328    +0x1328    } | .QosHwCapabilities
        _m405 struct ndis::qos_capabilities_t*                  qos_current_capabilities;                        //{ +0x1370    +0x1330    +0x1330    +0x1330    } | .QosCurrentCapabilities
        _m406 struct ndis::qos_parameters_t*                    qos_operational_parameters;                      //{ +0x1378    +0x1338    +0x1338    +0x1338    } | .QosOperationalParameters
        _m407 uint32_t                                          qos_operational_parameters_buffer_size;          //{ +0x1380    +0x1340    +0x1340    +0x1340    } | .QosOperationalParametersBufferSize
        _m408 struct ndis::qos_parameters_t*                    qos_remote_parameters;                           //{ +0x1388    +0x1348    +0x1348    +0x1348    } | .QosRemoteParameters
        _m409 uint32_t                                          qos_remote_parameters_buffer_size;               //{ +0x1390    +0x1350    +0x1350    +0x1350    } | .QosRemoteParametersBufferSize
        _m410 uint64_t                                          device_flags;                                    //{ +0x1398    +0x1358    +0x1358    +0x1358    } | .DeviceFlags
        _m411 void*                                             verifier_context;                                //{ +0x13a0    +0x1360    +0x1360    +0x1360    } | .VerifierContext
        _m412 surprise_removal_work_item_t                      surprise_removal_work_item;                      //{ +0x13a8    +0x1368    +0x1368    +0x1368    } | .SurpriseRemovalWorkItem
        _m413 bool                                              pm_interrupted_by_pnp;                           //{ +0x14f8    +0x1490    +0x1498    +0x1490    } | .PmInterruptedByPnp
        _m414 bool                                              do_not_block_on_miniport_lock;                   //{ +0x14f9    +0x1491    +0x1499    +0x1491    } | .DoNotBlockOnMiniportLock
        _m415 bool                                              po_fx_d_state_reporting_enabled;                 //{ +0x14fa    +0x1492    +0x149a    +0x1492    } | .PoFxDStateReportingEnabled
        _m416 struct ndis::miniport_hook_adapter_handle_t*      hook_adapter_handle;                             //{ +0x1500    +0x1498    +0x14a0    +0x1498    } | .HookAdapterHandle
        _m417 struct nt::work_queue_item_t                      interface_update_work_item;                      //{ +0x1508    +0x14a0    +0x14a8    +0x14a0    } | .InterfaceUpdateWorkItem
        _m418 bool                                              interface_update_in_progress;                    //{ +0x1528    +0x14c0    +0x14c8    +0x14c0    } | .InterfaceUpdateInProgress
        _m419 bool                                              mac_address_update_queued;                       //{ +0x1529    +0x14c1    +0x14c9    +0x14c1    } | .MacAddressUpdateQueued
        _m420 bool                                              mtu_update_queued;                               //{ +0x152a    +0x14c2    +0x14ca    +0x14c2    } | .MtuUpdateQueued
        _m421 struct ndis::if_physical_address_lh_t             pending_mac_address;                             //{ +0x152c    +0x14c4    +0x14cc    +0x14c4    } | .PendingMacAddress
        _m422 uint32_t                                          pending_mtu_size;                                //{ +0x1550    +0x14e8    +0x14f0    +0x14e8    } | .PendingMtuSize
        _m423 device_power_on_work_item_t                       device_power_on_work_item;                       //{ +0x1570    +0x14f8    +0x1500    +0x14f8    } | .DevicePowerOnWorkItem
        _m424 device_power_down_work_item_t                     device_power_down_work_item;                     //{ +0x15c8    +0x1520    +0x1528    +0x1520    } | .DevicePowerDownWorkItem
        _m425 struct ndis::pd_block_t*                          pd_block;                                        //{ +0x1620    +0x1560    +0x1568    +0x1560    } | .PDBlock
        _m426 void*                                             pdc_handle;                                      //{ +0x1628    +0x1568    +0x1570    +0x1568    } | .PdcHandle
        _m427 struct ndis::timer_t                              pdc_task_client_disable_timer;                   //{ +0x1630    +0x1570    +0x1578    +0x1570    } | .PdcTaskClientDisableTimer
        _m428 struct ndis::work_item_t                          pdc_task_client_disable_work_item;               //{ +0x16b0    +0x15f0    +0x15f8    +0x15f0    } | .PdcTaskClientDisableWorkItem
        _m429 volatile int32_t                                  pdc_task_client_mode;                            //{ +0x1700    +0x1640    +0x1648    +0x1640    } | .PdcTaskClientMode
        _m430 uint32_t                                          modern_standby_wo_l_magic_packet_enable;         //{ +0x1704    +0x1644    +0x164c    +0x1644    } | .ModernStandbyWoLMagicPacketEnable
                                                                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                     
        _m431 enum ndis::medium_t                               data_link_layer_type;                            //{ +0x0730    +0x0730    +0x0730    } | .DataLinkLayerType
        _m432 enum ndis::medium_t                               mp_specified_media_type;                         //{ +0x0734    +0x0734    +0x0734    } | .MpSpecifiedMediaType
        _m433 uint32_t                                          timestamp_flags;                                 //{ +0x0a78    +0x0a78    +0x0a78    } | .TimestampFlags
        _m434 wchar_t*                                          pn_p_instance_id;                                //{ +0x14f0    +0x14f8    +0x14f0    } | .PnPInstanceId
        _m435 struct ndis::rss_dpc_worker_context_t*            rss_v2_context;                                  //{ +0x1650    +0x1650    +0x1650    } | .RssV2Context
        _m436 volatile int32_t                                  rss_v2_completion_count;                         //{ +0x1658    +0x1658    +0x1658    } | .RssV2CompletionCount
        _m437 struct nt::kevent_t                               rss_v2_completion_event;                         //{ +0x1660    +0x1660    +0x1660    } | .RssV2CompletionEvent
        _m438 uint8_t                                           rss_v2_initialized;                              //{ +0x1678    +0x1678    +0x1678    } | .RssV2Initialized
        _m439 nt::list_entry_t                                  synchronous_oid_calls;                           //{ +0x1680    +0x1680    +0x1680    } | .SynchronousOidCalls
        _m440 struct ndis::timestamp_capabilities_t*            hw_timestamp_capabilities;                       //{ +0x1690    +0x1690    +0x1690    } | .HwTimestampCapabilities
        _m441 struct ndis::timestamp_capabilities_t*            hw_timestamp_current_config;                     //{ +0x1698    +0x1698    +0x1698    } | .HwTimestampCurrentConfig
        _m442 struct ndis::timestamp_capabilities_t*            top_timestamp_config;                            //{ +0x16a0    +0x16a0    +0x16a0    } | .TopTimestampConfig
        _m443 struct ndis::timestamp_capabilities_t*            top_hw_timestamp_capabilities;                   //{ +0x16a8    +0x16a8    +0x16a8    } | .TopHwTimestampCapabilities
        _m444 struct ndis::pktmon_component_context_t           pkt_mon_comp;                                    //{ +0x16b0    +0x16b0    +0x16b0    } | .PktMonComp
        _m445 struct ndis::pktmon_edge_context_t                pkt_mon_edge;                                    //{ +0x16c0    +0x16c0    +0x16c0    } | .PktMonEdge
                                                                                                               
        // Windows 10 v2004, Windows 10 v20H2                                                                  
        //                                                                                                     
        _m446 bool                                              modern_standby_system_wake_enabled;              //{ +0x1648    +0x1648    } | .ModernStandbySystemWakeEnabled
        _m447 enum ndis::net_setup_store_type_t                 lwm_configuration_store;                         //{ +0x16d8    +0x16d8    } | .LWMConfigurationStore
                                                                                                               
        // Windows 10 v1607                                                                                    
        //                                                                                                     
        _m448 uint32_t                                          lock_dbg;                                        //{ +0x0740    } | .LockDbg
        _m449 uint32_t                                          lock_dbg_x;                                      //{ +0x0744    } | .LockDbgX
        _m450 uint32_t                                          recv_lock_dbg;                                   //{ +0x07e8    } | .RecvLockDbg
        _m451 uint32_t                                          c_dpc_send_completes;                            //{ +0x0a88    } | .cDpcSendCompletes
        _m452 uint32_t                                          c_dpc_rcv_indications;                           //{ +0x0a8c    } | .cDpcRcvIndications
        _m453 uint32_t                                          c_dpc_rcv_indication_calls;                      //{ +0x0a90    } | .cDpcRcvIndicationCalls
        _m454 uint32_t                                          c_dpc_nb_send_completes;                         //{ +0x0a94    } | .cDpcNbSendCompletes
        _m455 uint32_t                                          c_dpc_nbl_send_completes;                        //{ +0x0a98    } | .cDpcNblSendCompletes
        _m456 uint32_t                                          c_dpc_nbl_indications;                           //{ +0x0a9c    } | .cDpcNblIndications
        _m457 uint32_t                                          c_dpc_max_packets_indicated;                     //{ +0x0aa0    } | .cDpcMaxPacketsIndicated
        _m458 uint32_t                                          c_dpc_total_dpc_count;                           //{ +0x0aa4    } | .cDpcTotalDpcCount
        _m459 uint32_t                                          slot_number;                                     //{ +0x0ec0    } | .SlotNumber
        _m460 uint32_t                                          status_processing_dbg_x;                         //{ +0x10a0    } | .StatusProcessingDbgX
        _m461 struct pci::recorder_log_t*                       black_box_handle;                                //{ +0x1558    } | .BlackBoxHandle
        _m462 struct nt::kevent_t*                              power_complete_event;                            //{ +0x1560    } | .PowerCompleteEvent
        _m463 int32_t                                           power_complete_status;                           //{ +0x1568    } | .PowerCompleteStatus
                                                                                                               
        // Windows 11                                                                                          
        //                                                                                                     
        _m464 class ndis::knob_namespace_t                      poll_mode_config_knobs_namespace;                //{ +0x16d8    } | .PollModeConfigKnobsNamespace
        _m465 struct ndis::execution_context_runtime_knobs_t    poll_mode_config_knobs;                          //{ +0x1730    } | .PollModeConfigKnobs
        _m466 uint8_t                                           wdf_cx_power_management;                         //{ +0x176c    } | .WdfCxPowerManagement
                                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_BLOCK.$", 0x16e0, true, 0x3a7f5c35c9a795d5 );                                               
        SDK_DYNAMIC_SIZE( miniport_block_t );                                                                  
    };                                                                                                         
};
#include "magic/miniport_block_t.end.hpp"
