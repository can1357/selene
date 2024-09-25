#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_binding_t.start.hpp"
namespace sec
{
    // [struct _SEC_TOKEN_BINDING]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_binding_t                              
    {                                                   
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint8_t                major_version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint8_t                minor_version;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .MinorVersion
        _m02 uint16_t               key_parameters_size;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .KeyParametersSize
        _m03 sdk::array<uint8_t, 1> key_parameters;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .KeyParameters
                                                        
        SDK_NONVOL_PROPERTIES( "_SEC_TOKEN_BINDING.$", 0x6, true, 0xf204ecb0cff9d0c5 );                    
        SDK_FIXED_SIZE( token_binding_t, 0x6 );                    
    };                                                  
};
#include "magic/token_binding_t.end.hpp"
SDK_VERIFY( struct sec::token_binding_t, 0x6 );
