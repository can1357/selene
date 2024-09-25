#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/claim_security_attribute_fqbn_value_t.start.hpp"
namespace win
{
    // [struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct claim_security_attribute_fqbn_value_t
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t version;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 wchar_t* name;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
                                                
        SDK_NONVOL_PROPERTIES( "_CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE.$", 0x10, true, 0x1be6a50366174057 );        
        SDK_FIXED_SIZE( claim_security_attribute_fqbn_value_t, 0x10 );        
    };                                          
};
#include "magic/claim_security_attribute_fqbn_value_t.end.hpp"
SDK_VERIFY( struct win::claim_security_attribute_fqbn_value_t, 0x10 );
