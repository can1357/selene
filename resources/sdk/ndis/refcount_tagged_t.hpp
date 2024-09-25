#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/refcount_tagged_t.start.hpp"
namespace ndis
{
    struct refcount_tagged_entry_t;

    // [struct _NDIS_REFCOUNT_TAGGED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct refcount_tagged_t                                
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                  
        _m00 struct ndis::refcount_tagged_entry_t* tags;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Tags
        _m01 sdk::array<uint32_t, 1>               ref_mask;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefMask
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_REFCOUNT_TAGGED.$", 0x10, true, 0xe53d5007c062476 );         
        SDK_FIXED_SIZE( refcount_tagged_t, 0x10 );          
    };                                                      
};
#include "magic/refcount_tagged_t.end.hpp"
SDK_VERIFY( struct ndis::refcount_tagged_t, 0x10 );
