#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_details_t.start.hpp"
namespace win
{
    struct cert_hashed_url_t;

    // [struct _CERT_LOGOTYPE_DETAILS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_details_t                         
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 wchar_t*                       pwsz_mime_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszMimeType
        _m01 uint32_t                       c_hashed_url;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cHashedUrl
        _m02 struct win::cert_hashed_url_t* rg_hashed_url;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .rgHashedUrl
                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_DETAILS.$", 0x18, true, 0xf4c7ab1b8310c6b7 );               
        SDK_FIXED_SIZE( cert_logotype_details_t, 0x18 );               
    };                                                     
};
#include "magic/cert_logotype_details_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_details_t, 0x18 );
