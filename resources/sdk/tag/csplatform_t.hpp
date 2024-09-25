#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csplatform_t.start.hpp"
namespace tag
{
    // [struct tagCSPLATFORM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct csplatform_t                 
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t dw_platform_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwPlatformId
        _m01 uint32_t dw_version_hi;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwVersionHi
        _m02 uint32_t dw_version_lo;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwVersionLo
        _m03 uint32_t dw_processor_arch;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .dwProcessorArch
                                        
        SDK_MAGIC_PROPERTIES( "tagCSPLATFORM.$", 0x10, true, 0xb1a99ffe1bf9d1a2 );                  
        SDK_FIXED_SIZE( csplatform_t, 0x10 );                  
    };                                  
};
#include "magic/csplatform_t.end.hpp"
SDK_VERIFY( struct tag::csplatform_t, 0x10 );
