#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "s_hash_chain_t.hpp"

#include "magic/cid_object_t.start.hpp"
namespace win
{
    struct i_unknown_t;
    class c_std_wrapper_t;
    class c_std_identity_t;
    class c_object_context_t;

    // [class CIDObject]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class cid_object_t                                             
    {                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                         
        _m00 struct win::s_hash_chain_t     pid_chain;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pidChain
        _m01 struct win::s_hash_chain_t     oid_chain;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._oidChain
        _m02 uint32_t                       dw_state;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwState
        _m03 uint32_t                       c_refs;                  //{ +0x002c    +0x002c    +0x002c    +0x002c    } | ._cRefs
        _m04 struct win::i_unknown_t*       p_server;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pServer
        _m05 class win::c_object_context_t* p_server_ctx;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pServerCtx
        _m06 struct nt::guid_t              oid;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._oid
        _m07 uint32_t                       apt_id;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._aptID
        _m08 class win::c_std_wrapper_t*    p_std_wrapper;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pStdWrapper
        _m09 class win::c_std_identity_t*   p_std_id;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._pStdID
        _m10 uint32_t                       c_calls;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._cCalls
        _m11 uint32_t                       c_locks;                 //{ +0x006c    +0x006c    +0x006c    +0x006c    } | ._cLocks
        _m12 struct win::s_hash_chain_t     oid_unpin_req_chain;     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | ._oidUnpinReqChain
        _m13 uint32_t                       dw_oid_unpin_req_state;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._dwOidUnpinReqState
        _m14 void*                          pv_object_track_cookie;  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | ._pvObjectTrackCookie
                                                                   
        SDK_MAGIC_PROPERTIES( "CIDObject.$", 0x90, true, 0xd80fc3f9a6c92338 );                       
        SDK_FIXED_SIZE( cid_object_t, 0x90 );                       
    };                                                             
};
#include "magic/cid_object_t.end.hpp"
SDK_VERIFY( class win::cid_object_t, 0x90 );
