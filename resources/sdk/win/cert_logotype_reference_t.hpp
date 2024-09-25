#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_logotype_reference_t.start.hpp"
namespace win
{
    struct cert_hashed_url_t;

    // [struct _CERT_LOGOTYPE_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_logotype_reference_t                      
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                
        _m00 uint32_t                       c_hashed_url;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cHashedUrl
        _m01 struct win::cert_hashed_url_t* rg_hashed_url;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgHashedUrl
                                                          
        SDK_MAGIC_PROPERTIES( "_CERT_LOGOTYPE_REFERENCE.$", 0x10, true, 0x4a7958d8e6340f70 );              
        SDK_FIXED_SIZE( cert_logotype_reference_t, 0x10 );              
    };                                                    
};
#include "magic/cert_logotype_reference_t.end.hpp"
SDK_VERIFY( struct win::cert_logotype_reference_t, 0x10 );
