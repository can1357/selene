#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_security_attribute_v1_t.start.hpp"
namespace win
{
    struct token_security_attribute_fqbn_value_t;
    struct token_security_attribute_octet_string_value_t;

    // [struct _TOKEN_SECURITY_ATTRIBUTE_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_security_attribute_v1_t                                                    
    {                                                                                       
        union u0_values_t                                                                   
        {                                                                                   
            using ptoken_security_attribute_fqbn_value_t =         struct win::token_security_attribute_fqbn_value_t*;                           
            using ptoken_security_attribute_octet_string_value_t = struct win::token_security_attribute_octet_string_value_t*;                           
                                                                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                                              
            _m04 int64_t*                                        p_int64;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pInt64
            _m05 uint64_t*                                       p_uint64;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pUint64
            _m06 nt::unicode_view*                               p_string;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pString
            _m07 ptoken_security_attribute_fqbn_value_t          p_fqbn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pFqbn
            _m08 ptoken_security_attribute_octet_string_value_t  p_octet_string;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pOctetString
                                                                                            
            SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_V1.Values.$", 0x8, true, 0xe29a15eea01477e8 );                           
            SDK_FIXED_SIZE( u0_values_t, 0x8 );                                             
        };                                                                                  
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                                  
        _m00 nt::unicode_view                                                   name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint16_t                                                           value_type;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ValueType
        _m02 uint32_t                                                           flags;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Flags
        _m03 uint32_t                                                           value_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ValueCount
        _m09 u0_values_t                                                        values;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Values
                                                                                            
        SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_V1.$", 0x28, true, 0x6f7d081b631db583 );            
        SDK_DYNAMIC_SIZE( token_security_attribute_v1_t );                                  
    };                                                                                      
};
#include "magic/token_security_attribute_v1_t.end.hpp"
SDK_VERIFY( union win::token_security_attribute_v1_t::u0_values_t, 0x8 );
