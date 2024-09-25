#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_rdn_t.start.hpp"
namespace win
{
    struct cert_rdn_attr_t;

    // [struct _CERT_RDN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_rdn_t                                 
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 uint32_t                     c_rdn_attr;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cRDNAttr
        _m01 struct win::cert_rdn_attr_t* rg_rdn_attr;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgRDNAttr
                                                      
        SDK_MAGIC_PROPERTIES( "_CERT_RDN.$", 0x10, true, 0x74a80eba35ae39ff );            
        SDK_FIXED_SIZE( cert_rdn_t, 0x10 );            
    };                                                
};
#include "magic/cert_rdn_t.end.hpp"
SDK_VERIFY( struct win::cert_rdn_t, 0x10 );
