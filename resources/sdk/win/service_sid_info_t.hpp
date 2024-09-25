#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_sid_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_SID_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_sid_info_t             
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t dw_service_sid_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwServiceSidType
                                          
        SDK_MAGIC_PROPERTIES( "_SERVICE_SID_INFO.$", 0x4, true, 0xa5b0d6cd9d0977aa );                    
        SDK_FIXED_SIZE( service_sid_info_t, 0x4 );                    
    };                                    
};
#include "magic/service_sid_info_t.end.hpp"
SDK_VERIFY( struct win::service_sid_info_t, 0x4 );
