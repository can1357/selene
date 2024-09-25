#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/siloobject_root_directory_t.start.hpp"
namespace win
{
    // [struct _SILOOBJECT_ROOT_DIRECTORY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct siloobject_root_directory_t      
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                  
        _m00 uint32_t         control_flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ControlFlags
        _m01 nt::unicode_view path;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Path
                                            
        SDK_MAGIC_PROPERTIES( "_SILOOBJECT_ROOT_DIRECTORY.$", 0x10, true, 0x27eb5f81cadf820a );              
        SDK_DYNAMIC_SIZE( siloobject_root_directory_t );              
    };                                      
};
#include "magic/siloobject_root_directory_t.end.hpp"
