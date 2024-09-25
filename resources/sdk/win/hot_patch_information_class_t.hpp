#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [enum _HOT_PATCH_INFORMATION_CLASS]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class hot_patch_information_class_t : int32_t
    {                                                 
        load_patch =             0x0,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unload_patch =           0x1,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_patches =          0x2,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        load_patch_for_user =    0x3,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        unload_patch_for_user =  0x4,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_patches_for_user = 0x5,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        query_active_patches =   0x6,                   // Windows 10 v2004, Windows 11, Windows 10 v20H2
        apply_image_patch =      0x7,                   // Windows 11
        max =                    0x7,                   // Windows 10 v2004, Windows 10 v20H2
        query_single_patch =     0x8,                   // Windows 11
        check_enabled =          0x9,                   // Windows 11
        //max =                  0xa,                   // Windows 11
    };                                                
};
