#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_authority_key_id_info_t.start.hpp"
namespace win
{
    // [struct _CERT_AUTHORITY_KEY_ID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_authority_key_id_info_t                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct win::cryptoapi_blob_t key_id;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyId
        _m01 struct win::cryptoapi_blob_t cert_issuer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CertIssuer
        _m02 struct win::cryptoapi_blob_t cert_serial_number;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .CertSerialNumber
                                                             
        SDK_MAGIC_PROPERTIES( "_CERT_AUTHORITY_KEY_ID_INFO.$", 0x30, true, 0xebff0ab6501ee7dc );                   
        SDK_FIXED_SIZE( cert_authority_key_id_info_t, 0x30 );                   
    };                                                       
};
#include "magic/cert_authority_key_id_info_t.end.hpp"
SDK_VERIFY( struct win::cert_authority_key_id_info_t, 0x30 );
