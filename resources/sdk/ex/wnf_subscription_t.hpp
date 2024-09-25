#pragma once
#include <sdkgen/support_library.hpp>

namespace ex
{
    // [struct _EX_WNF_SUBSCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnf_subscription_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "_EX_WNF_SUBSCRIPTION.$", 0x0, true, 0xa10ae0ec5a7eed49 );
        SDK_FIXED_SIZE( wnf_subscription_t, 0x0 );
    };                       
};
SDK_VERIFY( struct ex::wnf_subscription_t, 0x0 );
