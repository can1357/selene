#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct JobHandleWrapperApiTypes]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct job_handle_wrapper_api_types_t
    {                                    
                                         
        SDK_MAGIC_PROPERTIES( "JobHandleWrapperApiTypes.$", 0x1, true, 0xd46e47627abb91c4 );
        SDK_FIXED_SIZE( job_handle_wrapper_api_types_t, 0x1 );
    };                                   
};
SDK_VERIFY( struct win::job_handle_wrapper_api_types_t, 0x1 );
