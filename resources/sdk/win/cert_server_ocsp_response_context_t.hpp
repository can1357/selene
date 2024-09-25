#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_server_ocsp_response_context_t.start.hpp"
namespace win
{
    // [struct _CERT_SERVER_OCSP_RESPONSE_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_server_ocsp_response_context_t 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t cb_size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint8_t* pb_encoded_ocsp_response;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbEncodedOcspResponse
        _m02 uint32_t cb_encoded_ocsp_response;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbEncodedOcspResponse
                                               
        SDK_MAGIC_PROPERTIES( "_CERT_SERVER_OCSP_RESPONSE_CONTEXT.$", 0x18, true, 0x8b235b0fa6cb65ca );                         
        SDK_FIXED_SIZE( cert_server_ocsp_response_context_t, 0x18 );                         
    };                                         
};
#include "magic/cert_server_ocsp_response_context_t.end.hpp"
SDK_VERIFY( struct win::cert_server_ocsp_response_context_t, 0x18 );
