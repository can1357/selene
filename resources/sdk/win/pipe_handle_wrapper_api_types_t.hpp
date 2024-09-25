#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct PipeHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pipe_handle_wrapper_api_types_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "PipeHandleWrapperApiTypes.$", 0x1, true, 0x8a6cb43e7463939f );
        SDK_FIXED_SIZE( pipe_handle_wrapper_api_types_t, 0x1 );
    };                                    
};
SDK_VERIFY( struct win::pipe_handle_wrapper_api_types_t, 0x1 );
