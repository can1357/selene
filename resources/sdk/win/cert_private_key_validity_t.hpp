#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/cert_private_key_validity_t.start.hpp"
namespace win
{
    // [struct _CERT_PRIVATE_KEY_VALIDITY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_private_key_validity_t         
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 struct win::filetime_t not_before;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotBefore
        _m01 struct win::filetime_t not_after;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NotAfter
                                               
        SDK_MAGIC_PROPERTIES( "_CERT_PRIVATE_KEY_VALIDITY.$", 0x10, true, 0xbddb34ddd10ce9e8 );           
        SDK_FIXED_SIZE( cert_private_key_validity_t, 0x10 );           
    };                                         
};
#include "magic/cert_private_key_validity_t.end.hpp"
SDK_VERIFY( struct win::cert_private_key_validity_t, 0x10 );
