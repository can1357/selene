#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "crypt_bit_blob_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "cert_public_key_info_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/cert_info_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _CERT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_info_t                                                        
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                    
        _m00 uint32_t                                 dw_version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cryptoapi_blob_t             serial_number;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SerialNumber
        _m02 struct win::crypt_algorithm_identifier_t signature_algorithm;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SignatureAlgorithm
        _m03 struct win::cryptoapi_blob_t             issuer;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Issuer
        _m04 struct win::filetime_t                   not_before;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .NotBefore
        _m05 struct win::filetime_t                   not_after;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .NotAfter
        _m06 struct win::cryptoapi_blob_t             subject;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Subject
        _m07 struct win::cert_public_key_info_t       subject_public_key_info;  //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .SubjectPublicKeyInfo
        _m08 struct win::crypt_bit_blob_t             issuer_unique_id;         //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .IssuerUniqueId
        _m09 struct win::crypt_bit_blob_t             subject_unique_id;        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .SubjectUniqueId
        _m10 uint32_t                                 c_extension;              //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .cExtension
        _m11 struct win::cert_extension_t*            rg_extension;             //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .rgExtension
                                                                              
        SDK_MAGIC_PROPERTIES( "_CERT_INFO.$", 0xd0, true, 0x60e47b3adb8d373b );                        
        SDK_FIXED_SIZE( cert_info_t, 0xd0 );                                  
    };                                                                        
};
#include "magic/cert_info_t.end.hpp"
SDK_VERIFY( struct win::cert_info_t, 0xd0 );
