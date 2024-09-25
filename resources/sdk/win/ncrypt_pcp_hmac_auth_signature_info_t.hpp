#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ncrypt_pcp_hmac_auth_signature_info_t.start.hpp"
namespace win
{
    // [struct __NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ncrypt_pcp_hmac_auth_signature_info_t    
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 uint32_t                dw_version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 int32_t                 i_expiration;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .iExpiration
        _m02 sdk::array<uint8_t, 32> pab_nonce;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pabNonce
        _m03 sdk::array<uint8_t, 32> pab_policy_ref;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pabPolicyRef
        _m04 sdk::array<uint8_t, 32> pab_hmac;        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .pabHMAC
                                                    
        SDK_MAGIC_PROPERTIES( "__NCRYPT_PCP_HMAC_AUTH_SIGNATURE_INFO.$", 0x68, true, 0x8863e4210d0a553a );               
        SDK_FIXED_SIZE( ncrypt_pcp_hmac_auth_signature_info_t, 0x68 );               
    };                                              
};
#include "magic/ncrypt_pcp_hmac_auth_signature_info_t.end.hpp"
SDK_VERIFY( struct win::ncrypt_pcp_hmac_auth_signature_info_t, 0x68 );
