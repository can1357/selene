#pragma once
#include <sdkgen/support_library.hpp>
#include "process_module_information_t.hpp"

#include "magic/process_modules_t.start.hpp"
namespace kaux
{
    // [struct _AUX_PROCESS_MODULES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct process_modules_t              
    {                                     
        using modules_t = sdk::array<struct kaux::process_module_information_t, 1>;                  
                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                
        _m00 uint32_t   number_of_modules;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfModules
        _m01 modules_t  modules;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Modules
                                          
        SDK_MAGIC_PROPERTIES( "_AUX_PROCESS_MODULES.$", 0x130, true, 0x78ea2e35d5f9ebb4 );                  
        SDK_FIXED_SIZE( process_modules_t, 0x130 );                  
    };                                    
};
#include "magic/process_modules_t.end.hpp"
SDK_VERIFY( struct kaux::process_modules_t, 0x130 );
