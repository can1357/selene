#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_root_info_input_t.start.hpp"
namespace win
{
    // [struct _CONTAINER_ROOT_INFO_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct container_root_info_input_t
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flags;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                                      
        SDK_NONVOL_PROPERTIES( "_CONTAINER_ROOT_INFO_INPUT.$", 0x4, true, 0x9184bfbc9ae25ba1 );      
        SDK_FIXED_SIZE( container_root_info_input_t, 0x4 );      
    };                                
};
#include "magic/container_root_info_input_t.end.hpp"
SDK_VERIFY( struct win::container_root_info_input_t, 0x4 );
