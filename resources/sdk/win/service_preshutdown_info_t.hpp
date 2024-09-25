#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_preshutdown_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_PRESHUTDOWN_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_preshutdown_info_t        
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t dw_preshutdown_timeout;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwPreshutdownTimeout
                                             
        SDK_MAGIC_PROPERTIES( "_SERVICE_PRESHUTDOWN_INFO.$", 0x4, true, 0x12f184777f4a7e4a );                       
        SDK_FIXED_SIZE( service_preshutdown_info_t, 0x4 );                       
    };                                       
};
#include "magic/service_preshutdown_info_t.end.hpp"
SDK_VERIFY( struct win::service_preshutdown_info_t, 0x4 );
