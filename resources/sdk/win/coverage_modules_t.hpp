#pragma once
#include <sdkgen/support_library.hpp>
#include "coverage_module_info_t.hpp"
#include "coverage_module_request_t.hpp"

#include "magic/coverage_modules_t.start.hpp"
namespace win
{
    // [struct _COVERAGE_MODULES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_modules_t                                          
    {                                                                  
        using modules_t = sdk::array<struct win::coverage_module_info_t, 1>;                    
                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                             
        _m00 uint32_t                              list_and_reset;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListAndReset
        _m01 uint32_t                              number_of_modules;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NumberOfModules
        _m02 struct win::coverage_module_request_t module_request_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ModuleRequestInfo
        _m03 modules_t                             modules;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Modules
                                                                       
        SDK_MAGIC_PROPERTIES( "_COVERAGE_MODULES.$", 0x40, true, 0xc20eb09bebb87c32 );                    
        SDK_FIXED_SIZE( coverage_modules_t, 0x40 );                    
    };                                                                 
};
#include "magic/coverage_modules_t.end.hpp"
SDK_VERIFY( struct win::coverage_modules_t, 0x40 );
