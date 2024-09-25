#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmsg_signed_encode_info_t.start.hpp"
namespace win
{
    struct cryptoapi_blob_t;
    struct cmsg_signer_encode_info_t;

    // [struct _CMSG_SIGNED_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_signed_encode_info_t                                
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 uint32_t                               cb_size;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t                               c_signers;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cSigners
        _m02 struct win::cmsg_signer_encode_info_t* rg_signers;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgSigners
        _m03 uint32_t                               c_cert_encoded;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .cCertEncoded
        _m04 struct win::cryptoapi_blob_t*          rg_cert_encoded;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .rgCertEncoded
        _m05 uint32_t                               c_crl_encoded;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .cCrlEncoded
        _m06 struct win::cryptoapi_blob_t*          rg_crl_encoded;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .rgCrlEncoded
                                                                    
        SDK_MAGIC_PROPERTIES( "_CMSG_SIGNED_ENCODE_INFO.$", 0x30, true, 0x6b2e3179ff19dcde );                
        SDK_FIXED_SIZE( cmsg_signed_encode_info_t, 0x30 );                
    };                                                              
};
#include "magic/cmsg_signed_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_signed_encode_info_t, 0x30 );
