#pragma once
#include <sdkgen/support_library.hpp>
#include "srwlock_t.hpp"

#include "magic/stack_database_lock_t.start.hpp"
namespace rtl
{
    // [struct _RTL_STACK_DATABASE_LOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stack_database_lock_t        
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                              
        _m00 struct rtl::srwlock_t lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Lock
                                        
        SDK_MAGIC_PROPERTIES( "_RTL_STACK_DATABASE_LOCK.$", 0x8, true, 0x73d3520d6b08258d );     
        SDK_FIXED_SIZE( stack_database_lock_t, 0x8 );     
    };                                  
};
#include "magic/stack_database_lock_t.end.hpp"
SDK_VERIFY( struct rtl::stack_database_lock_t, 0x8 );
