#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/co_vc_block_t.start.hpp"
namespace ndis
{
    struct packet_t;
    struct open_block_t;
    struct miniport_block_t;
    struct co_vc_ptr_block_t;
    struct net_buffer_list_t;
    struct co_call_parameters_t;

    // [struct _NDIS_CO_VC_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct co_vc_block_t                                                                            
    {                                                                                               
        using co_send_complete_handler_t =                  sdk::function<void(int32_t, void*, struct ndis::packet_t*)>*;                                          
        using co_receive_packet_handler_t =                 sdk::function<uint32_t(void*, void*, struct ndis::packet_t*)>*;                                          
        using co_send_net_buffer_lists_complete_handler_t = sdk::function<void(void*, struct ndis::net_buffer_list_t*, uint32_t)>*;                                          
        using co_receive_net_buffer_lists_handler_t =       sdk::function<void(void*, void*, struct ndis::net_buffer_list_t*, uint32_t, uint32_t)>*;                                          
        using cm_activate_vc_complete_handler_t =           sdk::function<void(int32_t, void*, struct ndis::co_call_parameters_t*)>*;                                          
        using cm_modify_call_qo_s_handler_t =               sdk::function<int32_t(void*, struct ndis::co_call_parameters_t*)>*;                                          
                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                          
        //                                                                                          
        _m00 uint32_t                                     references;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .References
        _m01 uint32_t                                     flags;                                      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint64_t                                     lock;                                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
        _m03 struct ndis::open_block_t*                   client_open;                                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ClientOpen
        _m04 void*                                        client_context;                             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ClientContext
        _m05 struct ndis::co_vc_ptr_block_t*              p_proxy_vc_ptr;                             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pProxyVcPtr
        _m06 struct ndis::co_vc_ptr_block_t*              p_client_vc_ptr;                            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pClientVcPtr
        _m07 co_send_complete_handler_t                   co_send_complete_handler;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CoSendCompleteHandler
        _m08 co_receive_packet_handler_t                  co_receive_packet_handler;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CoReceivePacketHandler
        _m09 co_send_net_buffer_lists_complete_handler_t  co_send_net_buffer_lists_complete_handler;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .CoSendNetBufferListsCompleteHandler
        _m10 co_receive_net_buffer_lists_handler_t        co_receive_net_buffer_lists_handler;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CoReceiveNetBufferListsHandler
        _m11 struct ndis::open_block_t*                   call_mgr_open;                              //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CallMgrOpen
        _m12 void*                                        call_mgr_context;                           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .CallMgrContext
        _m13 cm_activate_vc_complete_handler_t            cm_activate_vc_complete_handler;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CmActivateVcCompleteHandler
        _m14 sdk::function<void(int32_t, void*)>*         cm_deactivate_vc_complete_handler;          //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .CmDeactivateVcCompleteHandler
        _m15 cm_modify_call_qo_s_handler_t                cm_modify_call_qo_s_handler;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CmModifyCallQoSHandler
        _m16 struct ndis::miniport_block_t*               miniport;                                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Miniport
        _m17 void*                                        miniport_context;                           //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .MiniportContext
        _m18 uint64_t                                     vc_id;                                      //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .VcId
                                                                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_CO_VC_BLOCK.$", 0x90, true, 0xa8f0a699832f6a3 );                                          
        SDK_FIXED_SIZE( co_vc_block_t, 0x90 );                                                      
    };                                                                                              
};
#include "magic/co_vc_block_t.end.hpp"
SDK_VERIFY( struct ndis::co_vc_block_t, 0x90 );
