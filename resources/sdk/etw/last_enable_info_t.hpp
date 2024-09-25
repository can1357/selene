#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/last_enable_info_t.start.hpp"
namespace etw
{
    // [struct _ETW_LAST_ENABLE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct last_enable_info_t       
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 int64_t  enable_flags;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EnableFlags
        _m01 uint16_t logger_id;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LoggerId
        _m02 uint8_t  level;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Level
        _m03 uint1_t  enabled;        //{ +0x000b@0  +0x000b@0  +0x000b@0  +0x000b@0  } | .Enabled
        _m04 uint7_t  internal_flag;  //{ +0x000b@1  +0x000b@1  +0x000b@1  +0x000b@1  } | .InternalFlag
                                    
        SDK_MAGIC_PROPERTIES( "_ETW_LAST_ENABLE_INFO.$", 0x10, true, 0x415d3e0d5525a24e );              
        SDK_FIXED_SIZE( last_enable_info_t, 0x10 );              
    };                              
};
#include "magic/last_enable_info_t.end.hpp"
SDK_VERIFY( struct etw::last_enable_info_t, 0x10 );
