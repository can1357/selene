#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "c_std_event_t.hpp"

#include "magic/c_client_call_mgr_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_std_identity_t;
    class c_channel_object_t;
    class c_client_call_mgr_t;
    struct i_client_security_t;
    struct i_rpc_proxy_buffer_t;
    struct i_cancel_method_calls_t;

    // [class CClientCallMgr]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_client_call_mgr_t                                         
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 uint32_t                             dw_flags;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwFlags
        _m01 uint32_t                             c_refs;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._cRefs
        _m02 struct win::i_unknown_t*             p_unk_outer;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pUnkOuter
        _m03 class win::c_client_call_mgr_t*      p_next_mgr;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pNextMgr
        _m04 class win::c_std_identity_t*         p_std_id;             //{ +0x0050    +0x0060    +0x0060    +0x0060    } | ._pStdId
        _m05 struct win::i_rpc_proxy_buffer_t*    p_proxy_obj;          //{ +0x0058    +0x0068    +0x0068    +0x0068    } | ._pProxyObj
        _m06 class win::c_channel_object_t*       p_chnl_obj;           //{ +0x0060    +0x0070    +0x0070    +0x0070    } | ._pChnlObj
        _m07 struct win::i_client_security_t*     p_ics;                //{ +0x0068    +0x0078    +0x0078    +0x0078    } | ._pICS
        _m08 struct win::i_cancel_method_calls_t* p_icmc;               //{ +0x0070    +0x0080    +0x0080    +0x0080    } | ._pICMC
        _m09 class win::c_std_event_t             c_std_event;          //{ +0x0078    +0x0088    +0x0088    +0x0088    } | ._cStdEvent
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m10 struct nt::guid_t                    requested_async_iid;  //{ +0x0040    +0x0040    +0x0040    } | ._requestedAsyncIID
        _m11 struct nt::guid_t                    proxy_async_iid;      //{ +0x0050    +0x0050    +0x0050    } | ._proxyAsyncIID
                                                                      
        // Windows 10 v1607                                           
        //                                                            
        _m12 struct nt::guid_t                    async_iid;            //{ +0x0040    } | ._asyncIID
                                                                      
        SDK_MAGIC_PROPERTIES( "CClientCallMgr.$", 0xc0, true, 0x8f5b0127ef98d7eb );                    
        SDK_DYNAMIC_SIZE( c_client_call_mgr_t );                      
    };                                                                
};
#include "magic/c_client_call_mgr_t.end.hpp"
