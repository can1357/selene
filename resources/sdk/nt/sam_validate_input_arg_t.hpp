#pragma once
#include <sdkgen/support_library.hpp>
#include "sam_validate_authentication_input_arg_t.hpp"
#include "sam_validate_password_reset_input_arg_t.hpp"
#include "sam_validate_password_change_input_arg_t.hpp"

#include "magic/sam_validate_input_arg_t.start.hpp"
namespace nt
{
    // [union _SAM_VALIDATE_INPUT_ARG]
    // => WDK 10 (NV)
    //
    union sam_validate_input_arg_t                                            
    {                                                                         
        using validate_authentication_input_t =  struct nt::sam_validate_authentication_input_arg_t;                               
        using validate_password_change_input_t = struct nt::sam_validate_password_change_input_arg_t;                               
        using validate_password_reset_input_t =  struct nt::sam_validate_password_reset_input_arg_t;                               
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m00 validate_authentication_input_t   validate_authentication_input;   //{ +0x0000    } | .ValidateAuthenticationInput
        _m01 validate_password_change_input_t  validate_password_change_input;  //{ +0x0000    } | .ValidatePasswordChangeInput
        _m02 validate_password_reset_input_t   validate_password_reset_input;   //{ +0x0000    } | .ValidatePasswordResetInput
                                                                              
        SDK_NONVOL_PROPERTIES( "_SAM_VALIDATE_INPUT_ARG.$", 0x0, false, 0x140dc212410242af );                               
        SDK_FIXED_SIZE( sam_validate_input_arg_t, 0x68 );                               
    };                                                                        
};
#include "magic/sam_validate_input_arg_t.end.hpp"
SDK_VERIFY( union nt::sam_validate_input_arg_t, 0x68 );
