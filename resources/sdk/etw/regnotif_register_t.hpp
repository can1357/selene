#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/regnotif_register_t.start.hpp"
namespace etw
{
    // [struct _ETW_REGNOTIF_REGISTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct regnotif_register_t    
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                        
        _m00 void*   notification;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Notification
        _m01 void*   kcb;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Kcb
        _m02 uint8_t type;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Type
        _m03 uint8_t watch_tree;    //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .WatchTree
        _m04 uint8_t primary;       //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Primary
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_REGNOTIF_REGISTER.$", 0x18, true, 0x372afe5297d1303a );             
        SDK_FIXED_SIZE( regnotif_register_t, 0x18 );             
    };                            
};
#include "magic/regnotif_register_t.end.hpp"
SDK_VERIFY( struct etw::regnotif_register_t, 0x18 );
