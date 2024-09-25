#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cmc_tagged_request_t.start.hpp"
namespace win
{
    struct cmc_tagged_cert_request_t;

    // [struct _CMC_TAGGED_REQUEST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cmc_tagged_request_t                                              
    {                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 uint32_t                               dw_tagged_request_choice;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwTaggedRequestChoice
        _m01 struct win::cmc_tagged_cert_request_t* p_tagged_cert_request;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTaggedCertRequest
                                                                             
        SDK_MAGIC_PROPERTIES( "_CMC_TAGGED_REQUEST.$", 0x10, true, 0x739d878c567c2d45 );                         
        SDK_FIXED_SIZE( cmc_tagged_request_t, 0x10 );                         
    };                                                                       
};
#include "magic/cmc_tagged_request_t.end.hpp"
SDK_VERIFY( struct win::cmc_tagged_request_t, 0x10 );
