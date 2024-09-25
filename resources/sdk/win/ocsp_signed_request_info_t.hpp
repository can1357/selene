#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/ocsp_signed_request_info_t.start.hpp"
namespace win
{
    struct ocsp_signature_info_t;

    // [struct _OCSP_SIGNED_REQUEST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_signed_request_info_t                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                
        _m00 struct win::cryptoapi_blob_t       to_be_signed;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ToBeSigned
        _m01 struct win::ocsp_signature_info_t* p_optional_signature_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pOptionalSignatureInfo
                                                                          
        SDK_MAGIC_PROPERTIES( "_OCSP_SIGNED_REQUEST_INFO.$", 0x18, true, 0x1167f70cc290a354 );                          
        SDK_FIXED_SIZE( ocsp_signed_request_info_t, 0x18 );                          
    };                                                                    
};
#include "magic/ocsp_signed_request_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_signed_request_info_t, 0x18 );
