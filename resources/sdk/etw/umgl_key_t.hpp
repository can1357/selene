#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/umgl_key_t.start.hpp"
namespace etw
{
    // [struct _ETW_UMGL_KEY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct umgl_key_t          
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t logger_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .LoggerId
        _m01 uint8_t flags;      //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
                               
        SDK_MAGIC_PROPERTIES( "_ETW_UMGL_KEY.$", 0x2, true, 0x5ad25e94a00f23c1 );          
        SDK_FIXED_SIZE( umgl_key_t, 0x2 );          
    };                         
};
#include "magic/umgl_key_t.end.hpp"
SDK_VERIFY( struct etw::umgl_key_t, 0x2 );
