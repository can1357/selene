#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_url_array_t.start.hpp"
namespace win
{
    // [struct _CRYPT_URL_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_url_array_t     
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                       
        _m00 uint32_t  c_url;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cUrl
        _m01 wchar_t** rgwsz_url;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgwszUrl
                                 
        SDK_MAGIC_PROPERTIES( "_CRYPT_URL_ARRAY.$", 0x10, true, 0xc29e2b560bed8841 );          
        SDK_FIXED_SIZE( crypt_url_array_t, 0x10 );          
    };                           
};
#include "magic/crypt_url_array_t.end.hpp"
SDK_VERIFY( struct win::crypt_url_array_t, 0x10 );
