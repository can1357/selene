#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reference_ex_t.start.hpp"
namespace ndis
{
    struct refcount_handle_t;

    // [struct _REFERENCE_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reference_ex_t                                      
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 uint64_t                        spin_lock;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SpinLock
        _m01 uint16_t                        reference_count;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReferenceCount
        _m02 uint8_t                         closing;            //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .Closing
        _m03 uint8_t                         zero_based;         //{ +0x000b    +0x000b    +0x000b    +0x000b    } | .ZeroBased
        _m04 struct ndis::refcount_handle_t* ref_count_tracker;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RefCountTracker
                                                               
        SDK_MAGIC_PROPERTIES( "_REFERENCE_EX.$", 0x18, true, 0x86f595c283cf45ad );                  
        SDK_FIXED_SIZE( reference_ex_t, 0x18 );                  
    };                                                         
};
#include "magic/reference_ex_t.end.hpp"
SDK_VERIFY( struct ndis::reference_ex_t, 0x18 );
