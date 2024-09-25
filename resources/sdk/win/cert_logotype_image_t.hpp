#pragma once
#include <sdkgen/support_library.hpp>
#include "cert_logotype_details_t.hpp"

#include "magic/cert_logotype_image_t.start.hpp"
namespace win
{
    struct cert_logotype_image_info_t;

    // [struct _CERT_LOGOTYPE_IMAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_image_t                                           
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m00 struct win::cert_logotype_details_t     logotype_details;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LogotypeDetails
        _m01 struct win::cert_logotype_image_info_t* p_logotype_image_info;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .pLogotypeImageInfo
                                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_IMAGE.$", 0x20, true, 0xd4e23e170c82796f );                      
        SDK_FIXED_SIZE( cert_logotype_image_t, 0x20 );                      
    };                                                                     
};
#include "magic/cert_logotype_image_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_image_t, 0x20 );
