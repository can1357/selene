#pragma once
#include <sdkgen/support_library.hpp>
#include "ctl_usage_t.hpp"

#include "magic/ctl_usage_match_t.start.hpp"
namespace win
{
    // [struct _CTL_USAGE_MATCH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_usage_match_t                 
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                   
        _m00 uint32_t                dw_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwType
        _m01 struct win::ctl_usage_t usage;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Usage
                                             
        SDK_MAGIC_PROPERTIES( "_CTL_USAGE_MATCH.$", 0x18, true, 0xfac36ebc993e1b1f );        
        SDK_FIXED_SIZE( ctl_usage_match_t, 0x18 );        
    };                                       
};
#include "magic/ctl_usage_match_t.end.hpp"
SDK_VERIFY( struct win::ctl_usage_match_t, 0x18 );
