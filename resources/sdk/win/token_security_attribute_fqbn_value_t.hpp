#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_security_attribute_fqbn_value_t.start.hpp"
namespace win
{
    // [struct _TOKEN_SECURITY_ATTRIBUTE_FQBN_VALUE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct token_security_attribute_fqbn_value_t
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                            
        _m00 uint64_t         version;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 nt::unicode_view name;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
                                                
        SDK_MAGIC_PROPERTIES( "_TOKEN_SECURITY_ATTRIBUTE_FQBN_VALUE.$", 0x18, true, 0xe2d9e8825519efa5 );        
        SDK_FIXED_SIZE( token_security_attribute_fqbn_value_t, 0x18 );        
    };                                          
};
#include "magic/token_security_attribute_fqbn_value_t.end.hpp"
SDK_VERIFY( struct win::token_security_attribute_fqbn_value_t, 0x18 );
