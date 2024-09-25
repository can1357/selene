#pragma once
#include <sdkgen/support_library.hpp>
#include "../wnf/state_name_t.hpp"

namespace ex { struct wnf_subscription_t; }

#include "magic/wnf_subscription_context_t.start.hpp"
namespace mx
{
    struct wnf_subscription_context_t;

    // [struct _MX_WNF_SUBSCRIPTION_CONTEXT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_subscription_context_t                        
    {                                                        
        using pmx_wnf_callback_t = sdk::function<int32_t(struct mx::wnf_subscription_context_t*, void*)>*;                 
                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 struct ex::wnf_subscription_t* handle;            //{ +0x0000    +0x0000    +0x0000    } | .Handle
        _m01 struct wnf::state_name_t       wnf_state_name;    //{ +0x0008    +0x0008    +0x0008    } | .WnfStateName
        _m02 pmx_wnf_callback_t             callback;          //{ +0x0010    +0x0010    +0x0010    } | .Callback
        _m03 void*                          callback_context;  //{ +0x0018    +0x0018    +0x0018    } | .CallbackContext
                                                             
        SDK_MAGIC_PROPERTIES( "_MX_WNF_SUBSCRIPTION_CONTEXT.$", 0x20, true, 0xa24136c403a9155c );                 
        SDK_FIXED_SIZE( wnf_subscription_context_t, 0x20 );                 
    };                                                       
};
#include "magic/wnf_subscription_context_t.end.hpp"
SDK_VERIFY( struct mx::wnf_subscription_context_t, 0x20 );
