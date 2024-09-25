#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct single_list_entry_t; }

#include "magic/cslist_t.start.hpp"
namespace ldrp
{
    // [struct _LDRP_CSLIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct cslist_t                               
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                        
        _m00 struct nt::single_list_entry_t* tail;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Tail
                                                  
        SDK_NONVOL_PROPERTIES( "_LDRP_CSLIST.$", 0x8, true, 0xf5dccedb1c2be589 );     
        SDK_FIXED_SIZE( cslist_t, 0x8 );          
    };                                            
};
#include "magic/cslist_t.end.hpp"
SDK_VERIFY( struct ldrp::cslist_t, 0x8 );
