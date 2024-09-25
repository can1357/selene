#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct PrivMemDeleter]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_mem_deleter_t
    {                        
                             
        SDK_MAGIC_PROPERTIES( "PrivMemDeleter.$", 0x1, true, 0xc965c6b97f8e9f9e );
        SDK_FIXED_SIZE( priv_mem_deleter_t, 0x1 );
    };                       
};
SDK_VERIFY( struct win::priv_mem_deleter_t, 0x1 );
