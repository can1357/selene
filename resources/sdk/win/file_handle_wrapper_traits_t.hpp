#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct FileHandleWrapperTraits]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_handle_wrapper_traits_t
    {                                  
                                       
        SDK_MAGIC_PROPERTIES( "FileHandleWrapperTraits.$", 0x1, true, 0xf741c9bc66994662 );
        SDK_FIXED_SIZE( file_handle_wrapper_traits_t, 0x1 );
    };                                 
};
SDK_VERIFY( struct win::file_handle_wrapper_traits_t, 0x1 );
