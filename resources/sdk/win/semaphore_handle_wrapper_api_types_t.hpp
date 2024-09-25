#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SemaphoreHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct semaphore_handle_wrapper_api_types_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "SemaphoreHandleWrapperApiTypes.$", 0x1, true, 0xc368e3fb7680f839 );
        SDK_FIXED_SIZE( semaphore_handle_wrapper_api_types_t, 0x1 );
    };                                         
};
SDK_VERIFY( struct win::semaphore_handle_wrapper_api_types_t, 0x1 );
