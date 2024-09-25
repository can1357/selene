#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ctl_usage_t.start.hpp"
namespace win
{
    // [struct _CTL_USAGE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ctl_usage_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint32_t c_usage_identifier;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cUsageIdentifier
        _m01 char**   rgpsz_usage_identifier;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgpszUsageIdentifier
                                             
        SDK_MAGIC_PROPERTIES( "_CTL_USAGE.$", 0x10, true, 0x7c826c3692fff378 );                       
        SDK_FIXED_SIZE( ctl_usage_t, 0x10 );                       
    };                                       
};
#include "magic/ctl_usage_t.end.hpp"
SDK_VERIFY( struct win::ctl_usage_t, 0x10 );
