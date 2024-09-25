#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/intent_lock_t.start.hpp"
namespace cm
{
    struct kcb_uow_t;

    // [struct _CM_INTENT_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct intent_lock_t                        
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               owner_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OwnerCount
        _m01 struct cm::kcb_uow_t** owner_table;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OwnerTable
                                                
        SDK_MAGIC_PROPERTIES( "_CM_INTENT_LOCK.$", 0x10, true, 0xc3b582557deff32a );            
        SDK_FIXED_SIZE( intent_lock_t, 0x10 );            
    };                                          
};
#include "magic/intent_lock_t.end.hpp"
SDK_VERIFY( struct cm::intent_lock_t, 0x10 );
