#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_name_info_t.start.hpp"
namespace win
{
    struct cert_rdn_t;

    // [struct _CERT_NAME_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_name_info_t                 
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 uint32_t                c_rdn;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cRDN
        _m01 struct win::cert_rdn_t* rg_rdn;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgRDN
                                            
        SDK_MAGIC_PROPERTIES( "_CERT_NAME_INFO.$", 0x10, true, 0x12852cfe0e29d62c );       
        SDK_FIXED_SIZE( cert_name_info_t, 0x10 );       
    };                                      
};
#include "magic/cert_name_info_t.end.hpp"
SDK_VERIFY( struct win::cert_name_info_t, 0x10 );
