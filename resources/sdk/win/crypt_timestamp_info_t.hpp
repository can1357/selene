#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "cryptoapi_blob_t.hpp"
#include "crypt_algorithm_identifier_t.hpp"

#include "magic/crypt_timestamp_info_t.start.hpp"
namespace win
{
    struct cert_extension_t;
    struct crypt_timestamp_accuracy_t;

    // [struct _CRYPT_TIMESTAMP_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_timestamp_info_t                                       
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                              
        _m00 uint32_t                                 dw_version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 char*                                    psz_tsa_policy_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszTSAPolicyId
        _m02 struct win::crypt_algorithm_identifier_t hash_algorithm;     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HashAlgorithm
        _m03 struct win::cryptoapi_blob_t             hashed_message;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .HashedMessage
        _m04 struct win::cryptoapi_blob_t             serial_number;      //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SerialNumber
        _m05 struct win::filetime_t                   ft_time;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .ftTime
        _m06 struct win::crypt_timestamp_accuracy_t*  pv_accuracy;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .pvAccuracy
        _m07 int32_t                                  f_ordering;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .fOrdering
        _m08 struct win::cryptoapi_blob_t             nonce;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Nonce
        _m09 struct win::cryptoapi_blob_t             tsa;                //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Tsa
        _m10 uint32_t                                 c_extension;        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .cExtension
        _m11 struct win::cert_extension_t*            rg_extension;       //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .rgExtension
                                                                        
        SDK_MAGIC_PROPERTIES( "_CRYPT_TIMESTAMP_INFO.$", 0x90, true, 0xd1b4a711aaca3bef );                  
        SDK_FIXED_SIZE( crypt_timestamp_info_t, 0x90 );                  
    };                                                                  
};
#include "magic/crypt_timestamp_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_timestamp_info_t, 0x90 );
