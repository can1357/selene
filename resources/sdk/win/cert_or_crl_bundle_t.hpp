#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_or_crl_bundle_t.start.hpp"
namespace win
{
    struct cert_or_crl_blob_t;

    // [struct _CERT_OR_CRL_BUNDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_or_crl_bundle_t                      
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                           
        _m00 uint32_t                        c_item;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cItem
        _m01 struct win::cert_or_crl_blob_t* rg_item;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgItem
                                                     
        SDK_MAGIC_PROPERTIES( "_CERT_OR_CRL_BUNDLE.$", 0x10, true, 0xc04db54192914919 );        
        SDK_FIXED_SIZE( cert_or_crl_bundle_t, 0x10 );        
    };                                               
};
#include "magic/cert_or_crl_bundle_t.end.hpp"
SDK_VERIFY( struct win::cert_or_crl_bundle_t, 0x10 );
