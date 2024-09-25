#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/open_reparse_list_t.start.hpp"
namespace nt
{
    // [struct _OPEN_REPARSE_LIST]
    // => WDK 10 (NV)
    //
    struct open_reparse_list_t                  
    {                                           
        // WDK 10                               
        //                                      
        _m00 nt::list_entry_t open_reparse_list;  //{ +0x0000    } | .OpenReparseList
                                                
        SDK_NONVOL_PROPERTIES( "_OPEN_REPARSE_LIST.$", 0x0, false, 0x717d198707993c11 );                  
        SDK_FIXED_SIZE( open_reparse_list_t, 0x10 );                  
    };                                          
};
#include "magic/open_reparse_list_t.end.hpp"
SDK_VERIFY( struct nt::open_reparse_list_t, 0x10 );
