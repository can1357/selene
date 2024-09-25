#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct SectionHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct section_handle_wrapper_api_types_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "SectionHandleWrapperApiTypes.$", 0x1, true, 0xcedac299ba75af6 );
        SDK_FIXED_SIZE( section_handle_wrapper_api_types_t, 0x1 );
    };                                       
};
SDK_VERIFY( struct win::section_handle_wrapper_api_types_t, 0x1 );
