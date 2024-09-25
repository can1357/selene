#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct TokenHandleWrapperTraits]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_handle_wrapper_traits_t
    {                                   
                                        
        SDK_MAGIC_PROPERTIES( "TokenHandleWrapperTraits.$", 0x1, true, 0x703ddb427ed94bf7 );
        SDK_FIXED_SIZE( token_handle_wrapper_traits_t, 0x1 );
    };                                  
};
SDK_VERIFY( struct win::token_handle_wrapper_traits_t, 0x1 );
