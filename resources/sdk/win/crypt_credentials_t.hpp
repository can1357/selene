#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_credentials_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CREDENTIALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_credentials_t               
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                   
        _m00 uint32_t    cb_size;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 const char* psz_credentials_oid;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszCredentialsOid
        _m02 void*       pv_credentials;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pvCredentials
                                             
        SDK_MAGIC_PROPERTIES( "_CRYPT_CREDENTIALS.$", 0x18, true, 0x73287f51fb3f91e5 );                    
        SDK_FIXED_SIZE( crypt_credentials_t, 0x18 );                    
    };                                       
};
#include "magic/crypt_credentials_t.end.hpp"
SDK_VERIFY( struct win::crypt_credentials_t, 0x18 );
