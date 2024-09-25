#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/n_crypt_provider_name_t.start.hpp"
namespace win
{
    // [struct NCryptProviderName]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct n_crypt_provider_name_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 wchar_t* psz_name;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszName
        _m01 wchar_t* psz_comment;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pszComment
                                  
        SDK_MAGIC_PROPERTIES( "NCryptProviderName.$", 0x10, true, 0x95ba35e4ab6ba83f );            
        SDK_FIXED_SIZE( n_crypt_provider_name_t, 0x10 );            
    };                            
};
#include "magic/n_crypt_provider_name_t.end.hpp"
SDK_VERIFY( struct win::n_crypt_provider_name_t, 0x10 );
