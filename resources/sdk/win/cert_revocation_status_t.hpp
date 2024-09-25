#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_revocation_status_t.start.hpp"
namespace win
{
    // [struct _CERT_REVOCATION_STATUS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_revocation_status_t        
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t cb_size;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 uint32_t dw_index;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwIndex
        _m02 uint32_t dw_error;              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwError
        _m03 uint32_t dw_reason;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwReason
        _m04 int32_t  f_has_freshness_time;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .fHasFreshnessTime
        _m05 uint32_t dw_freshness_time;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .dwFreshnessTime
                                           
        SDK_MAGIC_PROPERTIES( "_CERT_REVOCATION_STATUS.$", 0x18, true, 0xa5040373b6095992 );                     
        SDK_FIXED_SIZE( cert_revocation_status_t, 0x18 );                     
    };                                     
};
#include "magic/cert_revocation_status_t.end.hpp"
SDK_VERIFY( struct win::cert_revocation_status_t, 0x18 );
