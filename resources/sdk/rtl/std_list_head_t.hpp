#pragma once
#include <sdkgen/support_library.hpp>
#include "stack_database_lock_t.hpp"

#include "magic/std_list_head_t.start.hpp"
namespace rtl
{
    struct std_list_entry_t;

    // [struct _RTL_STD_LIST_HEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_list_head_t                          
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                          
        _m00 struct rtl::std_list_entry_t*     next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 struct rtl::stack_database_lock_t lock;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Lock
                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_STD_LIST_HEAD.$", 0x10, true, 0xf4925abbf32f64c4 );     
        SDK_FIXED_SIZE( std_list_head_t, 0x10 );     
    };                                              
};
#include "magic/std_list_head_t.end.hpp"
SDK_VERIFY( struct rtl::std_list_head_t, 0x10 );
