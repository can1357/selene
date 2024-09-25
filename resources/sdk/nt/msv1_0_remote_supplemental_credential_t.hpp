#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_credential_key_t.hpp"
#include "msv1_0_credential_key_type_t.hpp"

#include "magic/msv1_0_remote_supplemental_credential_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL]
    // => WDK 10 (NV)
    //
    struct msv1_0_remote_supplemental_credential_t                      
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                              version;               //{ +0x0000    } | .Version
        _m01 uint32_t                              flags;                 //{ +0x0004    } | .Flags
        _m02 struct nt::msv1_0_credential_key_t    credential_key;        //{ +0x0008    } | .CredentialKey
        _m03 enum nt::msv1_0_credential_key_type_t credential_key_type;   //{ +0x001c    } | .CredentialKeyType
        _m04 uint32_t                              encrypted_creds_size;  //{ +0x0020    } | .EncryptedCredsSize
        _m05 sdk::array<uint8_t, 1>                encrypted_creds;       //{ +0x0024    } | .EncryptedCreds
                                                                        
        SDK_NONVOL_PROPERTIES( "_MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL.$", 0x0, false, 0x2fe9a7a80515661f );                     
        SDK_FIXED_SIZE( msv1_0_remote_supplemental_credential_t, 0x25 );                     
    };                                                                  
};
#include "magic/msv1_0_remote_supplemental_credential_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_remote_supplemental_credential_t, 0x25 );
