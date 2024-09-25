#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/extension_t.start.hpp"
namespace drv
{
    // [struct _DRV_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct extension_t                                 
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                             
        _m00 nt::unicode_view parameters_registry_path;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ParametersRegistryPath
                                                       
        SDK_MAGIC_PROPERTIES( "_DRV_EXTENSION.$", 0x10, true, 0xb0fecf8b3bc6f799 );                         
        SDK_FIXED_SIZE( extension_t, 0x10 );                         
    };                                                 
};
#include "magic/extension_t.end.hpp"
SDK_VERIFY( struct drv::extension_t, 0x10 );
