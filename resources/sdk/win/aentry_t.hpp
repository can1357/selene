#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/aentry_t.start.hpp"
namespace win
{
    // [struct AENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct aentry_t                
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t dw_collision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwCollision
        _m01 void*    p_allocation;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pAllocation
                                   
        SDK_MAGIC_PROPERTIES( "AENTRY.$", 0x10, true, 0xdf59e7152f72f4a3 );             
        SDK_FIXED_SIZE( aentry_t, 0x10 );             
    };                             
};
#include "magic/aentry_t.end.hpp"
SDK_VERIFY( struct win::aentry_t, 0x10 );
