#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "s_pending_call_t.hpp"
#include "../tag/rpcolemessage_t.hpp"

#include "magic/c_channel_object_t.start.hpp"
namespace win
{
    struct i_synchronize_t;
    class c_client_channel_t;
    class c_client_call_mgr_t;
    struct i_rpc_proxy_buffer_t;
    class async_com_client_call_t;

    // [class CChannelObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_channel_object_t                                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                     
        _m00 volatile uint32_t                   dw_state;       //{ +0x0040    +0x0048    +0x0048    +0x0048    } | ._dwState
        _m01 uint32_t                            c_refs;         //{ +0x0044    +0x004c    +0x004c    +0x004c    } | ._cRefs
        _m02 uint32_t                            dw_apt_id;      //{ +0x0048    +0x0050    +0x0050    +0x0050    } | ._dwAptID
        _m03 class win::c_client_call_mgr_t*     p_call_mgr;     //{ +0x0050    +0x0058    +0x0058    +0x0058    } | ._pCallMgr
        _m04 class win::c_client_channel_t*      p_chnl;         //{ +0x0058    +0x0060    +0x0060    +0x0060    } | ._pChnl
        _m05 sdk::hresult                        hr;             //{ +0x0060    +0x0068    +0x0068    +0x0068    } | ._hr
        _m06 class win::async_com_client_call_t* p_client_call;  //{ +0x0068    +0x0070    +0x0070    +0x0070    } | ._pClientCall
        _m07 struct win::i_synchronize_t*        p_sync;         //{ +0x0070    +0x0078    +0x0078    +0x0078    } | ._pSync
        _m08 struct win::s_pending_call_t        pending_call;   //{ +0x0078    +0x0080    +0x0080    +0x0080    } | ._pendingCall
        _m09 struct tag::rpcolemessage_t         msg;            //{ +0x0090    +0x0098    +0x0098    +0x0098    } | ._msg
        _m10 struct nt::guid_t                   container_id;   //{ +0x00e4    +0x00ec    +0x00ec    +0x00ec    } | ._containerId
        _m11 struct win::i_rpc_proxy_buffer_t*   p_proxy_obj;    //{ +0x00f8    +0x0100    +0x0100    +0x0100    } | ._pProxyObj
                                                               
        SDK_MAGIC_PROPERTIES( "CChannelObject.$", 0x118, true, 0x328e3b8caa8e7a29 );              
        SDK_DYNAMIC_SIZE( c_channel_object_t );                
    };                                                         
};
#include "magic/c_channel_object_t.end.hpp"
