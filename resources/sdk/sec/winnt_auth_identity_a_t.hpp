#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winnt_auth_identity_a_t.start.hpp"
namespace sec
{
    // [struct _SEC_WINNT_AUTH_IDENTITY_A]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct winnt_auth_identity_a_t    
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint8_t* user;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .User
        _m01 uint32_t user_length;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UserLength
        _m02 uint8_t* domain;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Domain
        _m03 uint32_t domain_length;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DomainLength
        _m04 uint8_t* password;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Password
        _m05 uint32_t password_length;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PasswordLength
        _m06 uint32_t flags;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
                                      
        SDK_MAGIC_PROPERTIES( "_SEC_WINNT_AUTH_IDENTITY_A.$", 0x30, true, 0x24ecbeeade88bd51 );                
        SDK_FIXED_SIZE( winnt_auth_identity_a_t, 0x30 );                
    };                                
};
#include "magic/winnt_auth_identity_a_t.end.hpp"
SDK_VERIFY( struct sec::winnt_auth_identity_a_t, 0x30 );
