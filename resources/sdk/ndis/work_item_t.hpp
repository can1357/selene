#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/work_item_t.start.hpp"
namespace ndis
{
    struct work_item_t;

    // [struct _NDIS_WORK_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct work_item_t                                
    {                                                 
        using routine_t = sdk::function<void(struct ndis::work_item_t*, void*)>*;                 
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                            
        _m00 void*                   context;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Context
        _m01 routine_t               routine;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Routine
        _m02 sdk::array<uint8_t, 64> wrapper_reserved;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .WrapperReserved
                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_WORK_ITEM.$", 0x50, true, 0x43dd54454875203 );                 
        SDK_FIXED_SIZE( work_item_t, 0x50 );                 
    };                                                
};
#include "magic/work_item_t.end.hpp"
SDK_VERIFY( struct ndis::work_item_t, 0x50 );
