#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_security_attribute_octet_string_value_t.start.hpp"
namespace win
{
    // [struct _TOKEN_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_security_attribute_octet_string_value_t
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 void*    p_value;                            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pValue
        _m01 uint32_t value_length;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueLength
                                                        
        SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE.$", 0x10, true, 0x1343ac246aa58d20 );             
        SDK_FIXED_SIZE( token_security_attribute_octet_string_value_t, 0x10 );             
    };                                                  
};
#include "magic/token_security_attribute_octet_string_value_t.end.hpp"
SDK_VERIFY( struct win::token_security_attribute_octet_string_value_t, 0x10 );
