#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pd_ext_client_dispatch_t.start.hpp"
namespace ndis
{
    struct pd_buffer_t;
    struct pd_ext_client_context_t;

    // [struct _NDIS_PD_EXT_CLIENT_DISPATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pd_ext_client_dispatch_t                                                           
    {                                                                                         
        using pd_ext_client_process_buffers_send_t =     sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t**, uint32_t)>*;                                       
        using pd_ext_client_process_buffers_receive_t =  sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, struct ndis::pd_buffer_t**, uint32_t)>*;                                       
        using pd_ext_client_complete_buffers_send_t =    sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, uint32_t)>*;                                       
        using pd_ext_client_complete_buffers_receive_t = sdk::function<void(struct ndis::pd_ext_client_context_t*, struct ndis::pd_buffer_t*, struct ndis::pd_buffer_t**, uint32_t)>*;                                       
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                       
        //                                                                                    
        _m00 pd_ext_client_process_buffers_send_t      pd_ext_client_process_buffers_send;      //{ +0x0000    +0x0000    +0x0000    } | .PDExtClientProcessBuffersSend
        _m01 pd_ext_client_process_buffers_receive_t   pd_ext_client_process_buffers_receive;   //{ +0x0008    +0x0008    +0x0008    } | .PDExtClientProcessBuffersReceive
        _m02 pd_ext_client_complete_buffers_send_t     pd_ext_client_complete_buffers_send;     //{ +0x0010    +0x0010    +0x0010    } | .PDExtClientCompleteBuffersSend
        _m03 pd_ext_client_complete_buffers_receive_t  pd_ext_client_complete_buffers_receive;  //{ +0x0018    +0x0018    +0x0018    } | .PDExtClientCompleteBuffersReceive
                                                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_PD_EXT_CLIENT_DISPATCH.$", 0x20, true, 0x3a5ccb3e183d23a9 );                                       
        SDK_DYNAMIC_SIZE( pd_ext_client_dispatch_t );                                         
    };                                                                                        
};
#include "magic/pd_ext_client_dispatch_t.end.hpp"
