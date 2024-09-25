#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ssid_identifier_authority_t.start.hpp"
namespace tag
{
    // [struct tagSSID_IDENTIFIER_AUTHORITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ssid_identifier_authority_t    
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                
        _m00 sdk::array<uint8_t, 6> value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                          
        SDK_MAGIC_PROPERTIES( "tagSSID_IDENTIFIER_AUTHORITY.$", 0x6, true, 0x9c961322273d4d25 );      
        SDK_FIXED_SIZE( ssid_identifier_authority_t, 0x6 );      
    };                                    
};
#include "magic/ssid_identifier_authority_t.end.hpp"
SDK_VERIFY( struct tag::ssid_identifier_authority_t, 0x6 );
