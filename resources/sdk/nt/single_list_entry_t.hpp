#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/single_list_entry_t.start.hpp"
namespace nt
{
    struct single_list_entry_t;

    // [struct _SINGLE_LIST_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct single_list_entry_t                    
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                        
        _m00 struct nt::single_list_entry_t* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                                  
        SDK_NONVOL_PROPERTIES( "_SINGLE_LIST_ENTRY.$", 0x8, true, 0x86adb493c6e7e3b6 );     
        SDK_FIXED_SIZE( single_list_entry_t, 0x8 );     
    };                                            
};
#include "magic/single_list_entry_t.end.hpp"
SDK_VERIFY( struct nt::single_list_entry_t, 0x8 );
