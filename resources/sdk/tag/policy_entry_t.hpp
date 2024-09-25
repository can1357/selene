#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace win { struct i_policy_t; }

#include "magic/policy_entry_t.start.hpp"
namespace tag
{
    struct policy_entry_t;

    // [struct tagPolicyEntry]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct policy_entry_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                         
        _m00 struct tag::policy_entry_t* p_next;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct tag::policy_entry_t* p_prev;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrev
        _m02 uint32_t                    ctx_event;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ctxEvent
        _m03 struct win::i_policy_t*     p_policy;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pPolicy
        _m04 struct nt::guid_t           policy_id;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .policyID
                                                   
        SDK_MAGIC_PROPERTIES( "tagPolicyEntry.$", 0x30, true, 0x2e7199fa6c1060f3 );          
        SDK_FIXED_SIZE( policy_entry_t, 0x30 );          
    };                                             
};
#include "magic/policy_entry_t.end.hpp"
SDK_VERIFY( struct tag::policy_entry_t, 0x30 );
