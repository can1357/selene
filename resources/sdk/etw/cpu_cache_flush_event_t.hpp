#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cpu_cache_flush_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_CPU_CACHE_FLUSH_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cpu_cache_flush_event_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    address;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t bytes;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Bytes
        _m02 uint8_t  clean;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Clean
        _m03 uint8_t  full_flush;   //{ +0x0011    +0x0011    +0x0011    +0x0011    } | .FullFlush
        _m04 uint8_t  rectangle;    //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Rectangle
                                  
        SDK_MAGIC_PROPERTIES( "_ETW_CPU_CACHE_FLUSH_EVENT.$", 0x18, true, 0x65b25cda57dc1476 );           
        SDK_FIXED_SIZE( cpu_cache_flush_event_t, 0x18 );           
    };                            
};
#include "magic/cpu_cache_flush_event_t.end.hpp"
SDK_VERIFY( struct etw::cpu_cache_flush_event_t, 0x18 );
