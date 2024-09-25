#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crl_info_t.start.hpp"
namespace win
{
    struct crl_entry_t;
    struct cert_extension_t;

    // [struct _CRL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crl_info_t                                                     
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                
        _m00 uint32_t                                 dw_version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::crypt_algorithm_identifier_t signature_algorithm;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignatureAlgorithm
        _m02 struct win::cryptoapi_blob_t             issuer;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Issuer
        _m03 struct win::filetime_t                   this_update;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ThisUpdate
        _m04 struct win::filetime_t                   next_update;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NextUpdate
        _m05 uint32_t                                 c_crl_entry;          //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .cCRLEntry
        _m06 struct win::crl_entry_t*                 rg_crl_entry;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .rgCRLEntry
        _m07 uint32_t                                 c_extension;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .cExtension
        _m08 struct win::cert_extension_t*            rg_extension;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .rgExtension
                                                                          
        SDK_MAGIC_PROPERTIES( "_CRL_INFO.$", 0x60, true, 0x86d0269eb1559dd );                    
        SDK_FIXED_SIZE( crl_info_t, 0x60 );                               
    };                                                                    
};
#include "magic/crl_info_t.end.hpp"
SDK_VERIFY( struct win::crl_info_t, 0x60 );
