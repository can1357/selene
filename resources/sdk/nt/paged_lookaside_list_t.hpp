#pragma once
#include <sdkgen/support_library.hpp>
#include "general_lookaside_t.hpp"

#include "magic/paged_lookaside_list_t.start.hpp"
namespace nt
{
    // [struct _PAGED_LOOKASIDE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct paged_lookaside_list_t             
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                    
        _m00 struct nt::general_lookaside_t l;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .L
                                              
        SDK_NONVOL_PROPERTIES( "_PAGED_LOOKASIDE_LIST.$", 0x80, true, 0xadb9fc99e7cd45a1 );  
        SDK_FIXED_SIZE( paged_lookaside_list_t, 0x80 );  
    };                                        
};
#include "magic/paged_lookaside_list_t.end.hpp"
SDK_VERIFY( struct nt::paged_lookaside_list_t, 0x80 );
