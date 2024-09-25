#pragma once
#include <sdkgen/support_library.hpp>
#include "token_security_attribute_operation_t.hpp"

#include "magic/token_security_attributes_and_operation_information_t.start.hpp"
namespace win
{
    struct token_security_attributes_information_t;

    // [struct _TOKEN_SECURITY_ATTRIBUTES_AND_OPERATION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_security_attributes_and_operation_information_t        
    {                                                                   
        using ptoken_security_attributes_information_t = struct win::token_security_attributes_information_t*;           
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                              
        _m00 ptoken_security_attributes_information_t        attributes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Attributes
        _m01 enum win::token_security_attribute_operation_t* operations;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Operations
                                                                        
        SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTES_AND_OPERATION_INFORMATION.$", 0x10, true, 0xd8235572a6d77685 );           
        SDK_FIXED_SIZE( token_security_attributes_and_operation_information_t, 0x10 );           
    };                                                                  
};
#include "magic/token_security_attributes_and_operation_information_t.end.hpp"
SDK_VERIFY( struct win::token_security_attributes_and_operation_information_t, 0x10 );
