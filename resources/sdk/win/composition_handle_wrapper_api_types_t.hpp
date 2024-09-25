#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct CompositionHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct composition_handle_wrapper_api_types_t
    {                                            
                                                 
        SDK_MAGIC_PROPERTIES( "CompositionHandleWrapperApiTypes.$", 0x1, true, 0xf84f8dcd7777b452 );
        SDK_FIXED_SIZE( composition_handle_wrapper_api_types_t, 0x1 );
    };                                           
};
SDK_VERIFY( struct win::composition_handle_wrapper_api_types_t, 0x1 );
