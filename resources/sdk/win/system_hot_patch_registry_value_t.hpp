#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_hot_patch_registry_value_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HOT_PATCH_REGISTRY_VALUE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hot_patch_registry_value_t          
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                            
        _m00 uint16_t               image_name_length;  //{ +0x0000    +0x0000    +0x0000    } | .ImageNameLength
        _m01 sdk::array<wchar_t, 1> image_name;         //{ +0x0002    +0x0002    +0x0002    } | .ImageName
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HOT_PATCH_REGISTRY_VALUE.$", 0x4, true, 0x354a42530e19e574 );                  
        SDK_FIXED_SIZE( system_hot_patch_registry_value_t, 0x4 );                  
    };                                                
};
#include "magic/system_hot_patch_registry_value_t.end.hpp"
SDK_VERIFY( struct win::system_hot_patch_registry_value_t, 0x4 );
