#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/i_face_entry_t.start.hpp"
namespace win
{
    class ctx_entry_t;
    class c_ctx_chnl_t;
    struct i_unknown_t;
    class i_face_entry_t;
    struct i_rpc_stub_buffer_t;
    struct i_call_interceptor_t;
    struct i_rpc_proxy_buffer_t;

    // [class IFaceEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class i_face_entry_t                                     
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                   
        _m00 class win::i_face_entry_t*        p_next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pNext
        _m01 void*                             p_proxy;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pProxy
        _m02 struct win::i_rpc_proxy_buffer_t* p_rpc_proxy;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pRpcProxy
        _m03 struct win::i_rpc_stub_buffer_t*  p_rpc_stub;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pRpcStub
        _m04 void*                             p_server;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pServer
        _m05 struct nt::guid_t                 iid;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._iid
        _m06 class win::c_ctx_chnl_t*          p_ctx_chnl;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pCtxChnl
        _m07 class win::ctx_entry_t*           p_head;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pHead
        _m08 class win::ctx_entry_t*           p_free_list;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pFreeList
        _m09 struct win::i_call_interceptor_t* p_interceptor;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._pInterceptor
        _m10 struct win::i_unknown_t*          p_unk_inner;    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pUnkInner
                                                             
        SDK_MAGIC_PROPERTIES( "IFaceEntry.$", 0x60, true, 0x172d7b97e8a60593 );              
        SDK_FIXED_SIZE( i_face_entry_t, 0x60 );              
    };                                                       
};
#include "magic/i_face_entry_t.end.hpp"
SDK_VERIFY( class win::i_face_entry_t, 0x60 );
