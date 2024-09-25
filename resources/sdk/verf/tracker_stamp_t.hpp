#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/tracker_stamp_t.start.hpp"
namespace verf
{
    // [struct _VF_TRACKER_STAMP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct tracker_stamp_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 void*   thread;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Thread
        _m01 uint8_t flags;      //{ +0x0008@0  +0x0008@0  +0x0008@0  +0x0008@0  } | .Flags
        _m02 uint8_t old_irql;   //{ +0x0009@0  +0x0009@0  +0x0009@0  +0x0009@0  } | .OldIrql
        _m03 uint8_t new_irql;   //{ +0x000a@0  +0x000a@0  +0x000a@0  +0x000a@0  } | .NewIrql
        _m04 uint8_t processor;  //{ +0x000b@0  +0x000b@0  +0x000b@0  +0x000b@0  } | .Processor
                               
        SDK_MAGIC_PROPERTIES( "_VF_TRACKER_STAMP.$", 0x10, true, 0xd9e8dcd7e802b035 );          
        SDK_FIXED_SIZE( tracker_stamp_t, 0x10 );          
    };                         
};
#include "magic/tracker_stamp_t.end.hpp"
SDK_VERIFY( struct verf::tracker_stamp_t, 0x10 );
