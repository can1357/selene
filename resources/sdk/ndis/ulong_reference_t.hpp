#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ulong_reference_t.start.hpp"
namespace ndis
{
    // [struct _ULONG_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ulong_reference_t          
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint64_t spin_lock;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 uint32_t reference_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReferenceCount
        _m02 uint8_t  closing;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Closing
                                      
        SDK_MAGIC_PROPERTIES( "_ULONG_REFERENCE.$", 0x10, true, 0x459c4e13e14cdb23 );                
        SDK_FIXED_SIZE( ulong_reference_t, 0x10 );                
    };                                
};
#include "magic/ulong_reference_t.end.hpp"
SDK_VERIFY( struct ndis::ulong_reference_t, 0x10 );
