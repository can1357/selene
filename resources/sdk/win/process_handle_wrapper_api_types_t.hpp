#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct ProcessHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_handle_wrapper_api_types_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "ProcessHandleWrapperApiTypes.$", 0x1, true, 0xbc11be61cb40b96 );
        SDK_FIXED_SIZE( process_handle_wrapper_api_types_t, 0x1 );
    };                                       
};
SDK_VERIFY( struct win::process_handle_wrapper_api_types_t, 0x1 );
