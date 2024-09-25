#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ThreadHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct thread_handle_wrapper_api_types_t
    {                                       
                                            
        SDK_MAGIC_PROPERTIES( "ThreadHandleWrapperApiTypes.$", 0x1, true, 0xfda30a3a5d9f9092 );
        SDK_FIXED_SIZE( thread_handle_wrapper_api_types_t, 0x1 );
    };                                      
};
SDK_VERIFY( struct win::thread_handle_wrapper_api_types_t, 0x1 );
