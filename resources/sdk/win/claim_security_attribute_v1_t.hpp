#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/claim_security_attribute_v1_t.start.hpp"
namespace win
{
    struct claim_security_attribute_fqbn_value_t;
    struct claim_security_attribute_octet_string_value_t;

    // [struct _CLAIM_SECURITY_ATTRIBUTE_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct claim_security_attribute_v1_t                                                    
    {                                                                                       
        union u0_values_t                                                                   
        {                                                                                   
            using pclaim_security_attribute_fqbn_value_t =         struct win::claim_security_attribute_fqbn_value_t*;                           
            using pclaim_security_attribute_octet_string_value_t = struct win::claim_security_attribute_octet_string_value_t*;                           
                                                                                            
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                                                              
            _m04 int64_t*                                        p_int64;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pInt64
            _m05 uint64_t*                                       p_uint64;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pUint64
            _m06 wchar_t**                                       pp_string;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ppString
            _m07 pclaim_security_attribute_fqbn_value_t          p_fqbn;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pFqbn
            _m08 pclaim_security_attribute_octet_string_value_t  p_octet_string;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pOctetString
                                                                                            
            SDK_NONVOL_PROPERTIES( "_CLAIM_SECURITY_ATTRIBUTE_V1.Values.$", 0x8, true, 0x38f4a1290d42a425 );                           
            SDK_FIXED_SIZE( u0_values_t, 0x8 );                                             
        };                                                                                  
                                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                                                  
        _m00 wchar_t*                                                           name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint16_t                                                           value_type;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ValueType
        _m02 uint32_t                                                           flags;        //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m03 uint32_t                                                           value_count;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ValueCount
        _m09 u0_values_t                                                        values;       //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Values
                                                                                            
        SDK_NONVOL_PROPERTIES( "_CLAIM_SECURITY_ATTRIBUTE_V1.$", 0x20, true, 0x3d67f786ceeb65e9 );            
        SDK_FIXED_SIZE( claim_security_attribute_v1_t, 0x20 );                              
    };                                                                                      
};
#include "magic/claim_security_attribute_v1_t.end.hpp"
SDK_VERIFY( union win::claim_security_attribute_v1_t::u0_values_t, 0x8 );
SDK_VERIFY( struct win::claim_security_attribute_v1_t, 0x20 );
