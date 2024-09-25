#pragma once
#include <sdkgen/support_library.hpp>

namespace wil
{
    // [struct __WIL__WNF_USER_SUBSCRIPTION]
    // => Windows 10 v2004, Windows 10 v20H2
    //
    struct wnf_user_subscription_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "__WIL__WNF_USER_SUBSCRIPTION.$", 0x0, true, 0x76c7527cb88372ad );
        SDK_FIXED_SIZE( wnf_user_subscription_t, 0x0 );
    };                            
};
SDK_VERIFY( struct wil::wnf_user_subscription_t, 0x0 );
