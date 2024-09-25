#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/link_share_access_t.start.hpp"
namespace nt
{
    // [struct _LINK_SHARE_ACCESS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct link_share_access_t      
    {                               
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t open_count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OpenCount
        _m01 uint32_t deleters;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Deleters
        _m02 uint32_t shared_delete;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SharedDelete
                                    
        SDK_NONVOL_PROPERTIES( "_LINK_SHARE_ACCESS.$", 0xc, true, 0x1a44e296496b5b6b );              
        SDK_FIXED_SIZE( link_share_access_t, 0xc );              
    };                              
};
#include "magic/link_share_access_t.end.hpp"
SDK_VERIFY( struct nt::link_share_access_t, 0xc );
