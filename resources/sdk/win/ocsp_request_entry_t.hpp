#pragma once
#include <sdkgen/support_library.hpp>
#include "ocsp_cert_id_t.hpp"

#include "magic/ocsp_request_entry_t.start.hpp"
namespace win
{
    struct cert_extension_t;

    // [struct _OCSP_REQUEST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_request_entry_t                         
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                              
        _m00 struct win::ocsp_cert_id_t    cert_id;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CertId
        _m01 uint32_t                      c_extension;   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .cExtension
        _m02 struct win::cert_extension_t* rg_extension;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .rgExtension
                                                        
        SDK_MAGIC_PROPERTIES( "_OCSP_REQUEST_ENTRY.$", 0x58, true, 0x8ee1f6dfc016bb27 );             
        SDK_FIXED_SIZE( ocsp_request_entry_t, 0x58 );             
    };                                                  
};
#include "magic/ocsp_request_entry_t.end.hpp"
SDK_VERIFY( struct win::ocsp_request_entry_t, 0x58 );
