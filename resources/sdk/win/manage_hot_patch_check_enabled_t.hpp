#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/manage_hot_patch_check_enabled_t.start.hpp"
namespace win
{
    // [struct _MANAGE_HOT_PATCH_CHECK_ENABLED]
    // => Windows 11
    //
    struct manage_hot_patch_check_enabled_t
    {                                      
        // Windows 11         
        //                    
        _m00 uint32_t version;               //{ +0x0000    } | .Version
        _m01 uint32_t flags;                 //{ +0x0004    } | .Flags
                                           
        SDK_MAGIC_PROPERTIES( "_MANAGE_HOT_PATCH_CHECK_ENABLED.$", 0x0, false, 0x63e7f3b2b7f8048e );        
        SDK_FIXED_SIZE( manage_hot_patch_check_enabled_t, 0x8 );        
    };                                     
};
#include "magic/manage_hot_patch_check_enabled_t.end.hpp"
SDK_VERIFY( struct win::manage_hot_patch_check_enabled_t, 0x8 );
