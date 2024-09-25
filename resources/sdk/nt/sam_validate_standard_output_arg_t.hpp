#pragma once
#include <sdkgen/support_library.hpp>

namespace nt
{
    // [struct _SAM_VALIDATE_STANDARD_OUTPUT_ARG]
    // => WDK 10
    //
    struct sam_validate_standard_output_arg_t
    {                                        
                                             
        SDK_MAGIC_PROPERTIES( "_SAM_VALIDATE_STANDARD_OUTPUT_ARG.$", 0x0, false, 0xa91a8ac7f045ee1f );
        SDK_FIXED_SIZE( sam_validate_standard_output_arg_t, 0x0 );
    };                                       
};
SDK_VERIFY( struct nt::sam_validate_standard_output_arg_t, 0x0 );
