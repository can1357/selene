#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctx_entry_t.start.hpp"
namespace win
{
    class ctx_entry_t;
    class c_policy_set_t;
    class c_context_life_t;
    class c_object_context_t;

    // [class CtxEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class ctx_entry_t                                    
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                               
        _m00 class win::ctx_entry_t*        p_next;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pNext
        _m01 class win::ctx_entry_t*        p_free;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._pFree
        _m02 uint32_t                       c_refs;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._cRefs
        _m03 class win::c_context_life_t*   p_life;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pLife
        _m04 class win::c_policy_set_t*     p_ps;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pPS
        _m05 class win::c_object_context_t* p_server_ctx;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pServerCtx
                                                         
        SDK_MAGIC_PROPERTIES( "CtxEntry.$", 0x30, true, 0xea536d43c3173580 );             
        SDK_FIXED_SIZE( ctx_entry_t, 0x30 );             
    };                                                   
};
#include "magic/ctx_entry_t.end.hpp"
SDK_VERIFY( class win::ctx_entry_t, 0x30 );
