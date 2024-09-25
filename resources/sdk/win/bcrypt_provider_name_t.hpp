#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_provider_name_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_PROVIDER_NAME]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_provider_name_t       
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 wchar_t* psz_provider_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszProviderName
                                        
        SDK_MAGIC_PROPERTIES( "_BCRYPT_PROVIDER_NAME.$", 0x8, true, 0x871696533f6af47d );                  
        SDK_FIXED_SIZE( bcrypt_provider_name_t, 0x8 );                  
    };                                  
};
#include "magic/bcrypt_provider_name_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_provider_name_t, 0x8 );
