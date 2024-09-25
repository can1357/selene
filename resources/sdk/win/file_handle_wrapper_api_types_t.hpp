#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct FileHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_handle_wrapper_api_types_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "FileHandleWrapperApiTypes.$", 0x1, true, 0x83033f854e881684 );
        SDK_FIXED_SIZE( file_handle_wrapper_api_types_t, 0x1 );
    };                                    
};
SDK_VERIFY( struct win::file_handle_wrapper_api_types_t, 0x1 );
