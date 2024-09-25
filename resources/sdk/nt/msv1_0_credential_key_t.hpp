#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msv1_0_credential_key_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_CREDENTIAL_KEY]
    // => WDK 10 (NV)
    //
    struct msv1_0_credential_key_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 sdk::array<uint8_t, 20> data;  //{ +0x0000    } | .Data
                                          
        SDK_NONVOL_PROPERTIES( "_MSV1_0_CREDENTIAL_KEY.$", 0x0, false, 0x4c561a8cb92065b1 );     
        SDK_FIXED_SIZE( msv1_0_credential_key_t, 0x14 );     
    };                                    
};
#include "magic/msv1_0_credential_key_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_credential_key_t, 0x14 );
