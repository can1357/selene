#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reference_t.start.hpp"
namespace ndis
{
    // [struct _REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reference_t                
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t spin_lock;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 uint16_t reference_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReferenceCount
        _m02 uint8_t  closing;          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Closing
                                      
        SDK_MAGIC_PROPERTIES( "_REFERENCE.$", 0x10, true, 0x8ecd8ede0830d670 );                
        SDK_FIXED_SIZE( reference_t, 0x10 );                
    };                                
};
#include "magic/reference_t.end.hpp"
SDK_VERIFY( struct ndis::reference_t, 0x10 );
