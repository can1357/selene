#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_ecc_cms_shared_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_ECC_CMS_SHARED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_ecc_cms_shared_info_t                                  
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 struct win::crypt_algorithm_identifier_t algorithm;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Algorithm
        _m01 struct win::cryptoapi_blob_t             entity_u_info;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .EntityUInfo
        _m02 sdk::array<uint8_t, 4>                   rgb_supp_pub_info;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgbSuppPubInfo
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRYPT_ECC_CMS_SHARED_INFO.$", 0x30, true, 0xf0a20ea6698cbf0f );                  
        SDK_FIXED_SIZE( crypt_ecc_cms_shared_info_t, 0x30 );                  
    };                                                                  
};
#include "magic/crypt_ecc_cms_shared_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_ecc_cms_shared_info_t, 0x30 );
