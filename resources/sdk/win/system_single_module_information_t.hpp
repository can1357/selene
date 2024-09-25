#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/process_module_information_ex_t.hpp"

#include "magic/system_single_module_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_SINGLE_MODULE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_single_module_information_t                                  
    {                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                     
        _m00 void*                                       target_module_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetModuleAddress
        _m01 struct rtl::process_module_information_ex_t ex_info;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExInfo
                                                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_SINGLE_MODULE_INFORMATION.$", 0x148, true, 0x56f7a118d3ea6a1d );                      
        SDK_FIXED_SIZE( system_single_module_information_t, 0x148 );                      
    };                                                                         
};
#include "magic/system_single_module_information_t.end.hpp"
SDK_VERIFY( struct win::system_single_module_information_t, 0x148 );
