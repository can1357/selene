#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct MutexHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mutex_handle_wrapper_api_types_t
    {                                      
                                           
        SDK_MAGIC_PROPERTIES( "MutexHandleWrapperApiTypes.$", 0x1, true, 0x5c25c0652ecd8a7d );
        SDK_FIXED_SIZE( mutex_handle_wrapper_api_types_t, 0x1 );
    };                                     
};
SDK_VERIFY( struct win::mutex_handle_wrapper_api_types_t, 0x1 );
