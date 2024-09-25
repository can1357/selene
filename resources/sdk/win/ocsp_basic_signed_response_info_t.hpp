#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"
#include "ocsp_signature_info_t.hpp"

#include "magic/ocsp_basic_signed_response_info_t.start.hpp"
namespace win
{
    // [struct _OCSP_BASIC_SIGNED_RESPONSE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ocsp_basic_signed_response_info_t                  
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                    
        _m00 struct win::cryptoapi_blob_t      to_be_signed;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ToBeSigned
        _m01 struct win::ocsp_signature_info_t signature_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SignatureInfo
                                                              
        SDK_MAGIC_PROPERTIES( "_OCSP_BASIC_SIGNED_RESPONSE_INFO.$", 0x50, true, 0x1f2ca21718377b33 );               
        SDK_FIXED_SIZE( ocsp_basic_signed_response_info_t, 0x50 );               
    };                                                        
};
#include "magic/ocsp_basic_signed_response_info_t.end.hpp"
SDK_VERIFY( struct win::ocsp_basic_signed_response_info_t, 0x50 );
