#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [class KRegKey]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_reg_key_t
    {                
                     
        SDK_MAGIC_PROPERTIES( "KRegKey.$", 0x8, true, 0xf7e2dfc27f520d8d );
        SDK_FIXED_SIZE( k_reg_key_t, 0x8 );
    };               
};
SDK_VERIFY( class ndis::k_reg_key_t, 0x8 );
