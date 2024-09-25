#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_system_resource_management_t.start.hpp"
namespace win
{
    // [union _PROCESS_SYSTEM_RESOURCE_MANAGEMENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union process_system_resource_management_t
    {                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 uint32_t flags;                    //{ +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint1_t  foreground;               //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .Foreground
                                              
        SDK_MAGIC_PROPERTIES( "_PROCESS_SYSTEM_RESOURCE_MANAGEMENT.$", 0x4, true, 0x41c8fdc9da948416 );           
        SDK_FIXED_SIZE( process_system_resource_management_t, 0x4 );           
    };                                        
};
#include "magic/process_system_resource_management_t.end.hpp"
SDK_VERIFY( union win::process_system_resource_management_t, 0x4 );
