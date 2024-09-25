#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SAM_VALIDATE_AUTHENTICATION_INPUT_ARG]
    // => WDK 10
    //
    struct sam_validate_authentication_input_arg_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "_SAM_VALIDATE_AUTHENTICATION_INPUT_ARG.$", 0x0, false, 0x621ab3528c8175eb );
        SDK_FIXED_SIZE( sam_validate_authentication_input_arg_t, 0x0 );
    };                                            
};
SDK_VERIFY( struct nt::sam_validate_authentication_input_arg_t, 0x0 );
