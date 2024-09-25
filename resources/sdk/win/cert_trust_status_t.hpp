#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_trust_status_t.start.hpp"
namespace win
{
    // [struct _CERT_TRUST_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_trust_status_t        
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t dw_error_status;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwErrorStatus
        _m01 uint32_t dw_info_status;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwInfoStatus
                                      
        SDK_MAGIC_PROPERTIES( "_CERT_TRUST_STATUS.$", 0x8, true, 0xe1e529762663494b );                
        SDK_FIXED_SIZE( cert_trust_status_t, 0x8 );                
    };                                
};
#include "magic/cert_trust_status_t.end.hpp"
SDK_VERIFY( struct win::cert_trust_status_t, 0x8 );
