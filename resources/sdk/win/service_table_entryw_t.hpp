#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_table_entryw_t.start.hpp"
namespace win
{
    // [struct _SERVICE_TABLE_ENTRYW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_table_entryw_t                                      
    {                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                             
        _m00 wchar_t*                                  lp_service_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpServiceName
        _m01 sdk::function<void(uint32_t, wchar_t**)>* lp_service_proc;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpServiceProc
                                                                       
        SDK_MAGIC_PROPERTIES( "_SERVICE_TABLE_ENTRYW.$", 0x10, true, 0x375c7c0f633fbc1a );                
        SDK_FIXED_SIZE( service_table_entryw_t, 0x10 );                
    };                                                                 
};
#include "magic/service_table_entryw_t.end.hpp"
SDK_VERIFY( struct win::service_table_entryw_t, 0x10 );
