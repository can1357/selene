#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_trigger_info_t.start.hpp"
namespace win
{
    struct service_trigger_t;

    // [struct _SERVICE_TRIGGER_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_trigger_info_t                      
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                             
        _m00 uint32_t                       c_triggers;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cTriggers
        _m01 struct win::service_trigger_t* p_triggers;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pTriggers
        _m02 uint8_t*                       p_reserved;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pReserved
                                                       
        SDK_MAGIC_PROPERTIES( "_SERVICE_TRIGGER_INFO.$", 0x18, true, 0xa66b33a25fc0405e );           
        SDK_FIXED_SIZE( service_trigger_info_t, 0x18 );           
    };                                                 
};
#include "magic/service_trigger_info_t.end.hpp"
SDK_VERIFY( struct win::service_trigger_info_t, 0x18 );
