#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_required_privileges_infoa_t.start.hpp"
namespace win
{
    // [struct _SERVICE_REQUIRED_PRIVILEGES_INFOA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_required_privileges_infoa_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                  
        _m00 char* pmsz_required_privileges;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pmszRequiredPrivileges
                                              
        SDK_MAGIC_PROPERTIES( "_SERVICE_REQUIRED_PRIVILEGES_INFOA.$", 0x8, true, 0x919792ebd7e9de85 );                         
        SDK_FIXED_SIZE( service_required_privileges_infoa_t, 0x8 );                         
    };                                        
};
#include "magic/service_required_privileges_infoa_t.end.hpp"
SDK_VERIFY( struct win::service_required_privileges_infoa_t, 0x8 );
