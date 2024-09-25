#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_table_entrya_t.start.hpp"
namespace win
{
    // [struct _SERVICE_TABLE_ENTRYA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_table_entrya_t                                   
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                          
        _m00 char*                                  lp_service_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpServiceName
        _m01 sdk::function<void(uint32_t, char**)>* lp_service_proc;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpServiceProc
                                                                    
        SDK_MAGIC_PROPERTIES( "_SERVICE_TABLE_ENTRYA.$", 0x10, true, 0x1705d91500a92c28 );                
        SDK_FIXED_SIZE( service_table_entrya_t, 0x10 );                
    };                                                              
};
#include "magic/service_table_entrya_t.end.hpp"
SDK_VERIFY( struct win::service_table_entrya_t, 0x10 );
