#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_ctx_chnl_t;          }
namespace win { struct i_rpc_proxy_buffer_t; }
namespace win { struct i_rpc_stub_buffer_t;  }

#include "magic/i_face_svr_refs_t.start.hpp"
namespace tag
{
    // [struct tagIFaceSvrRefs]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_face_svr_refs_t                               
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct win::i_rpc_stub_buffer_t*  p_rpc_stub;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pRpcStub
        _m01 struct win::i_rpc_proxy_buffer_t* p_rpc_proxy;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRpcProxy
        _m02 void*                             p_server;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pServer
        _m03 class win::c_ctx_chnl_t*          p_ctx_chnl;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCtxChnl
                                                           
        SDK_MAGIC_PROPERTIES( "tagIFaceSvrRefs.$", 0x20, true, 0x92c663761b8e2a20 );            
        SDK_FIXED_SIZE( i_face_svr_refs_t, 0x20 );            
    };                                                     
};
#include "magic/i_face_svr_refs_t.end.hpp"
SDK_VERIFY( struct tag::i_face_svr_refs_t, 0x20 );
