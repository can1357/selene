#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;            }
namespace win { class c_object_context_t; }
namespace win { struct i_unknown_t;       }

#include "magic/x_ctx_wrapper_data_t.start.hpp"
namespace tag
{
    // [struct tagXCtxWrapperData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_ctx_wrapper_data_t                          
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 const struct nt::guid_t*       p_iid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pIID
        _m01 struct win::i_unknown_t*       p_server;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pServer
        _m02 uint32_t                       dw_state;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwState
        _m03 class win::c_object_context_t* p_server_ctx;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pServerCtx
        _m04 class win::c_object_context_t* p_client_ctx;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .pClientCtx
        _m05 void*                          pv;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pv
                                                         
        SDK_MAGIC_PROPERTIES( "tagXCtxWrapperData.$", 0x30, true, 0xc4d374e3b3a21803 );             
        SDK_FIXED_SIZE( x_ctx_wrapper_data_t, 0x30 );             
    };                                                   
};
#include "magic/x_ctx_wrapper_data_t.end.hpp"
SDK_VERIFY( struct tag::x_ctx_wrapper_data_t, 0x30 );
