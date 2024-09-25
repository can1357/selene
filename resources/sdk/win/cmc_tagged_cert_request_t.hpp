#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cmc_tagged_cert_request_t.start.hpp"
namespace win
{
    // [struct _CMC_TAGGED_CERT_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_tagged_cert_request_t                          
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 uint32_t                     dw_body_part_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwBodyPartID
        _m01 struct win::cryptoapi_blob_t signed_cert_request;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignedCertRequest
                                                              
        SDK_MAGIC_PROPERTIES( "_CMC_TAGGED_CERT_REQUEST.$", 0x18, true, 0x293c34aa2068fa03 );                    
        SDK_FIXED_SIZE( cmc_tagged_cert_request_t, 0x18 );                    
    };                                                        
};
#include "magic/cmc_tagged_cert_request_t.end.hpp"
SDK_VERIFY( struct win::cmc_tagged_cert_request_t, 0x18 );
