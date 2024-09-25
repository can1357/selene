#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "cert_alt_name_info_t.hpp"

#include "magic/cert_authority_key_id2_info_t.start.hpp"
namespace win
{
    // [struct _CERT_AUTHORITY_KEY_ID2_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_authority_key_id2_info_t                                   
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m00 struct win::cryptoapi_blob_t     key_id;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .KeyId
        _m01 struct win::cert_alt_name_info_t authority_cert_issuer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AuthorityCertIssuer
        _m02 struct win::cryptoapi_blob_t     authority_cert_serial_number;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AuthorityCertSerialNumber
                                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_AUTHORITY_KEY_ID2_INFO.$", 0x30, true, 0x35bbbb431814896 );                             
        SDK_FIXED_SIZE( cert_authority_key_id2_info_t, 0x30 );                             
    };                                                                     
};
#include "magic/cert_authority_key_id2_info_t.end.hpp"
SDK_VERIFY( struct win::cert_authority_key_id2_info_t, 0x30 );
