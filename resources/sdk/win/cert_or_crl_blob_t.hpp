#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_or_crl_blob_t.start.hpp"
namespace win
{
    // [struct _CERT_OR_CRL_BLOB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_or_crl_blob_t    
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t dw_choice;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwChoice
        _m01 uint32_t cb_encoded;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cbEncoded
        _m02 uint8_t* pb_encoded;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pbEncoded
                                 
        SDK_MAGIC_PROPERTIES( "_CERT_OR_CRL_BLOB.$", 0x10, true, 0x3138c5850645b3f5 );           
        SDK_FIXED_SIZE( cert_or_crl_blob_t, 0x10 );           
    };                           
};
#include "magic/cert_or_crl_blob_t.end.hpp"
SDK_VERIFY( struct win::cert_or_crl_blob_t, 0x10 );
