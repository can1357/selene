#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_context_t.start.hpp"
namespace win
{
    struct cert_info_t;

    // [struct _CERT_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_context_t                                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint32_t                 dw_cert_encoding_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCertEncodingType
        _m01 uint8_t*                 pb_cert_encoded;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbCertEncoded
        _m02 uint32_t                 cb_cert_encoded;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbCertEncoded
        _m03 struct win::cert_info_t* p_cert_info;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCertInfo
        _m04 void*                    h_cert_store;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hCertStore
                                                            
        SDK_MAGIC_PROPERTIES( "_CERT_CONTEXT.$", 0x28, true, 0x4eabd5414b5a2306 );                      
        SDK_FIXED_SIZE( cert_context_t, 0x28 );                      
    };                                                      
};
#include "magic/cert_context_t.end.hpp"
SDK_VERIFY( struct win::cert_context_t, 0x28 );
