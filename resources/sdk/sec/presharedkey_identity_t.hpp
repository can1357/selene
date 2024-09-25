#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presharedkey_identity_t.start.hpp"
namespace sec
{
    // [struct _SEC_PRESHAREDKEY_IDENTITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct presharedkey_identity_t                    
    {                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint16_t               key_identity_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyIdentitySize
        _m01 sdk::array<uint8_t, 1> key_identity;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .KeyIdentity
                                                      
        SDK_NONVOL_PROPERTIES( "_SEC_PRESHAREDKEY_IDENTITY.$", 0x4, true, 0xc4b6080680668ed7 );                  
        SDK_FIXED_SIZE( presharedkey_identity_t, 0x4 );                  
    };                                                
};
#include "magic/presharedkey_identity_t.end.hpp"
SDK_VERIFY( struct sec::presharedkey_identity_t, 0x4 );
