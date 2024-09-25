#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_security_attributes_information_t.start.hpp"
namespace win
{
    struct token_security_attribute_v1_t;

    // [struct _TOKEN_SECURITY_ATTRIBUTES_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_security_attributes_information_t                                         
    {                                                                                      
        union u0_attribute_t                                                               
        {                                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
            //                                                                             
            _m02 struct win::token_security_attribute_v1_t* p_attribute_v1;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .pAttributeV1
                                                                                           
            SDK_NONVOL_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.Attribute.$", 0x8, true, 0x9cb0f0a46422ade2 );                               
            SDK_FIXED_SIZE( u0_attribute_t, 0x8 );                                         
        };                                                                                 
                                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                                 
        _m00 uint16_t                                                      version;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t                                                      attribute_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .AttributeCount
        _m03 u0_attribute_t                                                attribute;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Attribute
                                                                                           
        SDK_NONVOL_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTES_INFORMATION.$", 0x10, true, 0xbe89b9c2167e8e27 );                
        SDK_FIXED_SIZE( token_security_attributes_information_t, 0x10 );                   
    };                                                                                     
};
#include "magic/token_security_attributes_information_t.end.hpp"
SDK_VERIFY( union win::token_security_attributes_information_t::u0_attribute_t, 0x8 );
SDK_VERIFY( struct win::token_security_attributes_information_t, 0x10 );
