#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_launch_protected_info_t.start.hpp"
namespace win
{
    // [struct _SERVICE_LAUNCH_PROTECTED_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_launch_protected_info_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t dw_launch_protected;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwLaunchProtected
                                          
        SDK_MAGIC_PROPERTIES( "_SERVICE_LAUNCH_PROTECTED_INFO.$", 0x4, true, 0x820abf2c8f093fd7 );                    
        SDK_FIXED_SIZE( service_launch_protected_info_t, 0x4 );                    
    };                                    
};
#include "magic/service_launch_protected_info_t.end.hpp"
SDK_VERIFY( struct win::service_launch_protected_info_t, 0x4 );
