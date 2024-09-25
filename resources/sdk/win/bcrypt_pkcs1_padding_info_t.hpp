#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_pkcs1_padding_info_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_PKCS1_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_pkcs1_padding_info_t 
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 const wchar_t* psz_alg_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszAlgId
                                       
        SDK_MAGIC_PROPERTIES( "_BCRYPT_PKCS1_PADDING_INFO.$", 0x8, true, 0x14d3be226fd7714 );           
        SDK_FIXED_SIZE( bcrypt_pkcs1_padding_info_t, 0x8 );           
    };                                 
};
#include "magic/bcrypt_pkcs1_padding_info_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_pkcs1_padding_info_t, 0x8 );
