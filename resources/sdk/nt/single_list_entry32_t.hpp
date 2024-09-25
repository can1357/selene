#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/single_list_entry32_t.start.hpp"
namespace nt
{
    // [struct _SINGLE_LIST_ENTRY32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct single_list_entry32_t
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t next;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
                                
        SDK_NONVOL_PROPERTIES( "_SINGLE_LIST_ENTRY32.$", 0x4, true, 0x6d0bffc7403b0a97 );     
        SDK_FIXED_SIZE( single_list_entry32_t, 0x4 );     
    };                          
};
#include "magic/single_list_entry32_t.end.hpp"
SDK_VERIFY( struct nt::single_list_entry32_t, 0x4 );
