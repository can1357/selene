#pragma once
#include <sdkgen/support_library.hpp>

namespace wnf
{
    // [struct _WNF_USER_SUBSCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct user_subscription_t
    {                         
                              
        SDK_MAGIC_PROPERTIES( "_WNF_USER_SUBSCRIPTION.$", 0x0, true, 0xe1133ee4852de0b4 );
        SDK_FIXED_SIZE( user_subscription_t, 0x0 );
    };                        
};
SDK_VERIFY( struct wnf::user_subscription_t, 0x0 );
