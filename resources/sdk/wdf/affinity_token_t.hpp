#pragma once
#include <sdkgen/support_library.hpp>

namespace wdf
{
    // [struct _AFFINITY_TOKEN]
    // => Windows 11
    //
    struct affinity_token_t
    {                      
                           
        SDK_MAGIC_PROPERTIES( "_AFFINITY_TOKEN.$", 0x0, false, 0xb7c2acaf373d64b6 );
        SDK_FIXED_SIZE( affinity_token_t, 0x0 );
    };                     
};
SDK_VERIFY( struct wdf::affinity_token_t, 0x0 );
