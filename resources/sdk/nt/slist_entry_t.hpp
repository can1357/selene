#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/slist_entry_t.start.hpp"
namespace nt
{
    struct slist_entry_t;

    // [struct _SLIST_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct slist_entry_t                    
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                  
        _m00 struct nt::slist_entry_t* next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                            
        SDK_NONVOL_PROPERTIES( "_SLIST_ENTRY.$", 0x10, true, 0x4b7dc07ab518211d );     
        SDK_FIXED_SIZE( slist_entry_t, 0x10 );     
    };                                      
};
#include "magic/slist_entry_t.end.hpp"
SDK_VERIFY( struct nt::slist_entry_t, 0x10 );
