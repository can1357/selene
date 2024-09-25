#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/winnt_auth_identity_exw_t.start.hpp"
namespace sec
{
    // [struct _SEC_WINNT_AUTH_IDENTITY_EXW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct winnt_auth_identity_exw_t       
    {                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                 
        _m00 uint32_t  version;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t  length;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Length
        _m02 uint16_t* user;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .User
        _m03 uint32_t  user_length;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .UserLength
        _m04 uint16_t* domain;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Domain
        _m05 uint32_t  domain_length;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DomainLength
        _m06 uint16_t* password;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Password
        _m07 uint32_t  password_length;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .PasswordLength
        _m08 uint32_t  flags;                //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .Flags
        _m09 uint16_t* package_list;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PackageList
        _m10 uint32_t  package_list_length;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .PackageListLength
                                           
        SDK_NONVOL_PROPERTIES( "_SEC_WINNT_AUTH_IDENTITY_EXW.$", 0x48, true, 0x95a335e406277ca3 );                    
        SDK_FIXED_SIZE( winnt_auth_identity_exw_t, 0x48 );                    
    };                                     
};
#include "magic/winnt_auth_identity_exw_t.end.hpp"
SDK_VERIFY( struct sec::winnt_auth_identity_exw_t, 0x48 );
