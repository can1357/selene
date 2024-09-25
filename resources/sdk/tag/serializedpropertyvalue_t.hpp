#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/serializedpropertyvalue_t.start.hpp"
namespace tag
{
    // [struct tagSERIALIZEDPROPERTYVALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct serializedpropertyvalue_t        
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 uint32_t               dw_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m01 sdk::array<uint8_t, 1> rgb;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .rgb
                                            
        SDK_MAGIC_PROPERTIES( "tagSERIALIZEDPROPERTYVALUE.$", 0x8, true, 0x9fc4288bdfcae8f2 );        
        SDK_FIXED_SIZE( serializedpropertyvalue_t, 0x8 );        
    };                                      
};
#include "magic/serializedpropertyvalue_t.end.hpp"
SDK_VERIFY( struct tag::serializedpropertyvalue_t, 0x8 );
