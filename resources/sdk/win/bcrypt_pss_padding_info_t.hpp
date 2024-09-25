#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_pss_padding_info_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_PSS_PADDING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_pss_padding_info_t   
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                             
        _m00 const wchar_t* psz_alg_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszAlgId
        _m01 uint32_t       cb_salt;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cbSalt
                                       
        SDK_MAGIC_PROPERTIES( "_BCRYPT_PSS_PADDING_INFO.$", 0x10, true, 0x3b02b605830b0fad );           
        SDK_FIXED_SIZE( bcrypt_pss_padding_info_t, 0x10 );           
    };                                 
};
#include "magic/bcrypt_pss_padding_info_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_pss_padding_info_t, 0x10 );
