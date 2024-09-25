#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_required_privileges_infow_t.start.hpp"
namespace win
{
    // [struct _SERVICE_REQUIRED_PRIVILEGES_INFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_required_privileges_infow_t 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 wchar_t* pmsz_required_privileges;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pmszRequiredPrivileges
                                               
        SDK_MAGIC_PROPERTIES( "_SERVICE_REQUIRED_PRIVILEGES_INFOW.$", 0x8, true, 0xd407b61ff02c27d2 );                         
        SDK_FIXED_SIZE( service_required_privileges_infow_t, 0x8 );                         
    };                                         
};
#include "magic/service_required_privileges_infow_t.end.hpp"
SDK_VERIFY( struct win::service_required_privileges_infow_t, 0x8 );
