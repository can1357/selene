#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_prefetch_patch_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PREFETCH_PATCH_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_prefetch_patch_information_t
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t prefetch_patch_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PrefetchPatchCount
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PREFETCH_PATCH_INFORMATION.$", 0x4, true, 0xee584e2d05ef16a5 );                     
        SDK_FIXED_SIZE( system_prefetch_patch_information_t, 0x4 );                     
    };                                        
};
#include "magic/system_prefetch_patch_information_t.end.hpp"
SDK_VERIFY( struct win::system_prefetch_patch_information_t, 0x4 );
