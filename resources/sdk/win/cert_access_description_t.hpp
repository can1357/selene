#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_alt_name_entry_t.hpp"

#include "magic/cert_access_description_t.start.hpp"
namespace win
{
    // [struct _CERT_ACCESS_DESCRIPTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_access_description_t                             
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                       
        _m00 char*                             psz_access_method;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszAccessMethod
        _m01 struct win::cert_alt_name_entry_t access_location;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AccessLocation
                                                                 
        SDK_MAGIC_PROPERTIES( "_CERT_ACCESS_DESCRIPTION.$", 0x20, true, 0x36512bf1e56f5a7b );                  
        SDK_FIXED_SIZE( cert_access_description_t, 0x20 );                  
    };                                                           
};
#include "magic/cert_access_description_t.end.hpp"
SDK_VERIFY( struct win::cert_access_description_t, 0x20 );
