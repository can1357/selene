#pragma once
#include <sdkgen/support_library.hpp>
#include "csplatform_t.hpp"

#include "magic/querycontext_t.start.hpp"
namespace tag
{
    // [struct tagQUERYCONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct querycontext_t                           
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                          
        _m00 uint32_t                 dw_context;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwContext
        _m01 struct tag::csplatform_t platform;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Platform
        _m02 uint32_t                 locale;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Locale
        _m03 uint32_t                 dw_version_hi;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwVersionHi
        _m04 uint32_t                 dw_version_lo;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwVersionLo
                                                    
        SDK_MAGIC_PROPERTIES( "tagQUERYCONTEXT.$", 0x20, true, 0x34be514ff171b980 );              
        SDK_FIXED_SIZE( querycontext_t, 0x20 );              
    };                                              
};
#include "magic/querycontext_t.end.hpp"
SDK_VERIFY( struct tag::querycontext_t, 0x20 );
