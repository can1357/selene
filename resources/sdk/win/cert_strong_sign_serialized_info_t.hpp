#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_strong_sign_serialized_info_t.start.hpp"
namespace win
{
    // [struct _CERT_STRONG_SIGN_SERIALIZED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_strong_sign_serialized_info_t          
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint32_t dw_flags;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFlags
        _m01 wchar_t* pwsz_cng_sign_hash_algids;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pwszCNGSignHashAlgids
        _m02 wchar_t* pwsz_cng_pub_key_min_bit_lengths;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pwszCNGPubKeyMinBitLengths
                                                       
        SDK_MAGIC_PROPERTIES( "_CERT_STRONG_SIGN_SERIALIZED_INFO.$", 0x18, true, 0x2ba926045e2fc0a9 );                                 
        SDK_FIXED_SIZE( cert_strong_sign_serialized_info_t, 0x18 );                                 
    };                                                 
};
#include "magic/cert_strong_sign_serialized_info_t.end.hpp"
SDK_VERIFY( struct win::cert_strong_sign_serialized_info_t, 0x18 );
