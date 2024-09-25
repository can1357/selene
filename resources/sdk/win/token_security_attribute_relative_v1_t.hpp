#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_security_attribute_relative_v1_t.start.hpp"
namespace win
{
    // [struct _TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_security_attribute_relative_v1_t                   
    {                                                               
        union u0_values_t                                           
        {                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                      
            _m04 sdk::array<uint32_t, 1> p_int64;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pInt64
            _m05 sdk::array<uint32_t, 1> p_uint64;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pUint64
            _m06 sdk::array<uint32_t, 1> pp_string;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ppString
            _m07 sdk::array<uint32_t, 1> p_fqbn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pFqbn
            _m08 sdk::array<uint32_t, 1> p_octet_string;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pOctetString
                                                                    
            SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.$", 0x4, true, 0x648c973273eacab5 );                           
            SDK_FIXED_SIZE( u0_values_t, 0x4 );                           
        };                                                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                          
        _m00 uint32_t                                   name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint16_t                                   value_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ValueType
        _m02 uint32_t                                   flags;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                                   value_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ValueCount
        _m09 u0_values_t                                values;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Values
                                                                    
        SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_RELATIVE_V1.$", 0x14, true, 0x9d55520810365b47 );            
        SDK_FIXED_SIZE( token_security_attribute_relative_v1_t, 0x14 );            
    };                                                              
};
#include "magic/token_security_attribute_relative_v1_t.end.hpp"
SDK_VERIFY( union win::token_security_attribute_relative_v1_t::u0_values_t, 0x4 );
SDK_VERIFY( struct win::token_security_attribute_relative_v1_t, 0x14 );
