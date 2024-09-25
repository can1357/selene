#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_std_wrapper_t.start.hpp"
namespace win
{
    class ctx_entry_t;
    class cid_object_t;
    struct i_unknown_t;
    class i_face_entry_t;

    // [class CStdWrapper]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_std_wrapper_t                                
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                               
        _m00 uint32_t                   c_refs;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | ._cRefs
        _m01 uint32_t                   c_calls;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cCalls
        _m02 uint32_t                   c_i_faces;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | ._cIFaces
        _m03 class win::i_face_entry_t* p_i_face_head;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pIFaceHead
        _m04 class win::ctx_entry_t*    p_ctx_entry_head;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pCtxEntryHead
        _m05 class win::ctx_entry_t*    p_ctx_free_list;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pCtxFreeList
        _m06 struct win::i_unknown_t*   p_server;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pServer
        _m07 class win::cid_object_t*   p_id;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pID
        _m08 void*                      p_vtable_address;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pVtableAddress
                                                         
        SDK_MAGIC_PROPERTIES( "CStdWrapper.$", 0x48, true, 0x2ccc885429e99fde );                 
        SDK_FIXED_SIZE( c_std_wrapper_t, 0x48 );                 
    };                                                   
};
#include "magic/c_std_wrapper_t.end.hpp"
SDK_VERIFY( class win::c_std_wrapper_t, 0x48 );
