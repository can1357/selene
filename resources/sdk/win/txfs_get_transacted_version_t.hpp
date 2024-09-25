#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_get_transacted_version_t.start.hpp"
namespace win
{
    // [struct _TXFS_GET_TRANSACTED_VERSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_get_transacted_version_t  
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t this_base_version;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ThisBaseVersion
        _m01 uint32_t latest_version;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .LatestVersion
        _m02 uint16_t this_mini_version;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ThisMiniVersion
        _m03 uint16_t first_mini_version;   //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .FirstMiniVersion
        _m04 uint16_t latest_mini_version;  //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .LatestMiniVersion
                                          
        SDK_NONVOL_PROPERTIES( "_TXFS_GET_TRANSACTED_VERSION.$", 0x10, true, 0x39ba20a723092dd2 );                    
        SDK_FIXED_SIZE( txfs_get_transacted_version_t, 0x10 );                    
    };                                    
};
#include "magic/txfs_get_transacted_version_t.end.hpp"
SDK_VERIFY( struct win::txfs_get_transacted_version_t, 0x10 );
