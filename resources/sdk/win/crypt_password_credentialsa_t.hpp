#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_password_credentialsa_t.start.hpp"
namespace win
{
    // [struct _CRYPT_PASSWORD_CREDENTIALSA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_password_credentialsa_t
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t cb_size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 char*    psz_username;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszUsername
        _m02 char*    psz_password;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pszPassword
                                        
        SDK_MAGIC_PROPERTIES( "_CRYPT_PASSWORD_CREDENTIALSA.$", 0x18, true, 0x7eccb7ecc105c992 );             
        SDK_FIXED_SIZE( crypt_password_credentialsa_t, 0x18 );             
    };                                  
};
#include "magic/crypt_password_credentialsa_t.end.hpp"
SDK_VERIFY( struct win::crypt_password_credentialsa_t, 0x18 );
