#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crl_context_t.start.hpp"
namespace win
{
    struct crl_info_t;

    // [struct _CRL_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_context_t                                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                 
        _m00 uint32_t                dw_cert_encoding_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCertEncodingType
        _m01 uint8_t*                pb_crl_encoded;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbCrlEncoded
        _m02 uint32_t                cb_crl_encoded;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cbCrlEncoded
        _m03 struct win::crl_info_t* p_crl_info;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pCrlInfo
        _m04 void*                   h_cert_store;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .hCertStore
                                                           
        SDK_MAGIC_PROPERTIES( "_CRL_CONTEXT.$", 0x28, true, 0x944994db3219c35d );                      
        SDK_FIXED_SIZE( crl_context_t, 0x28 );                      
    };                                                     
};
#include "magic/crl_context_t.end.hpp"
SDK_VERIFY( struct win::crl_context_t, 0x28 );
