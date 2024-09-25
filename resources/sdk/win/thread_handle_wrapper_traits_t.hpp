#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ThreadHandleWrapperTraits]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_handle_wrapper_traits_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "ThreadHandleWrapperTraits.$", 0x1, true, 0x5045e82f33c031d8 );
        SDK_FIXED_SIZE( thread_handle_wrapper_traits_t, 0x1 );
    };                                   
};
SDK_VERIFY( struct win::thread_handle_wrapper_traits_t, 0x1 );
