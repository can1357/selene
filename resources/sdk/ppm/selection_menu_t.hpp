#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/selection_menu_t.start.hpp"
namespace ppm
{
    struct selection_menu_entry_t;

    // [struct _PPM_SELECTION_MENU]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct selection_menu_t                              
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                               
        _m00 uint32_t                            count;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 struct ppm::selection_menu_entry_t* entries;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Entries
                                                         
        SDK_MAGIC_PROPERTIES( "_PPM_SELECTION_MENU.$", 0x10, true, 0xd29c049d1937ad00 );        
        SDK_FIXED_SIZE( selection_menu_t, 0x10 );        
    };                                                   
};
#include "magic/selection_menu_t.end.hpp"
SDK_VERIFY( struct ppm::selection_menu_t, 0x10 );
