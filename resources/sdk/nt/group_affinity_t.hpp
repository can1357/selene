#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/group_affinity_t.start.hpp"
namespace nt
{
    // [struct _GROUP_AFFINITY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct group_affinity_t 
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t mask;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Mask
        _m01 uint16_t group;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Group
                            
        SDK_NONVOL_PROPERTIES( "_GROUP_AFFINITY.$", 0x10, true, 0x1abebca0ecdfc915 );      
        SDK_FIXED_SIZE( group_affinity_t, 0x10 );      
    };                      
};
#include "magic/group_affinity_t.end.hpp"
SDK_VERIFY( struct nt::group_affinity_t, 0x10 );
