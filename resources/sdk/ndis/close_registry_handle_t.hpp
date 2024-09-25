#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis
{
    // [struct close_registry_handle]
    // => Windows 10 v1607
    //
    struct close_registry_handle_t
    {                             
                                  
        SDK_MAGIC_PROPERTIES( "close_registry_handle.$", 0x0, false, 0xf03dc7333ae95897 );
        SDK_FIXED_SIZE( close_registry_handle_t, 0x1 );
    };                            
};
SDK_VERIFY( struct ndis::close_registry_handle_t, 0x1 );
