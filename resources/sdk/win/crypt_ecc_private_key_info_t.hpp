#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_bit_blob_t.hpp"
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_ecc_private_key_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ECC_PRIVATE_KEY_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_ecc_private_key_info_t                
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                             
        _m00 uint32_t                     dw_version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cryptoapi_blob_t private_key;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PrivateKey
        _m02 char*                        sz_curve_oid;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .szCurveOid
        _m03 struct win::crypt_bit_blob_t public_key;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PublicKey
                                                       
        SDK_MAGIC_PROPERTIES( "_CRYPT_ECC_PRIVATE_KEY_INFO.$", 0x38, true, 0xbb875604f203474e );             
        SDK_FIXED_SIZE( crypt_ecc_private_key_info_t, 0x38 );             
    };                                                 
};
#include "magic/crypt_ecc_private_key_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_ecc_private_key_info_t, 0x38 );
