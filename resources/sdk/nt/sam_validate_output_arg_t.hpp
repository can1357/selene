#pragma once
#include <sdkgen/support_library.hpp>
#include "sam_validate_standard_output_arg_t.hpp"

#include "magic/sam_validate_output_arg_t.start.hpp"
namespace nt
{
    // [union _SAM_VALIDATE_OUTPUT_ARG]
    // => WDK 10 (NV)
    //
    union sam_validate_output_arg_t                                                        
    {                                                                                      
        // WDK 10                                                                          
        //                                                                                 
        _m00 struct nt::sam_validate_standard_output_arg_t validate_authentication_output;   //{ +0x0000    } | .ValidateAuthenticationOutput
        _m01 struct nt::sam_validate_standard_output_arg_t validate_password_change_output;  //{ +0x0000    } | .ValidatePasswordChangeOutput
        _m02 struct nt::sam_validate_standard_output_arg_t validate_password_reset_output;   //{ +0x0000    } | .ValidatePasswordResetOutput
                                                                                           
        SDK_NONVOL_PROPERTIES( "_SAM_VALIDATE_OUTPUT_ARG.$", 0x0, false, 0x40622eb61c351734 );                                
        SDK_FIXED_SIZE( sam_validate_output_arg_t, 0x38 );                                 
    };                                                                                     
};
#include "magic/sam_validate_output_arg_t.end.hpp"
SDK_VERIFY( union nt::sam_validate_output_arg_t, 0x38 );
