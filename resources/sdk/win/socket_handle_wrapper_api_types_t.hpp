#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SocketHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct socket_handle_wrapper_api_types_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "SocketHandleWrapperApiTypes.$", 0x1, true, 0xf09dcb6d87d175c8 );
        SDK_FIXED_SIZE( socket_handle_wrapper_api_types_t, 0x1 );
    };                                      
};
SDK_VERIFY( struct win::socket_handle_wrapper_api_types_t, 0x1 );
