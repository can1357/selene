#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delay_execution_t.start.hpp"
namespace wmi
{
    // [struct _WMI_DELAY_EXECUTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct delay_execution_t    
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t thread_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint64_t delta;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Delta
                                
        SDK_MAGIC_PROPERTIES( "_WMI_DELAY_EXECUTION.$", 0x10, true, 0xb1ba2035106b052e );          
        SDK_FIXED_SIZE( delay_execution_t, 0x10 );          
    };                          
};
#include "magic/delay_execution_t.end.hpp"
SDK_VERIFY( struct wmi::delay_execution_t, 0x10 );
