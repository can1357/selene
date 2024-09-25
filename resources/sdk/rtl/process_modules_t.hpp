#pragma once
#include <sdkgen/support_library.hpp>
#include "process_module_information_t.hpp"

#include "magic/process_modules_t.start.hpp"
namespace rtl
{
    // [struct _RTL_PROCESS_MODULES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct process_modules_t              
    {                                     
        using modules_t = sdk::array<struct rtl::process_module_information_t, 1>;                  
                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                
        _m00 uint32_t   number_of_modules;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfModules
        _m01 modules_t  modules;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Modules
                                          
        SDK_NONVOL_PROPERTIES( "_RTL_PROCESS_MODULES.$", 0x130, true, 0x542c9d4488676f2b );                  
        SDK_FIXED_SIZE( process_modules_t, 0x130 );                  
    };                                    
};
#include "magic/process_modules_t.end.hpp"
SDK_VERIFY( struct rtl::process_modules_t, 0x130 );
