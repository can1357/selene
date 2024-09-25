#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct RegistryKeyHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct registry_key_handle_wrapper_api_types_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "RegistryKeyHandleWrapperApiTypes.$", 0x1, true, 0xf1e92b4a41df6602 );
        SDK_FIXED_SIZE( registry_key_handle_wrapper_api_types_t, 0x1 );
    };                                            
};
SDK_VERIFY( struct win::registry_key_handle_wrapper_api_types_t, 0x1 );
