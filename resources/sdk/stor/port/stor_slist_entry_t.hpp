#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_slist_entry_t.start.hpp"
namespace stor::port
{
    struct stor_slist_entry_t;

    // [struct _STOR_SLIST_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_slist_entry_t                            
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                               
        _m00 struct stor::port::stor_slist_entry_t* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                                         
        SDK_MAGIC_PROPERTIES( "_STOR_SLIST_ENTRY.$", 0x10, true, 0xc837a64ee911ea93 );     
        SDK_FIXED_SIZE( stor_slist_entry_t, 0x10 );      
    };                                                   
};
#include "magic/stor_slist_entry_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_slist_entry_t, 0x10 );
