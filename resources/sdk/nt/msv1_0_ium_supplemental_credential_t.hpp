#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msv1_0_ium_supplemental_credential_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL]
    // => WDK 10 (NV)
    //
    struct msv1_0_ium_supplemental_credential_t          
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t               version;               //{ +0x0000    } | .Version
        _m01 uint32_t               encrypted_creds_size;  //{ +0x0004    } | .EncryptedCredsSize
        _m02 sdk::array<uint8_t, 1> encrypted_creds;       //{ +0x0008    } | .EncryptedCreds
                                                         
        SDK_NONVOL_PROPERTIES( "_MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL.$", 0x0, false, 0xf8cbb7d09e72ed2d );                     
        SDK_FIXED_SIZE( msv1_0_ium_supplemental_credential_t, 0xc );                     
    };                                                   
};
#include "magic/msv1_0_ium_supplemental_credential_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_ium_supplemental_credential_t, 0xc );
