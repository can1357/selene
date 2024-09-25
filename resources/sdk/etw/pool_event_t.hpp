#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pool_event_t.start.hpp"
namespace etw
{
    // [struct _ETW_POOL_EVENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_event_t               
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t pool_type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PoolType
        _m01 uint32_t tag;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Tag
        _m02 uint64_t number_of_bytes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
        _m03 void*    entry;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Entry
                                      
        SDK_MAGIC_PROPERTIES( "_ETW_POOL_EVENT.$", 0x18, true, 0x18f47d4e6597e1e3 );                
        SDK_FIXED_SIZE( pool_event_t, 0x18 );                
    };                                
};
#include "magic/pool_event_t.end.hpp"
SDK_VERIFY( struct etw::pool_event_t, 0x18 );
