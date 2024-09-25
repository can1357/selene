#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/crypt_content_info_t.start.hpp"
namespace win
{
    // [struct _CRYPT_CONTENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crypt_content_info_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                           
        _m00 char*                        psz_obj_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszObjId
        _m01 struct win::cryptoapi_blob_t content;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Content
                                                     
        SDK_MAGIC_PROPERTIES( "_CRYPT_CONTENT_INFO.$", 0x18, true, 0x3c1960a1230475db );           
        SDK_FIXED_SIZE( crypt_content_info_t, 0x18 );           
    };                                               
};
#include "magic/crypt_content_info_t.end.hpp"
SDK_VERIFY( struct win::crypt_content_info_t, 0x18 );
