#pragma once
#include <sdkgen/support_library.hpp>
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cmsg_enveloped_encode_info_t.start.hpp"
namespace win
{
    struct cert_info_t;

    // [struct _CMSG_ENVELOPED_ENCODE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmsg_enveloped_encode_info_t                                            
    {                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                         
        _m00 uint32_t                                 cb_size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint64_t                                 h_crypt_prov;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .hCryptProv
        _m02 struct win::crypt_algorithm_identifier_t content_encryption_algorithm;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ContentEncryptionAlgorithm
        _m03 void*                                    pv_encryption_aux_info;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvEncryptionAuxInfo
        _m04 uint32_t                                 c_recipients;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .cRecipients
        _m05 struct win::cert_info_t**                rgp_recipients;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .rgpRecipients
                                                                                   
        SDK_MAGIC_PROPERTIES( "_CMSG_ENVELOPED_ENCODE_INFO.$", 0x40, true, 0x7eede52a7ee5daf0 );                             
        SDK_FIXED_SIZE( cmsg_enveloped_encode_info_t, 0x40 );                             
    };                                                                             
};
#include "magic/cmsg_enveloped_encode_info_t.end.hpp"
SDK_VERIFY( struct win::cmsg_enveloped_encode_info_t, 0x40 );
