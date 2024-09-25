#pragma once
#include <sdkgen/support_library.hpp>
#include "s_hash_chain_t.hpp"
#include "../tag/sps_cache_t.hpp"

namespace tag { struct policy_entry_t; }

#include "magic/c_policy_set_t.start.hpp"
namespace win
{
    class c_object_context_t;

    // [class CPolicySet]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_policy_set_t                                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 struct win::s_hash_chain_t     chain;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._chain
        _m01 uint32_t                       dw_flags;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._dwFlags
        _m02 uint32_t                       c_policies;     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | ._cPolicies
        _m03 uint32_t                       dw_apt_id;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwAptID
        _m04 class win::c_object_context_t* p_client_ctx;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pClientCtx
        _m05 class win::c_object_context_t* p_server_ctx;   //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._pServerCtx
        _m06 struct tag::policy_entry_t*    p_first_entry;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pFirstEntry
        _m07 struct tag::policy_entry_t*    p_last_entry;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pLastEntry
        _m08 struct tag::sps_cache_t        ps_cache;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._PSCache
                                                          
        SDK_MAGIC_PROPERTIES( "CPolicySet.$", 0x70, true, 0x38237b5892e8d3fe );              
        SDK_FIXED_SIZE( c_policy_set_t, 0x70 );              
    };                                                    
};
#include "magic/c_policy_set_t.end.hpp"
SDK_VERIFY( class win::c_policy_set_t, 0x70 );
