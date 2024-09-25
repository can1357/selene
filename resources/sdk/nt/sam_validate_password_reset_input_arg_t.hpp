#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SAM_VALIDATE_PASSWORD_RESET_INPUT_ARG]
    // => WDK 10
    //
    struct sam_validate_password_reset_input_arg_t
    {                                             
                                                  
        SDK_MAGIC_PROPERTIES( "_SAM_VALIDATE_PASSWORD_RESET_INPUT_ARG.$", 0x0, false, 0xc9158a82f6160825 );
        SDK_FIXED_SIZE( sam_validate_password_reset_input_arg_t, 0x0 );
    };                                            
};
SDK_VERIFY( struct nt::sam_validate_password_reset_input_arg_t, 0x0 );
