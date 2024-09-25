#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/overlapped_t.start.hpp"
namespace win
{
    // [struct _OVERLAPPED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct overlapped_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint64_t internal;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Internal
        _m01 uint64_t internal_high;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InternalHigh
        _m02 uint32_t offset;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Offset
        _m03 uint32_t offset_high;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OffsetHigh
        _m04 void*    pointer;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Pointer
        _m05 void*    h_event;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .hEvent
                                    
        SDK_MAGIC_PROPERTIES( "_OVERLAPPED.$", 0x20, true, 0xb82a5138e43d3bf );              
        SDK_FIXED_SIZE( overlapped_t, 0x20 );              
    };                              
};
#include "magic/overlapped_t.end.hpp"
SDK_VERIFY( struct win::overlapped_t, 0x20 );
