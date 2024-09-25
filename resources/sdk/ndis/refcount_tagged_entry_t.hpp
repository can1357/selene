#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refcount_tagged_entry_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_REFCOUNT_TAGGED_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_tagged_entry_t
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 uint8_t tag;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tag
        _m01 uint8_t ref_count;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .RefCount
                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_TAGGED_ENTRY.$", 0x2, true, 0xdab17e5fe2591816 );          
        SDK_FIXED_SIZE( refcount_tagged_entry_t, 0x2 );          
    };                            
};
#include "magic/refcount_tagged_entry_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_tagged_entry_t, 0x2 );
