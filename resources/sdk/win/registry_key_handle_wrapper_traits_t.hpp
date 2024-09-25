#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct RegistryKeyHandleWrapperTraits]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registry_key_handle_wrapper_traits_t
    {                                          
                                               
        SDK_MAGIC_PROPERTIES( "RegistryKeyHandleWrapperTraits.$", 0x1, true, 0xbb15f1f6a2cfdaf8 );
        SDK_FIXED_SIZE( registry_key_handle_wrapper_traits_t, 0x1 );
    };                                         
};
SDK_VERIFY( struct win::registry_key_handle_wrapper_traits_t, 0x1 );
