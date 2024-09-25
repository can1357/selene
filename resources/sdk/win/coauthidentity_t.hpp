#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coauthidentity_t.start.hpp"
namespace win
{
    // [struct _COAUTHIDENTITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coauthidentity_t            
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                             
        _m00 uint16_t* user;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .User
        _m01 uint32_t  user_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserLength
        _m02 uint16_t* domain;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Domain
        _m03 uint32_t  domain_length;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DomainLength
        _m04 uint16_t* password;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Password
        _m05 uint32_t  password_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PasswordLength
        _m06 uint32_t  flags;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
                                       
        SDK_MAGIC_PROPERTIES( "_COAUTHIDENTITY.$", 0x30, true, 0x175a6e7a33d44daa );                
        SDK_FIXED_SIZE( coauthidentity_t, 0x30 );                
    };                                 
};
#include "magic/coauthidentity_t.end.hpp"
SDK_VERIFY( struct win::coauthidentity_t, 0x30 );
