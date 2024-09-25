#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ProcessHandleWrapperTraits]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_handle_wrapper_traits_t
    {                                     
                                          
        SDK_MAGIC_PROPERTIES( "ProcessHandleWrapperTraits.$", 0x1, true, 0x4b34c7845e89988b );
        SDK_FIXED_SIZE( process_handle_wrapper_traits_t, 0x1 );
    };                                    
};
SDK_VERIFY( struct win::process_handle_wrapper_traits_t, 0x1 );
