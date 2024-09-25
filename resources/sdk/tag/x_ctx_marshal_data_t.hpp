#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { class c_object_context_t; }
namespace win { class c_std_wrapper_t;    }
namespace win { class i_face_entry_t;     }
namespace win { struct i_unknown_t;       }

#include "magic/x_ctx_marshal_data_t.start.hpp"
namespace tag
{
    // [struct tagXCtxMarshalData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_ctx_marshal_data_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 uint32_t                       dw_signature;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwSignature
        _m01 struct nt::guid_t              guid_data_secret;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .guidDataSecret
        _m02 struct nt::guid_t              iid;               //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iid
        _m03 struct nt::guid_t              moxid;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .moxid
        _m04 class win::c_std_wrapper_t*    p_wrapper;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pWrapper
        _m05 class win::i_face_entry_t*     p_entry;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .pEntry
        _m06 struct win::i_unknown_t*       p_server;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pServer
        _m07 class win::c_object_context_t* p_server_ctx;      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pServerCtx
        _m08 uint32_t                       dw_marshal_flags;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .dwMarshalFlags
                                                             
        SDK_MAGIC_PROPERTIES( "tagXCtxMarshalData.$", 0x60, true, 0x8ebafcec0027416a );                 
        SDK_FIXED_SIZE( x_ctx_marshal_data_t, 0x60 );                 
    };                                                       
};
#include "magic/x_ctx_marshal_data_t.end.hpp"
SDK_VERIFY( struct tag::x_ctx_marshal_data_t, 0x60 );
