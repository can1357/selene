#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/claim_security_attribute_relative_v1_t.start.hpp"
namespace win
{
    // [struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct claim_security_attribute_relative_v1_t                   
    {                                                               
        union u0_values_t                                           
        {                                                           
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                      
            _m04 sdk::array<uint32_t, 1> p_int64;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pInt64
            _m05 sdk::array<uint32_t, 1> p_uint64;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pUint64
            _m06 sdk::array<uint32_t, 1> pp_string;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ppString
            _m07 sdk::array<uint32_t, 1> p_fqbn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pFqbn
            _m08 sdk::array<uint32_t, 1> p_octet_string;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pOctetString
                                                                    
            SDK_NONVOL_PROPERTIES( "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.Values.$", 0x4, true, 0x70b75aabbde38f97 );                           
            SDK_FIXED_SIZE( u0_values_t, 0x4 );                           
        };                                                          
                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                          
        _m00 uint32_t                                   name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint16_t                                   value_type;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ValueType
        _m02 uint32_t                                   flags;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 uint32_t                                   value_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ValueCount
        _m09 u0_values_t                                values;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Values
                                                                    
        SDK_NONVOL_PROPERTIES( "_CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1.$", 0x14, true, 0x3877b853cca760c8 );            
        SDK_FIXED_SIZE( claim_security_attribute_relative_v1_t, 0x14 );            
    };                                                              
};
#include "magic/claim_security_attribute_relative_v1_t.end.hpp"
SDK_VERIFY( union win::claim_security_attribute_relative_v1_t::u0_values_t, 0x4 );
SDK_VERIFY( struct win::claim_security_attribute_relative_v1_t, 0x14 );
