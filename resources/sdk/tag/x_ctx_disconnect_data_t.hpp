#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class cid_object_t; }
namespace win { struct i_unknown_t; }

#include "magic/x_ctx_disconnect_data_t.start.hpp"
namespace tag
{
    struct i_face_svr_refs_t;

    // [struct tagXCtxDisconnectData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct x_ctx_disconnect_data_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 struct win::i_unknown_t*       p_server;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pServer
        _m01 class win::cid_object_t*       p_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pID
        _m02 uint32_t                       c_i_faces;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cIFaces
        _m03 struct tag::i_face_svr_refs_t* p_i_face_svr_refs;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pIFaceSvrRefs
                                                              
        SDK_MAGIC_PROPERTIES( "tagXCtxDisconnectData.$", 0x20, true, 0xb37022a8f146e912 );                  
        SDK_FIXED_SIZE( x_ctx_disconnect_data_t, 0x20 );                  
    };                                                        
};
#include "magic/x_ctx_disconnect_data_t.end.hpp"
SDK_VERIFY( struct tag::x_ctx_disconnect_data_t, 0x20 );
