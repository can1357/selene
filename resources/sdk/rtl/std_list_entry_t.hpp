#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/std_list_entry_t.start.hpp"
namespace rtl
{
    struct std_list_entry_t;

    // [struct _RTL_STD_LIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_list_entry_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                      
        _m00 struct rtl::std_list_entry_t* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                                
        SDK_MAGIC_PROPERTIES( "_RTL_STD_LIST_ENTRY.$", 0x8, true, 0xfa4d4d6761252b94 );     
        SDK_FIXED_SIZE( std_list_entry_t, 0x8 );     
    };                                          
};
#include "magic/std_list_entry_t.end.hpp"
SDK_VERIFY( struct rtl::std_list_entry_t, 0x8 );
