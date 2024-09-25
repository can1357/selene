#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rw_lock_refcount_t.start.hpp"
namespace ndis
{
    // [union _NDIS_RW_LOCK_REFCOUNT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rw_lock_refcount_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                      
        _m00 uint32_t                ref_count;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefCount
        _m01 sdk::array<uint8_t, 16> cache_line;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cacheLine
                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_RW_LOCK_REFCOUNT.$", 0x10, true, 0xf623d764e3c43d1a );           
        SDK_FIXED_SIZE( rw_lock_refcount_t, 0x10 );           
    };                                          
};
#include "magic/rw_lock_refcount_t.end.hpp"
SDK_VERIFY( union ndis::rw_lock_refcount_t, 0x10 );
