#pragma once
#include <sdkgen/support_library.hpp>
#include "msv1_0_credential_key_t.hpp"

#include "magic/msv1_0_supplemental_credential_v2_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2]
    // => WDK 10 (NV)
    //
    struct msv1_0_supplemental_credential_v2_t                 
    {                                                          
        // WDK 10                                              
        //                                                     
        _m00 uint32_t                           version;         //{ +0x0000    } | .Version
        _m01 uint32_t                           flags;           //{ +0x0004    } | .Flags
        _m02 sdk::array<uint8_t, 16>            nt_password;     //{ +0x0008    } | .NtPassword
        _m03 struct nt::msv1_0_credential_key_t credential_key;  //{ +0x0018    } | .CredentialKey
                                                               
        SDK_NONVOL_PROPERTIES( "_MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2.$", 0x0, false, 0xbb6b3d79e3d4e508 );               
        SDK_FIXED_SIZE( msv1_0_supplemental_credential_v2_t, 0x2c );               
    };                                                         
};
#include "magic/msv1_0_supplemental_credential_v2_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_supplemental_credential_v2_t, 0x2c );
