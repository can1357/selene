#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/presharedkey_t.start.hpp"
namespace sec
{
    // [struct _SEC_PRESHAREDKEY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct presharedkey_t                    
    {                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                   
        _m00 uint16_t               key_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeySize
        _m01 sdk::array<uint8_t, 1> key;       //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Key
                                             
        SDK_NONVOL_PROPERTIES( "_SEC_PRESHAREDKEY.$", 0x4, true, 0x10c1d7466802fb03 );         
        SDK_FIXED_SIZE( presharedkey_t, 0x4 );         
    };                                       
};
#include "magic/presharedkey_t.end.hpp"
SDK_VERIFY( struct sec::presharedkey_t, 0x4 );
