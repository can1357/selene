#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crypt_image_ref_t.start.hpp"
namespace win
{
    // [struct _CRYPT_IMAGE_REF]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_image_ref_t    
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 wchar_t* psz_image;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszImage
        _m01 uint32_t dw_flags;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
                                
        SDK_MAGIC_PROPERTIES( "_CRYPT_IMAGE_REF.$", 0x10, true, 0x22ab1955193c7890 );          
        SDK_FIXED_SIZE( crypt_image_ref_t, 0x10 );          
    };                          
};
#include "magic/crypt_image_ref_t.end.hpp"
SDK_VERIFY( struct win::crypt_image_ref_t, 0x10 );
