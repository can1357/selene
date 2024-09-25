#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_vc_ptr_block_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct open_block_t;
    struct co_af_block_t;
    struct co_vc_block_t;
    struct miniport_block_t;
    struct net_buffer_list_t;
    struct co_call_parameters_t;

    // [struct _NDIS_CO_VC_PTR_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_vc_ptr_block_t                                                                               
    {                                                                                                      
        using cl_modify_call_qo_s_complete_handler_t =         sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                             
        using cl_incoming_call_qo_s_change_handler_t =         sdk::function<void(void*, struct ndis::co_call_parameters_t*)>*;                                             
        using cm_activate_vc_complete_handler_t =              sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                             
        using cm_modify_call_qo_s_handler_t =                  sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                             
        using w_co_send_packets_handler_t =                    sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                             
        using w_co_activate_vc_handler_t =                     sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                             
        using w_co_send_net_buffer_lists_handler_t =           sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                             
        using co_send_net_buffer_lists_handler_t =             sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                             
        using co_send_net_buffer_lists_complete_handler_t =    sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                             
        using co_send_packet_handler_t =                       sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                             
        using co_send_packet_complete_handler_t =              sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*;                                             
        using co_indicate_receive_packet_handler_t =           sdk::function<void(void*, struct ndis::packet_t**, uint32_t)>*;                                             
        using co_indicate_receive_net_buffer_lists_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                             
                                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                             
        //                                                                                                 
        _m000 int32_t                                         references;                                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .References
        _m001 uint32_t                                        call_flags;                                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .CallFlags
        _m002 uint32_t*                                       p_vc_flags;                                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pVcFlags
        _m003 uint64_t                                        lock;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Lock
        _m004 void*                                           client_context;                                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientContext
        _m005 nt::list_entry_t                                client_link;                                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientLink
        _m006 nt::list_entry_t                                vc_link;                                       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VcLink
        _m007 struct ndis::co_af_block_t*                     af_block;                                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AfBlock
        _m008 struct ndis::co_vc_block_t*                     vc_block;                                      //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .VcBlock
        _m009 struct ndis::open_block_t*                      client_open;                                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ClientOpen
        _m010 int32_t                                         owns_vc_block;                                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .OwnsVcBlock
        _m011 sdk::function<int32_t(void*)>*                  co_delete_vc_handler;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CoDeleteVcHandler
        _m012 void*                                           delete_vc_context;                             //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .DeleteVcContext
        _m013 cl_modify_call_qo_s_complete_handler_t          cl_modify_call_qo_s_complete_handler;          //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .ClModifyCallQoSCompleteHandler
        _m014 cl_incoming_call_qo_s_change_handler_t          cl_incoming_call_qo_s_change_handler;          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .ClIncomingCallQoSChangeHandler
        _m015 sdk::function<void(void*)>*                     cl_call_connected_handler;                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .ClCallConnectedHandler
        _m016 struct ndis::open_block_t*                      call_mgr_open;                                 //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .CallMgrOpen
        _m017 void*                                           call_mgr_context;                              //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CallMgrContext
        _m018 nt::list_entry_t                                call_mgr_link;                                 //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .CallMgrLink
        _m019 cm_activate_vc_complete_handler_t               cm_activate_vc_complete_handler;               //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .CmActivateVcCompleteHandler
        _m020 sdk::function<void(int32_t, void*)>*            cm_deactivate_vc_complete_handler;             //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .CmDeactivateVcCompleteHandler
        _m021 cm_modify_call_qo_s_handler_t                   cm_modify_call_qo_s_handler;                   //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .CmModifyCallQoSHandler
        _m022 struct ndis::miniport_block_t*                  miniport;                                      //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .Miniport
        _m023 void*                                           miniport_context;                              //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .MiniportContext
        _m024 w_co_send_packets_handler_t                     w_co_send_packets_handler;                     //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .WCoSendPacketsHandler
        _m025 sdk::function<int32_t(void*)>*                  w_co_delete_vc_handler;                        //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .WCoDeleteVcHandler
        _m026 w_co_activate_vc_handler_t                      w_co_activate_vc_handler;                      //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .WCoActivateVcHandler
        _m027 sdk::function<int32_t(void*)>*                  w_co_deactivate_vc_handler;                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .WCoDeactivateVcHandler
        _m028 w_co_send_net_buffer_lists_handler_t            w_co_send_net_buffer_lists_handler;            //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .WCoSendNetBufferListsHandler
        _m029 co_send_net_buffer_lists_handler_t              co_send_net_buffer_lists_handler;              //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .CoSendNetBufferListsHandler
        _m030 co_send_net_buffer_lists_complete_handler_t     co_send_net_buffer_lists_complete_handler;     //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .CoSendNetBufferListsCompleteHandler
        _m031 co_send_packet_handler_t                        co_send_packet_handler;                        //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .CoSendPacketHandler
        _m032 co_send_packet_complete_handler_t               co_send_packet_complete_handler;               //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .CoSendPacketCompleteHandler
        _m033 co_indicate_receive_packet_handler_t            co_indicate_receive_packet_handler;            //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .CoIndicateReceivePacketHandler
        _m034 co_indicate_receive_net_buffer_lists_handler_t  co_indicate_receive_net_buffer_lists_handler;  //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .CoIndicateReceiveNetBufferListsHandler
        _m035 nt::unicode_view                                vc_instance_name;                              //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .VcInstanceName
        _m036 int64_t                                         vc_index;                                      //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .VcIndex
        _m037 nt::list_entry_t                                wmi_link;                                      //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .WmiLink
        _m038 uint8_t                                         call_miniport_delete_vc;                       //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .CallMiniportDeleteVc
                                                                                                           
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_VC_PTR_BLOCK.$", 0x158, true, 0x54aa10d5f47e9b46 );                                             
        SDK_FIXED_SIZE( co_vc_ptr_block_t, 0x158 );                                                        
    };                                                                                                     
};
#include "magic/co_vc_ptr_block_t.end.hpp"
SDK_VERIFY( struct ndis::co_vc_ptr_block_t, 0x158 );
