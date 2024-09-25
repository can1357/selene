#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_public_key_info_t.hpp"

#include "magic/cert_keygen_request_info_t.start.hpp"
namespace win
{
    // [struct _CERT_KEYGEN_REQUEST_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_keygen_request_info_t                                   
    {                                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                              
        _m00 uint32_t                           dw_version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVersion
        _m01 struct win::cert_public_key_info_t subject_public_key_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SubjectPublicKeyInfo
        _m02 wchar_t*                           pwsz_challenge_string;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .pwszChallengeString
                                                                        
        SDK_MAGIC_PROPERTIES( "_CERT_KEYGEN_REQUEST_INFO.$", 0x40, true, 0x633f808a0cdd86b7 );                        
        SDK_FIXED_SIZE( cert_keygen_request_info_t, 0x40 );                        
    };                                                                  
};
#include "magic/cert_keygen_request_info_t.end.hpp"
SDK_VERIFY( struct win::cert_keygen_request_info_t, 0x40 );
