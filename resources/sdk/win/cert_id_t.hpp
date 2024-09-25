#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "cert_issuer_serial_number_t.hpp"

#include "magic/cert_id_t.start.hpp"
namespace win
{
    // [struct _CERT_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_id_t                                                      
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                                
        _m00 uint32_t                                dw_id_choice;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwIdChoice
        _m01 struct win::cert_issuer_serial_number_t issuer_serial_number;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IssuerSerialNumber
        _m02 struct win::cryptoapi_blob_t            key_id;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .KeyId
        _m03 struct win::cryptoapi_blob_t            hash_id;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashId
                                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_ID.$", 0x28, true, 0xf90d658ea06df1e2 );                     
        SDK_FIXED_SIZE( cert_id_t, 0x28 );                                
    };                                                                    
};
#include "magic/cert_id_t.end.hpp"
SDK_VERIFY( struct win::cert_id_t, 0x28 );
