#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct TokenHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_handle_wrapper_api_types_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "TokenHandleWrapperApiTypes.$", 0x1, true, 0x67e32d4aba94c051 );
        SDK_FIXED_SIZE( token_handle_wrapper_api_types_t, 0x1 );
    };                                     
};
SDK_VERIFY( struct win::token_handle_wrapper_api_types_t, 0x1 );
