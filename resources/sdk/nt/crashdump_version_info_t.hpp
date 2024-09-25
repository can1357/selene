#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/crashdump_version_info_t.start.hpp"
namespace nt
{
    // [struct _CRASHDUMP_VERSION_INFO]
    // => WDK 10 (NV)
    //
    struct crashdump_version_info_t      
    {                                    
        // WDK 10                        
        //                               
        _m00 int32_t  ignore_guard_pages;  //{ +0x0000    } | .IgnoreGuardPages
        _m01 uint32_t pointer_size;        //{ +0x0004    } | .PointerSize
                                         
        SDK_NONVOL_PROPERTIES( "_CRASHDUMP_VERSION_INFO.$", 0x0, false, 0x819ee7b22ff46947 );                   
        SDK_FIXED_SIZE( crashdump_version_info_t, 0x8 );                   
    };                                   
};
#include "magic/crashdump_version_info_t.end.hpp"
SDK_VERIFY( struct nt::crashdump_version_info_t, 0x8 );
