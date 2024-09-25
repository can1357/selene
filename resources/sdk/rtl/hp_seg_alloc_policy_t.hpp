#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hp_seg_alloc_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_HP_SEG_ALLOC_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hp_seg_alloc_policy_t      
    {                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t min_large_pages;  //{ +0x0000    +0x0000    +0x0000    } | .MinLargePages
        _m01 uint64_t max_large_pages;  //{ +0x0008    +0x0008    +0x0008    } | .MaxLargePages
        _m02 uint8_t  min_utilization;  //{ +0x0010    +0x0010    +0x0010    } | .MinUtilization
                                      
        SDK_MAGIC_PROPERTIES( "_RTL_HP_SEG_ALLOC_POLICY.$", 0x18, true, 0xcb6ea719372bf8ea );                
        SDK_FIXED_SIZE( hp_seg_alloc_policy_t, 0x18 );                
    };                                
};
#include "magic/hp_seg_alloc_policy_t.end.hpp"
SDK_VERIFY( struct rtl::hp_seg_alloc_policy_t, 0x18 );
